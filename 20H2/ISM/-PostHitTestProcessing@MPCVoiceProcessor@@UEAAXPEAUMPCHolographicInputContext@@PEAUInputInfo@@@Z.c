/*
 * XREFs of ?PostHitTestProcessing@MPCVoiceProcessor@@UEAAXPEAUMPCHolographicInputContext@@PEAUInputInfo@@@Z @ 0x180189DE0
 * Callers:
 *     <none>
 * Callees:
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18003E194 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ??0?$com_ptr_t@VInputSite@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAVInputSite@@@Z @ 0x18006ACCC (--0-$com_ptr_t@VInputSite@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAVInputSite@@@Z.c)
 *     ?DownLevelTo2D@MPCGestureHandlerManager@@QEAAXPEAUInputInfo@@V?$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@@Z @ 0x18006B044 (-DownLevelTo2D@MPCGestureHandlerManager@@QEAAXPEAUInputInfo@@V-$com_ptr_t@UIMPCInputProviderBase.c)
 *     ?GetInstance@MPCGestureHandlerManager@@SAPEAV1@XZ @ 0x18006B38C (-GetInstance@MPCGestureHandlerManager@@SAPEAV1@XZ.c)
 *     ??$GetConstant@_N@MPCConstantManager@@QEAA_NPEAUIMPCInputProviderBase@@V?$basic_string_view@GU?$char_traits@G@std@@@std@@@Z @ 0x18007C7B8 (--$GetConstant@_N@MPCConstantManager@@QEAA_NPEAUIMPCInputProviderBase@@V-$basic_string_view@GU-$.c)
 *     ?PopulateDownlevelDataFromHitTestResult@MPCInputProviderBase@@IEAAXPEAUInputInfo@@W4MPCDownLevel2DType@@@Z @ 0x18008465C (-PopulateDownlevelDataFromHitTestResult@MPCInputProviderBase@@IEAAXPEAUInputInfo@@W4MPCDownLevel.c)
 */

void __fastcall MPCVoiceProcessor::PostHitTestProcessing(
        unsigned __int64 this,
        struct MPCHolographicInputContext *a2,
        struct InputInfo *a3,
        const char *a4)
{
  __int64 *v5; // rsi
  __int64 v6; // rcx
  const char *v7; // r9
  __int64 v8; // rcx
  __int64 *Instance; // rbx
  _QWORD *v10; // rax
  const char *v11; // r9
  __int128 v12; // [rsp+20h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v14; // [rsp+40h] [rbp+8h] BYREF

  if ( *(_BYTE *)(this + 4516) && *((_BYTE *)a3 + 152) )
  {
    if ( !MPCConstantManager::s_instance )
    {
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        41LL,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcconstantmanager.cpp",
        a4);
      JUMPOUT(0x180189ED1LL);
    }
    *((_QWORD *)&v12 + 1) = 17LL;
    *(_QWORD *)&v12 = L"AllowDownleveling";
    v5 = (__int64 *)(this & -(__int64)(this != 24));
    if ( (unsigned __int8)MPCConstantManager::GetConstant<bool>((__int64)MPCConstantManager::s_instance, v5, &v12) )
    {
      if ( *((_DWORD *)a3 + 16) != 7 )
      {
        wil::details::in1diag3::_FailFast_Unexpected(
          retaddr,
          105LL,
          (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcvoiceprocessor.cpp",
          v7);
        __debugbreak();
      }
      MPCInputProviderBase::PopulateDownlevelDataFromHitTestResult(v6, (__int64)a3, 3);
      Instance = (__int64 *)MPCGestureHandlerManager::GetInstance(v8);
      v10 = wil::com_ptr_t<InputSite,wil::err_exception_policy>::com_ptr_t<InputSite,wil::err_exception_policy>(
              &v14,
              (__int64)v5);
      MPCGestureHandlerManager::DownLevelTo2D(Instance, (__int64)a3, v10, v11);
    }
  }
}
