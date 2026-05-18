/*
 * XREFs of sub_18006151C @ 0x18006151C
 * Callers:
 *     sub_180061184 @ 0x180061184 (sub_180061184.c)
 *     sub_18006125C @ 0x18006125C (sub_18006125C.c)
 *     sub_1800619F0 @ 0x1800619F0 (sub_1800619F0.c)
 * Callees:
 *     sub_1800616BC @ 0x1800616BC (sub_1800616BC.c)
 */

_QWORD *__fastcall sub_18006151C(__int64 a1, _QWORD *a2, char a3)
{
  __int64 *v6; // rax
  __int64 i; // rdx
  _QWORD *result; // rax

  v6 = (__int64 *)sub_1800616BC();
  for ( i = *v6; i != v6[1] && (*(_QWORD *)i != a1 || *(_BYTE *)(i + 8) != a3); i += 16LL )
    ;
  result = a2;
  *a2 = i;
  return result;
}
