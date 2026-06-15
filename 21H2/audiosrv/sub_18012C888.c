/*
 * XREFs of sub_18012C888 @ 0x18012C888
 * Callers:
 *     sub_18012D1F0 @ 0x18012D1F0 (sub_18012D1F0.c)
 * Callees:
 *     sub_180027D40 @ 0x180027D40 (sub_180027D40.c)
 *     sub_18005C250 @ 0x18005C250 (sub_18005C250.c)
 */

__int64 __fastcall sub_18012C888(__int64 a1, _DWORD *a2)
{
  _DWORD *v2; // rcx
  _QWORD *v3; // r8
  __int64 v4; // r11
  _DWORD *v6; // rcx
  _QWORD *v7; // r8
  unsigned int v8; // r9d
  __int64 v9; // r11
  _DWORD *v10; // rcx

  if ( sub_18005C250(a2, dword_18015EE08) )
  {
    *v3 = v4;
    return 0LL;
  }
  else
  {
    if ( sub_18005C250(v2, dword_180174478) || sub_180027D40(v6, dword_180172918) || sub_180027D40(v10, dword_18015B8E0) )
      *v7 = v9;
    else
      return (unsigned int)-2147467262;
    return v8;
  }
}
