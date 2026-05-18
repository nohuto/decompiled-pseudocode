/*
 * XREFs of ?append@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAAEAV12@_K_W@Z @ 0x18011C098
 * Callers:
 *     sub_18011BE4C @ 0x18011BE4C (sub_18011BE4C.c)
 * Callees:
 *     sub_18011BCE4 @ 0x18011BCE4 (sub_18011BCE4.c)
 */

_QWORD *__fastcall std::wstring::append(_QWORD *Src, unsigned __int64 a2, __int16 a3)
{
  __int64 v4; // rcx
  bool v5; // cf
  __int64 v6; // r11
  _QWORD *v7; // r9
  __int16 *v8; // rdi
  unsigned __int64 i; // rcx

  v4 = Src[2];
  if ( a2 > Src[3] - v4 )
    return sub_18011BCE4(Src, a2, 0LL, a2, a3);
  v5 = Src[3] < 8uLL;
  v6 = v4 + a2;
  Src[2] = v4 + a2;
  v7 = Src;
  if ( !v5 )
    v7 = (_QWORD *)*Src;
  v8 = (__int16 *)v7 + v4;
  if ( a2 )
  {
    for ( i = a2; i; --i )
      *v8++ = a3;
  }
  *((_WORD *)v7 + v6) = 0;
  return Src;
}
