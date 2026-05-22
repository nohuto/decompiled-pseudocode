/*
 * XREFs of ?AreButtonsOrAxesActive@MPCSixDofProcessor@@AEAA_NPEAUInputInfo@@I@Z @ 0x18018CAB4
 * Callers:
 *     ?ProcessHomeGesture@MPCSixDofProcessor@@AEAAXPEAUInputInfo@@@Z @ 0x18018E694 (-ProcessHomeGesture@MPCSixDofProcessor@@AEAAXPEAUInputInfo@@@Z.c)
 *     ?ShouldRequestPrimary@MPCSixDofProcessor@@AEAA_NPEAUInputInfo@@@Z @ 0x18018F568 (-ShouldRequestPrimary@MPCSixDofProcessor@@AEAA_NPEAUInputInfo@@@Z.c)
 * Callees:
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18003DE74 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ??$GetConstant@M@MPCConstantManager@@QEAAMPEAUIMPCInputProviderBase@@V?$basic_string_view@GU?$char_traits@G@std@@@std@@@Z @ 0x18007CB88 (--$GetConstant@M@MPCConstantManager@@QEAAMPEAUIMPCInputProviderBase@@V-$basic_string_view@GU-$ch.c)
 */

char __fastcall MPCSixDofProcessor::AreButtonsOrAxesActive(
        MPCSixDofProcessor *this,
        struct InputInfo *a2,
        char a3,
        const char *a4)
{
  float v6; // xmm6_4
  unsigned __int64 v7; // rsi
  float v9; // xmm6_4
  __int64 *v10; // rdi
  const char *v11; // r9
  float v12; // xmm6_4
  __int128 v13; // [rsp+20h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+8h]

  if ( ((unsigned __int8)~a3 & *((_BYTE *)a2 + 728) & 0x3F) != 0 )
    return 1;
  if ( *((_BYTE *)a2 + 771) )
  {
    v6 = *((float *)a2 + 190);
    if ( !MPCConstantManager::s_instance )
    {
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        41LL,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcconstantmanager.cpp",
        a4);
      __debugbreak();
    }
    *((_QWORD *)&v13 + 1) = 15LL;
    *(_QWORD *)&v13 = L"TriggerDeadzone";
    v7 = (unsigned __int64)this + 24;
    MPCConstantManager::GetConstant<float>(
      (__int64)MPCConstantManager::s_instance,
      (__int64 *)(((unsigned __int64)this + 24) & ((unsigned __int128)-(__int128)(unsigned __int64)this >> 64)),
      &v13);
    if ( v6 > COERCE_FLOAT(L"TriggerDeadzone") )
      return 1;
  }
  else
  {
    v7 = (unsigned __int64)this + 24;
  }
  if ( *((_BYTE *)a2 + 772) )
  {
    LODWORD(v9) = *((_DWORD *)a2 + 188) & _xmm;
    if ( !MPCConstantManager::s_instance )
    {
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        41LL,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcconstantmanager.cpp",
        a4);
      __debugbreak();
    }
    *((_QWORD *)&v13 + 1) = 18LL;
    *(_QWORD *)&v13 = L"ThumbstickDeadzone";
    v10 = (__int64 *)(v7 & -(__int64)(this != 0LL));
    MPCConstantManager::GetConstant<float>((__int64)MPCConstantManager::s_instance, v10, &v13);
    if ( v9 > COERCE_FLOAT(L"ThumbstickDeadzone") )
      return 1;
    LODWORD(v12) = *((_DWORD *)a2 + 189) & _xmm;
    if ( !MPCConstantManager::s_instance )
    {
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        41LL,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcconstantmanager.cpp",
        v11);
      __debugbreak();
    }
    *(_QWORD *)&v13 = L"ThumbstickDeadzone";
    *((_QWORD *)&v13 + 1) = 18LL;
    MPCConstantManager::GetConstant<float>((__int64)MPCConstantManager::s_instance, v10, &v13);
    if ( v12 > COERCE_FLOAT(L"ThumbstickDeadzone") )
      return 1;
  }
  return 0;
}
