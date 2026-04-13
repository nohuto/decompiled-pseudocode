/*
 * XREFs of ?erase@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAAEAV12@_K0@Z @ 0x180038874
 * Callers:
 *     ?assign@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@AEBV12@_K1@Z @ 0x1800370C8 (-assign@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV12@AEBV12@_K1@Z.c)
 *     ?assign@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAAEAV12@AEBV12@_K1@Z @ 0x18006B134 (-assign@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAAAEAV12@AEBV12@_K1@Z.c)
 *     ?RemoveSubstring@StringUtils@CommonHelper@CreativeFramework@@YA?AV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@PEB_W0@Z @ 0x1800AB2FC (-RemoveSubstring@StringUtils@CommonHelper@CreativeFramework@@YA-AV-$basic_string@_WU-$char_trait.c)
 * Callees:
 *     ?_Xran@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEBAXXZ @ 0x180017928 (-_Xran@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEBAXXZ.c)
 *     memmove_0 @ 0x1800CDD04 (memmove_0.c)
 */

_QWORD *__fastcall std::wstring::erase(_QWORD *a1, unsigned __int64 a2, unsigned __int64 a3)
{
  unsigned __int64 v3; // rdi
  _QWORD *v4; // rbx
  _QWORD *v5; // rax
  unsigned __int64 v6; // rax
  unsigned __int64 v7; // rdi
  char *v8; // rcx
  _QWORD *v9; // rax

  v3 = a1[2];
  v4 = a1;
  if ( v3 < a2 )
    std::wstring::_Xran();
  if ( v3 - a2 > a3 )
  {
    if ( a3 )
    {
      v6 = a1[3];
      if ( v6 >= 8 )
        a1 = (_QWORD *)*a1;
      v7 = v3 - a3;
      v8 = (char *)a1 + 2 * a2;
      if ( v7 != a2 )
      {
        memmove_0(v8, &v8[2 * a3], 2 * (v7 - a2));
        v6 = v4[3];
      }
      if ( v6 < 8 )
        v9 = v4;
      else
        v9 = (_QWORD *)*v4;
      v4[2] = v7;
      *((_WORD *)v9 + v7) = 0;
    }
  }
  else
  {
    if ( a1[3] < 8uLL )
      v5 = a1;
    else
      v5 = (_QWORD *)*a1;
    a1[2] = a2;
    *((_WORD *)v5 + a2) = 0;
  }
  return v4;
}
