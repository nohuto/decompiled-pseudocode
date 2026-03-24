/*
 * XREFs of MiGetCrossPartitionCloneCharges @ 0x14055A984
 * Callers:
 *     MiBuildForkPte @ 0x1405582BC (MiBuildForkPte.c)
 *     MiHandleForkTransitionPte @ 0x14055AA64 (MiHandleForkTransitionPte.c)
 *     MiReferenceCloneProto @ 0x14055B598 (MiReferenceCloneProto.c)
 * Callees:
 *     MiChargeResident @ 0x14025A658 (MiChargeResident.c)
 *     MiGetCrossPartitionCharges @ 0x140562428 (MiGetCrossPartitionCharges.c)
 */

__int64 __fastcall MiGetCrossPartitionCloneCharges(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned __int64 v5; // rbx
  struct _KPRCB *CurrentPrcb; // r8
  __int64 CachedResidentAvailable; // rdx
  bool v8; // zf
  signed __int32 v9; // eax

  v5 = 1LL;
  if ( !(unsigned int)MiChargeResident((ULONG_PTR *)a1, 1uLL, 0LL, a4) )
    return 0LL;
  if ( (int)MiGetCrossPartitionCharges(a1, 6LL, 0LL, 1LL) < 0 )
  {
    if ( (ULONG_PTR *)a1 != &MiSystemPartition )
      goto LABEL_13;
    CurrentPrcb = KeGetCurrentPrcb();
    CachedResidentAvailable = (int)CurrentPrcb->CachedResidentAvailable;
    if ( (_DWORD)CachedResidentAvailable == -1 )
      goto LABEL_13;
    if ( (unsigned __int64)(CachedResidentAvailable + 1) <= 0x100 )
    {
      do
      {
        v9 = _InterlockedCompareExchange(
               (volatile signed __int32 *)&CurrentPrcb->CachedResidentAvailable,
               CachedResidentAvailable + 1,
               CachedResidentAvailable);
        v8 = (_DWORD)CachedResidentAvailable == v9;
        LODWORD(CachedResidentAvailable) = v9;
        if ( v8 )
          return 0LL;
      }
      while ( v9 != -1 && (unsigned __int64)(v9 + 1LL) <= 0x100 );
    }
    if ( (int)CachedResidentAvailable > 192
      && (_DWORD)CachedResidentAvailable == _InterlockedCompareExchange(
                                              (volatile signed __int32 *)&CurrentPrcb->CachedResidentAvailable,
                                              192,
                                              CachedResidentAvailable) )
    {
      v5 = (int)CachedResidentAvailable - 192 + 1LL;
    }
    if ( v5 )
LABEL_13:
      _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 7168), v5);
    return 0LL;
  }
  return 1LL;
}
