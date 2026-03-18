/*
 * XREFs of IovCancelIrp @ 0x140A805A8
 * Callers:
 *     IoCancelIrp @ 0x14022D160 (IoCancelIrp.c)
 * Callees:
 *     IovpLogStackTrace @ 0x140A80FC8 (IovpLogStackTrace.c)
 *     ViWdBeforeCancelIrp @ 0x140A9D190 (ViWdBeforeCancelIrp.c)
 *     VfIrpDatabaseEntryFindAndLock @ 0x140AA5A48 (VfIrpDatabaseEntryFindAndLock.c)
 *     VfIrpDatabaseEntryReleaseLock @ 0x140AA5BCC (VfIrpDatabaseEntryReleaseLock.c)
 */

__int64 __fastcall IovCancelIrp(__int64 a1)
{
  __int64 result; // rax
  __int64 v3; // rbx

  IovpLogStackTrace(a1);
  result = VfIrpDatabaseEntryFindAndLock(a1);
  v3 = result;
  if ( result )
  {
    if ( *(_QWORD *)(result + 248) )
      ViWdBeforeCancelIrp();
    return VfIrpDatabaseEntryReleaseLock(v3);
  }
  return result;
}
