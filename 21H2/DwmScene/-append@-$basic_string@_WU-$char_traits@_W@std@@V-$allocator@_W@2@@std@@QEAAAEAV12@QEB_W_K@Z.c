/*
 * XREFs of ?append@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAAEAV12@QEB_W_K@Z @ 0x18002C61C
 * Callers:
 *     sub_1800237BC @ 0x1800237BC (sub_1800237BC.c)
 *     sub_18002A430 @ 0x18002A430 (sub_18002A430.c)
 *     sub_18007F580 @ 0x18007F580 (sub_18007F580.c)
 * Callees:
 *     sub_180026344 @ 0x180026344 (sub_180026344.c)
 *     memmove @ 0x180123982 (memmove.c)
 */

_QWORD *__fastcall std::wstring::append(_QWORD *Src, const void *a2, unsigned __int64 a3)
{
  unsigned __int64 v4; // r10
  __int64 v5; // rcx
  bool v6; // cf
  __int64 v7; // rsi
  _QWORD *v8; // rdi
  __int64 v10; // [rsp+20h] [rbp-18h]

  v4 = a3;
  v5 = Src[2];
  if ( a3 > Src[3] - v5 )
  {
    v10 = a3;
    LOBYTE(a3) = 0;
    return sub_180026344(Src, v4, a3, a2, v10);
  }
  else
  {
    v6 = Src[3] < 8uLL;
    v7 = v5 + a3;
    Src[2] = v5 + a3;
    v8 = Src;
    if ( !v6 )
      v8 = (_QWORD *)*Src;
    memmove((char *)v8 + 2 * v5, a2, 2 * a3);
    *((_WORD *)v8 + v7) = 0;
    return Src;
  }
}
