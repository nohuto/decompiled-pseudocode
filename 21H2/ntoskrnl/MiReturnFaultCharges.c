/*
 * XREFs of MiReturnFaultCharges @ 0x14020B384
 * Callers:
 *     MiResolvePageFileFault @ 0x140208108 (MiResolvePageFileFault.c)
 *     MiPrivateFixup @ 0x140209BC8 (MiPrivateFixup.c)
 *     MiGetPageForHeader @ 0x14025C5CC (MiGetPageForHeader.c)
 *     MiMigratePfn @ 0x1402BCEF0 (MiMigratePfn.c)
 *     MiObtainFaultCharges @ 0x1402C0390 (MiObtainFaultCharges.c)
 *     MiPfPutPagesInTransition @ 0x140306370 (MiPfPutPagesInTransition.c)
 *     MiResolveMappedFileFault @ 0x1403241D0 (MiResolveMappedFileFault.c)
 *     MiSwitchToTransition @ 0x14053A154 (MiSwitchToTransition.c)
 *     MiFreeReadListPages @ 0x1406FFF84 (MiFreeReadListPages.c)
 *     MiPfPrepareSequentialReadList @ 0x1407051B0 (MiPfPrepareSequentialReadList.c)
 *     MiPfPrepareReadList @ 0x140706CF0 (MiPfPrepareReadList.c)
 * Callees:
 *     MiReturnCommit @ 0x140322FF0 (MiReturnCommit.c)
 */

unsigned __int64 __fastcall MiReturnFaultCharges(__int64 a1, unsigned __int64 a2, __int64 CachedResidentAvailable)
{
  unsigned __int64 result; // rax
  char v4; // bl
  unsigned __int64 v5; // r9
  struct _KPRCB *CurrentPrcb; // r11
  bool v7; // zf

  result = (unsigned __int64)&MiSystemPartition;
  v4 = CachedResidentAvailable;
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
        v7 = (_DWORD)CachedResidentAvailable == (_DWORD)result;
        CachedResidentAvailable = (int)result;
        if ( v7 )
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
    v5 = _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 7168), v5);
LABEL_6:
  if ( (v4 & 1) != 0 )
    return MiReturnCommit(a1, a2, CachedResidentAvailable, v5);
  return result;
}
