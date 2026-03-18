/*
 * XREFs of RtlBootStatusDisableFlushing @ 0x1403A45C0
 * Callers:
 *     PopRecordLongPowerButtonPressDetected @ 0x14077AA84 (PopRecordLongPowerButtonPressDetected.c)
 *     PopUnlockAfterSleepWorker @ 0x14098CC40 (PopUnlockAfterSleepWorker.c)
 *     PopTransitionSystemPowerStateEx @ 0x14098DAE8 (PopTransitionSystemPowerStateEx.c)
 * Callees:
 *     ZwFlushBuffersFile @ 0x1403F2C90 (ZwFlushBuffersFile.c)
 */

NTSTATUS __fastcall RtlBootStatusDisableFlushing(char a1)
{
  NTSTATUS result; // eax
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+20h] [rbp-18h] BYREF

  IoStatusBlock = 0LL;
  if ( BootStatDisableFlush != a1 )
  {
    BootStatDisableFlush = a1;
    if ( !a1 )
    {
      if ( BootStatFileHandleAcquired )
      {
        if ( BootStatFileHandle )
          return ZwFlushBuffersFile(BootStatFileHandle, &IoStatusBlock);
      }
    }
  }
  return result;
}
