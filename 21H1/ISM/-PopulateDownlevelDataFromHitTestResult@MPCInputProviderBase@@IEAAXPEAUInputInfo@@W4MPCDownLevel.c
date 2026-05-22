/*
 * XREFs of ?PopulateDownlevelDataFromHitTestResult@MPCInputProviderBase@@IEAAXPEAUInputInfo@@W4MPCDownLevel2DType@@@Z @ 0x180084BAC
 * Callers:
 *     ?OnGazeUpdate@MPCHandProcessor@@UEAAXPEAUInputInfo@@@Z @ 0x18007E650 (-OnGazeUpdate@MPCHandProcessor@@UEAAXPEAUInputInfo@@@Z.c)
 *     ?PostHitTestProcessing@MPCHandProcessor@@UEAAXPEAUMPCHolographicInputContext@@PEAUInputInfo@@@Z @ 0x18007EB80 (-PostHitTestProcessing@MPCHandProcessor@@UEAAXPEAUMPCHolographicInputContext@@PEAUInputInfo@@@Z.c)
 *     ?OnGazeUpdate@MPCVoiceProcessor@@UEAAXPEAUInputInfo@@@Z @ 0x18018A250 (-OnGazeUpdate@MPCVoiceProcessor@@UEAAXPEAUInputInfo@@@Z.c)
 *     ?PostHitTestProcessing@MPCVoiceProcessor@@UEAAXPEAUMPCHolographicInputContext@@PEAUInputInfo@@@Z @ 0x18018A330 (-PostHitTestProcessing@MPCVoiceProcessor@@UEAAXPEAUMPCHolographicInputContext@@PEAUInputInfo@@@Z.c)
 *     ?PopulateDownLevelInfo@MPCSixDofProcessor@@AEAAXPEAUInputInfo@@@Z @ 0x18018DF64 (-PopulateDownLevelInfo@MPCSixDofProcessor@@AEAAXPEAUInputInfo@@@Z.c)
 *     ?EndGesture@MPCGamepadProcessor@@AEAAXXZ @ 0x180192598 (-EndGesture@MPCGamepadProcessor@@AEAAXXZ.c)
 *     ?OnGazeUpdate@MPCGamepadProcessor@@UEAAXPEAUInputInfo@@@Z @ 0x180192AA0 (-OnGazeUpdate@MPCGamepadProcessor@@UEAAXPEAUInputInfo@@@Z.c)
 *     ?SendMPCInput@MPCGamepadProcessor@@AEAAXPEAUInputInfo@@@Z @ 0x18019416C (-SendMPCInput@MPCGamepadProcessor@@AEAAXPEAUInputInfo@@@Z.c)
 *     ?UpdateScroll@MPCGamepadProcessor@@AEAAXPEAUInputInfo@@@Z @ 0x1801944F8 (-UpdateScroll@MPCGamepadProcessor@@AEAAXPEAUInputInfo@@@Z.c)
 *     ?UpdateZoom@MPCGamepadProcessor@@AEAAXPEAUInputInfo@@@Z @ 0x1801947A4 (-UpdateZoom@MPCGamepadProcessor@@AEAAXPEAUInputInfo@@@Z.c)
 *     ?PostHitTestProcessing@MPCHeadProcessor@@UEAAXPEAUMPCHolographicInputContext@@PEAUInputInfo@@@Z @ 0x180197EC0 (-PostHitTestProcessing@MPCHeadProcessor@@UEAAXPEAUMPCHolographicInputContext@@PEAUInputInfo@@@Z.c)
 *     ?OnGazeUpdate@MPCClickerProcessor@@UEAAXPEAUInputInfo@@@Z @ 0x1801988D0 (-OnGazeUpdate@MPCClickerProcessor@@UEAAXPEAUInputInfo@@@Z.c)
 *     ?PostHitTestProcessing@MPCClickerProcessor@@UEAAXPEAUMPCHolographicInputContext@@PEAUInputInfo@@@Z @ 0x180198BA0 (-PostHitTestProcessing@MPCClickerProcessor@@UEAAXPEAUMPCHolographicInputContext@@PEAUInputInfo@@.c)
 * Callees:
 *     <none>
 */

bool __fastcall MPCInputProviderBase::PopulateDownlevelDataFromHitTestResult(__int64 a1, __int64 a2, int a3)
{
  bool v3; // zf
  __int128 v4; // xmm0
  bool result; // al

  v3 = *(_BYTE *)(a2 + 457) == 0;
  v4 = *(_OWORD *)(a2 + 164);
  *(_DWORD *)(a2 + 672) = *(_DWORD *)(a2 + 156);
  *(_DWORD *)(a2 + 676) = *(_DWORD *)(a2 + 160);
  *(_DWORD *)(a2 + 696) = *(_DWORD *)(a2 + 184);
  result = !v3;
  *(_BYTE *)(a2 + 700) = !v3;
  *(_DWORD *)(a2 + 656) = a3;
  *(_OWORD *)(a2 + 680) = v4;
  return result;
}
