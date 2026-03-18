/*
 * XREFs of MiReturnFaultCharges @ 0x140340698
 * Callers:
 *     MiMigratePfn @ 0x140217F80 (MiMigratePfn.c)
 *     MiObtainFaultCharges @ 0x14021B070 (MiObtainFaultCharges.c)
 *     MiResolveMappedFileFault @ 0x1402B7380 (MiResolveMappedFileFault.c)
 *     MiPfPutPagesInTransition @ 0x1402BA1E0 (MiPfPutPagesInTransition.c)
 *     MiResolvePageFileFault @ 0x1403432DC (MiResolvePageFileFault.c)
 *     MiPrivateFixup @ 0x140344248 (MiPrivateFixup.c)
 *     MiGetPageForHeader @ 0x14034BFA0 (MiGetPageForHeader.c)
 *     MiSwitchToTransition @ 0x1405343F4 (MiSwitchToTransition.c)
 *     MiPfPrepareSequentialReadList @ 0x14062E990 (MiPfPrepareSequentialReadList.c)
 *     MiPfPrepareReadList @ 0x14062F350 (MiPfPrepareReadList.c)
 *     MiFreeReadListPages @ 0x14063E4FC (MiFreeReadListPages.c)
 * Callees:
 *     MiReturnCommit @ 0x14027D3E0 (MiReturnCommit.c)
 */

void __fastcall MiReturnFaultCharges(__int64 a1, unsigned __int64 a2, char a3)
{
  unsigned __int64 v4; // r9
  struct _KPRCB *CurrentPrcb; // r11
  __int64 CachedResidentAvailable; // r8
  bool v7; // zf
  signed __int32 v8; // eax

  v4 = a2;
  if ( (ULONG_PTR *)a1 == &MiSystemPartition )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    CachedResidentAvailable = (int)CurrentPrcb->CachedResidentAvailable;
    if ( (_DWORD)CachedResidentAvailable != -1 )
    {
      if ( a2 + CachedResidentAvailable <= 0x100 )
      {
        do
        {
          if ( a2 >= 0x80000 )
            break;
          v8 = _InterlockedCompareExchange(
                 (volatile signed __int32 *)&CurrentPrcb->CachedResidentAvailable,
                 CachedResidentAvailable + a2,
                 CachedResidentAvailable);
          v7 = (_DWORD)CachedResidentAvailable == v8;
          LODWORD(CachedResidentAvailable) = v8;
          if ( v7 )
            goto LABEL_6;
        }
        while ( v8 != -1 && a2 + v8 <= 0x100 );
      }
      if ( (int)CachedResidentAvailable > 192
        && (_DWORD)CachedResidentAvailable == _InterlockedCompareExchange(
                                                (volatile signed __int32 *)&CurrentPrcb->CachedResidentAvailable,
                                                192,
                                                CachedResidentAvailable) )
      {
        v4 = a2 + (int)CachedResidentAvailable - 192;
      }
    }
  }
  if ( v4 )
    _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 7168), v4);
LABEL_6:
  if ( (a3 & 1) != 0 )
    MiReturnCommit(a1, a2);
}
