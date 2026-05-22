/*
 * XREFs of ??$GetConstant@M@MPCConstantManager@@QEAAMPEAUIMPCInputProviderBase@@V?$basic_string_view@GU?$char_traits@G@std@@@std@@@Z @ 0x18007C818
 * Callers:
 *     _lambda_3cd376e3a20bdc9f6b19457eb0f70b96_::operator() @ 0x18007D3C8 (_lambda_3cd376e3a20bdc9f6b19457eb0f70b96_--operator().c)
 *     ?Initialize3DComponents@MPCHandProcessor@@UEAAXXZ @ 0x18007DC30 (-Initialize3DComponents@MPCHandProcessor@@UEAAXXZ.c)
 *     _lambda_73ee74375a7aa9a7d53c1e011ef1d674_::operator() @ 0x18018B3C8 (_lambda_73ee74375a7aa9a7d53c1e011ef1d674_--operator().c)
 *     ?AreButtonsOrAxesActive@MPCSixDofProcessor@@AEAA_NPEAUInputInfo@@I@Z @ 0x18018C694 (-AreButtonsOrAxesActive@MPCSixDofProcessor@@AEAA_NPEAUInputInfo@@I@Z.c)
 *     ?Initialize3DComponents@MPCSixDofProcessor@@UEAAXXZ @ 0x18018CC50 (-Initialize3DComponents@MPCSixDofProcessor@@UEAAXXZ.c)
 *     ?ProcessHomeGesture@MPCSixDofProcessor@@AEAAXPEAUInputInfo@@@Z @ 0x18018E274 (-ProcessHomeGesture@MPCSixDofProcessor@@AEAAXPEAUInputInfo@@@Z.c)
 *     ?UpdatePoint@MPCSixDofProcessor@@AEAAXPEAUInputInfo@@@Z @ 0x18018F464 (-UpdatePoint@MPCSixDofProcessor@@AEAAXPEAUInputInfo@@@Z.c)
 *     ?UpdateTouchpadDownleveling@MPCSixDofProcessor@@AEAAXPEAUInputInfo@@@Z @ 0x1801906B8 (-UpdateTouchpadDownleveling@MPCSixDofProcessor@@AEAAXPEAUInputInfo@@@Z.c)
 *     ?AnyInputPressed@MPCGamepadProcessor@@AEAA_NXZ @ 0x180191CDC (-AnyInputPressed@MPCGamepadProcessor@@AEAA_NXZ.c)
 *     ?Initialize3DComponents@MPCGamepadProcessor@@UEAAXXZ @ 0x180192330 (-Initialize3DComponents@MPCGamepadProcessor@@UEAAXXZ.c)
 *     ?OnGazeUpdate@MPCGamepadProcessor@@UEAAXPEAUInputInfo@@@Z @ 0x1801925F0 (-OnGazeUpdate@MPCGamepadProcessor@@UEAAXPEAUInputInfo@@@Z.c)
 *     ?UpdateScroll@MPCGamepadProcessor@@AEAAXPEAUInputInfo@@@Z @ 0x1801940A8 (-UpdateScroll@MPCGamepadProcessor@@AEAAXPEAUInputInfo@@@Z.c)
 *     ?UpdateZoom@MPCGamepadProcessor@@AEAAXPEAUInputInfo@@@Z @ 0x180194354 (-UpdateZoom@MPCGamepadProcessor@@AEAAXPEAUInputInfo@@@Z.c)
 *     ?PopulateTargetingData@MPCMouseProcessor@@UEAAXPEAUMPCHolographicInputContext@@PEAUInputInfo@@@Z @ 0x180196040 (-PopulateTargetingData@MPCMouseProcessor@@UEAAXPEAUMPCHolographicInputContext@@PEAUInputInfo@@@Z.c)
 *     ?ProcessPoints@MPCMouseProcessor@@AEAAXPEBUMouseProcessorState@@PEAUInputInfo@@@Z @ 0x18019690C (-ProcessPoints@MPCMouseProcessor@@AEAAXPEBUMouseProcessorState@@PEAUInputInfo@@@Z.c)
 *     ?ProcessPoints@MPCClickerProcessor@@IEAAXPEAUInputInfo@@@Z @ 0x180198948 (-ProcessPoints@MPCClickerProcessor@@IEAAXPEAUInputInfo@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18004A6B0 (_guard_dispatch_icall_nop.c)
 *     ??$GetStaticConstant@M@MPCConstantManager@@QEAAMW4InputType@@V?$basic_string_view@GU?$char_traits@G@std@@@std@@@Z @ 0x18007C9F4 (--$GetStaticConstant@M@MPCConstantManager@@QEAAMW4InputType@@V-$basic_string_view@GU-$char_trait.c)
 */

__int64 __fastcall MPCConstantManager::GetConstant<float>(__int64 a1, __int64 *a2, __int128 *a3)
{
  __int64 v3; // rax
  unsigned int v5; // eax
  __int128 v7; // [rsp+20h] [rbp-18h] BYREF

  v3 = *a2;
  v7 = *a3;
  v5 = (*(__int64 (__fastcall **)(__int64 *))(v3 + 48))(a2);
  return MPCConstantManager::GetStaticConstant<float>(a1, v5, &v7);
}
