/*
 * XREFs of ?AnyInputPressed@MPCGamepadProcessor@@AEAA_NXZ @ 0x18019218C
 * Callers:
 *     ?IsEndOfCapture@MPCGamepadProcessor@@UEAA_NPEAUInputInfo@@@Z @ 0x180192980 (-IsEndOfCapture@MPCGamepadProcessor@@UEAA_NPEAUInputInfo@@@Z.c)
 *     ?IsStartOfCapture@MPCGamepadProcessor@@UEAA_NPEAUInputInfo@@@Z @ 0x1801929A0 (-IsStartOfCapture@MPCGamepadProcessor@@UEAA_NPEAUInputInfo@@@Z.c)
 *     ?Process3DInput@MPCGamepadProcessor@@UEAAJPEAUInputInfo@@@Z @ 0x180193BE0 (-Process3DInput@MPCGamepadProcessor@@UEAAJPEAUInputInfo@@@Z.c)
 * Callees:
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18003E424 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ??$GetConstant@M@MPCConstantManager@@QEAAMPEAUIMPCInputProviderBase@@V?$basic_string_view@GU?$char_traits@G@std@@@std@@@Z @ 0x18007CCC8 (--$GetConstant@M@MPCConstantManager@@QEAAMPEAUIMPCInputProviderBase@@V-$basic_string_view@GU-$ch.c)
 */

char __fastcall MPCGamepadProcessor::AnyInputPressed(MPCGamepadProcessor *this, __int64 a2, __int64 a3, const char *a4)
{
  char v4; // bl
  float v6; // xmm7_4
  const char *v7; // r9
  float v8; // xmm7_4
  const char *v9; // r9
  float v10; // xmm7_4
  const char *v11; // r9
  float v12; // xmm7_4
  const char *v13; // r9
  float v14; // xmm6_4
  const char *v15; // r9
  float v16; // xmm6_4
  __int128 v18; // [rsp+20h] [rbp-30h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+18h]

  v4 = 0;
  if ( *((int *)this + 1167) > 0 )
    return 1;
  LODWORD(v6) = *((_DWORD *)this + 1173) & _xmm;
  if ( !MPCConstantManager::s_instance )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      41LL,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcconstantmanager.cpp",
      a4);
    __debugbreak();
  }
  *(_QWORD *)&v18 = L"ThumbstickDeadzone";
  *((_QWORD *)&v18 + 1) = 18LL;
  MPCConstantManager::GetConstant<float>((__int64)MPCConstantManager::s_instance, (__int64 *)this + 4, &v18);
  if ( v6 > COERCE_FLOAT(L"ThumbstickDeadzone") )
    return 1;
  LODWORD(v8) = *((_DWORD *)this + 1172) & _xmm;
  if ( !MPCConstantManager::s_instance )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      41LL,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcconstantmanager.cpp",
      v7);
    __debugbreak();
  }
  *(_QWORD *)&v18 = L"ThumbstickDeadzone";
  *((_QWORD *)&v18 + 1) = 18LL;
  MPCConstantManager::GetConstant<float>((__int64)MPCConstantManager::s_instance, (__int64 *)this + 4, &v18);
  if ( v8 > COERCE_FLOAT(L"ThumbstickDeadzone") )
    return 1;
  LODWORD(v10) = *((_DWORD *)this + 1170) & _xmm;
  if ( !MPCConstantManager::s_instance )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      41LL,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcconstantmanager.cpp",
      v9);
    __debugbreak();
  }
  *(_QWORD *)&v18 = L"ThumbstickDeadzone";
  *((_QWORD *)&v18 + 1) = 18LL;
  MPCConstantManager::GetConstant<float>((__int64)MPCConstantManager::s_instance, (__int64 *)this + 4, &v18);
  if ( v10 > COERCE_FLOAT(L"ThumbstickDeadzone") )
    return 1;
  LODWORD(v12) = *((_DWORD *)this + 1171) & _xmm;
  if ( !MPCConstantManager::s_instance )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      41LL,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcconstantmanager.cpp",
      v11);
    __debugbreak();
  }
  *(_QWORD *)&v18 = L"ThumbstickDeadzone";
  *((_QWORD *)&v18 + 1) = 18LL;
  MPCConstantManager::GetConstant<float>((__int64)MPCConstantManager::s_instance, (__int64 *)this + 4, &v18);
  if ( v12 > COERCE_FLOAT(L"ThumbstickDeadzone") )
    return 1;
  v14 = *((float *)this + 1168);
  if ( !MPCConstantManager::s_instance )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      41LL,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcconstantmanager.cpp",
      v13);
    __debugbreak();
  }
  *(_QWORD *)&v18 = L"TriggerDeadzone";
  *((_QWORD *)&v18 + 1) = 15LL;
  MPCConstantManager::GetConstant<float>((__int64)MPCConstantManager::s_instance, (__int64 *)this + 4, &v18);
  if ( v14 > COERCE_FLOAT(L"TriggerDeadzone") )
    return 1;
  v16 = *((float *)this + 1169);
  if ( !MPCConstantManager::s_instance )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      41LL,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcconstantmanager.cpp",
      v15);
    __debugbreak();
  }
  *(_QWORD *)&v18 = L"TriggerDeadzone";
  *((_QWORD *)&v18 + 1) = 15LL;
  MPCConstantManager::GetConstant<float>((__int64)MPCConstantManager::s_instance, (__int64 *)this + 4, &v18);
  if ( v16 > COERCE_FLOAT(L"TriggerDeadzone") )
    return 1;
  return v4;
}
