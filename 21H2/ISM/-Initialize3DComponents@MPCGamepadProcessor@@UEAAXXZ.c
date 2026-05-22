/*
 * XREFs of ?Initialize3DComponents@MPCGamepadProcessor@@UEAAXXZ @ 0x180192750
 * Callers:
 *     <none>
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18003B028 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18003C400 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18003DE74 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ??R?$default_delete@VMPCSpatialGestureRecognizerHandler@@@std@@QEBAXPEAVMPCSpatialGestureRecognizerHandler@@@Z @ 0x18007ACD0 (--R-$default_delete@VMPCSpatialGestureRecognizerHandler@@@std@@QEBAXPEAVMPCSpatialGestureRecogni.c)
 *     ??$GetConstant@M@MPCConstantManager@@QEAAMPEAUIMPCInputProviderBase@@V?$basic_string_view@GU?$char_traits@G@std@@@std@@@Z @ 0x18007CB88 (--$GetConstant@M@MPCConstantManager@@QEAAMPEAUIMPCInputProviderBase@@V-$basic_string_view@GU-$ch.c)
 *     ??$make_unique@VMPCButtonHoldHelper@@M$0A@@std@@YA?AV?$unique_ptr@VMPCButtonHoldHelper@@U?$default_delete@VMPCButtonHoldHelper@@@std@@@0@$$QEAM@Z @ 0x18007D1EC (--$make_unique@VMPCButtonHoldHelper@@M$0A@@std@@YA-AV-$unique_ptr@VMPCButtonHoldHelper@@U-$defau.c)
 *     ??$make_unique@VMPCSlateDeadzoneHelper@@MM$0A@@std@@YA?AV?$unique_ptr@VMPCSlateDeadzoneHelper@@U?$default_delete@VMPCSlateDeadzoneHelper@@@std@@@0@$$QEAM0@Z @ 0x18007D230 (--$make_unique@VMPCSlateDeadzoneHelper@@MM$0A@@std@@YA-AV-$unique_ptr@VMPCSlateDeadzoneHelper@@U.c)
 *     ??4?$unique_ptr@VMPCButtonHoldHelper@@U?$default_delete@VMPCButtonHoldHelper@@@std@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x18007D654 (--4-$unique_ptr@VMPCButtonHoldHelper@@U-$default_delete@VMPCButtonHoldHelper@@@std@@@std@@QEAAAE.c)
 *     ??4?$unique_ptr@VMPCSlateDeadzoneHelper@@U?$default_delete@VMPCSlateDeadzoneHelper@@@std@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x18007D68C (--4-$unique_ptr@VMPCSlateDeadzoneHelper@@U-$default_delete@VMPCSlateDeadzoneHelper@@@std@@@std@@.c)
 *     std::call_once__lambda_c78139b4692b055c43ac45a1104373ed___ @ 0x180191A68 (std--call_once__lambda_c78139b4692b055c43ac45a1104373ed___.c)
 */

void __fastcall MPCGamepadProcessor::Initialize3DComponents(MPCGamepadProcessor *this)
{
  char *v1; // rdi
  __int64 *v3; // rax
  __int64 v4; // rcx
  __int64 *v5; // rax
  __int64 v6; // rcx
  const char *v7; // r9
  __int64 *v8; // rdi
  const char *v9; // r9
  _QWORD *v10; // rax
  void *v11; // rdi
  std::_Ref_count_base *v12; // rcx
  __int128 v13; // [rsp+20h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+18h]
  __int64 (__fastcall ***v15)(_QWORD, __int64); // [rsp+50h] [rbp+20h] BYREF
  unsigned int v16; // [rsp+58h] [rbp+28h] BYREF
  void *v17; // [rsp+60h] [rbp+30h] BYREF

  v1 = (char *)this - 32;
  v15 = (__int64 (__fastcall ***)(_QWORD, __int64))((char *)this - 32);
  std::call_once__lambda_c78139b4692b055c43ac45a1104373ed___((__int64)this, (__int64)&v15);
  v3 = std::make_unique<MPCButtonHoldHelper,float,0>(&v15, flt_1801C7060);
  std::unique_ptr<MPCButtonHoldHelper>::operator=((__int64 *)this + 640, v3);
  if ( v15 )
    std::default_delete<MPCSpatialGestureRecognizerHandler>::operator()(v4, v15);
  v5 = std::make_unique<MPCButtonHoldHelper,float,0>(&v15, flt_1801C7060);
  std::unique_ptr<MPCButtonHoldHelper>::operator=((__int64 *)this + 641, v5);
  if ( v15 )
    std::default_delete<MPCSpatialGestureRecognizerHandler>::operator()(v6, v15);
  if ( !MPCConstantManager::s_instance )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      41LL,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcconstantmanager.cpp",
      v7);
    JUMPOUT(0x1801928CBLL);
  }
  *((_QWORD *)&v13 + 1) = 25LL;
  *(_QWORD *)&v13 = L"SelectTemporalDeadzoneSec";
  v8 = (__int64 *)((unsigned __int64)this & -(__int64)(v1 != 0LL));
  MPCConstantManager::GetConstant<float>((__int64)MPCConstantManager::s_instance, v8, &v13);
  LODWORD(v15) = (unsigned int)L"SelectTemporalDeadzoneSec";
  if ( !MPCConstantManager::s_instance )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      41LL,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcconstantmanager.cpp",
      v9);
    __debugbreak();
  }
  *((_QWORD *)&v13 + 1) = 18LL;
  *(_QWORD *)&v13 = L"SelectXYDeadzone1M";
  MPCConstantManager::GetConstant<float>((__int64)MPCConstantManager::s_instance, v8, &v13);
  v16 = (unsigned int)L"SelectXYDeadzone1M";
  v10 = std::make_unique<MPCSlateDeadzoneHelper,float,float,0>(&v17, (float *)&v16, (float *)&v15);
  std::unique_ptr<MPCSlateDeadzoneHelper>::operator=((_QWORD **)this + 642, v10);
  v11 = v17;
  if ( v17 )
  {
    v12 = (std::_Ref_count_base *)*((_QWORD *)v17 + 3);
    if ( v12 )
      std::_Ref_count_base::_Decref(v12);
    operator delete(v11, (const struct std::nothrow_t *)0x20);
  }
  *((_BYTE *)this + 4515) = 1;
}
