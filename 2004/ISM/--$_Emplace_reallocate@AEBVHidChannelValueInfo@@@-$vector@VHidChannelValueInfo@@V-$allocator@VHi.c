/*
 * XREFs of ??$_Emplace_reallocate@AEBVHidChannelValueInfo@@@?$vector@VHidChannelValueInfo@@V?$allocator@VHidChannelValueInfo@@@std@@@std@@QEAAPEAVHidChannelValueInfo@@QEAV2@AEBV2@@Z @ 0x1800A48FC
 * Callers:
 *     ?ExtractReportDescriptorsFromPreparsedData@HidLampArrayDevice@@AEAAJQEAU_HIDP_PREPARSED_DATA@@AEAV?$unique_ptr@$$BY0A@UParsedHidReportDescriptor@@U?$default_delete@$$BY0A@UParsedHidReportDescriptor@@@std@@@std@@PEAI@Z @ 0x1800A6588 (-ExtractReportDescriptorsFromPreparsedData@HidLampArrayDevice@@AEAAJQEAU_HIDP_PREPARSED_DATA@@AE.c)
 *     ?TryCreateAndInitialize@HidLampMultiUpdateReportParser@@SAJPEBUParsedHidReportDescriptor@@PEAPEAV1@@Z @ 0x1800AB864 (-TryCreateAndInitialize@HidLampMultiUpdateReportParser@@SAJPEBUParsedHidReportDescriptor@@PEAPEA.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x1800130C0 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??$_Uninitialized_move@PEAVHidChannelValueInfo@@PEAV1@V?$allocator@VHidChannelValueInfo@@@std@@@std@@YAPEAVHidChannelValueInfo@@QEAV1@0PEAV1@AEAV?$allocator@VHidChannelValueInfo@@@0@@Z @ 0x1800A5D10 (--$_Uninitialized_move@PEAVHidChannelValueInfo@@PEAV1@V-$allocator@VHidChannelValueInfo@@@std@@@.c)
 *     ?_Change_array@?$vector@VHidChannelValueInfo@@V?$allocator@VHidChannelValueInfo@@@std@@@std@@AEAAXQEAVHidChannelValueInfo@@_K1@Z @ 0x1800A8B08 (-_Change_array@-$vector@VHidChannelValueInfo@@V-$allocator@VHidChannelValueInfo@@@std@@@std@@AEA.c)
 */

__int64 __fastcall std::vector<HidChannelValueInfo>::_Emplace_reallocate<HidChannelValueInfo const &>(
        __int64 *a1,
        __int64 a2,
        __int64 a3)
{
  __int64 v6; // rsi
  __int64 v7; // rdx
  unsigned __int64 v8; // r14
  unsigned __int64 v9; // rdx
  unsigned __int64 v10; // rcx
  unsigned __int64 v11; // rbx
  size_t v12; // rcx
  _QWORD *v13; // rax
  __int64 v14; // rsi
  __int64 v15; // rdx
  _QWORD *v16; // r8
  __int64 v17; // rcx
  __int64 v18; // r9
  __int64 v19; // r10
  __int64 result; // rax
  void *v21; // [rsp+58h] [rbp+10h]

  v6 = (a2 - *a1) / 72;
  v7 = (a1[1] - *a1) / 72;
  if ( v7 == 0x38E38E38E38E38ELL )
    std::_Xlength_error("vector<T> too long");
  v8 = v7 + 1;
  v9 = (a1[2] - *a1) / 72;
  v10 = v9 >> 1;
  if ( v9 <= 0x38E38E38E38E38ELL - (v9 >> 1) )
  {
    v11 = v10 + v9;
    if ( v10 + v9 < v8 )
      v11 = v8;
  }
  else
  {
    v11 = v8;
  }
  v12 = 72 * v11;
  if ( v11 > 0x38E38E38E38E38ELL )
    v12 = -1LL;
  v13 = std::_Allocate<16,std::_Default_allocate_traits,0>(v12);
  v21 = v13;
  v14 = 9 * v6;
  try
  {
    *(_OWORD *)&v13[v14] = *(_OWORD *)a3;
    *(_OWORD *)&v13[v14 + 2] = *(_OWORD *)(a3 + 16);
    *(_OWORD *)&v13[v14 + 4] = *(_OWORD *)(a3 + 32);
    *(_OWORD *)&v13[v14 + 6] = *(_OWORD *)(a3 + 48);
    v13[v14 + 8] = *(_QWORD *)(a3 + 64);
    v15 = a1[1];
    v16 = v13;
    v17 = *a1;
    if ( a2 != v15 )
    {
      std::_Uninitialized_move<HidChannelValueInfo *,HidChannelValueInfo *,std::allocator<HidChannelValueInfo>>(
        v17,
        a2,
        v13);
      v16 = (_QWORD *)(v18 + 72);
      v15 = a1[1];
      v17 = a2;
    }
    std::_Uninitialized_move<HidChannelValueInfo *,HidChannelValueInfo *,std::allocator<HidChannelValueInfo>>(
      v17,
      v15,
      v16);
    std::vector<HidChannelValueInfo>::_Change_array(a1, v19, v8, v11);
    result = *a1 + 8 * v14;
  }
  catch ( ... )
  {
    std::_Deallocate<16,0>(v21, (const struct std::nothrow_t *)(72 * v11));
    throw;
  }
  return result;
}
