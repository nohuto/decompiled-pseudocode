/*
 * XREFs of InitFn @ 0x180009A10
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall InitFn(PINIT_ONCE InitOnce, PVOID Parameter, PVOID *Context)
{
  __int64 result; // rax

  byte_18005AE90 = 1;
  qword_18005ADB0 = (__int64)&qword_18005AE88;
  result = 1LL;
  *(_QWORD *)&qword_18005AE88 = &off_180048118;
  return result;
}
