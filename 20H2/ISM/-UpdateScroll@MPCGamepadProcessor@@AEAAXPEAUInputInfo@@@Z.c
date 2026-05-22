/*
 * XREFs of ?UpdateScroll@MPCGamepadProcessor@@AEAAXPEAUInputInfo@@@Z @ 0x180194018
 * Callers:
 *     ?OnGazeUpdate@MPCGamepadProcessor@@UEAAXPEAUInputInfo@@@Z @ 0x180192560 (-OnGazeUpdate@MPCGamepadProcessor@@UEAAXPEAUInputInfo@@@Z.c)
 * Callees:
 *     memset_0 @ 0x18003C540 (memset_0.c)
 *     __security_check_cookie @ 0x18003C560 (__security_check_cookie.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18003E194 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ??0?$com_ptr_t@VInputSite@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAVInputSite@@@Z @ 0x18006ACCC (--0-$com_ptr_t@VInputSite@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAVInputSite@@@Z.c)
 *     ?DownLevelTo2D@MPCGestureHandlerManager@@QEAAXPEAUInputInfo@@V?$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@@Z @ 0x18006B044 (-DownLevelTo2D@MPCGestureHandlerManager@@QEAAXPEAUInputInfo@@V-$com_ptr_t@UIMPCInputProviderBase.c)
 *     ?GetInstance@MPCGestureHandlerManager@@SAPEAV1@XZ @ 0x18006B38C (-GetInstance@MPCGestureHandlerManager@@SAPEAV1@XZ.c)
 *     ??$GetConstant@M@MPCConstantManager@@QEAAMPEAUIMPCInputProviderBase@@V?$basic_string_view@GU?$char_traits@G@std@@@std@@@Z @ 0x18007C778 (--$GetConstant@M@MPCConstantManager@@QEAAMPEAUIMPCInputProviderBase@@V-$basic_string_view@GU-$ch.c)
 *     ?PopulateDownlevelDataFromHitTestResult@MPCInputProviderBase@@IEAAXPEAUInputInfo@@W4MPCDownLevel2DType@@@Z @ 0x18008465C (-PopulateDownlevelDataFromHitTestResult@MPCInputProviderBase@@IEAAXPEAUInputInfo@@W4MPCDownLevel.c)
 *     ?EndGesture@MPCGamepadProcessor@@AEAAXXZ @ 0x180192058 (-EndGesture@MPCGamepadProcessor@@AEAAXXZ.c)
 */

void __fastcall MPCGamepadProcessor::UpdateScroll(MPCGamepadProcessor *this, struct InputInfo *a2)
{
  int v2; // eax
  int v5; // ecx
  int v6; // edx
  int v7; // r14d
  int v8; // edi
  bool v9; // cl
  char *v10; // rbx
  bool v11; // al
  char *v12; // rcx
  __int64 v13; // rax
  __int128 v14; // xmm1
  __int128 v15; // xmm0
  __int128 v16; // xmm1
  __int128 v17; // xmm0
  __int128 v18; // xmm1
  __int128 v19; // xmm0
  __int128 v20; // xmm1
  __int64 v21; // rax
  __int128 v22; // xmm1
  __int128 v23; // xmm0
  __int128 v24; // xmm1
  const char *v25; // r9
  __int64 *v26; // rsi
  const char *v27; // r9
  __int64 v28; // rcx
  __int64 *Instance; // rbx
  _QWORD *v30; // rax
  const char *v31; // r9
  __int128 v32; // [rsp+20h] [rbp-E0h] BYREF
  __int64 v33; // [rsp+30h] [rbp-D0h] BYREF
  _BYTE v34[24]; // [rsp+40h] [rbp-C0h] BYREF
  int v35; // [rsp+58h] [rbp-A8h]
  char v36; // [rsp+D8h] [rbp-28h] BYREF
  float v37; // [rsp+2D4h] [rbp+1D4h]
  float v38; // [rsp+2D8h] [rbp+1D8h]
  wil::details::in1diag3 *retaddr; // [rsp+868h] [rbp+768h]

  v2 = *((_DWORD *)this + 1169);
  v5 = v2 & 0x80;
  v6 = v2 & 0x100;
  if ( (v2 & 0x40) != 0 )
    v7 = v5 == 0;
  else
    v7 = -(v5 != 0);
  if ( (v2 & 0x200) != 0 )
    v8 = (v6 != 0) - 1;
  else
    v8 = v6 != 0;
  v9 = v7 || v8;
  v10 = (char *)a2 + 152;
  v11 = *v10 && v10[2] || *((_DWORD *)this + 1266) == 1;
  if ( v9 && v11 )
  {
    *((_DWORD *)this + 1266) = 1;
    memset_0(v34, 0, 0x7F0uLL);
    v12 = &v36;
    v35 = 2032;
    v13 = 2LL;
    do
    {
      v14 = *((_OWORD *)v10 + 1);
      *(_OWORD *)v12 = *(_OWORD *)v10;
      v15 = *((_OWORD *)v10 + 2);
      *((_OWORD *)v12 + 1) = v14;
      v16 = *((_OWORD *)v10 + 3);
      *((_OWORD *)v12 + 2) = v15;
      v17 = *((_OWORD *)v10 + 4);
      *((_OWORD *)v12 + 3) = v16;
      v18 = *((_OWORD *)v10 + 5);
      *((_OWORD *)v12 + 4) = v17;
      v19 = *((_OWORD *)v10 + 6);
      *((_OWORD *)v12 + 5) = v18;
      v20 = *((_OWORD *)v10 + 7);
      v10 += 128;
      *((_OWORD *)v12 + 6) = v19;
      v12 += 128;
      *((_OWORD *)v12 - 1) = v20;
      --v13;
    }
    while ( v13 );
    v21 = *((_QWORD *)v10 + 8);
    v22 = *((_OWORD *)v10 + 1);
    *(_OWORD *)v12 = *(_OWORD *)v10;
    v23 = *((_OWORD *)v10 + 2);
    *((_OWORD *)v12 + 1) = v22;
    v24 = *((_OWORD *)v10 + 3);
    *((_OWORD *)v12 + 2) = v23;
    *((_OWORD *)v12 + 3) = v24;
    *((_QWORD *)v12 + 8) = v21;
    MPCInputProviderBase::PopulateDownlevelDataFromHitTestResult((__int64)v12, (__int64)v34, 5);
    if ( !MPCConstantManager::s_instance )
    {
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        41LL,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcconstantmanager.cpp",
        v25);
      __debugbreak();
    }
    *((_QWORD *)&v32 + 1) = 14LL;
    *(_QWORD *)&v32 = L"ScrollingScale";
    v26 = (__int64 *)(((unsigned __int64)this + 32) & -(__int64)(this != 0LL));
    MPCConstantManager::GetConstant<float>((__int64)MPCConstantManager::s_instance, v26, &v32);
    v37 = COERCE_FLOAT(L"ScrollingScale") * (float)v8;
    if ( !MPCConstantManager::s_instance )
    {
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        41LL,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcconstantmanager.cpp",
        v27);
      __debugbreak();
    }
    *(_QWORD *)&v32 = L"ScrollingScale";
    *((_QWORD *)&v32 + 1) = 14LL;
    MPCConstantManager::GetConstant<float>((__int64)MPCConstantManager::s_instance, v26, &v32);
    v38 = COERCE_FLOAT(L"ScrollingScale") * (float)v7;
    Instance = (__int64 *)MPCGestureHandlerManager::GetInstance(v28);
    v30 = wil::com_ptr_t<InputSite,wil::err_exception_policy>::com_ptr_t<InputSite,wil::err_exception_policy>(
            &v33,
            (__int64)v26);
    MPCGestureHandlerManager::DownLevelTo2D(Instance, (__int64)v34, v30, v31);
  }
  else if ( *((_DWORD *)this + 1266) == 1 )
  {
    MPCGamepadProcessor::EndGesture(this);
  }
}
