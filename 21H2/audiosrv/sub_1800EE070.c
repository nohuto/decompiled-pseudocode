/*
 * XREFs of sub_1800EE070 @ 0x1800EE070
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

_QWORD *__fastcall sub_1800EE070(_QWORD *a1, _QWORD *a2)
{
  __int64 v2; // rax

  *a2 = off_18014A9F8;
  a2[1] = a1[1];
  a2[2] = 0LL;
  a2[3] = 0LL;
  v2 = a1[3];
  if ( v2 )
    _InterlockedIncrement((volatile signed __int32 *)(v2 + 8));
  a2[2] = a1[2];
  a2[3] = a1[3];
  return a2;
}
