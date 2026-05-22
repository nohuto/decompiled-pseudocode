/*
 * XREFs of ??$GetConstant@K@MPCConstantManager@@QEAAKPEAUIMPCInputProviderBase@@V?$basic_string_view@GU?$char_traits@G@std@@@std@@@Z @ 0x18007C738
 * Callers:
 *     ?GetTouchInjectionContactAreaRadius@MPCHandProcessor@@UEAAIXZ @ 0x18007D9F0 (-GetTouchInjectionContactAreaRadius@MPCHandProcessor@@UEAAIXZ.c)
 *     ?ProcessHomeGesture@MPCSixDofProcessor@@AEAAXPEAUInputInfo@@@Z @ 0x18018E1E4 (-ProcessHomeGesture@MPCSixDofProcessor@@AEAAXPEAUInputInfo@@@Z.c)
 *     ?UpdateTouchpadDownleveling@MPCSixDofProcessor@@AEAAXPEAUInputInfo@@@Z @ 0x180190628 (-UpdateTouchpadDownleveling@MPCSixDofProcessor@@AEAAXPEAUInputInfo@@@Z.c)
 *     ?ForwardInputReportInternal@MPCMouseProcessor@@AEAAJPEBUMouseProcessorState@@PEAUInputInfo@@@Z @ 0x180195188 (-ForwardInputReportInternal@MPCMouseProcessor@@AEAAJPEBUMouseProcessorState@@PEAUInputInfo@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18004A660 (_guard_dispatch_icall_nop.c)
 *     ??$GetStaticConstant@K@MPCConstantManager@@QEAAKW4InputType@@V?$basic_string_view@GU?$char_traits@G@std@@@std@@@Z @ 0x18007C7F8 (--$GetStaticConstant@K@MPCConstantManager@@QEAAKW4InputType@@V-$basic_string_view@GU-$char_trait.c)
 */

__int64 __fastcall MPCConstantManager::GetConstant<unsigned long>(__int64 a1, __int64 *a2, __int128 *a3)
{
  __int64 v3; // rax
  unsigned int v5; // eax
  __int128 v7; // [rsp+20h] [rbp-18h] BYREF

  v3 = *a2;
  v7 = *a3;
  v5 = (*(__int64 (__fastcall **)(__int64 *))(v3 + 48))(a2);
  return MPCConstantManager::GetStaticConstant<unsigned long>(a1, v5, &v7);
}
