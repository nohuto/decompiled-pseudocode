/*
 * XREFs of UsbDevice_HandleAddAndDropEndpointsState @ 0x1C0007354
 * Callers:
 *     UsbDevice_QueueConfigureEndpointEvent @ 0x1C00071A4 (UsbDevice_QueueConfigureEndpointEvent.c)
 * Callees:
 *     WPP_RECORDER_SF_dd @ 0x1C0005520 (WPP_RECORDER_SF_dd.c)
 *     UsbDevice_InitializeInputContextForAddDropEndpoints @ 0x1C0005A48 (UsbDevice_InitializeInputContextForAddDropEndpoints.c)
 *     UsbDevice_SendConfigureEndpointCommand @ 0x1C0005C40 (UsbDevice_SendConfigureEndpointCommand.c)
 *     UsbDevice_QueueConfigureEndpointEvent @ 0x1C00071A4 (UsbDevice_QueueConfigureEndpointEvent.c)
 *     _guard_dispatch_icall_nop @ 0x1C00191C0 (_guard_dispatch_icall_nop.c)
 *     TR_ReAllocateTransferRingSegmentsForOffload @ 0x1C003ECEC (TR_ReAllocateTransferRingSegmentsForOffload.c)
 */

_UNKNOWN **__fastcall UsbDevice_HandleAddAndDropEndpointsState(__int64 a1, __int64 a2)
{
  _UNKNOWN **result; // rax
  int TransferRingSegmentsForOffload; // edi
  unsigned int *v6; // rbp
  unsigned int v7; // r14d
  __int64 v8; // rdi
  __int64 v9; // rax
  int v10; // edx

  if ( *(_DWORD *)(*(_QWORD *)(a1 + 8) + 572LL) == 1 && (v6 = *(unsigned int **)(a2 + 88), v7 = 0, *(_DWORD *)(a2 + 84)) )
  {
    while ( 1 )
    {
      v8 = 0LL;
      if ( *(_DWORD *)(a2 + 24) )
      {
        while ( 1 )
        {
          v9 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, void *))(WdfFunctions_01023 + 1616))(
                 WdfDriverGlobals,
                 *(_QWORD *)(*(_QWORD *)(a2 + 32) + 8 * v8),
                 off_1C00601A8);
          if ( *(unsigned __int8 *)(v9 + 98) == *((_WORD *)v6 + 2) )
            break;
          v8 = (unsigned int)(v8 + 1);
          if ( (unsigned int)v8 >= *(_DWORD *)(a2 + 24) )
            goto LABEL_10;
        }
        TransferRingSegmentsForOffload = TR_ReAllocateTransferRingSegmentsForOffload(*(_QWORD *)(v9 + 88));
        if ( TransferRingSegmentsForOffload < 0 )
          break;
      }
LABEL_10:
      ++v7;
      v6 = (unsigned int *)((char *)v6 + *v6);
      if ( v7 >= *(_DWORD *)(a2 + 84) )
        goto LABEL_2;
    }
    result = &WPP_RECORDER_INITIALIZED;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v10) = 2;
      result = (_UNKNOWN **)WPP_RECORDER_SF_dd(
                              *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL),
                              v10,
                              12,
                              45,
                              (__int64)&WPP_2d0c5f6bf4263c2e7a5f7f01b810c292_Traceguids,
                              *(_BYTE *)(a1 + 135),
                              TransferRingSegmentsForOffload);
    }
  }
  else
  {
LABEL_2:
    result = (_UNKNOWN **)UsbDevice_InitializeInputContextForAddDropEndpoints(a1, a2, 0);
    TransferRingSegmentsForOffload = (int)result;
    if ( (int)result >= 0 )
      result = (_UNKNOWN **)UsbDevice_SendConfigureEndpointCommand(a1, 0);
  }
  while ( TransferRingSegmentsForOffload < 0 )
  {
    if ( *(_DWORD *)(a1 + 448) == 259 )
      *(_DWORD *)(a1 + 448) = TransferRingSegmentsForOffload;
    result = (_UNKNOWN **)UsbDevice_QueueConfigureEndpointEvent(a1, 2LL);
  }
  return result;
}
