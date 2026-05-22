/*
 * XREFs of ?SetRequestingPrimary@MPCInputProviderBase@@IEAAXXZ @ 0x180084A38
 * Callers:
 *     ?Process3DInput@MPCHandProcessor@@UEAAJPEAUInputInfo@@@Z @ 0x18007EB20 (-Process3DInput@MPCHandProcessor@@UEAAJPEAUInputInfo@@@Z.c)
 *     ?Process3DInput@MPCVoiceProcessor@@UEAAJPEAUInputInfo@@@Z @ 0x180189F70 (-Process3DInput@MPCVoiceProcessor@@UEAAJPEAUInputInfo@@@Z.c)
 *     ?Process3DInput@MPCSixDofProcessor@@UEAAJPEAUInputInfo@@@Z @ 0x18018E110 (-Process3DInput@MPCSixDofProcessor@@UEAAJPEAUInputInfo@@@Z.c)
 *     ?Process3DInput@MPCGamepadProcessor@@UEAAJPEAUInputInfo@@@Z @ 0x180193730 (-Process3DInput@MPCGamepadProcessor@@UEAAJPEAUInputInfo@@@Z.c)
 *     ?ForwardInputReportInternal@MPCMouseProcessor@@AEAAJPEBUMouseProcessorState@@PEAUInputInfo@@@Z @ 0x180195218 (-ForwardInputReportInternal@MPCMouseProcessor@@AEAAJPEBUMouseProcessorState@@PEAUInputInfo@@@Z.c)
 *     ?Process3DInput@MPCClickerProcessor@@UEAAJPEAUInputInfo@@@Z @ 0x1801987D0 (-Process3DInput@MPCClickerProcessor@@UEAAJPEAUInputInfo@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18004A6B0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall MPCInputProviderBase::SetRequestingPrimary(MPCInputProviderBase *this)
{
  if ( !(*(unsigned __int8 (__fastcall **)(char *))(*((_QWORD *)this + 3) + 248LL))((char *)this + 24) )
    *((_BYTE *)this + 4541) = 1;
}
