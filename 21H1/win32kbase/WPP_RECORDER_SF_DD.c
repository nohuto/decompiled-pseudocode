/*
 * XREFs of WPP_RECORDER_SF_Dd @ 0x1C014157C
 * Callers:
 *     NtUserReportInertia @ 0x1C0003A80 (NtUserReportInertia.c)
 *     RIMRegisterForInputWithCallbacks @ 0x1C0037400 (RIMRegisterForInputWithCallbacks.c)
 *     NtUserInjectGenericHidInput @ 0x1C013B390 (NtUserInjectGenericHidInput.c)
 *     NtUserInjectPointerInput @ 0x1C013C3E0 (NtUserInjectPointerInput.c)
 *     rimAbCreateGlobalPenDeadzone @ 0x1C0161C90 (rimAbCreateGlobalPenDeadzone.c)
 *     rimAbShouldButtonContactBeSuppressed @ 0x1C0162554 (rimAbShouldButtonContactBeSuppressed.c)
 *     RIMIDECreatePointerDeviceInfo @ 0x1C016FF48 (RIMIDECreatePointerDeviceInfo.c)
 *     RIMIDEFillContactUsageValues @ 0x1C0170AC4 (RIMIDEFillContactUsageValues.c)
 *     RIMIDEGetTimeStampDelta @ 0x1C0170CF0 (RIMIDEGetTimeStampDelta.c)
 *     RIMIDEInjectDeviceInput @ 0x1C017106C (RIMIDEInjectDeviceInput.c)
 *     RIMIDEValidateKeybdInputStruct @ 0x1C0172404 (RIMIDEValidateKeybdInputStruct.c)
 *     RIMIDEValidateMouseInputStruct @ 0x1C0172650 (RIMIDEValidateMouseInputStruct.c)
 *     ?BuildValueDeviceUsages@@YAHKPEAPEAUtagINPUT_INJECTION_VALUE@@PEAK@Z @ 0x1C0173490 (-BuildValueDeviceUsages@@YAHKPEAPEAUtagINPUT_INJECTION_VALUE@@PEAK@Z.c)
 *     rimStorePointersInHoldingFrame @ 0x1C017A740 (rimStorePointersInHoldingFrame.c)
 *     rimDoProcessAnyPointerDeviceInput @ 0x1C018076C (rimDoProcessAnyPointerDeviceInput.c)
 *     rimExtractParallelFrameInfoAndAbandonIncompleteFrame @ 0x1C018151C (rimExtractParallelFrameInfoAndAbandonIncompleteFrame.c)
 *     rimFindOrCreateActiveContact @ 0x1C0182434 (rimFindOrCreateActiveContact.c)
 *     rimObsDeliverInputToObserver @ 0x1C0184CC0 (rimObsDeliverInputToObserver.c)
 *     rimObsPopInputMessage @ 0x1C018549C (rimObsPopInputMessage.c)
 *     ?AddDelayZoneToList@DelayZonePalmRejection@@QEAAKPEAXUtagRECT@@01H@Z @ 0x1C01AF368 (-AddDelayZoneToList@DelayZonePalmRejection@@QEAAKPEAXUtagRECT@@01H@Z.c)
 *     ?AddEdgeZoneToList@DelayZonePalmRejection@@QEAAKPEAXKUtagRECT@@@Z @ 0x1C01AF5DC (-AddEdgeZoneToList@DelayZonePalmRejection@@QEAAKPEAXKUtagRECT@@@Z.c)
 *     ?DispatchBufferedInputFrames@DelayZonePalmRejection@@QEAAXXZ @ 0x1C01AF830 (-DispatchBufferedInputFrames@DelayZonePalmRejection@@QEAAXXZ.c)
 *     ?ProcessInput@DelayZonePalmRejection@@QEAA_NPEAX@Z @ 0x1C01AFEAC (-ProcessInput@DelayZonePalmRejection@@QEAA_NPEAX@Z.c)
 *     ?ComposeDeadKeys@@YAHPEAUtagKL@@PEAUDEADKEY@@GPEAGHIH@Z @ 0x1C01B4460 (-ComposeDeadKeys@@YAHPEAUtagKL@@PEAUDEADKEY@@GPEAGHIH@Z.c)
 *     ?ivHandleKeyboardAsyncKeyStatePacket@CBaseInput@@AEAA?AW4IVHandlerResult@@PEAXPEAURawInputManagerObject@@@Z @ 0x1C01BA440 (-ivHandleKeyboardAsyncKeyStatePacket@CBaseInput@@AEAA-AW4IVHandlerResult@@PEAXPEAURawInputManage.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D2DC0 (_guard_dispatch_icall_nop.c)
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
