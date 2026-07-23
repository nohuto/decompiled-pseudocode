/*
 * XREFs of MiReturnCrossPartitionCloneCharges @ 0x14055B920
 * Callers:
 *     MiBuildForkPte @ 0x1405584FC (MiBuildForkPte.c)
 *     MiDecrementCloneBlockReference @ 0x14055A0C8 (MiDecrementCloneBlockReference.c)
 *     MiHandleForkTransitionPte @ 0x14055ACA4 (MiHandleForkTransitionPte.c)
 *     MiReferenceCloneProto @ 0x14055B7D8 (MiReferenceCloneProto.c)
 * Callees:
 *     MiReturnCrossPartitionCharges @ 0x140562DD0 (MiReturnCrossPartitionCharges.c)
 */

__int64 __fastcall MiReturnCrossPartitionCloneCharges(__int64 a1)
{
  unsigned __int64 v1; // rdx
  struct _KPRCB *CurrentPrcb; // r9
  __int64 CachedResidentAvailable; // r8
  bool v4; // zf
  signed __int32 v5; // eax

  v1 = 1LL;
  if ( (ULONG_PTR *)a1 != &MiSystemPartition )
    goto LABEL_11;
  CurrentPrcb = KeGetCurrentPrcb();
  CachedResidentAvailable = (int)CurrentPrcb->CachedResidentAvailable;
  if ( (_DWORD)CachedResidentAvailable == -1 )
    goto LABEL_11;
  if ( (unsigned __int64)(CachedResidentAvailable + 1) > 0x100 )
  {
LABEL_7:
    if ( (int)CachedResidentAvailable > 192
      && (_DWORD)CachedResidentAvailable == _InterlockedCompareExchange(
                                              (volatile signed __int32 *)&CurrentPrcb->CachedResidentAvailable,
                                              192,
                                              CachedResidentAvailable) )
    {
      v1 = (int)CachedResidentAvailable - 192 + 1LL;
    }
    if ( !v1 )
      return MiReturnCrossPartitionCharges(a1, 6LL, 0LL, 1LL);
LABEL_11:
    _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 7168), v1);
    return MiReturnCrossPartitionCharges(a1, 6LL, 0LL, 1LL);
  }
  while ( 1 )
  {
    v5 = _InterlockedCompareExchange(
           (volatile signed __int32 *)&CurrentPrcb->CachedResidentAvailable,
           CachedResidentAvailable + 1,
           CachedResidentAvailable);
    v4 = (_DWORD)CachedResidentAvailable == v5;
    LODWORD(CachedResidentAvailable) = v5;
    if ( v4 )
      return MiReturnCrossPartitionCharges(a1, 6LL, 0LL, 1LL);
    if ( v5 == -1 || (unsigned __int64)(v5 + 1LL) > 0x100 )
      goto LABEL_7;
  }
}
