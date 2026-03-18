/*
 * XREFs of Command_SendCommand @ 0x1C0006C80
 * Callers:
 *     Endpoint_SM_SendStopEndpointCommand @ 0x1C00058D4 (Endpoint_SM_SendStopEndpointCommand.c)
 *     UsbDevice_SendConfigureEndpointCommand @ 0x1C0005FDC (UsbDevice_SendConfigureEndpointCommand.c)
 *     UsbDevice_EndpointsConfigureCompletion @ 0x1C00074B0 (UsbDevice_EndpointsConfigureCompletion.c)
 *     UsbDevice_EnableCompletion @ 0x1C000E630 (UsbDevice_EnableCompletion.c)
 *     UsbDevice_UcxEvtEnable @ 0x1C000E990 (UsbDevice_UcxEvtEnable.c)
 *     UsbDevice_SetAddressCompletion @ 0x1C000F9A0 (UsbDevice_SetAddressCompletion.c)
 *     Endpoint_OnCancelSetDequeuePointer @ 0x1C00100F4 (Endpoint_OnCancelSetDequeuePointer.c)
 *     UsbDevice_UcxEvtReset @ 0x1C0010610 (UsbDevice_UcxEvtReset.c)
 *     UsbDevice_SetAddress @ 0x1C001086C (UsbDevice_SetAddress.c)
 *     Endpoint_UcxEvtDefaultEndpointUpdate @ 0x1C0016620 (Endpoint_UcxEvtDefaultEndpointUpdate.c)
 *     UsbDevice_UcxEvtUpdate @ 0x1C0018940 (UsbDevice_UcxEvtUpdate.c)
 *     Endpoint_ControlEndpointResetCompletion @ 0x1C00195F0 (Endpoint_ControlEndpointResetCompletion.c)
 *     Endpoint_SM_ResetControlEndpoint @ 0x1C0019C94 (Endpoint_SM_ResetControlEndpoint.c)
 *     Command_SendInternalCommandSynchronously @ 0x1C002F448 (Command_SendInternalCommandSynchronously.c)
 *     Endpoint_OnCancelEndpointConfigure @ 0x1C0039418 (Endpoint_OnCancelEndpointConfigure.c)
 *     Endpoint_OnCancelEndpointConfigureCompletion_EpDropped @ 0x1C0039790 (Endpoint_OnCancelEndpointConfigureCompletion_EpDropped.c)
 *     Endpoint_OnResetEndpointConfigure @ 0x1C0039998 (Endpoint_OnResetEndpointConfigure.c)
 *     Endpoint_OnResetEndpointConfigureCompletion_EpDropped @ 0x1C0039DE0 (Endpoint_OnResetEndpointConfigureCompletion_EpDropped.c)
 *     Endpoint_OnResetSetDequeuePointer @ 0x1C003A294 (Endpoint_OnResetSetDequeuePointer.c)
 *     Endpoint_SM_ResetEndpoint @ 0x1C003A714 (Endpoint_SM_ResetEndpoint.c)
 *     UsbDevice_DisableCompletion @ 0x1C0046A44 (UsbDevice_DisableCompletion.c)
 *     UsbDevice_ReconfigureEndpoint @ 0x1C00477DC (UsbDevice_ReconfigureEndpoint.c)
 *     UsbDevice_SendStopEndpointToOffloadedEndpoint @ 0x1C0047BF8 (UsbDevice_SendStopEndpointToOffloadedEndpoint.c)
 *     UsbDevice_SetResourceAssignment @ 0x1C0047CA0 (UsbDevice_SetResourceAssignment.c)
 *     UsbDevice_UcxEvtDisable @ 0x1C0047F60 (UsbDevice_UcxEvtDisable.c)
 * Callees:
 *     Controller_LowerAndTrackIrql @ 0x1C00052C8 (Controller_LowerAndTrackIrql.c)
 *     Controller_RaiseAndTrackIrql @ 0x1C0005358 (Controller_RaiseAndTrackIrql.c)
 *     DynamicLock_Release @ 0x1C0006D40 (DynamicLock_Release.c)
 *     Command_InternalSendCommand @ 0x1C0006D80 (Command_InternalSendCommand.c)
 *     DynamicLock_Acquire @ 0x1C0007340 (DynamicLock_Acquire.c)
 *     Controller_IsControllerAccessible @ 0x1C0007380 (Controller_IsControllerAccessible.c)
 *     _guard_dispatch_icall_nop @ 0x1C001BCF0 (_guard_dispatch_icall_nop.c)
 *     WPP_RECORDER_SF_qL @ 0x1C002FE70 (WPP_RECORDER_SF_qL.c)
 */

char __fastcall Command_SendCommand(__int64 a1, __int64 a2)
{
  int v4; // edx
  char v5; // si
  __int64 v6; // rcx
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // rcx
  unsigned int v10; // ebp
  __int64 v11; // rdx
  __int64 v12; // r8
  char result; // al
  __int64 (__fastcall *v14)(__int64, __int64); // rax
  __int64 v15; // rdx

  if ( !(unsigned __int8)Controller_IsControllerAccessible(*(_QWORD *)(a1 + 8)) )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v4) = 4;
      WPP_RECORDER_SF_qL(
        *(_QWORD *)(a1 + 16),
        v4,
        7,
        58,
        (__int64)&WPP_72168dd6ef593f221f3405957586a4e9_Traceguids,
        a2,
        (unsigned __int8)HIBYTE(*(_WORD *)(a2 + 36)) >> 2);
    }
    *(_BYTE *)(a2 + 60) = 0;
    goto LABEL_22;
  }
  v5 = 0;
  if ( KeGetCurrentIrql() == 2 )
  {
    v6 = *(_QWORD *)(a1 + 8);
    if ( *(_BYTE *)(v6 + 553) )
    {
      Controller_LowerAndTrackIrql((_QWORD *)v6);
      v5 = 1;
    }
  }
  DynamicLock_Acquire(*(_QWORD *)(a1 + 112));
  v9 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 168LL);
  if ( v9 && (v14 = *(__int64 (__fastcall **)(__int64, __int64))(v9 + 16)) != 0LL )
    v10 = v14(v9, a2);
  else
    v10 = 4;
  if ( v10 != 4 )
  {
    DynamicLock_Release(*(_QWORD *)(a1 + 112), v7, v8);
    if ( v5 )
      Controller_RaiseAndTrackIrql(*(_QWORD *)(a1 + 8));
    v15 = v10;
    return (*(__int64 (__fastcall **)(__int64, __int64, _QWORD))(a2 + 40))(a2, v15, 0LL);
  }
  if ( *(_DWORD *)(a1 + 36) == 5 )
  {
    DynamicLock_Release(*(_QWORD *)(a1 + 112), v7, v8);
    if ( v5 )
      Controller_RaiseAndTrackIrql(*(_QWORD *)(a1 + 8));
LABEL_22:
    v15 = 3LL;
    return (*(__int64 (__fastcall **)(__int64, __int64, _QWORD))(a2 + 40))(a2, v15, 0LL);
  }
  Command_InternalSendCommand(a1, a2, v8);
  result = DynamicLock_Release(*(_QWORD *)(a1 + 112), v11, v12);
  if ( v5 )
    return Controller_RaiseAndTrackIrql(*(_QWORD *)(a1 + 8));
  return result;
}
