/*
 * XREFs of ?do_falsename@?$numpunct@G@std@@MEBA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@2@XZ @ 0x180036010
 * Callers:
 *     <none>
 * Callees:
 *     ?assign@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@PEBG_K@Z @ 0x180038928 (-assign@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV12@PEBG_K@Z.c)
 */

_QWORD *__fastcall std::numpunct<unsigned short>::do_falsename(__int64 a1, _QWORD *a2)
{
  _WORD *v3; // rdx
  __int64 v4; // rax

  v3 = *(_WORD **)(a1 + 32);
  a2[3] = 7LL;
  a2[2] = 0LL;
  *(_WORD *)a2 = 0;
  if ( *v3 )
  {
    v4 = -1LL;
    do
      ++v4;
    while ( v3[v4] );
  }
  std::wstring::assign(a2, v3);
  return a2;
}
