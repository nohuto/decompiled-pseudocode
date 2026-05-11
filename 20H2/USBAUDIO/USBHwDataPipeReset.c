/*
 * XREFs of USBHwDataPipeReset @ 0x1C002E6D0
 * Callers:
 *     USBType1StateChangePin @ 0x1C0006260 (USBType1StateChangePin.c)
 *     USBType1ChangePowerState @ 0x1C00065F0 (USBType1ChangePowerState.c)
 *     USBCaptureStateChangePin @ 0x1C00070D0 (USBCaptureStateChangePin.c)
 *     USBCaptureChangePowerState @ 0x1C0007680 (USBCaptureChangePowerState.c)
 *     USBType1HandleUrbError @ 0x1C00327A4 (USBType1HandleUrbError.c)
 *     USBCaptureStartTransfers @ 0x1C0033134 (USBCaptureStartTransfers.c)
 * Callees:
 *     WPP_RECORDER_SF_qd @ 0x1C00014A8 (WPP_RECORDER_SF_qd.c)
 *     PinWaitForStarvation @ 0x1C0002460 (PinWaitForStarvation.c)
 *     USBHwAbortOrResetPipe @ 0x1C002E634 (USBHwAbortOrResetPipe.c)
 */

__int64 __fastcall USBHwDataPipeReset(__int64 a1)
{
  __int64 v1; // rax
  __int64 v3; // rdi
  __int64 v4; // rbp
  int v5; // eax
  int v6; // ebx
  __int64 v7; // rdx
  int v9; // [rsp+30h] [rbp-18h]

  v1 = *(_QWORD *)(a1 + 16);
  v3 = *(_QWORD *)(v1 + 152);
  v4 = *(_QWORD *)(v1 + 16);
  v5 = USBHwAbortOrResetPipe(*(PDEVICE_OBJECT *)(v4 + 40), *(void **)(v3 + 64), 2u);
  v6 = v5;
  v7 = v5 + 0x80000000;
  if ( (int)v7 < 0 || v5 == -1073741810 )
  {
    PinWaitForStarvation(a1);
    v6 = USBHwAbortOrResetPipe(*(PDEVICE_OBJECT *)(v4 + 40), *(void **)(v3 + 64), 0x1Eu);
    if ( ((v6 + 0x80000000) & 0x80000000) != 0 || v6 == -1073741810 )
      *(_BYTE *)v3 = 0;
  }
  if ( v6 < 0 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v9 = v6;
    WPP_RECORDER_SF_qd(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      v7,
      8u,
      0x2Bu,
      (__int64)&WPP_59cc21402c76383212e5dfc6e551f37f_Traceguids,
      a1,
      v9);
  }
  return (unsigned int)v6;
}
