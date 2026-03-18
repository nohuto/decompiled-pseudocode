/*
 * XREFs of IovCancelIrp @ 0x1409C1F4C
 * Callers:
 *     IoCancelIrp @ 0x140347600 (IoCancelIrp.c)
 * Callees:
 *     IovpLogStackTrace @ 0x1409C2968 (IovpLogStackTrace.c)
 *     VfIrpDatabaseEntryFindAndLock @ 0x1409DD798 (VfIrpDatabaseEntryFindAndLock.c)
 *     VfIrpDatabaseEntryReleaseLock @ 0x1409DD91C (VfIrpDatabaseEntryReleaseLock.c)
 *     ViWdBeforeCancelIrp @ 0x1409DDDA0 (ViWdBeforeCancelIrp.c)
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
