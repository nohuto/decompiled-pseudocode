/*
 * XREFs of PipUpdateSetupInProgressNotify @ 0x140940408
 * Callers:
 *     PipUpdateSetupInProgressCallback @ 0x1409403F0 (PipUpdateSetupInProgressCallback.c)
 *     IopInitializePlugPlayServices @ 0x140B0046C (IopInitializePlugPlayServices.c)
 * Callees:
 *     ZwClose @ 0x14041B940 (ZwClose.c)
 *     ZwNotifyChangeKey @ 0x14041DB60 (ZwNotifyChangeKey.c)
 *     PipUpdateSetupInProgress @ 0x140862728 (PipUpdateSetupInProgress.c)
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
