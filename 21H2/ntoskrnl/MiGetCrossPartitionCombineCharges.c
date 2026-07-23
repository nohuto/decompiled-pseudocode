/*
 * XREFs of MiGetCrossPartitionCombineCharges @ 0x14055D17C
 * Callers:
 *     MiConvertStandbyToProto @ 0x140367128 (MiConvertStandbyToProto.c)
 *     MiConvertPrivateToProto @ 0x14036A200 (MiConvertPrivateToProto.c)
 *     MiIncrementCombinedPte @ 0x14055D284 (MiIncrementCombinedPte.c)
 * Callees:
 *     MiAcquireNonPagedResources @ 0x140296FE0 (MiAcquireNonPagedResources.c)
 *     MiReturnCommit @ 0x140322FF0 (MiReturnCommit.c)
 *     MiGetCrossPartitionCharges @ 0x140562668 (MiGetCrossPartitionCharges.c)
 */

__int64 __fastcall MiGetCrossPartitionCombineCharges(__int64 a1, int a2)
{
  unsigned __int64 v4; // rbx
  struct _KPRCB *CurrentPrcb; // r8
  __int64 CachedResidentAvailable; // rdx
  bool v7; // zf
  signed __int32 v8; // eax

  v4 = 1LL;
  if ( a2 && (int)MiAcquireNonPagedResources((ULONG_PTR *)a1, 1uLL, 0LL, 0) < 0 )
    return 0LL;
  if ( (int)MiGetCrossPartitionCharges(a1, 2LL, 1LL, 1LL) < 0 )
  {
    if ( a2 )
    {
      MiReturnCommit(a1, 1LL);
      if ( (ULONG_PTR *)a1 != &MiSystemPartition )
        goto LABEL_15;
      CurrentPrcb = KeGetCurrentPrcb();
      CachedResidentAvailable = (int)CurrentPrcb->CachedResidentAvailable;
      if ( (_DWORD)CachedResidentAvailable == -1 )
        goto LABEL_15;
      if ( (unsigned __int64)(CachedResidentAvailable + 1) <= 0x100 )
      {
        do
        {
          v8 = _InterlockedCompareExchange(
                 (volatile signed __int32 *)&CurrentPrcb->CachedResidentAvailable,
                 CachedResidentAvailable + 1,
                 CachedResidentAvailable);
          v7 = (_DWORD)CachedResidentAvailable == v8;
          LODWORD(CachedResidentAvailable) = v8;
          if ( v7 )
            return 0LL;
        }
        while ( v8 != -1 && (unsigned __int64)(v8 + 1LL) <= 0x100 );
      }
      if ( (int)CachedResidentAvailable > 192
        && (_DWORD)CachedResidentAvailable == _InterlockedCompareExchange(
                                                (volatile signed __int32 *)&CurrentPrcb->CachedResidentAvailable,
                                                192,
                                                CachedResidentAvailable) )
      {
        v4 = (int)CachedResidentAvailable - 192 + 1LL;
      }
      if ( v4 )
LABEL_15:
        _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 7168), v4);
    }
    return 0LL;
  }
  return 1LL;
}
