/*
 * XREFs of ?OnDdiDeviceAdded@SpatialRimDeviceCollection@@UEAAJW4InputType@@KAEBUMPCSourceDeviceInfo@@@Z @ 0x1800941D0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180035770 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18003B2E8 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x18004A6B0 (_guard_dispatch_icall_nop.c)
 *     ??$make_shared@ULegacyDeviceInfo@@$$V@std@@YA?AV?$shared_ptr@ULegacyDeviceInfo@@@0@XZ @ 0x180089D14 (--$make_shared@ULegacyDeviceInfo@@$$V@std@@YA-AV-$shared_ptr@ULegacyDeviceInfo@@@0@XZ.c)
 *     ?IsEnabled@RawInputProvidersTracing@@SA_NE_K@Z @ 0x18008F4A8 (-IsEnabled@RawInputProvidersTracing@@SA_NE_K@Z.c)
 *     ?get@?$static_lazy@VRawInputProvidersTracing@@@details@wil@@QEAAPEAVRawInputProvidersTracing@@P6AXXZ@Z @ 0x18008FF00 (-get@-$static_lazy@VRawInputProvidersTracing@@@details@wil@@QEAAPEAVRawInputProvidersTracing@@P6.c)
 *     ??$_Try_emplace@AEBK$$V@?$unordered_map@KV?$shared_ptr@ULegacyDeviceInfo@@@std@@U?$hash@K@2@U?$equal_to@K@2@V?$allocator@U?$pair@$$CBKV?$shared_ptr@ULegacyDeviceInfo@@@std@@@std@@@2@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKV?$shared_ptr@ULegacyDeviceInfo@@@std@@@std@@@std@@@std@@@std@@_N@1@AEBK@Z @ 0x180091BF4 (--$_Try_emplace@AEBK$$V@-$unordered_map@KV-$shared_ptr@ULegacyDeviceInfo@@@std@@U-$hash@K@2@U-$e.c)
 *     ?TelemetryDdiDevice_Added_@RawInputProvidersTracing@@QEAAXKW4InputType@@QEBG@Z @ 0x1800963EC (-TelemetryDdiDevice_Added_@RawInputProvidersTracing@@QEAAXKW4InputType@@QEBG@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall SpatialRimDeviceCollection::OnDdiDeviceAdded(
        __int64 a1,
        unsigned int a2,
        unsigned int a3,
        _OWORD *a4)
{
  _OWORD *v7; // rcx
  _OWORD *v8; // rax
  __int64 v9; // r8
  _OWORD *v10; // rcx
  _OWORD *v11; // rax
  __int64 v12; // rdx
  __int64 v13; // r8
  std::_Ref_count_base *v14; // rdx
  std::_Ref_count_base *v15; // rcx
  int v16; // eax
  __int64 v17; // rcx
  unsigned int v18; // ebx
  const char *v19; // r9
  __int64 result; // rax
  __int64 v21; // rcx
  __int64 v22; // rcx
  unsigned int *v23; // [rsp+20h] [rbp-3E8h] BYREF
  std::_Ref_count_base *v24; // [rsp+28h] [rbp-3E0h]
  __int64 v25; // [rsp+38h] [rbp-3D0h] BYREF
  _BYTE v26[952]; // [rsp+48h] [rbp-3C0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+408h] [rbp+0h]
  unsigned int v28; // [rsp+420h] [rbp+18h] BYREF

  v28 = a3;
  try
  {
    std::make_shared<LegacyDeviceInfo,>(&v23);
    *v23 = v28;
    v23[1] = a2;
    v23[2] = 1548;
    v8 = a4;
    v7 = v26;
    v12 = 7LL;
    v9 = 7LL;
    do
    {
      *v7 = *v8;
      v7[1] = v8[1];
      v7[2] = v8[2];
      v7[3] = v8[3];
      v7[4] = v8[4];
      v7[5] = v8[5];
      v7[6] = v8[6];
      v7 += 8;
      *(v7 - 1) = v8[7];
      v8 += 8;
      --v9;
    }
    while ( v9 );
    *v7 = *v8;
    v7[1] = v8[1];
    v7[2] = v8[2];
    *((_QWORD *)v7 + 6) = *((_QWORD *)v8 + 6);
    v10 = v23 + 149;
    v11 = v26;
    do
    {
      *v10 = *v11;
      v10[1] = v11[1];
      v10[2] = v11[2];
      v10[3] = v11[3];
      v10[4] = v11[4];
      v10[5] = v11[5];
      v10[6] = v11[6];
      v10 += 8;
      *(v10 - 1) = v11[7];
      v11 += 8;
      --v12;
    }
    while ( v12 );
    *v10 = *v11;
    v10[1] = v11[1];
    v10[2] = v11[2];
    *((_QWORD *)v10 + 6) = *((_QWORD *)v11 + 6);
    std::unordered_map<unsigned long,std::shared_ptr<LegacyDeviceInfo>>::_Try_emplace<unsigned long const &,>(
      a1 + 96,
      (__int64)&v25,
      (const unsigned __int8 *)&v28);
    v13 = v25;
    v14 = v24;
    if ( v24 )
    {
      _InterlockedIncrement((volatile signed __int32 *)v24 + 2);
      v14 = v24;
    }
    *(_QWORD *)(v13 + 24) = v23;
    v15 = *(std::_Ref_count_base **)(v13 + 32);
    *(_QWORD *)(v13 + 32) = v14;
    if ( v15 )
      std::_Ref_count_base::_Decref(v15);
    v16 = (*(__int64 (__fastcall **)(_QWORD, unsigned int *, _QWORD))(**(_QWORD **)(a1 - 2744) + 40LL))(
            *(_QWORD *)(a1 - 2744),
            v23,
            *(_QWORD *)(a1 - 2736));
    v18 = v16;
    if ( v16 >= 0 )
    {
      if ( RawInputProvidersTracing::IsEnabled(v17) )
      {
        wil::details::static_lazy<RawInputProvidersTracing>::get(
          v21,
          _lambda_260b9137d63ddd75627644ad4182c2ea_::_lambda_invoker_cdecl_);
        RawInputProvidersTracing::TelemetryDdiDevice_Added_(v22, v28, a2, (char *)a4 + 10);
      }
      if ( v24 )
        std::_Ref_count_base::_Decref(v24);
      result = 0LL;
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x258,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\spatialrimdevicecollection.cpp",
        (const char *)(unsigned int)v16);
      if ( v24 )
        std::_Ref_count_base::_Decref(v24);
      result = v18;
    }
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x25D,
                           (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\spatialr"
                                         "imdevicecollection.cpp",
                           v19);
  }
  return result;
}
