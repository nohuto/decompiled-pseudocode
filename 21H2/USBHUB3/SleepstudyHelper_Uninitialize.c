/*
 * XREFs of SleepstudyHelper_Uninitialize @ 0x1C008A4A8
 * Callers:
 *     DriverCleanup @ 0x1C0001D70 (DriverCleanup.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00437E0 (_guard_dispatch_icall_nop.c)
 */

__int64 (*SleepstudyHelper_Uninitialize())(void)
{
  __int64 (*result)(void); // rax

  result = qword_1C006AC48;
  if ( qword_1C006AC48 )
    return (__int64 (*)(void))qword_1C006AC48();
  return result;
}
