/*
 * XREFs of ?erase@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAAAEAV12@_K0@Z @ 0x180018228
 * Callers:
 *     ?assign@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAAAEAV12@AEBV12@_K1@Z @ 0x180017EC4 (-assign@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAAAEAV12@AEBV12@_K1@Z.c)
 * Callees:
 *     ?_Xran@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEBAXXZ @ 0x18001762C (-_Xran@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEBAXXZ.c)
 *     memmove_0 @ 0x1800CD8B4 (memmove_0.c)
 */

_QWORD *__fastcall std::string::erase(_QWORD *a1, unsigned __int64 a2, unsigned __int64 a3)
{
  unsigned __int64 v3; // rdi
  _QWORD *v4; // rbx
  _QWORD *v5; // rax
  unsigned __int64 v6; // rax
  unsigned __int64 v7; // rdi
  _QWORD *v8; // rax

  v3 = a1[2];
  v4 = a1;
  if ( v3 < a2 )
    std::wstring::_Xran();
  if ( v3 - a2 > a3 )
  {
    if ( a3 )
    {
      v6 = a1[3];
      if ( v6 >= 0x10 )
        a1 = (_QWORD *)*a1;
      v7 = v3 - a3;
      if ( v7 != a2 )
      {
        memmove_0((char *)a1 + a2, (char *)a1 + a2 + a3, v7 - a2);
        v6 = v4[3];
      }
      if ( v6 < 0x10 )
        v8 = v4;
      else
        v8 = (_QWORD *)*v4;
      v4[2] = v7;
      *((_BYTE *)v8 + v7) = 0;
    }
  }
  else
  {
    if ( a1[3] < 0x10uLL )
      v5 = a1;
    else
      v5 = (_QWORD *)*a1;
    a1[2] = a2;
    *((_BYTE *)v5 + a2) = 0;
  }
  return v4;
}
