/*
 * XREFs of UsbDevice_DisableCompletion @ 0x1C0045554
 * Callers:
 *     UsbDevice_DisableCompletionReturnFailure @ 0x1C0045850 (UsbDevice_DisableCompletionReturnFailure.c)
 *     UsbDevice_DisableCompletionReturnSuccess @ 0x1C0045870 (UsbDevice_DisableCompletionReturnSuccess.c)
 *     UsbDevice_OnResetDisableCompletion @ 0x1C00462D0 (UsbDevice_OnResetDisableCompletion.c)
 * Callees:
 *     Command_SendCommand @ 0x1C00068E0 (Command_SendCommand.c)
 *     WPP_RECORDER_SF_dqL @ 0x1C0008B30 (WPP_RECORDER_SF_dqL.c)
 *     XilCoreDeviceSlot_ClearDeviceContext @ 0x1C000A170 (XilCoreDeviceSlot_ClearDeviceContext.c)
 *     UsbDevice_SetDeviceDisabled @ 0x1C000A1DC (UsbDevice_SetDeviceDisabled.c)
 *     Endpoint_Disable @ 0x1C000A348 (Endpoint_Disable.c)
 *     DeviceSlot_GetXilCoreDeviceSlotData @ 0x1C000EDD4 (DeviceSlot_GetXilCoreDeviceSlotData.c)
 *     WPP_RECORDER_SF_dq @ 0x1C0010224 (WPP_RECORDER_SF_dq.c)
 *     _guard_dispatch_icall_nop @ 0x1C00191C0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00194C0 (memset.c)
 *     Controller_HwVerifierBreakIfEnabled @ 0x1C00314E4 (Controller_HwVerifierBreakIfEnabled.c)
 *     Controller_ReportFatalError @ 0x1C00323C0 (Controller_ReportFatalError.c)
 *     XilDeviceSlot_SendClearDeviceContextRequest @ 0x1C00361A0 (XilDeviceSlot_SendClearDeviceContextRequest.c)
 */

void __fastcall UsbDevice_DisableCompletion(__int64 a1, __int64 a2, int a3, int a4)
{
  __int64 v4; // rdi
  char v7; // r15
  int v8; // edx
  __int64 v9; // r8
  __int64 v10; // rdx
  char v11; // cl
  int v12; // edx
  int v13; // edx
  __int64 v14; // r13
  __int64 *v15; // rbx
  __int64 v16; // rbp
  __int64 v17; // rbp
  __int64 v18; // rax
  __int64 v19; // rcx
  _QWORD *XilCoreDeviceSlotData; // rax
  __int64 v21; // rcx
  unsigned int v22; // eax

  v4 = *(_QWORD *)(a1 + 48);
  v7 = 1;
  if ( (_DWORD)a2 == 3 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v8 = *(unsigned __int8 *)(v4 + 135);
      LOBYTE(v8) = 4;
      WPP_RECORDER_SF_dq(
        *(_QWORD *)(*(_QWORD *)(v4 + 8) + 72LL),
        v8,
        12,
        55,
        (__int64)&WPP_2d0c5f6bf4263c2e7a5f7f01b810c292_Traceguids,
        *(_BYTE *)(v4 + 135),
        *(_QWORD *)v4);
    }
    UsbDevice_SetDeviceDisabled(v4, a2);
LABEL_5:
    v7 = 0;
    v9 = 3221225473LL;
    goto LABEL_6;
  }
  v11 = *(_BYTE *)(a1 + 60);
  if ( v11 != 1 && v11 != 11 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v12 = *(unsigned __int8 *)(a1 + 61);
      LOBYTE(v12) = 2;
      WPP_RECORDER_SF_dqL(*(_QWORD *)(*(_QWORD *)(v4 + 8) + 72LL), v12, a3, 57);
    }
    Controller_HwVerifierBreakIfEnabled(
      *(_QWORD **)(v4 + 8),
      *(_QWORD *)v4,
      0,
      0x100000LL,
      "Disable Slot Command failed",
      (__int128 *)(a1 + 24),
      0LL);
    Controller_ReportFatalError(*(_QWORD *)(v4 + 8), 2, 4120, 0LL, 0LL, 0LL, 0LL);
    goto LABEL_5;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v13 = *(unsigned __int8 *)(a1 + 61);
    LOBYTE(v13) = 4;
    WPP_RECORDER_SF_dq(
      *(_QWORD *)(*(_QWORD *)(v4 + 8) + 72LL),
      v13,
      12,
      56,
      (__int64)&WPP_2d0c5f6bf4263c2e7a5f7f01b810c292_Traceguids,
      *(_BYTE *)(a1 + 61),
      *(_QWORD *)v4);
  }
  v14 = *(_QWORD *)(*(_QWORD *)(v4 + 8) + 136LL);
  if ( a3 != 2 )
  {
    LOBYTE(a2) = 1;
    Endpoint_Disable(*(_QWORD *)(v4 + 176), a2);
  }
  v15 = (__int64 *)(v4 + 184);
  v16 = 30LL;
  do
  {
    if ( *v15 )
    {
      LOBYTE(a2) = 1;
      Endpoint_Disable(*v15, a2);
      *v15 = 0LL;
    }
    ++v15;
    --v16;
  }
  while ( v16 );
  v17 = *(unsigned __int8 *)(v4 + 135);
  if ( *(_BYTE *)(v14 + 80) )
  {
    XilDeviceSlot_SendClearDeviceContextRequest((__int64 *)(v14 + 16), v4);
    v18 = *(_QWORD *)(v14 + 88);
    if ( *(_BYTE *)(v18 + 80) )
      v19 = *(_QWORD *)(v18 + 24);
    else
      v19 = *(_QWORD *)(v18 + 72);
    *(_QWORD *)(v19 + 8 * v17) = 0LL;
  }
  else
  {
    XilCoreDeviceSlotData = (_QWORD *)DeviceSlot_GetXilCoreDeviceSlotData(*(_QWORD *)(v14 + 88), a2, a3, a4);
    XilCoreDeviceSlot_ClearDeviceContext(XilCoreDeviceSlotData, v4, v17);
  }
  *(_WORD *)(v4 + 134) = 0;
  v9 = 0LL;
  *(_QWORD *)(v4 + 160) = 0LL;
  if ( a3 == 2 )
  {
    memset((void *)(v4 + 456), 0, 0x60uLL);
    v21 = *(_QWORD *)(v4 + 8);
    *(_QWORD *)(v4 + 496) = UsbDevice_EnableCompletion;
    v22 = *(_DWORD *)(v4 + 492) & 0xFFFF27FF;
    *(_QWORD *)(v4 + 504) = v4;
    *(_QWORD *)(v4 + 528) = 0LL;
    *(_DWORD *)(v4 + 492) = v22 | 0x2400;
    *(_QWORD *)(v4 + 536) = 0LL;
    *(_QWORD *)(v4 + 544) = 0LL;
    Command_SendCommand(*(_QWORD *)(v21 + 144), v4 + 456);
    return;
  }
LABEL_6:
  if ( a3 == 1 )
    v9 = 3221225473LL;
  if ( v7 )
  {
    v10 = *(_QWORD *)(v4 + 424);
    *(_QWORD *)(v4 + 424) = 0LL;
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64))(WdfFunctions_01023 + 2104))(
      WdfDriverGlobals,
      v10,
      v9);
  }
}
