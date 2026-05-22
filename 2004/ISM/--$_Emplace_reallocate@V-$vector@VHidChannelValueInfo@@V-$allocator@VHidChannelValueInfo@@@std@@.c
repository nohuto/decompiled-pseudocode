/*
 * XREFs of ??$_Emplace_reallocate@V?$vector@VHidChannelValueInfo@@V?$allocator@VHidChannelValueInfo@@@std@@@std@@@?$vector@V?$vector@VHidChannelValueInfo@@V?$allocator@VHidChannelValueInfo@@@std@@@std@@V?$allocator@V?$vector@VHidChannelValueInfo@@V?$allocator@VHidChannelValueInfo@@@std@@@std@@@2@@std@@QEAAPEAV?$vector@VHidChannelValueInfo@@V?$allocator@VHidChannelValueInfo@@@std@@@1@QEAV21@$$QEAV21@@Z @ 0x1800A4AA0
 * Callers:
 *     ?ExtractReportDescriptorsFromPreparsedData@HidLampArrayDevice@@AEAAJQEAU_HIDP_PREPARSED_DATA@@AEAV?$unique_ptr@$$BY0A@UParsedHidReportDescriptor@@U?$default_delete@$$BY0A@UParsedHidReportDescriptor@@@std@@@std@@PEAI@Z @ 0x1800A6588 (-ExtractReportDescriptorsFromPreparsedData@HidLampArrayDevice@@AEAAJQEAU_HIDP_PREPARSED_DATA@@AE.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x1800130C0 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??$_Get_size_of_n@$0BI@@std@@YA_K_K@Z @ 0x1800130F0 (--$_Get_size_of_n@$0BI@@std@@YA_K_K@Z.c)
 *     ??$_Uninitialized_move@PEAV?$vector@VHidChannelValueInfo@@V?$allocator@VHidChannelValueInfo@@@std@@@std@@PEAV12@V?$allocator@V?$vector@VHidChannelValueInfo@@V?$allocator@VHidChannelValueInfo@@@std@@@std@@@2@@std@@YAPEAV?$vector@VHidChannelValueInfo@@V?$allocator@VHidChannelValueInfo@@@std@@@0@QEAV10@0PEAV10@AEAV?$allocator@V?$vector@VHidChannelValueInfo@@V?$allocator@VHidChannelValueInfo@@@std@@@std@@@0@@Z @ 0x1800A5C98 (--$_Uninitialized_move@PEAV-$vector@VHidChannelValueInfo@@V-$allocator@VHidChannelValueInfo@@@st.c)
 *     ?_Change_array@?$vector@V?$vector@VHidChannelValueInfo@@V?$allocator@VHidChannelValueInfo@@@std@@@std@@V?$allocator@V?$vector@VHidChannelValueInfo@@V?$allocator@VHidChannelValueInfo@@@std@@@std@@@2@@std@@AEAAXQEAV?$vector@VHidChannelValueInfo@@V?$allocator@VHidChannelValueInfo@@@std@@@2@_K1@Z @ 0x1800A8A6C (-_Change_array@-$vector@V-$vector@VHidChannelValueInfo@@V-$allocator@VHidChannelValueInfo@@@std@.c)
 */

__int64 __fastcall std::vector<std::vector<HidChannelValueInfo>>::_Emplace_reallocate<std::vector<HidChannelValueInfo>>(
        __int64 *a1,
        __int64 a2,
        _QWORD *a3)
{
  __int64 v6; // r12
  __int64 v7; // rdx
  unsigned __int64 v8; // r14
  unsigned __int64 v9; // rdx
  unsigned __int64 v10; // rax
  unsigned __int64 v11; // rbx
  size_t size_of; // rax
  _QWORD *v13; // rax
  _QWORD *v14; // rdi
  __int64 v15; // r12
  _QWORD *v16; // rcx
  __int64 v17; // rdx
  _QWORD *v18; // r8
  __int64 v19; // rcx
  __int64 result; // rax
  _QWORD *v21; // [rsp+20h] [rbp-48h]
  void *v22; // [rsp+20h] [rbp-48h]
  __int64 v23; // [rsp+70h] [rbp+8h]
  __int64 v24; // [rsp+78h] [rbp+10h]

  v6 = (a2 - *a1) / 24;
  v7 = (a1[1] - *a1) / 24;
  if ( v7 == 0xAAAAAAAAAAAAAAALL )
    std::_Xlength_error("vector<T> too long");
  v8 = v7 + 1;
  v9 = (a1[2] - *a1) / 24;
  v10 = v9 >> 1;
  if ( v9 <= 0xAAAAAAAAAAAAAAALL - (v9 >> 1) )
  {
    v11 = v10 + v9;
    if ( v10 + v9 < v8 )
      v11 = v8;
  }
  else
  {
    v11 = v8;
  }
  size_of = std::_Get_size_of_n<24>(v11);
  v13 = std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
  v14 = v13;
  v21 = v13;
  v15 = 3 * v6;
  v16 = &v13[v15];
  v23 = (__int64)(v16 + 3);
  try
  {
    *v16 = 0LL;
    v16[1] = 0LL;
    v16[2] = 0LL;
    *v16 = *a3;
    v16[1] = a3[1];
    v16[2] = a3[2];
    *a3 = 0LL;
    a3[1] = 0LL;
    a3[2] = 0LL;
    v24 = (__int64)&v13[v15];
    v17 = a1[1];
    v18 = v13;
    v19 = *a1;
    if ( a2 != v17 )
    {
      std::_Uninitialized_move<std::vector<HidChannelValueInfo> *,std::vector<HidChannelValueInfo> *,std::allocator<std::vector<HidChannelValueInfo>>>(
        v19,
        a2,
        v13);
      v24 = (__int64)v14;
      v18 = (_QWORD *)v23;
      v17 = a1[1];
      v19 = a2;
    }
    std::_Uninitialized_move<std::vector<HidChannelValueInfo> *,std::vector<HidChannelValueInfo> *,std::allocator<std::vector<HidChannelValueInfo>>>(
      v19,
      v17,
      v18);
    std::vector<std::vector<HidChannelValueInfo>>::_Change_array(a1, v14, v8, v11, v21);
    result = *a1 + 8 * v15;
  }
  catch ( ... )
  {
    std::_Destroy_range<std::allocator<std::vector<HidChannelValueInfo>>>(v24, v23);
    std::_Deallocate<16,0>(v22, (const struct std::nothrow_t *)(24 * v11));
    throw;
  }
  return result;
}
