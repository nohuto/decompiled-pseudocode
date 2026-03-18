/*
 * XREFs of SleepstudyHelper_GenerateGuid @ 0x1C004230C
 * Callers:
 *     HUBFDO_RegisterSleepstudyBlockerReasons @ 0x1C0078B7C (HUBFDO_RegisterSleepstudyBlockerReasons.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00437E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall SleepstudyHelper_GenerateGuid(__int64 a1, __int64 a2, GUID *a3)
{
  __int64 result; // rax

  if ( !qword_1C006AC50 || (result = qword_1C006AC50(), (_DWORD)result == -1073741637) )
  {
    result = 0LL;
    *a3 = GUID_SLEEPSTUDY_LIBRARY_UNSUPPORTED;
  }
  return result;
}
