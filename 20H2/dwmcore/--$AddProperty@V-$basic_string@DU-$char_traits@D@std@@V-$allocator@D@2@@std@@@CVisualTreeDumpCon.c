/*
 * XREFs of ??$AddProperty@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@CVisualTreeDumpContext@@QEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V12@@Z @ 0x180195BA4
 * Callers:
 *     ?DumpBitmapRealization@CDebugTreeDumper@@AEAAJPEAVIBitmapRealization@@PEAX@Z @ 0x18019704C (-DumpBitmapRealization@CDebugTreeDumper@@AEAAJPEAVIBitmapRealization@@PEAX@Z.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x18005D888 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ @ 0x1800D421C (-_Tidy_deallocate@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@AEAAXXZ.c)
 *     ?assign@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAAAEAV12@QEBD_K@Z @ 0x1800E25D8 (-assign@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAAAEAV12@QEBD_K@Z.c)
 *     __security_check_cookie @ 0x1800E29B0 (__security_check_cookie.c)
 *     memcpy_0 @ 0x1800EE9CB (memcpy_0.c)
 *     ??$emplace_back@UProperty@CTreeDumpNodeData@@@?$vector@UProperty@CTreeDumpNodeData@@V?$allocator@UProperty@CTreeDumpNodeData@@@std@@@std@@QEAAAEAUProperty@CTreeDumpNodeData@@$$QEAU23@@Z @ 0x1801546F0 (--$emplace_back@UProperty@CTreeDumpNodeData@@@-$vector@UProperty@CTreeDumpNodeData@@V-$allocator.c)
 */

void __fastcall CVisualTreeDumpContext::AddProperty<std::string>(__int64 a1, _QWORD *a2, __int64 a3)
{
  const void *v6; // rdx
  __int64 *v7; // r15
  unsigned __int64 v8; // r14
  __int128 v9; // xmm0
  __int64 v10; // rbx
  void **v11; // rdi
  __int64 v12; // r14
  __int128 v13; // xmm0
  __int64 v14; // rbx
  void *Src[2]; // [rsp+20h] [rbp-49h] BYREF
  __m128i si128; // [rsp+30h] [rbp-39h]
  __int128 v17; // [rsp+40h] [rbp-29h] BYREF
  unsigned __int64 v18; // [rsp+50h] [rbp-19h]
  __int64 v19; // [rsp+58h] [rbp-11h]
  __int128 v20; // [rsp+60h] [rbp-9h] BYREF
  __int64 v21; // [rsp+70h] [rbp+7h]
  __int64 v22; // [rsp+78h] [rbp+Fh]

  LOBYTE(Src[0]) = 0;
  si128 = _mm_load_si128((const __m128i *)&_xmm);
  if ( Src != (void **)a3 )
  {
    v6 = (const void *)a3;
    if ( *(_QWORD *)(a3 + 24) >= 0x10uLL )
      v6 = *(const void **)a3;
    std::string::assign(Src, v6, *(_QWORD *)(a3 + 16));
  }
  v7 = (__int64 *)(a1 + 64);
  v8 = a2[2];
  if ( a2[3] >= 0x10uLL )
    a2 = (_QWORD *)*a2;
  if ( v8 >= 0x10 )
  {
    v10 = v8 | 0xF;
    if ( (v8 | 0xF) > 0x7FFFFFFFFFFFFFFFLL )
      v10 = 0x7FFFFFFFFFFFFFFFLL;
    *(_QWORD *)&v17 = std::_Allocate<16,std::_Default_allocate_traits,0>(v10 + 1);
    memcpy_0((void *)v17, a2, v8 + 1);
    v19 = v10;
  }
  else
  {
    v9 = *(_OWORD *)a2;
    v19 = 15LL;
    v17 = v9;
  }
  v11 = Src;
  v18 = v8;
  v12 = si128.m128i_i64[0];
  if ( si128.m128i_i64[1] >= 0x10uLL )
    v11 = (void **)Src[0];
  if ( si128.m128i_i64[0] >= 0x10uLL )
  {
    v14 = si128.m128i_i64[0] | 0xF;
    if ( (si128.m128i_i64[0] | 0xFuLL) > 0x7FFFFFFFFFFFFFFFLL )
      v14 = 0x7FFFFFFFFFFFFFFFLL;
    *(_QWORD *)&v20 = std::_Allocate<16,std::_Default_allocate_traits,0>(v14 + 1);
    memcpy_0((void *)v20, v11, v12 + 1);
    v22 = v14;
  }
  else
  {
    v13 = *(_OWORD *)v11;
    v22 = 15LL;
    v20 = v13;
  }
  v21 = v12;
  std::vector<CTreeDumpNodeData::Property>::emplace_back<CTreeDumpNodeData::Property>(v7, (__int64)&v17);
  std::string::_Tidy_deallocate((__int64)&v20);
  std::string::_Tidy_deallocate((__int64)&v17);
  std::string::_Tidy_deallocate((__int64)Src);
  std::string::_Tidy_deallocate(a3);
}
