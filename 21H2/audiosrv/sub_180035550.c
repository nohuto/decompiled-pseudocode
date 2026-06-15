/*
 * XREFs of sub_180035550 @ 0x180035550
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

_QWORD *__fastcall sub_180035550(__int64 a1, _QWORD *a2)
{
  __int64 v2; // rbx

  v2 = a1 + 24;
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 24));
  *a2 = v2;
  return a2;
}
