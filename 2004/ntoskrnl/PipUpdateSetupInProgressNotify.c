/*
 * XREFs of PipUpdateSetupInProgressNotify @ 0x140898758
 * Callers:
 *     PipUpdateSetupInProgressCallback @ 0x140898740 (PipUpdateSetupInProgressCallback.c)
 *     IopInitializePlugPlayServices @ 0x140A505F8 (IopInitializePlugPlayServices.c)
 * Callees:
 *     ZwClose @ 0x1403F37A0 (ZwClose.c)
 *     ZwNotifyChangeKey @ 0x1403F58E0 (ZwNotifyChangeKey.c)
 *     PipUpdateSetupInProgress @ 0x14078C370 (PipUpdateSetupInProgress.c)
 */

void __fastcall PipUpdateSetupInProgressNotify(HANDLE KeyHandle, char a2)
{
  HANDLE v4; // rbx

  if ( __PAIR16__(PnpSetupOOBEInProgress, PnpSetupInProgress) )
  {
    v4 = 0LL;
    if ( ZwNotifyChangeKey(KeyHandle, 0LL, PnpSetupWorkItem, (PVOID)1, &PnpSetupIoStatusBlock, 4u, 0, 0LL, 0, 1u) < 0 )
      v4 = KeyHandle;
    if ( a2 )
      PipUpdateSetupInProgress(KeyHandle);
    if ( v4 )
      ZwClose(v4);
  }
}
