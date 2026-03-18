/*
 * XREFs of PipUpdateSetupInProgressNotify @ 0x140897438
 * Callers:
 *     PipUpdateSetupInProgressCallback @ 0x140897420 (PipUpdateSetupInProgressCallback.c)
 *     IopInitializePlugPlayServices @ 0x140A4AB7C (IopInitializePlugPlayServices.c)
 * Callees:
 *     ZwClose @ 0x1403F2510 (ZwClose.c)
 *     ZwNotifyChangeKey @ 0x1403F4650 (ZwNotifyChangeKey.c)
 *     PipUpdateSetupInProgress @ 0x14078A4A0 (PipUpdateSetupInProgress.c)
 */

void __fastcall PipUpdateSetupInProgressNotify(HANDLE KeyHandle, char a2)
{
  HANDLE v4; // rbx

  if ( __PAIR16__(PnpSetupInProgress, PnpSetupOOBEInProgress) )
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
