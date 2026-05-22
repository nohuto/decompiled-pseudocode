/*
 * XREFs of ?GetInstance@MPC3DStateHelper@@SAPEAV1@XZ @ 0x1800214F0
 * Callers:
 *     ?Initialize@SpatialRimDeviceCollection@@IEAAJPEAPEAX@Z @ 0x180020EB0 (-Initialize@SpatialRimDeviceCollection@@IEAAJPEAPEAX@Z.c)
 *     ?Initialize@MPCInputRouter@@AEAAJXZ @ 0x18002108C (-Initialize@MPCInputRouter@@AEAAJXZ.c)
 *     ??0MPCHolographicInputManager@@AEAA@XZ @ 0x180021134 (--0MPCHolographicInputManager@@AEAA@XZ.c)
 *     ?RuntimeClassInitialize@MPCRawInputProvider@@QEAAJPEAUIRawInputClient@@@Z @ 0x1800213A4 (-RuntimeClassInitialize@MPCRawInputProvider@@QEAAJPEAUIRawInputClient@@@Z.c)
 *     ?SetPosition@DWMCursor@@UEAAJJJ@Z @ 0x180021600 (-SetPosition@DWMCursor@@UEAAJJJ@Z.c)
 *     ?OnHitTestingStateChanged@MPCHolographicInputManager@@AEAAX_N@Z @ 0x1800770E0 (-OnHitTestingStateChanged@MPCHolographicInputManager@@AEAAX_N@Z.c)
 *     ??1MPCRawInputProvider@@MEAA@XZ @ 0x180089E68 (--1MPCRawInputProvider@@MEAA@XZ.c)
 *     ?On3DCompositorRunningChanged@MPCHeadUpdateListener@@AEAAX_N@Z @ 0x18008D490 (-On3DCompositorRunningChanged@MPCHeadUpdateListener@@AEAAX_N@Z.c)
 *     ?OnFinalRelease@SpatialRimDeviceCollection@@MEAAXXZ @ 0x180094920 (-OnFinalRelease@SpatialRimDeviceCollection@@MEAAXXZ.c)
 *     ?Initialize3DComponents@MPCInputRouter@@AEAAXXZ @ 0x1800B8050 (-Initialize3DComponents@MPCInputRouter@@AEAAXXZ.c)
 *     ?On3DCompositorRunningChanged@MPCInputRouter@@AEAAX_N@Z @ 0x1800B8CA0 (-On3DCompositorRunningChanged@MPCInputRouter@@AEAAX_N@Z.c)
 *     ?UnInitialize3DComponents@MPCInputRouter@@AEAAXXZ @ 0x1800B92C8 (-UnInitialize3DComponents@MPCInputRouter@@AEAAXXZ.c)
 *     ?Set3DHitData@DWMCursor@@UEAAJAEAUCursor3DHitData@@@Z @ 0x18019CBC0 (-Set3DHitData@DWMCursor@@UEAAJAEAUCursor3DHitData@@@Z.c)
 * Callees:
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18003E194 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ??0exception_ptr@std@@QEAA@AEBV01@@Z @ 0x180068F7C (--0exception_ptr@std@@QEAA@AEBV01@@Z.c)
 *     ?rethrow_exception@std@@YAXVexception_ptr@1@@Z @ 0x180069BF4 (-rethrow_exception@std@@YAXVexception_ptr@1@@Z.c)
 */

// Hidden C++ exception states: #wind=4
struct MPC3DStateHelper *MPC3DStateHelper::GetInstance(void)
{
  const char *v0; // r9
  struct MPC3DStateHelper *result; // rax
  __int64 v2; // rax
  _BYTE v3[16]; // [rsp+20h] [rbp-30h] BYREF
  _QWORD v4[2]; // [rsp+30h] [rbp-20h] BYREF
  _BYTE v5[16]; // [rsp+40h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+8h]
  char v7; // [rsp+60h] [rbp+10h] BYREF

  v7 = 0;
  __ExceptionPtrCreate(v3);
  v4[0] = v3;
  v4[1] = &v7;
  if ( !std::_Execute_once(
          (struct std::once_flag *)&MPC3DStateHelper::s_singletonCreated,
          (int (*)(void *, void *, void **))std::_Callback_once<std::tuple<_lambda_4bfd0116db80ce4255855ce8af72e9c8_ &&,std::exception_ptr &>,std::integer_sequence<unsigned __int64,0>,1>,
          v4) )
  {
LABEL_4:
    if ( __ExceptionPtrToBool(v3) )
    {
      v2 = std::exception_ptr::exception_ptr((std::exception_ptr *)v5, (const struct std::exception_ptr *)v3);
      std::rethrow_exception(v2);
      __debugbreak();
    }
    std::_XGetLastError();
    __debugbreak();
    JUMPOUT(0x1800576B6LL);
  }
  __ExceptionPtrDestroy(v3);
  result = MPC3DStateHelper::s_instance;
  if ( !MPC3DStateHelper::s_instance )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x2B,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpc3dstatehelper.cpp",
      v0);
    goto LABEL_4;
  }
  return result;
}
