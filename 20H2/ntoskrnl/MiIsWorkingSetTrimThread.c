/*
 * XREFs of MiIsWorkingSetTrimThread @ 0x1403240A0
 * Callers:
 *     MiSystemFault @ 0x1402989E0 (MiSystemFault.c)
 *     MiFlushAllFilesystemPages @ 0x140533AC8 (MiFlushAllFilesystemPages.c)
 *     MmAddRangeToCrashDump @ 0x140536AD8 (MmAddRangeToCrashDump.c)
 * Callees:
 *     <none>
 */

_BOOL8 MiIsWorkingSetTrimThread()
{
  void (__fastcall __noreturn *Blink)(); // rcx

  Blink = (void (__fastcall __noreturn *)())KeGetCurrentThread()[1].ApcState.ApcListHead[0].Blink;
  return Blink == KeBalanceSetManager || (char *)Blink == (char *)MiPartitionWorkingSetManager;
}
