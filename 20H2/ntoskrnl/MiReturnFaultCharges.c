/*
 * XREFs of MiReturnFaultCharges @ 0x140329604
 * Callers:
 *     MiResolveMappedFileFault @ 0x140231830 (MiResolveMappedFileFault.c)
 *     MiPrivateFixup @ 0x140239840 (MiPrivateFixup.c)
 *     MiResolvePageFileFault @ 0x140239F98 (MiResolvePageFileFault.c)
 *     MiPfPutPagesInTransition @ 0x14024CE50 (MiPfPutPagesInTransition.c)
 *     MiMigratePfn @ 0x140279DD0 (MiMigratePfn.c)
 *     MiObtainFaultCharges @ 0x14027D270 (MiObtainFaultCharges.c)
 *     MiGetPageForHeader @ 0x140351198 (MiGetPageForHeader.c)
 *     MiSwitchToTransition @ 0x140538414 (MiSwitchToTransition.c)
 *     MiPfPrepareSequentialReadList @ 0x1406253C0 (MiPfPrepareSequentialReadList.c)
 *     MiFreeReadListPages @ 0x1406584B4 (MiFreeReadListPages.c)
 *     MiPfPrepareReadList @ 0x140680D90 (MiPfPrepareReadList.c)
 * Callees:
 *     MiReturnCommit @ 0x140230300 (MiReturnCommit.c)
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
