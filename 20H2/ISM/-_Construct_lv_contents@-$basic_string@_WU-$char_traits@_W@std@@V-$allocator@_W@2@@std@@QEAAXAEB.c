/*
 * XREFs of ?_Construct_lv_contents@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAXAEBV12@@Z @ 0x1800C6C08
 * Callers:
 *     ??0?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAA@AEBV01@@Z @ 0x1800C51B8 (--0-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAA@AEBV01@@Z.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x1800130F0 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     memcpy_0 @ 0x18004A63B (memcpy_0.c)
 */

void __fastcall std::wstring::_Construct_lv_contents(_QWORD *a1, __int64 a2)
{
  _OWORD *v2; // rbx
  unsigned __int64 v3; // rsi
  __int64 v5; // rbp
  size_t v6; // rcx
  _QWORD *v7; // rax

  v2 = (_OWORD *)a2;
  v3 = *(_QWORD *)(a2 + 16);
  if ( *(_QWORD *)(a2 + 24) >= 8uLL )
    v2 = *(_OWORD **)a2;
  v5 = 7LL;
  if ( v3 >= 8 )
  {
    v5 = v3 | 7;
    if ( (v3 | 7) > 0x7FFFFFFFFFFFFFFELL )
      v5 = 0x7FFFFFFFFFFFFFFELL;
    v6 = 2 * (v5 + 1);
    if ( (unsigned __int64)(v5 + 1) > 0x7FFFFFFFFFFFFFFFLL )
      v6 = -1LL;
    v7 = std::_Allocate<16,std::_Default_allocate_traits,0>(v6);
    *a1 = v7;
    memcpy_0(v7, v2, 2 * v3 + 2);
  }
  else
  {
    *(_OWORD *)a1 = *v2;
  }
  a1[2] = v3;
  a1[3] = v5;
}
