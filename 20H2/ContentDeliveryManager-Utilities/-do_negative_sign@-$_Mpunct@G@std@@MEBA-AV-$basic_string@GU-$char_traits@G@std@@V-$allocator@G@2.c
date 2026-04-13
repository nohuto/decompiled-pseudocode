/*
 * XREFs of ?do_negative_sign@?$_Mpunct@G@std@@MEBA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@2@XZ @ 0x1800C4550
 * Callers:
 *     <none>
 * Callees:
 *     ?assign@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@PEBG_K@Z @ 0x1800384D8 (-assign@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV12@PEBG_K@Z.c)
 */

__int64 __fastcall std::_Mpunct<unsigned short>::do_negative_sign(__int64 a1, __int64 a2)
{
  unsigned __int64 v3; // r8
  char *v4; // rdx
  __int64 v5; // rax

  v3 = 0LL;
  v4 = *(char **)(a1 + 48);
  *(_QWORD *)(a2 + 24) = 7LL;
  *(_QWORD *)(a2 + 16) = 0LL;
  *(_WORD *)a2 = 0;
  if ( *(_WORD *)v4 )
  {
    v5 = -1LL;
    do
      ++v5;
    while ( *(_WORD *)&v4[2 * v5] );
    v3 = v5;
  }
  std::wstring::assign((void **)a2, v4, v3);
  return a2;
}
