/*
 * XREFs of PerfCommitLegacyPcc @ 0x1C00110F0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00044E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall PerfCommitLegacyPcc(__int64 (*a1)(void))
{
  __int64 result; // rax

  result = ((__int64 (__fastcall *)(__int64, __int64 (__fastcall *)(__int64, __int64 (*)(void)), __int64 (*)(void)))qword_1C001C918)(
             qword_1C001C8F0,
             PccCommitAcquireCallback,
             a1);
  if ( (int)result < 0 )
  {
    if ( a1 )
      return a1();
  }
  return result;
}
