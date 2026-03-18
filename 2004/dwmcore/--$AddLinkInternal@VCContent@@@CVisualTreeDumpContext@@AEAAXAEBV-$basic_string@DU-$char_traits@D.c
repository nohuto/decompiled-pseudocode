/*
 * XREFs of ??$AddLinkInternal@VCContent@@@CVisualTreeDumpContext@@AEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PEAVCContent@@_N@Z @ 0x1801ADD90
 * Callers:
 *     ?DebugDump@CVisual@@UEAAXPEAVCVisualTreeDumpContext@@@Z @ 0x1801AEBF0 (-DebugDump@CVisual@@UEAAXPEAVCVisualTreeDumpContext@@@Z.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x18004B6F0 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ @ 0x1800875B4 (-_Tidy_deallocate@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@AEAAXXZ.c)
 *     __security_check_cookie @ 0x1800E26A0 (__security_check_cookie.c)
 *     memcpy_0 @ 0x1800EED1B (memcpy_0.c)
 *     ??$_Emplace_reallocate@ULink@CTreeDumpNodeData@@@?$vector@ULink@CTreeDumpNodeData@@V?$allocator@ULink@CTreeDumpNodeData@@@std@@@std@@QEAAPEAULink@CTreeDumpNodeData@@QEAU23@$$QEAU23@@Z @ 0x180197FD4 (--$_Emplace_reallocate@ULink@CTreeDumpNodeData@@@-$vector@ULink@CTreeDumpNodeData@@V-$allocator@.c)
 *     ??$RegisterNodeForVisit@VCContent@@@CDebugTreeDumper@@QEAAXPEAVCContent@@_N@Z @ 0x1801AE050 (--$RegisterNodeForVisit@VCContent@@@CDebugTreeDumper@@QEAAXPEAVCContent@@_N@Z.c)
 */

__int64 __fastcall CVisualTreeDumpContext::AddLinkInternal<CContent>(__int64 *a1, __int64 a2, __int64 a3)
{
  unsigned __int64 v4; // r15
  __int128 *v5; // rdi
  __int128 v7; // xmm0
  __int64 v8; // rbx
  __int64 v9; // rdx
  __m128i si128; // xmm1
  __m128i v11; // xmm0
  __int64 result; // rax
  __int128 v13; // [rsp+20h] [rbp-30h] BYREF
  __m128i v14; // [rsp+30h] [rbp-20h]
  __int64 v15; // [rsp+40h] [rbp-10h]

  v4 = *(_QWORD *)(a2 + 16);
  v5 = (__int128 *)a2;
  if ( *(_QWORD *)(a2 + 24) >= 0x10uLL )
    v5 = *(__int128 **)a2;
  if ( v4 >= 0x10 )
  {
    v8 = v4 | 0xF;
    if ( (v4 | 0xF) > 0x7FFFFFFFFFFFFFFFLL )
      v8 = 0x7FFFFFFFFFFFFFFFLL;
    *(_QWORD *)&v13 = std::_Allocate<16,std::_Default_allocate_traits,0>(v8 + 1);
    memcpy_0((void *)v13, v5, v4 + 1);
    v7 = v13;
    v14.m128i_i64[1] = v8;
  }
  else
  {
    v7 = *v5;
    v14.m128i_i64[1] = 15LL;
    v13 = v7;
  }
  v9 = a1[6];
  v14.m128i_i64[0] = v4;
  v15 = a3;
  if ( a1[7] == v9 )
  {
    std::vector<CTreeDumpNodeData::Link>::_Emplace_reallocate<CTreeDumpNodeData::Link>(a1 + 5, v9, (__int64)&v13);
  }
  else
  {
    si128 = _mm_load_si128((const __m128i *)&_xmm);
    *(_OWORD *)v9 = v7;
    LOBYTE(v13) = 0;
    v11 = v14;
    v14 = si128;
    *(__m128i *)(v9 + 16) = v11;
    *(_QWORD *)(v9 + 32) = a3;
    a1[6] += 40LL;
  }
  result = std::string::_Tidy_deallocate(&v13);
  if ( a3 )
    return CDebugTreeDumper::RegisterNodeForVisit<CContent>(a1[14], a3);
  return result;
}
