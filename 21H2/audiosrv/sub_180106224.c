/*
 * XREFs of sub_180106224 @ 0x180106224
 * Callers:
 *     sub_180107AC0 @ 0x180107AC0 (sub_180107AC0.c)
 * Callees:
 *     sub_180027D40 @ 0x180027D40 (sub_180027D40.c)
 */

__int64 __fastcall sub_180106224(__int64 a1, _DWORD *a2)
{
  _DWORD *v2; // rcx
  _QWORD *v3; // r8
  __int64 v4; // r11
  _DWORD *v6; // rcx
  _QWORD *v7; // r8
  unsigned int v8; // r9d
  __int64 v9; // r11
  _DWORD *v10; // rcx

  if ( sub_180027D40(a2, &xmmword_18015DD78) )
  {
    *v3 = v4;
    return 0LL;
  }
  else
  {
    if ( sub_180027D40(v2, dword_180172928) || sub_180027D40(v6, dword_180172918) || sub_180027D40(v10, dword_18015B8E0) )
      *v7 = v9;
    else
      return (unsigned int)-2147467262;
    return v8;
  }
}
