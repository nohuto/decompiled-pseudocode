/*
 * XREFs of sub_180071270 @ 0x180071270
 * Callers:
 *     sub_1800714F0 @ 0x1800714F0 (sub_1800714F0.c)
 *     sub_180075060 @ 0x180075060 (sub_180075060.c)
 *     sub_1800750F0 @ 0x1800750F0 (sub_1800750F0.c)
 *     sub_180075180 @ 0x180075180 (sub_180075180.c)
 *     sub_1800752F4 @ 0x1800752F4 (sub_1800752F4.c)
 *     sub_1800755F0 @ 0x1800755F0 (sub_1800755F0.c)
 *     sub_180075688 @ 0x180075688 (sub_180075688.c)
 * Callees:
 *     sub_180033D1C @ 0x180033D1C (sub_180033D1C.c)
 *     sub_18006B218 @ 0x18006B218 (sub_18006B218.c)
 */

bool __fastcall sub_180071270(__int64 a1)
{
  int v1; // eax
  __int64 v2; // rcx
  __int64 v3; // r9
  char v4; // dl
  int v5; // eax
  unsigned __int8 v6; // r11

  v1 = sub_18006B218(a1, (*(_DWORD *)(a1 + 1244) >> 8) & 1);
  v4 = 0;
  if ( !v1 )
  {
    v5 = sub_180033D1C(*(_QWORD *)(v2 + 48) + 400LL, v3, 2);
    return ((unsigned __int8)v5 & v6 & 0x27) != v5;
  }
  return v4;
}
