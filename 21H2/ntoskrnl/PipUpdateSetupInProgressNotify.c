/*
 * XREFs of PipUpdateSetupInProgressNotify @ 0x14089B858
 * Callers:
 *     PipUpdateSetupInProgressCallback @ 0x14089B840 (PipUpdateSetupInProgressCallback.c)
 *     IopInitializePlugPlayServices @ 0x140A52280 (IopInitializePlugPlayServices.c)
 * Callees:
 *     ZwClose @ 0x1403FA580 (ZwClose.c)
 *     ZwNotifyChangeKey @ 0x1403FC6E0 (ZwNotifyChangeKey.c)
 *     PipUpdateSetupInProgress @ 0x1407A2FD0 (PipUpdateSetupInProgress.c)
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
