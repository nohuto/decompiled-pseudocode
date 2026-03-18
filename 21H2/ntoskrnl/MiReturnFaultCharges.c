/*
 * XREFs of MiReturnFaultCharges @ 0x14024AA58
 * Callers:
 *     MiPrivateFixup @ 0x14024076C (MiPrivateFixup.c)
 *     MiPfPutPagesInTransition @ 0x1402715A0 (MiPfPutPagesInTransition.c)
 *     MiGetPageForHeader @ 0x1402E57FC (MiGetPageForHeader.c)
 *     MiMigratePfn @ 0x140327C60 (MiMigratePfn.c)
 *     MiObtainFaultCharges @ 0x140329630 (MiObtainFaultCharges.c)
 *     MiResolveMappedFileFault @ 0x140339520 (MiResolveMappedFileFault.c)
 *     MiPrefetchPagesViable @ 0x140387140 (MiPrefetchPagesViable.c)
 *     MiResolvePageFileFault @ 0x1403927C4 (MiResolvePageFileFault.c)
 *     MiSwitchToTransition @ 0x1405954F4 (MiSwitchToTransition.c)
 *     MiFreeReadListPages @ 0x1406FAD90 (MiFreeReadListPages.c)
 *     MiPfPrepareSequentialReadList @ 0x1407BCB30 (MiPfPrepareSequentialReadList.c)
 *     MiPfPrepareReadList @ 0x1407BD420 (MiPfPrepareReadList.c)
 * Callees:
 *     MiReturnCommit @ 0x14028CE10 (MiReturnCommit.c)
 */

unsigned __int64 __fastcall MiReturnFaultCharges(__int64 a1, unsigned __int64 a2, char a3)
{
  unsigned __int64 result; // rax
  unsigned __int64 v5; // r9
  struct _KPRCB *CurrentPrcb; // r11
  __int64 CachedResidentAvailable; // r8
  bool v8; // zf

  result = (unsigned __int64)&MiSystemPartition;
  v5 = a2;
  if ( (ULONG_PTR *)a1 == &MiSystemPartition )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    CachedResidentAvailable = (int)CurrentPrcb->CachedResidentAvailable;
    if ( (_DWORD)CachedResidentAvailable != -1 )
    {
      for ( ; a2 + CachedResidentAvailable <= 0x100; result = a2 + (int)result )
      {
        if ( a2 >= 0x80000 )
          break;
        result = (unsigned int)_InterlockedCompareExchange(
                                 (volatile signed __int32 *)&CurrentPrcb->CachedResidentAvailable,
                                 CachedResidentAvailable + a2,
                                 CachedResidentAvailable);
        v8 = (_DWORD)CachedResidentAvailable == (_DWORD)result;
        CachedResidentAvailable = (int)result;
        if ( v8 )
          goto LABEL_6;
        if ( (_DWORD)result == -1 )
          break;
      }
      if ( (int)CachedResidentAvailable > 192 )
      {
        result = (unsigned int)_InterlockedCompareExchange(
                                 (volatile signed __int32 *)&CurrentPrcb->CachedResidentAvailable,
                                 192,
                                 CachedResidentAvailable);
        if ( (_DWORD)CachedResidentAvailable == (_DWORD)result )
        {
          result = (unsigned int)(CachedResidentAvailable - 192);
          v5 = a2 + (int)result;
        }
      }
    }
  }
  if ( v5 )
    _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 16960), v5);
LABEL_6:
  if ( (a3 & 1) != 0 )
    return MiReturnCommit(a1, a2);
  return result;
}
