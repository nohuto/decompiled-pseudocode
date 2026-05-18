/*
 * XREFs of sub_180087B70 @ 0x180087B70
 * Callers:
 *     sub_18006C618 @ 0x18006C618 (sub_18006C618.c)
 *     sub_1800862F4 @ 0x1800862F4 (sub_1800862F4.c)
 *     sub_180087160 @ 0x180087160 (sub_180087160.c)
 *     sub_180087204 @ 0x180087204 (sub_180087204.c)
 *     sub_1800872F4 @ 0x1800872F4 (sub_1800872F4.c)
 *     sub_1800876A0 @ 0x1800876A0 (sub_1800876A0.c)
 *     sub_180087A00 @ 0x180087A00 (sub_180087A00.c)
 *     sub_18008866C @ 0x18008866C (sub_18008866C.c)
 *     sub_180088934 @ 0x180088934 (sub_180088934.c)
 *     sub_1800891C4 @ 0x1800891C4 (sub_1800891C4.c)
 *     sub_1800BCF20 @ 0x1800BCF20 (sub_1800BCF20.c)
 *     sub_1800FA8A0 @ 0x1800FA8A0 (sub_1800FA8A0.c)
 *     sub_180118340 @ 0x180118340 (sub_180118340.c)
 *     sub_180118580 @ 0x180118580 (sub_180118580.c)
 *     sub_1801187C4 @ 0x1801187C4 (sub_1801187C4.c)
 *     sub_180118AA0 @ 0x180118AA0 (sub_180118AA0.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall sub_180087B70(__int64 a1, _QWORD *a2)
{
  __int64 v2; // r8
  _QWORD *result; // rax

  *a2 = 0LL;
  a2[1] = 0LL;
  v2 = *(_QWORD *)(a1 + 40);
  if ( v2 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v2 + 8));
    v2 = *(_QWORD *)(a1 + 40);
  }
  *a2 = *(_QWORD *)(a1 + 32);
  result = a2;
  a2[1] = v2;
  return result;
}
