/*
 * XREFs of UsbDevice_SetDeviceDisabled @ 0x1C000AA1C
 * Callers:
 *     DeviceSlot_DisableAllDeviceSlots @ 0x1C000A95C (DeviceSlot_DisableAllDeviceSlots.c)
 *     UsbDevice_SetAddressCompletion @ 0x1C000F9A0 (UsbDevice_SetAddressCompletion.c)
 *     UsbDevice_DisableCompletion @ 0x1C0045DE4 (UsbDevice_DisableCompletion.c)
 *     UsbDevice_UcxEvtDisable @ 0x1C0047300 (UsbDevice_UcxEvtDisable.c)
 * Callees:
 *     UsbDevice_QueueConfigureEndpointEvent @ 0x1C0007714 (UsbDevice_QueueConfigureEndpointEvent.c)
 *     Endpoint_Disable @ 0x1C000AB88 (Endpoint_Disable.c)
 *     DeviceSlot_GetXilCoreDeviceSlotData @ 0x1C000F894 (DeviceSlot_GetXilCoreDeviceSlotData.c)
 *     WPP_RECORDER_SF_dq @ 0x1C0010CB0 (WPP_RECORDER_SF_dq.c)
 *     WPP_RECORDER_SF_qd @ 0x1C0014518 (WPP_RECORDER_SF_qd.c)
 *     _guard_dispatch_icall_nop @ 0x1C001AFF0 (_guard_dispatch_icall_nop.c)
 *     XilDeviceSlot_SendClearDeviceContextRequest @ 0x1C0036980 (XilDeviceSlot_SendClearDeviceContextRequest.c)
 */

char __fastcall UsbDevice_SetDeviceDisabled(__int64 a1, __int64 a2)
{
  int v3; // edx
  __int64 v4; // rbp
  __int64 v5; // rdx
  _QWORD *v6; // rdi
  __int64 v7; // rsi
  __int64 v8; // rsi
  _QWORD *XilCoreDeviceSlotData; // rax
  int v10; // edx
  __int64 v11; // r9
  __int64 v12; // rdx
  char result; // al
  __int64 v14; // rax
  __int64 v15; // rcx
  __int64 v16; // rdx

  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v3 = *(unsigned __int8 *)(a1 + 135);
    LOBYTE(v3) = 4;
    WPP_RECORDER_SF_dq(
      *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL),
      v3,
      12,
      58,
      (__int64)&WPP_2e14ba44bfb4396fe7ac9baa15c70ba7_Traceguids,
      *(_BYTE *)(a1 + 135),
      *(_QWORD *)a1);
  }
  LOBYTE(a2) = 1;
  v4 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 136LL);
  Endpoint_Disable(*(_QWORD *)(a1 + 176), a2);
  v6 = (_QWORD *)(a1 + 184);
  v7 = 30LL;
  do
  {
    if ( *v6 )
    {
      LOBYTE(v5) = 1;
      Endpoint_Disable(*v6, v5);
      *v6 = 0LL;
    }
    ++v6;
    --v7;
  }
  while ( v7 );
  v8 = *(unsigned __int8 *)(a1 + 135);
  if ( *(_BYTE *)(v4 + 80) )
  {
    XilDeviceSlot_SendClearDeviceContextRequest(v4 + 16, a1);
    v14 = *(_QWORD *)(v4 + 88);
    if ( *(_BYTE *)(v14 + 80) )
      v15 = *(_QWORD *)(v14 + 24);
    else
      v15 = *(_QWORD *)(v14 + 72);
    *(_QWORD *)(v15 + 8 * v8) = 0LL;
  }
  else
  {
    XilCoreDeviceSlotData = (_QWORD *)DeviceSlot_GetXilCoreDeviceSlotData(*(_QWORD *)(v4 + 88));
    v11 = *(_QWORD *)(XilCoreDeviceSlotData[3] + 16LL);
    *(_QWORD *)(XilCoreDeviceSlotData[7] + 8 * v8) = 0LL;
    *(_QWORD *)(v11 + 8 * v8) = 0LL;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v10) = 4;
      WPP_RECORDER_SF_qd(
        *(_QWORD *)(XilCoreDeviceSlotData[1] + 72LL),
        v10,
        10,
        10,
        (__int64)&WPP_57b4ec5b2a77395746dfb5e96c966fbd_Traceguids,
        a1,
        v8);
    }
  }
  v12 = *(_QWORD *)(a1 + 424);
  result = *(_BYTE *)(a1 + 432);
  *(_QWORD *)(a1 + 424) = 0LL;
  *(_WORD *)(a1 + 134) = 0;
  *(_QWORD *)(a1 + 160) = 0LL;
  if ( v12 )
    result = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01023 + 2104))(
               WdfDriverGlobals,
               v12,
               result != 0 ? 0 : 0xC0000001);
  if ( *(_QWORD *)(a1 + 440) )
  {
    v16 = 1LL;
    if ( *(int *)(a1 + 448) < 0 )
      v16 = 2LL;
    return UsbDevice_QueueConfigureEndpointEvent(a1, v16);
  }
  return result;
}
