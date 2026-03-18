/*
 * XREFs of WPP_RECORDER_SF_Dd @ 0x1C013958C
 * Callers:
 *     NtUserReportInertia @ 0x1C0003BD0 (NtUserReportInertia.c)
 *     RIMRegisterForInputWithCallbacks @ 0x1C0006400 (RIMRegisterForInputWithCallbacks.c)
 *     NtUserInjectGenericHidInput @ 0x1C01333A0 (NtUserInjectGenericHidInput.c)
 *     NtUserInjectPointerInput @ 0x1C01343F0 (NtUserInjectPointerInput.c)
 *     rimAbCreateGlobalPenDeadzone @ 0x1C01593E0 (rimAbCreateGlobalPenDeadzone.c)
 *     rimAbShouldButtonContactBeSuppressed @ 0x1C0159CA4 (rimAbShouldButtonContactBeSuppressed.c)
 *     RIMIDECreatePointerDeviceInfo @ 0x1C0167698 (RIMIDECreatePointerDeviceInfo.c)
 *     RIMIDEFillContactUsageValues @ 0x1C0168214 (RIMIDEFillContactUsageValues.c)
 *     RIMIDEGetTimeStampDelta @ 0x1C0168440 (RIMIDEGetTimeStampDelta.c)
 *     RIMIDEInjectDeviceInput @ 0x1C01687BC (RIMIDEInjectDeviceInput.c)
 *     RIMIDEValidateKeybdInputStruct @ 0x1C0169B54 (RIMIDEValidateKeybdInputStruct.c)
 *     RIMIDEValidateMouseInputStruct @ 0x1C0169DA0 (RIMIDEValidateMouseInputStruct.c)
 *     ?BuildValueDeviceUsages@@YAHKPEAPEAUtagINPUT_INJECTION_VALUE@@PEAK@Z @ 0x1C016ABE0 (-BuildValueDeviceUsages@@YAHKPEAPEAUtagINPUT_INJECTION_VALUE@@PEAK@Z.c)
 *     rimStorePointersInHoldingFrame @ 0x1C0171FE0 (rimStorePointersInHoldingFrame.c)
 *     rimDoProcessAnyPointerDeviceInput @ 0x1C017863C (rimDoProcessAnyPointerDeviceInput.c)
 *     rimExtractParallelFrameInfoAndAbandonIncompleteFrame @ 0x1C01793EC (rimExtractParallelFrameInfoAndAbandonIncompleteFrame.c)
 *     rimFindOrCreateActiveContact @ 0x1C017A304 (rimFindOrCreateActiveContact.c)
 *     rimObsDeliverInputToObserver @ 0x1C017CB90 (rimObsDeliverInputToObserver.c)
 *     rimObsPopInputMessage @ 0x1C017D36C (rimObsPopInputMessage.c)
 *     ?AddDelayZoneToList@DelayZonePalmRejection@@QEAAKPEAXUtagRECT@@01H@Z @ 0x1C01A7288 (-AddDelayZoneToList@DelayZonePalmRejection@@QEAAKPEAXUtagRECT@@01H@Z.c)
 *     ?AddEdgeZoneToList@DelayZonePalmRejection@@QEAAKPEAXKUtagRECT@@@Z @ 0x1C01A74FC (-AddEdgeZoneToList@DelayZonePalmRejection@@QEAAKPEAXKUtagRECT@@@Z.c)
 *     ?DispatchBufferedInputFrames@DelayZonePalmRejection@@QEAAXXZ @ 0x1C01A7750 (-DispatchBufferedInputFrames@DelayZonePalmRejection@@QEAAXXZ.c)
 *     ?ProcessInput@DelayZonePalmRejection@@QEAA_NPEAX@Z @ 0x1C01A7DCC (-ProcessInput@DelayZonePalmRejection@@QEAA_NPEAX@Z.c)
 *     ?ComposeDeadKeys@@YAHPEAUtagKL@@PEAUDEADKEY@@GPEAGHIH@Z @ 0x1C01AC380 (-ComposeDeadKeys@@YAHPEAUtagKL@@PEAUDEADKEY@@GPEAGHIH@Z.c)
 *     ?ivHandleKeyboardAsyncKeyStatePacket@CBaseInput@@AEAA?AW4IVHandlerResult@@PEAXPEAURawInputManagerObject@@@Z @ 0x1C01B2370 (-ivHandleKeyboardAsyncKeyStatePacket@CBaseInput@@AEAA-AW4IVHandlerResult@@PEAXPEAURawInputManage.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D36F0 (_guard_dispatch_icall_nop.c)
 */

__int64 WPP_RECORDER_SF_Dd(__int64 a1, unsigned __int8 a2, unsigned int a3, unsigned __int16 a4, __int64 a5, ...)
{
  unsigned __int64 v7; // rdi
  unsigned int v8; // esi
  int v10; // eax
  int v12; // [rsp+20h] [rbp-48h]
  __int64 v13; // [rsp+50h] [rbp-18h]
  __int64 v14; // [rsp+58h] [rbp-10h]
  __int64 v15; // [rsp+98h] [rbp+30h] BYREF
  va_list va; // [rsp+98h] [rbp+30h]
  va_list va1; // [rsp+A0h] [rbp+38h] BYREF

  va_start(va1, a5);
  va_start(va, a5);
  v15 = va_arg(va1, _QWORD);
  v7 = (unsigned __int64)a3 >> 16;
  v8 = a2;
  v10 = *((_DWORD *)&WPP_GLOBAL_Control->Timer + 20 * v7 + (((a3 - 1) >> 5) & 0x7FF) + 1);
  if ( _bittest(&v10, ((_BYTE)a3 - 1) & 0x1F) && *((_BYTE *)&WPP_GLOBAL_Control->Timer + 80 * v7 + 1) >= a2 )
    ((void (__fastcall *)(_QWORD, __int64, __int64, _QWORD, __int64 *, __int64, char *, __int64, _QWORD))pfnWppTraceMessage)(
      *((_QWORD *)&WPP_GLOBAL_Control->AttachedDevice + 10 * v7),
      43LL,
      a5,
      a4,
      (__int64 *)va,
      4LL,
      va1,
      4LL,
      0LL);
  LOWORD(v12) = a4;
  return WppAutoLogTrace(a1, v8, a3, a5, v12, (__int64 *)va, 4LL, va1, 4LL, 0LL, v13, v14);
}
