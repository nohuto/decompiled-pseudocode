/*
 * XREFs of ?UpdateZoom@MPCGamepadProcessor@@AEAAXPEAUInputInfo@@@Z @ 0x1801942C4
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

void __fastcall MPCGamepadProcessor::UpdateZoom(MPCGamepadProcessor *this, struct InputInfo *a2)
{
  char *v2; // r14
  float v4; // xmm9_4
  float v5; // xmm7_4
  __int64 v6; // rdx
  _OWORD *v7; // rax
  char *v8; // rcx
  __int128 v9; // xmm1
  __int128 v10; // xmm0
  __int128 v11; // xmm1
  __int128 v12; // xmm0
  __int128 v13; // xmm1
  __int128 v14; // xmm0
  __int128 v15; // xmm1
  __int128 v16; // xmm1
  __int128 v17; // xmm0
  __int128 v18; // xmm1
  __int64 v19; // rax
  const char *v20; // r9
  char v21; // bl
  bool v22; // si
  float v23; // xmm7_4
  const char *v24; // r9
  bool v25; // cl
  bool v26; // dl
  int v27; // eax
  __int64 v28; // rcx
  __int64 *Instance; // rbx
  _QWORD *v30; // rax
  const char *v31; // r9
  __int128 v32; // [rsp+20h] [rbp-E8h] BYREF
  __int64 v33; // [rsp+30h] [rbp-D8h]
  __int64 v34; // [rsp+38h] [rbp-D0h] BYREF
  _BYTE v35[24]; // [rsp+48h] [rbp-C0h] BYREF
  int v36; // [rsp+60h] [rbp-A8h]
  char v37; // [rsp+E0h] [rbp-28h] BYREF
  int v38; // [rsp+2D8h] [rbp+1D0h]
  float v39; // [rsp+2E4h] [rbp+1DCh]
  wil::details::in1diag3 *retaddr; // [rsp+8A0h] [rbp+798h]

  v2 = (char *)a2 + 152;
  v4 = *((float *)this + 1171) - *((float *)this + 1170);
  v5 = *((float *)this + 1178) - *((float *)this + 1177);
  memset_0(v35, 0, 0x7F0uLL);
  v6 = 2LL;
  v36 = 2032;
  v7 = v2;
  v8 = &v37;
  do
  {
    v9 = v7[1];
    *(_OWORD *)v8 = *v7;
    v10 = v7[2];
    *((_OWORD *)v8 + 1) = v9;
    v11 = v7[3];
    *((_OWORD *)v8 + 2) = v10;
    v12 = v7[4];
    *((_OWORD *)v8 + 3) = v11;
    v13 = v7[5];
    *((_OWORD *)v8 + 4) = v12;
    v14 = v7[6];
    *((_OWORD *)v8 + 5) = v13;
    v15 = v7[7];
    v7 += 8;
    *((_OWORD *)v8 + 6) = v14;
    v8 += 128;
    *((_OWORD *)v8 - 1) = v15;
    --v6;
  }
  while ( v6 );
  v16 = v7[1];
  *(_OWORD *)v8 = *v7;
  v17 = v7[2];
  *((_OWORD *)v8 + 1) = v16;
  v18 = v7[3];
  v19 = *((_QWORD *)v7 + 8);
  *((_OWORD *)v8 + 2) = v17;
  *((_OWORD *)v8 + 3) = v18;
  *((_QWORD *)v8 + 8) = v19;
  MPCInputProviderBase::PopulateDownlevelDataFromHitTestResult((__int64)v8, (__int64)v35, 0);
  if ( !MPCConstantManager::s_instance )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      41LL,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcconstantmanager.cpp",
      0LL);
    __debugbreak();
  }
  v33 = 18LL;
  *((_QWORD *)&v32 + 1) = L"ThumbstickDeadzone";
  MPCConstantManager::GetConstant<float>(
    (__int64)MPCConstantManager::s_instance,
    (__int64 *)(((unsigned __int64)this + 32) & -(__int64)(this != 0LL)),
    (__int128 *)((char *)&v32 + 8));
  v21 = 1;
  v22 = COERCE_FLOAT(LODWORD(v4) & _xmm) > COERCE_FLOAT(L"ThumbstickDeadzone") && *v2;
  if ( !MPCConstantManager::s_instance )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      41LL,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcconstantmanager.cpp",
      v20);
    __debugbreak();
  }
  LODWORD(v23) = LODWORD(v5) & _xmm;
  *((_QWORD *)&v32 + 1) = L"ThumbstickDeadzone";
  v33 = 18LL;
  MPCConstantManager::GetConstant<float>(
    (__int64)MPCConstantManager::s_instance,
    (__int64 *)(((unsigned __int64)this + 32) & -(__int64)(this != 0LL)),
    (__int128 *)((char *)&v32 + 8));
  v25 = *v2 && v2[2] || *((_DWORD *)this + 1266) == 2;
  v26 = v22 && v23 <= COERCE_FLOAT(L"ThumbstickDeadzone") && !*((_DWORD *)this + 1266);
  v27 = *((_DWORD *)this + 1266);
  if ( v27 != 2 )
  {
LABEL_24:
    v21 = 0;
    goto LABEL_25;
  }
  if ( v22 )
  {
    if ( !v25 )
      goto LABEL_28;
    goto LABEL_24;
  }
LABEL_25:
  if ( v25 && v26 )
  {
    *((_DWORD *)this + 1266) = 2;
    v27 = 2;
  }
LABEL_28:
  if ( v21 )
  {
    MPCGamepadProcessor::EndGesture(this);
  }
  else if ( v27 == 2 )
  {
    if ( !MPCConstantManager::s_instance )
    {
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        41LL,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcconstantmanager.cpp",
        v24);
      __debugbreak();
    }
    v33 = 12LL;
    *((_QWORD *)&v32 + 1) = L"ZoomingScale";
    MPCConstantManager::GetConstant<float>(
      (__int64)MPCConstantManager::s_instance,
      (__int64 *)(((unsigned __int64)this + 32) & -(__int64)(this != 0LL)),
      (__int128 *)((char *)&v32 + 8));
    v38 = 6;
    v39 = (float)((float)(COERCE_FLOAT(L"ZoomingScale") * v4) * *((float *)this + 1286)) + 1.0;
    Instance = (__int64 *)MPCGestureHandlerManager::GetInstance(v28);
    v30 = wil::com_ptr_t<InputSite,wil::err_exception_policy>::com_ptr_t<InputSite,wil::err_exception_policy>(
            &v34,
            ((unsigned __int64)this + 32) & -(__int64)(this != 0LL));
    MPCGestureHandlerManager::DownLevelTo2D(Instance, (__int64)v35, v30, v31);
  }
}
