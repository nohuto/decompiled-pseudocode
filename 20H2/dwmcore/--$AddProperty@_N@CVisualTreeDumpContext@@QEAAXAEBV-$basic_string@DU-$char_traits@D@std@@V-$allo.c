/*
 * XREFs of ??$AddProperty@_N@CVisualTreeDumpContext@@QEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@_N@Z @ 0x1801ABF9C
 * Callers:
 *     ?DebugDump@CVisual@@UEAAXPEAVCVisualTreeDumpContext@@@Z @ 0x1801ACCF0 (-DebugDump@CVisual@@UEAAXPEAVCVisualTreeDumpContext@@@Z.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x18005D888 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ @ 0x1800D421C (-_Tidy_deallocate@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@AEAAXXZ.c)
 *     ?assign@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAAAEAV12@QEBD_K@Z @ 0x1800E25D8 (-assign@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAAAEAV12@QEBD_K@Z.c)
 *     __security_check_cookie @ 0x1800E29B0 (__security_check_cookie.c)
 *     memcpy_0 @ 0x1800EE9CB (memcpy_0.c)
 *     ??$emplace_back@UProperty@CTreeDumpNodeData@@@?$vector@UProperty@CTreeDumpNodeData@@V?$allocator@UProperty@CTreeDumpNodeData@@@std@@@std@@QEAAAEAUProperty@CTreeDumpNodeData@@$$QEAU23@@Z @ 0x1801546F0 (--$emplace_back@UProperty@CTreeDumpNodeData@@@-$vector@UProperty@CTreeDumpNodeData@@V-$allocator.c)
 *     ??$_UIntegral_to_buff@DI@std@@YAPEADPEADI@Z @ 0x180196CF8 (--$_UIntegral_to_buff@DI@std@@YAPEADPEADI@Z.c)
 */

void __fastcall CVisualTreeDumpContext::AddProperty<bool>(__int64 a1, _QWORD *a2, unsigned __int8 a3)
{
  __int64 v5; // rax
  __int128 v6; // xmm0
  __m128i v7; // xmm1
  unsigned __int64 v8; // rsi
  __int128 v9; // xmm0
  __int64 v10; // rbx
  void **v11; // rdi
  __int64 v12; // rsi
  __int128 v13; // xmm0
  __int64 v14; // rbx
  void *Src[2]; // [rsp+20h] [rbp-69h] BYREF
  __m128i si128; // [rsp+30h] [rbp-59h]
  __int128 v17; // [rsp+40h] [rbp-49h] BYREF
  __m128i v18; // [rsp+50h] [rbp-39h]
  __int128 v19; // [rsp+60h] [rbp-29h] BYREF
  unsigned __int64 v20; // [rsp+70h] [rbp-19h]
  __int64 v21; // [rsp+78h] [rbp-11h]
  __int128 v22; // [rsp+80h] [rbp-9h] BYREF
  __int64 v23; // [rsp+90h] [rbp+7h]
  __int64 v24; // [rsp+98h] [rbp+Fh]
  _BYTE v25[3]; // [rsp+B5h] [rbp+2Ch] BYREF

  si128 = _mm_load_si128((const __m128i *)&_xmm);
  LOBYTE(Src[0]) = 0;
  v5 = std::_UIntegral_to_buff<char,unsigned int>((__int64)v25, a3);
  LOBYTE(v17) = 0;
  v18 = si128;
  if ( (_BYTE *)v5 != v25 )
    std::string::assign((void **)&v17, (const void *)v5, (size_t)&v25[-v5]);
  std::string::_Tidy_deallocate((__int64)Src);
  v6 = v17;
  LOBYTE(v17) = 0;
  v7 = v18;
  *(_OWORD *)Src = v6;
  v18 = _mm_load_si128((const __m128i *)&_xmm);
  si128 = v7;
  std::string::_Tidy_deallocate((__int64)&v17);
  v8 = a2[2];
  if ( a2[3] >= 0x10uLL )
    a2 = (_QWORD *)*a2;
  if ( v8 >= 0x10 )
  {
    v10 = v8 | 0xF;
    if ( (v8 | 0xF) > 0x7FFFFFFFFFFFFFFFLL )
      v10 = 0x7FFFFFFFFFFFFFFFLL;
    *(_QWORD *)&v19 = std::_Allocate<16,std::_Default_allocate_traits,0>(v10 + 1);
    memcpy_0((void *)v19, a2, v8 + 1);
    v21 = v10;
  }
  else
  {
    v9 = *(_OWORD *)a2;
    v21 = 15LL;
    v19 = v9;
  }
  v11 = Src;
  v20 = v8;
  v12 = si128.m128i_i64[0];
  if ( si128.m128i_i64[1] >= 0x10uLL )
    v11 = (void **)Src[0];
  if ( si128.m128i_i64[0] >= 0x10uLL )
  {
    v14 = si128.m128i_i64[0] | 0xF;
    if ( (si128.m128i_i64[0] | 0xFuLL) > 0x7FFFFFFFFFFFFFFFLL )
      v14 = 0x7FFFFFFFFFFFFFFFLL;
    *(_QWORD *)&v22 = std::_Allocate<16,std::_Default_allocate_traits,0>(v14 + 1);
    memcpy_0((void *)v22, v11, v12 + 1);
    v24 = v14;
  }
  else
  {
    v13 = *(_OWORD *)v11;
    v24 = 15LL;
    v22 = v13;
  }
  v23 = v12;
  std::vector<CTreeDumpNodeData::Property>::emplace_back<CTreeDumpNodeData::Property>(
    (__int64 *)(a1 + 64),
    (__int64)&v19);
  std::string::_Tidy_deallocate((__int64)&v22);
  std::string::_Tidy_deallocate((__int64)&v19);
  std::string::_Tidy_deallocate((__int64)Src);
}
