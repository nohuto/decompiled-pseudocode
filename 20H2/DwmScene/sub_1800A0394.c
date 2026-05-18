/*
 * XREFs of sub_1800A0394 @ 0x1800A0394
 * Callers:
 *     sub_1800C0970 @ 0x1800C0970 (sub_1800C0970.c)
 *     sub_1800C12C4 @ 0x1800C12C4 (sub_1800C12C4.c)
 *     sub_1800C31B4 @ 0x1800C31B4 (sub_1800C31B4.c)
 *     sub_1800D6CAC @ 0x1800D6CAC (sub_1800D6CAC.c)
 *     sub_1800EC774 @ 0x1800EC774 (sub_1800EC774.c)
 *     sub_1800ECD78 @ 0x1800ECD78 (sub_1800ECD78.c)
 *     sub_1800ECEEC @ 0x1800ECEEC (sub_1800ECEEC.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall sub_1800A0394(__int64 a1, _QWORD *a2)
{
  __int64 v2; // r8
  _QWORD *result; // rax

  *a2 = 0LL;
  a2[1] = 0LL;
  v2 = *(_QWORD *)(a1 + 18656);
  if ( v2 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v2 + 8));
    v2 = *(_QWORD *)(a1 + 18656);
  }
  *a2 = *(_QWORD *)(a1 + 18648);
  result = a2;
  a2[1] = v2;
  return result;
}
