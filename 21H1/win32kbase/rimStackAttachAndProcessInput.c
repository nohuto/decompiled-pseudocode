/*
 * XREFs of rimStackAttachAndProcessInput @ 0x1C017D40C
 * Callers:
 *     RIMOnPnpNotification @ 0x1C00A0F20 (RIMOnPnpNotification.c)
 *     rimDispatchAutoRepeatCompleteFrame @ 0x1C017BD68 (rimDispatchAutoRepeatCompleteFrame.c)
 *     rimDispatchCompleteFrame @ 0x1C017BF34 (rimDispatchCompleteFrame.c)
 *     rimProcessHidInput @ 0x1C017CA50 (rimProcessHidInput.c)
 *     rimProcessKeyboardInput @ 0x1C017CFBC (rimProcessKeyboardInput.c)
 *     rimProcessMouseInput @ 0x1C017D048 (rimProcessMouseInput.c)
 * Callees:
 *     __security_check_cookie @ 0x1C00CC180 (__security_check_cookie.c)
 *     ?DbgPrintGDI@@YAXPEADZZ @ 0x1C0145230 (-DbgPrintGDI@@YAXPEADZZ.c)
 *     WPP_RECORDER_SF_qqqD @ 0x1C015BA60 (WPP_RECORDER_SF_qqqD.c)
 *     rimProcessInput @ 0x1C017CC70 (rimProcessInput.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02015EC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall rimStackAttachAndProcessInput(__int64 a1, __int64 a2, _QWORD *a3, __m128i *a4, int a5)
{
  char v5; // di
  struct _KPROCESS *v10; // rsi
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  struct _KAPC_STATE ApcState; // [rsp+50h] [rbp-78h] BYREF

  v5 = 0;
  memset(&ApcState, 0, sizeof(ApcState));
  if ( *(_BYTE *)(a1 + 584) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1);
  v10 = *(struct _KPROCESS **)(a1 + 32);
  if ( v10 == (struct _KPROCESS *)PsGetCurrentProcess(a1, a2) )
    goto LABEL_6;
  if ( !*(_BYTE *)(a1 + 10) )
  {
    KeStackAttachProcess(v10, &ApcState);
    v5 = 1;
LABEL_6:
    rimProcessInput(a1, a2, a3, a4, a5);
    if ( v5 )
      KeUnstackDetachProcess(&ApcState);
    return;
  }
  DbgPrintGDI(
    "rimStackAttachAndProcessInput: hRim:%p[P:%p,T:%p]dwInputType:%08x stack attach not allowed dropping input!\n",
    *(const void **)(a1 + 72),
    v10,
    *(const void **)(a1 + 40),
    *(_DWORD *)(a1 + 84));
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qqqD(
      v12,
      v11,
      v13,
      0x12u,
      (__int64)&WPP_9efa7cdda93c372db13b9b42dbad300f_Traceguids,
      *(_QWORD *)(a1 + 72),
      *(_QWORD *)(a1 + 32),
      *(_QWORD *)(a1 + 40),
      *(_DWORD *)(a1 + 84));
  *(_BYTE *)(a1 + 584) = 1;
}
