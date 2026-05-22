/*
 * XREFs of ??$_Emplace_reallocate@AEBV?$shared_ptr@ULegacyDeviceInfo@@@std@@@?$vector@V?$shared_ptr@ULegacyDeviceInfo@@@std@@V?$allocator@V?$shared_ptr@ULegacyDeviceInfo@@@std@@@2@@std@@QEAAPEAV?$shared_ptr@ULegacyDeviceInfo@@@1@QEAV21@AEBV21@@Z @ 0x180089964
 * Callers:
 *     ?AttachDevice@MPCRawInputProvider@@QEAAJW4InputType@@PEAK@Z @ 0x18008A27C (-AttachDevice@MPCRawInputProvider@@QEAAJW4InputType@@PEAK@Z.c)
 *     ?AttachDeviceImpl@MPCRawInputProvider@@AEAAXAEBV?$shared_ptr@ULegacyDeviceInfo@@@std@@@Z @ 0x18008A3B4 (-AttachDeviceImpl@MPCRawInputProvider@@AEAAXAEBV-$shared_ptr@ULegacyDeviceInfo@@@std@@@Z.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x1800130C0 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ?_Calculate_growth@?$vector@U?$pair@KPEAUIInputProcessor@@@std@@V?$allocator@U?$pair@KPEAUIInputProcessor@@@std@@@2@@std@@AEBA_K_K@Z @ 0x180029A44 (-_Calculate_growth@-$vector@U-$pair@KPEAUIInputProcessor@@@std@@V-$allocator@U-$pair@KPEAUIInput.c)
 *     ??$_Uninitialized_move@PEAV?$shared_ptr@ULegacyDeviceInfo@@@std@@PEAV12@V?$allocator@V?$shared_ptr@ULegacyDeviceInfo@@@std@@@2@@std@@YAPEAV?$shared_ptr@ULegacyDeviceInfo@@@0@QEAV10@0PEAV10@AEAV?$allocator@V?$shared_ptr@ULegacyDeviceInfo@@@std@@@0@@Z @ 0x180089CB4 (--$_Uninitialized_move@PEAV-$shared_ptr@ULegacyDeviceInfo@@@std@@PEAV12@V-$allocator@V-$shared_p.c)
 *     ?_Change_array@?$vector@V?$shared_ptr@ULegacyDeviceInfo@@@std@@V?$allocator@V?$shared_ptr@ULegacyDeviceInfo@@@std@@@2@@std@@AEAAXQEAV?$shared_ptr@ULegacyDeviceInfo@@@2@_K1@Z @ 0x18008B000 (-_Change_array@-$vector@V-$shared_ptr@ULegacyDeviceInfo@@@std@@V-$allocator@V-$shared_ptr@ULegac.c)
 */

unsigned __int64 __fastcall std::vector<std::shared_ptr<LegacyDeviceInfo>>::_Emplace_reallocate<std::shared_ptr<LegacyDeviceInfo> const &>(
        __int64 *a1,
        __int64 a2,
        _QWORD *a3)
{
  __int64 v6; // rdi
  __int64 v7; // rax
  __int64 v8; // r13
  unsigned __int64 v9; // r12
  size_t v10; // rcx
  unsigned __int64 v11; // r9
  _QWORD *v12; // rsi
  unsigned __int64 v13; // rdi
  _QWORD *v14; // rcx
  __int64 v15; // rax
  __int64 v16; // rdx
  __int64 v17; // r8
  __int64 v18; // rcx
  unsigned __int64 result; // rax
  void *v20; // [rsp+20h] [rbp-48h]
  __int64 v21; // [rsp+78h] [rbp+10h]

  v6 = a2 - *a1;
  v7 = (a1[1] - *a1) >> 4;
  if ( v7 == 0xFFFFFFFFFFFFFFFLL )
    std::_Xlength_error("vector<T> too long");
  v8 = v7 + 1;
  v9 = std::vector<std::pair<unsigned long,IInputProcessor *>>::_Calculate_growth(a1, v7 + 1);
  v10 = 16 * v9;
  if ( v9 > v11 )
    v10 = -1LL;
  v12 = std::_Allocate<16,std::_Default_allocate_traits,0>(v10);
  v13 = v6 & 0xFFFFFFFFFFFFFFF0uLL;
  v14 = (_QWORD *)((char *)v12 + v13);
  try
  {
    *v14 = 0LL;
    v14[1] = 0LL;
    v15 = a3[1];
    if ( v15 )
      _InterlockedIncrement((volatile signed __int32 *)(v15 + 8));
    *v14 = *a3;
    v14[1] = a3[1];
    v21 = (__int64)v12 + v13;
    v16 = a1[1];
    v17 = (__int64)v12;
    v18 = *a1;
    if ( a2 != v16 )
    {
      std::_Uninitialized_move<std::shared_ptr<LegacyDeviceInfo> *,std::shared_ptr<LegacyDeviceInfo> *,std::allocator<std::shared_ptr<LegacyDeviceInfo>>>(
        v18,
        a2,
        v12);
      v21 = (__int64)v12;
      v17 = (__int64)v12 + v13 + 16;
      v16 = a1[1];
      v18 = a2;
    }
    std::_Uninitialized_move<std::shared_ptr<LegacyDeviceInfo> *,std::shared_ptr<LegacyDeviceInfo> *,std::allocator<std::shared_ptr<LegacyDeviceInfo>>>(
      v18,
      v16,
      v17);
    std::vector<std::shared_ptr<LegacyDeviceInfo>>::_Change_array(a1, v12, v8, v9, v12);
    result = v13 + *a1;
  }
  catch ( ... )
  {
    std::_Destroy_range<std::allocator<std::shared_ptr<LegacyDeviceInfo>>>(v21, (__int64)v12 + v13 + 16);
    std::_Deallocate<16,0>(v20, (const struct std::nothrow_t *)(16 * v9));
    throw;
  }
  return result;
}
