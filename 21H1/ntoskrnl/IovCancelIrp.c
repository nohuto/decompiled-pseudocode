/*
 * XREFs of IovCancelIrp @ 0x1409C1F3C
 * Callers:
 *     IoCancelIrp @ 0x14030AD00 (IoCancelIrp.c)
 * Callees:
 *     IovpLogStackTrace @ 0x1409C2958 (IovpLogStackTrace.c)
 *     VfIrpDatabaseEntryFindAndLock @ 0x1409DD738 (VfIrpDatabaseEntryFindAndLock.c)
 *     VfIrpDatabaseEntryReleaseLock @ 0x1409DD8BC (VfIrpDatabaseEntryReleaseLock.c)
 *     ViWdBeforeCancelIrp @ 0x1409DDD40 (ViWdBeforeCancelIrp.c)
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
