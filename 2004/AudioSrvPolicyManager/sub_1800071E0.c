/*
 * XREFs of sub_1800071E0 @ 0x1800071E0
 * Callers:
 *     sub_180007220 @ 0x180007220 (sub_180007220.c)
 *     sub_180007980 @ 0x180007980 (sub_180007980.c)
 *     sub_180007AB0 @ 0x180007AB0 (sub_180007AB0.c)
 *     sub_180007EA0 @ 0x180007EA0 (sub_180007EA0.c)
 *     sub_180008200 @ 0x180008200 (sub_180008200.c)
 *     sub_180008350 @ 0x180008350 (sub_180008350.c)
 *     sub_180008440 @ 0x180008440 (sub_180008440.c)
 * Callees:
 *     <none>
 */

__int64 *__fastcall sub_1800071E0(__int64 a1, __int64 *a2)
{
  __int64 v3; // rbx

  v3 = qword_18004FE78 + 32;
  EnterCriticalSection((LPCRITICAL_SECTION)(qword_18004FE78 + 32));
  *a2 = v3;
  return a2;
}
