/*
 * XREFs of sub_1800F11E0 @ 0x1800F11E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

_QWORD *__fastcall sub_1800F11E0(__int64 a1, _QWORD *a2, __int64 a3, _QWORD *a4)
{
  __int64 v4; // rbx

  v4 = a1 + 16;
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 16));
  *a2 = v4;
  *a4 = *(_QWORD *)(a3 + 8) + 24LL;
  return a2;
}
