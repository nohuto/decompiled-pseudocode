/*
 * XREFs of WPP_RECORDER_SF_qq @ 0x1C00A01C0
 * Callers:
 *     HandleDeferredInput @ 0x1C0001120 (HandleDeferredInput.c)
 *     rimInputApc @ 0x1C0049940 (rimInputApc.c)
 *     rimDereferenceDev @ 0x1C009F3E4 (rimDereferenceDev.c)
 *     EtwTraceUIPIInputError @ 0x1C009FEB0 (EtwTraceUIPIInputError.c)
 *     rimFindPausedDeviceAndCompleteRead @ 0x1C00A34A8 (rimFindPausedDeviceAndCompleteRead.c)
 *     NtUserMapPointsByVisualIdentifier @ 0x1C013CEF0 (NtUserMapPointsByVisualIdentifier.c)
 *     UserAddBaseWindowHandle @ 0x1C01439D0 (UserAddBaseWindowHandle.c)
 *     UserFindBaseWindowHandle @ 0x1C0143E44 (UserFindBaseWindowHandle.c)
 *     RIMGetPnpActionBitsFromGuid @ 0x1C0174774 (RIMGetPnpActionBitsFromGuid.c)
 *     RIMSignalOnPnpNotificationAndWait @ 0x1C01748F4 (RIMSignalOnPnpNotificationAndWait.c)
 *     RIMWaitForPriorPnpWorkToComplete @ 0x1C01751D4 (RIMWaitForPriorPnpWorkToComplete.c)
 *     rimProcessDeviceBufferAndStartRead @ 0x1C017C48C (rimProcessDeviceBufferAndStartRead.c)
 *     rimSignalReadComplete @ 0x1C017D180 (rimSignalReadComplete.c)
 *     rimObsAddInputObserver @ 0x1C01843F4 (rimObsAddInputObserver.c)
 *     rimObsDeliverInputToObserver @ 0x1C0184CC0 (rimObsDeliverInputToObserver.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D2DC0 (_guard_dispatch_icall_nop.c)
 */

__int64 WPP_RECORDER_SF_qq(__int64 a1, unsigned __int8 a2, unsigned int a3, unsigned __int16 a4, __int64 a5, ...)
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
      8LL,
      va1,
      8LL,
      0LL);
  LOWORD(v12) = a4;
  return WppAutoLogTrace(a1, v8, a3, a5, v12, (__int64 *)va, 8LL, va1, 8LL, 0LL, v13, v14);
}
