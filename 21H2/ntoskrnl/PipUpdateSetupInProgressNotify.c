/*
 * XREFs of PipUpdateSetupInProgressNotify @ 0x14089B9B8
 * Callers:
 *     PipUpdateSetupInProgressCallback @ 0x14089B9A0 (PipUpdateSetupInProgressCallback.c)
 *     IopInitializePlugPlayServices @ 0x140A53280 (IopInitializePlugPlayServices.c)
 * Callees:
 *     ZwClose @ 0x1403FA760 (ZwClose.c)
 *     ZwNotifyChangeKey @ 0x1403FC8C0 (ZwNotifyChangeKey.c)
 *     PipUpdateSetupInProgress @ 0x1407A31D0 (PipUpdateSetupInProgress.c)
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
