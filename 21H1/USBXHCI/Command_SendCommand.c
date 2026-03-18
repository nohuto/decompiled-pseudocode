/*
 * XREFs of Command_SendCommand @ 0x1C00068E0
 * Callers:
 *     UsbDevice_SendConfigureEndpointCommand @ 0x1C0005C40 (UsbDevice_SendConfigureEndpointCommand.c)
 *     UsbDevice_EndpointsConfigureCompletion @ 0x1C0006F40 (UsbDevice_EndpointsConfigureCompletion.c)
 *     UsbDevice_UcxEvtEnable @ 0x1C000DF00 (UsbDevice_UcxEvtEnable.c)
 *     UsbDevice_EnableCompletion @ 0x1C000EEE0 (UsbDevice_EnableCompletion.c)
 *     UsbDevice_SetAddressCompletion @ 0x1C000F010 (UsbDevice_SetAddressCompletion.c)
 *     Endpoint_SM_SendStopEndpointCommand @ 0x1C000F288 (Endpoint_SM_SendStopEndpointCommand.c)
 *     Endpoint_OnCancelSetDequeuePointer @ 0x1C000F664 (Endpoint_OnCancelSetDequeuePointer.c)
 *     UsbDevice_UcxEvtReset @ 0x1C000F9F0 (UsbDevice_UcxEvtReset.c)
 *     UsbDevice_SetAddress @ 0x1C000FDE0 (UsbDevice_SetAddress.c)
 *     Endpoint_UcxEvtDefaultEndpointUpdate @ 0x1C0014FE0 (Endpoint_UcxEvtDefaultEndpointUpdate.c)
 *     UsbDevice_UcxEvtUpdate @ 0x1C0017640 (UsbDevice_UcxEvtUpdate.c)
 *     Endpoint_ControlEndpointResetCompletion @ 0x1C0018350 (Endpoint_ControlEndpointResetCompletion.c)
 *     Endpoint_SM_ResetControlEndpoint @ 0x1C00189F4 (Endpoint_SM_ResetControlEndpoint.c)
 *     Command_SendInternalCommandSynchronously @ 0x1C002DF68 (Command_SendInternalCommandSynchronously.c)
 *     Endpoint_OnCancelEndpointConfigure @ 0x1C0037F38 (Endpoint_OnCancelEndpointConfigure.c)
 *     Endpoint_OnCancelEndpointConfigureCompletion_EpDropped @ 0x1C00382B0 (Endpoint_OnCancelEndpointConfigureCompletion_EpDropped.c)
 *     Endpoint_OnResetEndpointConfigure @ 0x1C00384B8 (Endpoint_OnResetEndpointConfigure.c)
 *     Endpoint_OnResetEndpointConfigureCompletion_EpDropped @ 0x1C0038900 (Endpoint_OnResetEndpointConfigureCompletion_EpDropped.c)
 *     Endpoint_OnResetSetDequeuePointer @ 0x1C0038DB4 (Endpoint_OnResetSetDequeuePointer.c)
 *     Endpoint_SM_ResetEndpoint @ 0x1C0039234 (Endpoint_SM_ResetEndpoint.c)
 *     UsbDevice_DisableCompletion @ 0x1C0045554 (UsbDevice_DisableCompletion.c)
 *     UsbDevice_ReconfigureEndpoint @ 0x1C00462EC (UsbDevice_ReconfigureEndpoint.c)
 *     UsbDevice_SendStopEndpointToOffloadedEndpoint @ 0x1C0046708 (UsbDevice_SendStopEndpointToOffloadedEndpoint.c)
 *     UsbDevice_SetResourceAssignment @ 0x1C00467B0 (UsbDevice_SetResourceAssignment.c)
 *     UsbDevice_UcxEvtDisable @ 0x1C0046A60 (UsbDevice_UcxEvtDisable.c)
 * Callees:
 *     Controller_LowerAndTrackIrql @ 0x1C00052C8 (Controller_LowerAndTrackIrql.c)
 *     Controller_RaiseAndTrackIrql @ 0x1C0005358 (Controller_RaiseAndTrackIrql.c)
 *     DynamicLock_Release @ 0x1C0006998 (DynamicLock_Release.c)
 *     Command_InternalSendCommand @ 0x1C00069D8 (Command_InternalSendCommand.c)
 *     DynamicLock_Acquire @ 0x1C0006DD0 (DynamicLock_Acquire.c)
 *     Controller_IsControllerAccessible @ 0x1C0006E10 (Controller_IsControllerAccessible.c)
 *     _guard_dispatch_icall_nop @ 0x1C00191C0 (_guard_dispatch_icall_nop.c)
 *     WPP_RECORDER_SF_qL @ 0x1C002E990 (WPP_RECORDER_SF_qL.c)
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
        (__int64)&WPP_36fa723b951d376375e8eba1d8934b4f_Traceguids,
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
    if ( *(_BYTE *)(v6 + 537) )
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
