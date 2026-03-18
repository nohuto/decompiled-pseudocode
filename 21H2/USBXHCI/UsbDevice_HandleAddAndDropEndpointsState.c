/*
 * XREFs of UsbDevice_HandleAddAndDropEndpointsState @ 0x1C000254C
 * Callers:
 *     UsbDevice_QueueConfigureEndpointEvent @ 0x1C000239C (UsbDevice_QueueConfigureEndpointEvent.c)
 * Callees:
 *     UsbDevice_InitializeInputContextForAddDropEndpoints @ 0x1C0001F74 (UsbDevice_InitializeInputContextForAddDropEndpoints.c)
 *     UsbDevice_QueueConfigureEndpointEvent @ 0x1C000239C (UsbDevice_QueueConfigureEndpointEvent.c)
 *     UsbDevice_SendConfigureEndpointCommand @ 0x1C0002A5C (UsbDevice_SendConfigureEndpointCommand.c)
 *     WPP_RECORDER_SF_DD @ 0x1C00043B8 (WPP_RECORDER_SF_DD.c)
 *     _guard_dispatch_icall_nop @ 0x1C00199B0 (_guard_dispatch_icall_nop.c)
 *     TR_ReAllocateTransferRingSegmentsForOffload @ 0x1C003FD80 (TR_ReAllocateTransferRingSegmentsForOffload.c)
 */

__int64 __fastcall UsbDevice_HandleAddAndDropEndpointsState(__int64 a1, __int64 a2)
{
  int TransferRingSegmentsForOffload; // esi
  __int64 v5; // r8
  __int64 v6; // r9
  unsigned int *v8; // rbp
  unsigned int v9; // r14d
  __int64 v10; // rsi
  __int64 v11; // rax
  int v12; // edx

  if ( *(_DWORD *)(*(_QWORD *)(a1 + 8) + 588LL) == 1 && (v8 = *(unsigned int **)(a2 + 88), v9 = 0, *(_DWORD *)(a2 + 84)) )
  {
    while ( 1 )
    {
      v10 = 0LL;
      if ( *(_DWORD *)(a2 + 24) )
      {
        while ( 1 )
        {
          v11 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, void *))(WdfFunctions_01023 + 1616))(
                  WdfDriverGlobals,
                  *(_QWORD *)(*(_QWORD *)(a2 + 32) + 8 * v10),
                  off_1C00611A8);
          if ( *(unsigned __int8 *)(v11 + 98) == *((_WORD *)v8 + 2) )
            break;
          v10 = (unsigned int)(v10 + 1);
          if ( (unsigned int)v10 >= *(_DWORD *)(a2 + 24) )
            goto LABEL_8;
        }
        TransferRingSegmentsForOffload = TR_ReAllocateTransferRingSegmentsForOffload(*(_QWORD *)(v11 + 88));
        if ( TransferRingSegmentsForOffload < 0 )
          break;
      }
LABEL_8:
      ++v9;
      v8 = (unsigned int *)((char *)v8 + *v8);
      if ( v9 >= *(_DWORD *)(a2 + 84) )
        goto LABEL_2;
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v12) = 2;
      WPP_RECORDER_SF_DD(
        *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL),
        v12,
        12,
        45,
        (__int64)&WPP_5cc87a4a737631244eec1c43efcd9051_Traceguids,
        *(_BYTE *)(a1 + 135),
        TransferRingSegmentsForOffload);
    }
  }
  else
  {
LABEL_2:
    TransferRingSegmentsForOffload = UsbDevice_InitializeInputContextForAddDropEndpoints(a1, a2, 0);
    if ( TransferRingSegmentsForOffload >= 0 )
      return UsbDevice_SendConfigureEndpointCommand(a1, 0LL, v5, v6);
  }
  if ( *(_DWORD *)(a1 + 448) == 259 )
    *(_DWORD *)(a1 + 448) = TransferRingSegmentsForOffload;
  return UsbDevice_QueueConfigureEndpointEvent(a1, 2LL);
}
