/*
 * XREFs of MiReturnFaultCharges @ 0x14028E1E4
 * Callers:
 *     MiMigratePfn @ 0x1402185F0 (MiMigratePfn.c)
 *     MiObtainFaultCharges @ 0x14021BA90 (MiObtainFaultCharges.c)
 *     MiGetPageForHeader @ 0x14026E62C (MiGetPageForHeader.c)
 *     MiResolvePageFileFault @ 0x14028AF68 (MiResolvePageFileFault.c)
 *     MiPrivateFixup @ 0x14028CA28 (MiPrivateFixup.c)
 *     MiPfPutPagesInTransition @ 0x1402FB620 (MiPfPutPagesInTransition.c)
 *     MiResolveMappedFileFault @ 0x140319480 (MiResolveMappedFileFault.c)
 *     MiSwitchToTransition @ 0x140539F14 (MiSwitchToTransition.c)
 *     MiFreeReadListPages @ 0x1406E8BA4 (MiFreeReadListPages.c)
 *     MiPfPrepareSequentialReadList @ 0x1406EDDD0 (MiPfPrepareSequentialReadList.c)
 *     MiPfPrepareReadList @ 0x1406EF910 (MiPfPrepareReadList.c)
 * Callees:
 *     MiReturnCommit @ 0x1403182A0 (MiReturnCommit.c)
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
    _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 7168), v5);
LABEL_6:
  if ( (a3 & 1) != 0 )
    return MiReturnCommit(a1, a2);
  return result;
}
