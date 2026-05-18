/*
 * XREFs of ??0?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAA@QEB_W@Z @ 0x180027294
 * Callers:
 *     sub_1800E31CC @ 0x1800E31CC (sub_1800E31CC.c)
 * Callees:
 *     ?assign@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAAEAV12@QEB_W_K@Z @ 0x18002C698 (-assign@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAAAEAV12@QEB_W_K@Z.c)
 */

_QWORD *__fastcall std::wstring::wstring(_QWORD *a1, __int64 a2)
{
  __int64 v2; // r8

  a1[3] = 7LL;
  a1[2] = 0LL;
  v2 = -1LL;
  *(_WORD *)a1 = 0;
  do
    ++v2;
  while ( *(_WORD *)(a2 + 2 * v2) );
  std::wstring::assign(a1);
  return a1;
}
