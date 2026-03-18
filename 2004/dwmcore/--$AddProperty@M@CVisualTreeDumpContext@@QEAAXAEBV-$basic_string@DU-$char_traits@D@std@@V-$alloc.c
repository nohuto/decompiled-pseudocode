/*
 * XREFs of ??$AddProperty@M@CVisualTreeDumpContext@@QEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@M@Z @ 0x180155F8C
 * Callers:
 *     ?DebugDump@CColorBrush@@UEAAXPEAVCVisualTreeDumpContext@@@Z @ 0x1801570B0 (-DebugDump@CColorBrush@@UEAAXPEAVCVisualTreeDumpContext@@@Z.c)
 *     ?DebugDump@CVisual@@UEAAXPEAVCVisualTreeDumpContext@@@Z @ 0x1801AEBF0 (-DebugDump@CVisual@@UEAAXPEAVCVisualTreeDumpContext@@@Z.c)
 *     ?DebugDump@CSurfaceBrush@@UEAAXPEAVCVisualTreeDumpContext@@@Z @ 0x1801EF640 (-DebugDump@CSurfaceBrush@@UEAAXPEAVCVisualTreeDumpContext@@@Z.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x18004B6F0 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ @ 0x1800875B4 (-_Tidy_deallocate@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@AEAAXXZ.c)
 *     __security_check_cookie @ 0x1800E26A0 (__security_check_cookie.c)
 *     memcpy_0 @ 0x1800EED1B (memcpy_0.c)
 *     ??$_Floating_to_string@M@std@@YA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@0@PEBDM@Z @ 0x180156350 (--$_Floating_to_string@M@std@@YA-AV-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@0@PEB.c)
 *     ??$emplace_back@UProperty@CTreeDumpNodeData@@@?$vector@UProperty@CTreeDumpNodeData@@V?$allocator@UProperty@CTreeDumpNodeData@@@std@@@std@@QEAAAEAUProperty@CTreeDumpNodeData@@$$QEAU23@@Z @ 0x180156548 (--$emplace_back@UProperty@CTreeDumpNodeData@@@-$vector@UProperty@CTreeDumpNodeData@@V-$allocator.c)
 */

__int64 __fastcall CVisualTreeDumpContext::AddProperty<float>(__int64 a1, _QWORD *a2)
{
  __int128 v4; // xmm0
  __m128i v5; // xmm1
  unsigned __int64 v6; // rsi
  __int128 v7; // xmm0
  __int64 v8; // rbx
  __int64 v9; // rdi
  void **v10; // rsi
  __int128 v11; // xmm0
  __int64 v12; // rbx
  void *Src[2]; // [rsp+20h] [rbp-59h] BYREF
  __m128i si128; // [rsp+30h] [rbp-49h]
  __int128 v16; // [rsp+40h] [rbp-39h] BYREF
  unsigned __int64 v17; // [rsp+50h] [rbp-29h]
  __int64 v18; // [rsp+58h] [rbp-21h]
  __int128 v19; // [rsp+60h] [rbp-19h] BYREF
  __int64 v20; // [rsp+70h] [rbp-9h]
  __int64 v21; // [rsp+78h] [rbp-1h]
  __int128 v22; // [rsp+80h] [rbp+7h] BYREF
  __m128i v23; // [rsp+90h] [rbp+17h]

  LOBYTE(Src[0]) = 0;
  si128 = _mm_load_si128((const __m128i *)&_xmm);
  std::_Floating_to_string<float>(&v22);
  std::string::_Tidy_deallocate(Src);
  v4 = v22;
  LOBYTE(v22) = 0;
  v5 = v23;
  *(_OWORD *)Src = v4;
  v23 = _mm_load_si128((const __m128i *)&_xmm);
  si128 = v5;
  std::string::_Tidy_deallocate(&v22);
  v6 = a2[2];
  if ( a2[3] >= 0x10uLL )
    a2 = (_QWORD *)*a2;
  if ( v6 >= 0x10 )
  {
    v8 = v6 | 0xF;
    if ( (v6 | 0xF) > 0x7FFFFFFFFFFFFFFFLL )
      v8 = 0x7FFFFFFFFFFFFFFFLL;
    *(_QWORD *)&v16 = std::_Allocate<16,std::_Default_allocate_traits,0>(v8 + 1);
    memcpy_0((void *)v16, a2, v6 + 1);
    v18 = v8;
  }
  else
  {
    v7 = *(_OWORD *)a2;
    v18 = 15LL;
    v16 = v7;
  }
  v9 = si128.m128i_i64[0];
  v17 = v6;
  v10 = Src;
  if ( si128.m128i_i64[1] >= 0x10uLL )
    v10 = (void **)Src[0];
  if ( si128.m128i_i64[0] >= 0x10uLL )
  {
    v12 = si128.m128i_i64[0] | 0xF;
    if ( (si128.m128i_i64[0] | 0xFuLL) > 0x7FFFFFFFFFFFFFFFLL )
      v12 = 0x7FFFFFFFFFFFFFFFLL;
    *(_QWORD *)&v19 = std::_Allocate<16,std::_Default_allocate_traits,0>(v12 + 1);
    memcpy_0((void *)v19, v10, v9 + 1);
    v21 = v12;
  }
  else
  {
    v11 = *(_OWORD *)v10;
    v21 = 15LL;
    v19 = v11;
  }
  v20 = v9;
  std::vector<CTreeDumpNodeData::Property>::emplace_back<CTreeDumpNodeData::Property>(a1 + 64, &v16);
  std::string::_Tidy_deallocate(&v19);
  std::string::_Tidy_deallocate(&v16);
  return std::string::_Tidy_deallocate(Src);
}
