/*
 * XREFs of RtlBootStatusDisableFlushing @ 0x1403A4D40
 * Callers:
 *     PopRecordLongPowerButtonPressDetected @ 0x140783484 (PopRecordLongPowerButtonPressDetected.c)
 *     PopTransitionSystemPowerStateEx @ 0x14098E104 (PopTransitionSystemPowerStateEx.c)
 *     PopUnlockAfterSleepWorker @ 0x140995F50 (PopUnlockAfterSleepWorker.c)
 * Callees:
 *     ZwFlushBuffersFile @ 0x1403F3F20 (ZwFlushBuffersFile.c)
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
