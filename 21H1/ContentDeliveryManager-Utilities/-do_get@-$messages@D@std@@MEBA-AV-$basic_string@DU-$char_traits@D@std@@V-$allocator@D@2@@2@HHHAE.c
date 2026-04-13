/*
 * XREFs of ?do_get@?$messages@D@std@@MEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@2@HHHAEBV32@@Z @ 0x1800C84C0
 * Callers:
 *     <none>
 * Callees:
 *     ?assign@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAAAEAV12@AEBV12@_K1@Z @ 0x1800177C4 (-assign@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAAAEAV12@AEBV12@_K1@Z.c)
 */

__int64 __fastcall std::messages<char>::do_get(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, void **a6)
{
  *(_QWORD *)(a2 + 16) = 0LL;
  *(_QWORD *)(a2 + 24) = 15LL;
  *(_BYTE *)a2 = 0;
  std::string::assign((void **)a2, a6, 0LL, 0xFFFFFFFFFFFFFFFFuLL);
  return a2;
}
