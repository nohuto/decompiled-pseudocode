/*
 * XREFs of ?CreateCursorShapeAnimation@SystemCursorService@@QEAAJIK_K0@Z @ 0x18013F320
 * Callers:
 *     ?CreateCursorShapeAnimation@SystemCursorController@@MEAAJPEAVBamoSystemCursorControllerStub@@_K1@Z @ 0x18013BF40 (-CreateCursorShapeAnimation@SystemCursorController@@MEAAJPEAVBamoSystemCursorControllerStub@@_K1.c)
 * Callees:
 *     ?GetAnimationDataProvider@ISMStatics@@SAPEAUIAnimationDataProvider@@XZ @ 0x18002C214 (-GetAnimationDataProvider@ISMStatics@@SAPEAUIAnimationDataProvider@@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180035760 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18003B028 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?shared_from_this@?$enable_shared_from_this@VSystemCursorService@@@std@@QEAA?AV?$shared_ptr@VSystemCursorService@@@2@XZ @ 0x1800491D8 (-shared_from_this@-$enable_shared_from_this@VSystemCursorService@@@std@@QEAA-AV-$shared_ptr@VSys.c)
 *     _guard_dispatch_icall_nop @ 0x18004B280 (_guard_dispatch_icall_nop.c)
 *     ??$_Try_emplace@AEB_K$$V@?$unordered_map@_KV?$shared_ptr@VSystemCursor@@@std@@U?$hash@_K@2@U?$equal_to@_K@2@V?$allocator@U?$pair@$$CB_KV?$shared_ptr@VSystemCursor@@@std@@@std@@@2@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CB_KV?$shared_ptr@VSystemCursor@@@std@@@std@@@std@@@std@@@std@@_N@1@AEB_K@Z @ 0x18013B1E8 (--$_Try_emplace@AEB_K$$V@-$unordered_map@_KV-$shared_ptr@VSystemCursor@@@std@@U-$hash@_K@2@U-$eq.c)
 *     ?CursorExists@SystemCursorService@@QEAA_N_K@Z @ 0x18013C468 (-CursorExists@SystemCursorService@@QEAA_N_K@Z.c)
 *     ?ShapeExists@SystemCursor@@QEBA_N_K@Z @ 0x18013D210 (-ShapeExists@SystemCursor@@QEBA_N_K@Z.c)
 *     std::function_void___cdecl(Microsoft::WRL::ComPtr_DataProviderPrincipal__&)_::function_void___cdecl(Microsoft::WRL::ComPtr_DataProviderPrincipal__&)___lambda_ba6101031141f0d6e8e74a4c358feff2__void_ @ 0x18013DAD4 (std--function_void___cdecl(Microsoft--WRL--ComPtr_DataProviderPrincipal__-)_--function_void___cd.c)
 *     _lambda_ba6101031141f0d6e8e74a4c358feff2_::_lambda_ba6101031141f0d6e8e74a4c358feff2_ @ 0x18013E494 (_lambda_ba6101031141f0d6e8e74a4c358feff2_--_lambda_ba6101031141f0d6e8e74a4c358feff2_.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall SystemCursorService::CreateCursorShapeAnimation(
        SystemCursorService *this,
        int a2,
        int a3,
        __int64 a4,
        unsigned __int64 a5)
{
  __int64 v7; // rcx
  volatile signed __int32 *v8; // rsi
  unsigned int v9; // edi
  struct IAnimationDataProvider *AnimationDataProvider; // rax
  struct IAnimationDataProvider *v11; // rbx
  void (__fastcall *v12)(struct IAnimationDataProvider *, __int64); // rdi
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // [rsp+48h] [rbp-71h] BYREF
  SystemCursor *v16[2]; // [rsp+58h] [rbp-61h] BYREF
  __int64 v17; // [rsp+68h] [rbp-51h] BYREF
  std::_Ref_count_base *v18; // [rsp+70h] [rbp-49h]
  struct IAnimationDataProvider *v19; // [rsp+78h] [rbp-41h]
  _BYTE v20[56]; // [rsp+80h] [rbp-39h] BYREF
  _BYTE v21[80]; // [rsp+B8h] [rbp-1h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+110h] [rbp+57h]
  int v23; // [rsp+120h] [rbp+67h] BYREF
  int v24; // [rsp+128h] [rbp+6Fh] BYREF
  __int64 v25; // [rsp+130h] [rbp+77h] BYREF

  v25 = a4;
  v24 = a3;
  v23 = a2;
  if ( SystemCursorService::CursorExists(this, a4) )
  {
    std::unordered_map<unsigned __int64,std::shared_ptr<SystemCursor>>::_Try_emplace<unsigned __int64 const &,>(
      (__int64)this + 40,
      (__int64)&v15,
      (const unsigned __int8 *)&v25);
    v7 = v15;
    v8 = *(volatile signed __int32 **)(v15 + 32);
    if ( v8 )
    {
      _InterlockedIncrement(v8 + 2);
      v8 = *(volatile signed __int32 **)(v7 + 32);
    }
    v16[0] = *(SystemCursor **)(v7 + 24);
    v16[1] = (SystemCursor *)v8;
    if ( SystemCursor::ShapeExists(v16[0], a5) )
    {
      v9 = -2147418113;
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x8A,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\components\\cursor\\service\\lib\\sy"
                 "stemcursorservice.cpp",
        (const char *)0x8000FFFFLL);
    }
    else
    {
      AnimationDataProvider = ISMStatics::GetAnimationDataProvider();
      v11 = AnimationDataProvider;
      v19 = AnimationDataProvider;
      if ( AnimationDataProvider )
        (*(void (__fastcall **)(struct IAnimationDataProvider *))(*(_QWORD *)AnimationDataProvider + 8LL))(AnimationDataProvider);
      std::enable_shared_from_this<SystemCursorService>::shared_from_this((__int64)this + 8, &v17);
      v12 = *(void (__fastcall **)(struct IAnimationDataProvider *, __int64))(*(_QWORD *)v11 + 56LL);
      v13 = lambda_ba6101031141f0d6e8e74a4c358feff2_::_lambda_ba6101031141f0d6e8e74a4c358feff2_(
              (__int64)v20,
              &v17,
              &v23,
              &v24,
              &v25,
              &a5,
              v16);
      v14 = std::function_void___cdecl_Microsoft::WRL::ComPtr_DataProviderPrincipal_____::function_void___cdecl_Microsoft::WRL::ComPtr_DataProviderPrincipal_______lambda_ba6101031141f0d6e8e74a4c358feff2__void_(
              (__int64)v21,
              v13);
      v12(v11, v14);
      v9 = 0;
      if ( v18 )
        std::_Ref_count_base::_Decref(v18);
      (*(void (__fastcall **)(struct IAnimationDataProvider *))(*(_QWORD *)v11 + 16LL))(v11);
    }
    if ( v8 )
      std::_Ref_count_base::_Decref((std::_Ref_count_base *)v8);
    return v9;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x86,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\components\\cursor\\service\\lib\\syst"
               "emcursorservice.cpp",
      (const char *)0x80070057LL);
    return 2147942487LL;
  }
}
