/*
 * XREFs of IovCancelIrp @ 0x1409C5F5C
 * Callers:
 *     IoCancelIrp @ 0x1402394D0 (IoCancelIrp.c)
 * Callees:
 *     IovpLogStackTrace @ 0x1409C6978 (IovpLogStackTrace.c)
 *     VfIrpDatabaseEntryFindAndLock @ 0x1409E17A8 (VfIrpDatabaseEntryFindAndLock.c)
 *     VfIrpDatabaseEntryReleaseLock @ 0x1409E192C (VfIrpDatabaseEntryReleaseLock.c)
 *     ViWdBeforeCancelIrp @ 0x1409E1DB0 (ViWdBeforeCancelIrp.c)
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
