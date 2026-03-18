/*
 * XREFs of MiIsWorkingSetTrimThread @ 0x14024C9A8
 * Callers:
 *     MiSystemFault @ 0x140279590 (MiSystemFault.c)
 *     MiFlushAllFilesystemPages @ 0x14058DCA8 (MiFlushAllFilesystemPages.c)
 *     MmAddRangeToCrashDump @ 0x140593218 (MmAddRangeToCrashDump.c)
 * Callees:
 *     <none>
 */

_BOOL8 MiIsWorkingSetTrimThread()
{
  void (__fastcall __noreturn *Blink)(); // rcx

  Blink = (void (__fastcall __noreturn *)())KeGetCurrentThread()[1].ApcState.ApcListHead[0].Blink;
  return Blink == KeBalanceSetManager || (char *)Blink == (char *)MiPartitionWorkingSetManager;
}
