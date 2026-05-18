/*
 * XREFs of sub_180066DEC @ 0x180066DEC
 * Callers:
 *     sub_180066A54 @ 0x180066A54 (sub_180066A54.c)
 *     sub_180066B2C @ 0x180066B2C (sub_180066B2C.c)
 *     sub_1800672C0 @ 0x1800672C0 (sub_1800672C0.c)
 * Callees:
 *     sub_180066F8C @ 0x180066F8C (sub_180066F8C.c)
 */

_QWORD *__fastcall sub_180066DEC(__int64 a1, _QWORD *a2, char a3)
{
  __int64 *v6; // rax
  __int64 i; // rdx
  _QWORD *result; // rax

  v6 = (__int64 *)sub_180066F8C();
  for ( i = *v6; i != v6[1] && (*(_QWORD *)i != a1 || *(_BYTE *)(i + 8) != a3); i += 16LL )
    ;
  result = a2;
  *a2 = i;
  return result;
}
