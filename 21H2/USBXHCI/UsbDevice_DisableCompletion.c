/*
 * XREFs of UsbDevice_DisableCompletion @ 0x1C00462A4
 * Callers:
 *     UsbDevice_DisableCompletionReturnFailure @ 0x1C00465A0 (UsbDevice_DisableCompletionReturnFailure.c)
 *     UsbDevice_DisableCompletionReturnSuccess @ 0x1C00465C0 (UsbDevice_DisableCompletionReturnSuccess.c)
 *     UsbDevice_OnResetDisableCompletion @ 0x1C0047020 (UsbDevice_OnResetDisableCompletion.c)
 * Callees:
 *     WPP_RECORDER_SF_dqL @ 0x1C0002904 (WPP_RECORDER_SF_dqL.c)
 *     Command_SendCommand @ 0x1C0003D94 (Command_SendCommand.c)
 *     Endpoint_Disable @ 0x1C0004D70 (Endpoint_Disable.c)
 *     UsbDevice_SetDeviceDisabled @ 0x1C000D1B0 (UsbDevice_SetDeviceDisabled.c)
 *     XilCoreDeviceSlot_ClearDeviceContext @ 0x1C000D31C (XilCoreDeviceSlot_ClearDeviceContext.c)
 *     DeviceSlot_GetXilCoreDeviceSlotData @ 0x1C0010840 (DeviceSlot_GetXilCoreDeviceSlotData.c)
 *     WPP_RECORDER_SF_dq @ 0x1C0010E7C (WPP_RECORDER_SF_dq.c)
 *     _guard_dispatch_icall_nop @ 0x1C00199B0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0019CC0 (memset.c)
 *     Controller_HwVerifierBreakIfEnabled @ 0x1C0031C54 (Controller_HwVerifierBreakIfEnabled.c)
 *     Controller_ReportFatalError @ 0x1C0032C20 (Controller_ReportFatalError.c)
 *     XilDeviceSlot_SendClearDeviceContextRequest @ 0x1C0036BC0 (XilDeviceSlot_SendClearDeviceContextRequest.c)
 */

void __fastcall UsbDevice_DisableCompletion(__int64 a1, __int64 a2, int a3, int a4)
{
  _QWORD *v4; // rdi
  char v7; // r15
  __int64 v8; // r8
  __int64 v9; // rdx
  char v10; // cl
  int v11; // edx
  __int64 v12; // r13
  __int64 *v13; // rbx
  __int64 v14; // rbp
  __int64 v15; // rbp
  __int64 v16; // rax
  __int64 v17; // rcx
  _QWORD *XilCoreDeviceSlotData; // rax
  __int64 v19; // rcx
  unsigned int v20; // eax

  v4 = *(_QWORD **)(a1 + 48);
  v7 = 1;
  if ( (_DWORD)a2 == 3 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_dq(
        *(_QWORD *)(v4[1] + 72LL),
        4u,
        0xCu,
        0x37u,
        (__int64)&WPP_5cc87a4a737631244eec1c43efcd9051_Traceguids,
        *((unsigned __int8 *)v4 + 135),
        *v4);
    UsbDevice_SetDeviceDisabled((__int64)v4, a2);
LABEL_5:
    v7 = 0;
    v8 = 3221225473LL;
    goto LABEL_6;
  }
  v10 = *(_BYTE *)(a1 + 60);
  if ( v10 != 1 && v10 != 11 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v11 = *(unsigned __int8 *)(a1 + 61);
      LOBYTE(v11) = 2;
      WPP_RECORDER_SF_dqL(*(_QWORD *)(v4[1] + 72LL), v11, a3, 57);
    }
    Controller_HwVerifierBreakIfEnabled(
      (_QWORD *)v4[1],
      *v4,
      0,
      0x100000LL,
      "Disable Slot Command failed",
      (__int128 *)(a1 + 24),
      0LL);
    Controller_ReportFatalError(v4[1], 2, 4120, 0LL, 0LL, 0LL, 0LL);
    goto LABEL_5;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_dq(
      *(_QWORD *)(v4[1] + 72LL),
      4u,
      0xCu,
      0x38u,
      (__int64)&WPP_5cc87a4a737631244eec1c43efcd9051_Traceguids,
      *(unsigned __int8 *)(a1 + 61),
      *v4);
  v12 = *(_QWORD *)(v4[1] + 136LL);
  if ( a3 != 2 )
  {
    LOBYTE(a2) = 1;
    Endpoint_Disable(v4[22], a2);
  }
  v13 = v4 + 23;
  v14 = 30LL;
  do
  {
    if ( *v13 )
    {
      LOBYTE(a2) = 1;
      Endpoint_Disable(*v13, a2);
      *v13 = 0LL;
    }
    ++v13;
    --v14;
  }
  while ( v14 );
  v15 = *((unsigned __int8 *)v4 + 135);
  if ( *(_BYTE *)(v12 + 80) )
  {
    XilDeviceSlot_SendClearDeviceContextRequest((__int64 *)(v12 + 16), (__int64)v4);
    v16 = *(_QWORD *)(v12 + 88);
    if ( *(_BYTE *)(v16 + 80) )
      v17 = *(_QWORD *)(v16 + 24);
    else
      v17 = *(_QWORD *)(v16 + 72);
    *(_QWORD *)(v17 + 8 * v15) = 0LL;
  }
  else
  {
    XilCoreDeviceSlotData = (_QWORD *)DeviceSlot_GetXilCoreDeviceSlotData(*(_QWORD *)(v12 + 88), a2, a3, a4);
    XilCoreDeviceSlot_ClearDeviceContext(XilCoreDeviceSlotData, (int)v4, v15);
  }
  *((_WORD *)v4 + 67) = 0;
  v8 = 0LL;
  v4[20] = 0LL;
  if ( a3 == 2 )
  {
    memset(v4 + 57, 0, 0x60uLL);
    v19 = v4[1];
    v4[62] = UsbDevice_EnableCompletion;
    v20 = *((_DWORD *)v4 + 123) & 0xFFFF27FF;
    v4[63] = v4;
    v4[66] = 0LL;
    *((_DWORD *)v4 + 123) = v20 | 0x2400;
    v4[67] = 0LL;
    v4[68] = 0LL;
    Command_SendCommand(*(_QWORD *)(v19 + 144), (__int64)(v4 + 57));
    return;
  }
LABEL_6:
  if ( a3 == 1 )
    v8 = 3221225473LL;
  if ( v7 )
  {
    v9 = v4[53];
    v4[53] = 0LL;
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64))(WdfFunctions_01023 + 2104))(
      WdfDriverGlobals,
      v9,
      v8);
  }
}
