/*
 * XREFs of sub_180131020 @ 0x180131020
 * Callers:
 *     sub_180131420 @ 0x180131420 (sub_180131420.c)
 * Callees:
 *     sub_180027D40 @ 0x180027D40 (sub_180027D40.c)
 *     sub_180130FB0 @ 0x180130FB0 (sub_180130FB0.c)
 */

__int64 __fastcall sub_180131020(__int64 a1, _DWORD *a2)
{
  _DWORD *v2; // rcx
  _QWORD *v3; // r8
  __int64 v4; // r11
  _DWORD *v6; // rcx
  _QWORD *v7; // r8
  unsigned int v8; // r9d
  __int64 v9; // r11
  _DWORD *v10; // r10

  if ( sub_180027D40(a2, &dword_18015B278) )
  {
    *v3 = v4;
    return 0LL;
  }
  else
  {
    if ( sub_180027D40(v2, &dword_18015B248) || sub_180027D40(v6, &qword_18015B840) )
      *v7 = v9;
    else
      return (unsigned int)sub_180130FB0(v9 + 8, v10);
    return v8;
  }
}
