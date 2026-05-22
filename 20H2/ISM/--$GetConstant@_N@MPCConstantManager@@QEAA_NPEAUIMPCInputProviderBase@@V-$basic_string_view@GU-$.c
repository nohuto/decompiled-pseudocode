/*
 * XREFs of ??$GetConstant@_N@MPCConstantManager@@QEAA_NPEAUIMPCInputProviderBase@@V?$basic_string_view@GU?$char_traits@G@std@@@std@@@Z @ 0x18007C7B8
 * Callers:
 *     ?OnGazeUpdate@MPCHandProcessor@@UEAAXPEAUInputInfo@@@Z @ 0x18007E100 (-OnGazeUpdate@MPCHandProcessor@@UEAAXPEAUInputInfo@@@Z.c)
 *     ?PostHitTestProcessing@MPCHandProcessor@@UEAAXPEAUMPCHolographicInputContext@@PEAUInputInfo@@@Z @ 0x18007E630 (-PostHitTestProcessing@MPCHandProcessor@@UEAAXPEAUMPCHolographicInputContext@@PEAUInputInfo@@@Z.c)
 *     ?OnGazeUpdate@MPCVoiceProcessor@@UEAAXPEAUInputInfo@@@Z @ 0x180189D00 (-OnGazeUpdate@MPCVoiceProcessor@@UEAAXPEAUInputInfo@@@Z.c)
 *     ?PostHitTestProcessing@MPCVoiceProcessor@@UEAAXPEAUMPCHolographicInputContext@@PEAUInputInfo@@@Z @ 0x180189DE0 (-PostHitTestProcessing@MPCVoiceProcessor@@UEAAXPEAUMPCHolographicInputContext@@PEAUInputInfo@@@Z.c)
 *     ?UpdateTouchpadDownleveling@MPCSixDofProcessor@@AEAAXPEAUInputInfo@@@Z @ 0x180190628 (-UpdateTouchpadDownleveling@MPCSixDofProcessor@@AEAAXPEAUInputInfo@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18004A660 (_guard_dispatch_icall_nop.c)
 *     ??$GetStaticConstant@_N@MPCConstantManager@@QEAA_NW4InputType@@V?$basic_string_view@GU?$char_traits@G@std@@@std@@@Z @ 0x18007CAB0 (--$GetStaticConstant@_N@MPCConstantManager@@QEAA_NW4InputType@@V-$basic_string_view@GU-$char_tra.c)
 */

__int64 __fastcall MPCConstantManager::GetConstant<bool>(__int64 a1, __int64 *a2, __int128 *a3)
{
  __int64 v3; // rax
  unsigned int v5; // eax
  __int128 v7; // [rsp+20h] [rbp-18h] BYREF

  v3 = *a2;
  v7 = *a3;
  v5 = (*(__int64 (__fastcall **)(__int64 *))(v3 + 48))(a2);
  return MPCConstantManager::GetStaticConstant<bool>(a1, v5, &v7);
}
