/*
 * XREFs of MiReturnCrossPartitionCombineCharges @ 0x1405B6318
 * Callers:
 *     MiConvertStandbyToProto @ 0x140227490 (MiConvertStandbyToProto.c)
 *     MiDecrementCombinedPte @ 0x1402399A8 (MiDecrementCombinedPte.c)
 *     MiConvertPrivateToProto @ 0x140272A10 (MiConvertPrivateToProto.c)
 *     MiIncrementCombinedPte @ 0x1405B6210 (MiIncrementCombinedPte.c)
 * Callees:
 *     MiReturnCommit @ 0x14028CE10 (MiReturnCommit.c)
 *     MiReturnCrossPartitionCharges @ 0x1405BF468 (MiReturnCrossPartitionCharges.c)
 */

__int64 __fastcall MiReturnCrossPartitionCombineCharges(__int64 a1, int a2)
{
  unsigned __int64 v3; // rdx
  struct _KPRCB *CurrentPrcb; // r9
  __int64 CachedResidentAvailable; // r8
  bool v6; // zf
  signed __int32 v7; // eax

  if ( !a2 )
    return MiReturnCrossPartitionCharges(a1, 2LL, 1LL, 1LL);
  MiReturnCommit(a1, 1LL);
  v3 = 1LL;
  if ( (ULONG_PTR *)a1 != &MiSystemPartition )
    goto LABEL_12;
  CurrentPrcb = KeGetCurrentPrcb();
  CachedResidentAvailable = (int)CurrentPrcb->CachedResidentAvailable;
  if ( (_DWORD)CachedResidentAvailable == -1 )
    goto LABEL_12;
  if ( (unsigned __int64)(CachedResidentAvailable + 1) > 0x100 )
  {
LABEL_8:
    if ( (int)CachedResidentAvailable > 192
      && (_DWORD)CachedResidentAvailable == _InterlockedCompareExchange(
                                              (volatile signed __int32 *)&CurrentPrcb->CachedResidentAvailable,
                                              192,
                                              CachedResidentAvailable) )
    {
      v3 = (int)CachedResidentAvailable - 192 + 1LL;
    }
    if ( !v3 )
      return MiReturnCrossPartitionCharges(a1, 2LL, 1LL, 1LL);
LABEL_12:
    _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 16960), v3);
    return MiReturnCrossPartitionCharges(a1, 2LL, 1LL, 1LL);
  }
  while ( 1 )
  {
    v7 = _InterlockedCompareExchange(
           (volatile signed __int32 *)&CurrentPrcb->CachedResidentAvailable,
           CachedResidentAvailable + 1,
           CachedResidentAvailable);
    v6 = (_DWORD)CachedResidentAvailable == v7;
    LODWORD(CachedResidentAvailable) = v7;
    if ( v6 )
      return MiReturnCrossPartitionCharges(a1, 2LL, 1LL, 1LL);
    if ( v7 == -1 || (unsigned __int64)(v7 + 1LL) > 0x100 )
      goto LABEL_8;
  }
}
