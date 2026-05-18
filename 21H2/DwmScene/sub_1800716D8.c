/*
 * XREFs of sub_1800716D8 @ 0x1800716D8
 * Callers:
 *     sub_180072218 @ 0x180072218 (sub_180072218.c)
 * Callees:
 *     ?assign@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAAEAV12@QEB_W_K@Z @ 0x18002C698 (-assign@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAAAEAV12@QEB_W_K@Z.c)
 */

__int64 __fastcall sub_1800716D8(__int64 a1, _QWORD **a2)
{
  *(_QWORD *)a1 = **a2;
  *(_OWORD *)(a1 + 8) = 0LL;
  *(_OWORD *)(a1 + 24) = 0LL;
  *(_OWORD *)(a1 + 40) = 0LL;
  *(_QWORD *)(a1 + 56) = 0LL;
  *(_DWORD *)(a1 + 8) = -8388609;
  *(_QWORD *)(a1 + 12) = 2139095039LL;
  *(_QWORD *)(a1 + 24) = 0LL;
  *(_QWORD *)(a1 + 48) = 0LL;
  *(_QWORD *)(a1 + 56) = 7LL;
  *(_WORD *)(a1 + 32) = 0;
  std::wstring::assign((char *)(a1 + 32), &unk_1801CB868, 0LL);
  return a1;
}
