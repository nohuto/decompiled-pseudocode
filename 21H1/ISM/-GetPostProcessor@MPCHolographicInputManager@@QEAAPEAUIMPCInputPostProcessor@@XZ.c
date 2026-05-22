/*
 * XREFs of ?GetPostProcessor@MPCHolographicInputManager@@QEAAPEAUIMPCInputPostProcessor@@XZ @ 0x180075FAC
 * Callers:
 *     ?DownLevelPressTo2D@MPCGestureHandler@@AEAAXPEAULegacyInputInfo@@KUtagPOINT@@@Z @ 0x180040678 (-DownLevelPressTo2D@MPCGestureHandler@@AEAAXPEAULegacyInputInfo@@KUtagPOINT@@@Z.c)
 *     ?ProcessCursorData@MPCHolographicInputManager@@AEAAXPEAUIMPCInputProviderBase@@AEBUHitTestResult3D@@W4MPCCursorId@@AEAUCursor3DHitData@@@Z @ 0x1800783D4 (-ProcessCursorData@MPCHolographicInputManager@@AEAAXPEAUIMPCInputProviderBase@@AEBUHitTestResult.c)
 *     ?ShouldRequestPrimary@MPCHandProcessor@@AEAA_NPEAUInputInfo@@@Z @ 0x18007F4C4 (-ShouldRequestPrimary@MPCHandProcessor@@AEAA_NPEAUInputInfo@@@Z.c)
 *     ?GetHitTestResultForPathingDelta@MPCSpatialGestureRecognizerHandler@@AEAA?AUHitTestResult3D@@Ufloat3@Numerics@Foundation@Windows@@@Z @ 0x180081350 (-GetHitTestResultForPathingDelta@MPCSpatialGestureRecognizerHandler@@AEAA-AUHitTestResult3D@@Ufl.c)
 *     ?DownLevelInput@MPCMouseProcessor@@AEAAXPEBUMouseProcessorState@@PEAUInputInfo@@KK_N@Z @ 0x180195184 (-DownLevelInput@MPCMouseProcessor@@AEAAXPEBUMouseProcessorState@@PEAUInputInfo@@KK_N@Z.c)
 *     ?OnGazeUpdate@MPCMouseProcessor@@MEAAXPEAUInputInfo@@@Z @ 0x180196230 (-OnGazeUpdate@MPCMouseProcessor@@MEAAXPEAUInputInfo@@@Z.c)
 * Callees:
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18003E424 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 */

struct IMPCInputPostProcessor *__fastcall MPCHolographicInputManager::GetPostProcessor(
        MPCHolographicInputManager *this,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( !*((_BYTE *)this + 2364) )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      98LL,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\inc\\MPCHolographicInputManager.h",
      a4);
    __debugbreak();
  }
  return (struct IMPCInputPostProcessor *)*((_QWORD *)this + 297);
}
