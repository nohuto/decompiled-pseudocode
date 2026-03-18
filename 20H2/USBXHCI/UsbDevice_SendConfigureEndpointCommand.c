/*
 * XREFs of UsbDevice_SendConfigureEndpointCommand @ 0x1C0005FDC
 * Callers:
 *     UsbDevice_QueueConfigureEndpointEvent @ 0x1C0007714 (UsbDevice_QueueConfigureEndpointEvent.c)
 *     UsbDevice_HandleAddAndDropEndpointsState @ 0x1C00078C4 (UsbDevice_HandleAddAndDropEndpointsState.c)
 *     UsbDevice_HandleAddEndpointsState @ 0x1C004721C (UsbDevice_HandleAddEndpointsState.c)
 *     UsbDevice_HandleDropEndpointsState @ 0x1C004740C (UsbDevice_HandleDropEndpointsState.c)
 * Callees:
 *     Command_SendCommand @ 0x1C0006C80 (Command_SendCommand.c)
 *     UsbDevice_QueueConfigureEndpointEvent @ 0x1C0007714 (UsbDevice_QueueConfigureEndpointEvent.c)
 *     memset @ 0x1C001BFC0 (memset.c)
 */

__int64 __fastcall UsbDevice_SendConfigureEndpointCommand(__int64 a1, int a2)
{
  __int64 v3; // rsi
  int v5; // eax
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 (__fastcall *v8)(); // rcx
  unsigned int v9; // ecx
  __int64 v10; // rcx
  __int64 v11; // rcx
  __int64 v12; // rcx
  __int64 v13; // rcx

  v3 = a1 + 456;
  memset((void *)(a1 + 456), 0, 0x60uLL);
  v5 = 0;
  v6 = *(_QWORD *)((*(_BYTE *)(a1 + 657) != 0 ? 648LL : 640LL) + a1);
  if ( v6 )
    v7 = *(_QWORD *)(v6 + 16);
  else
    v7 = 0LL;
  if ( (a2 & 0xFFFFFFFD) == 0 )
  {
    v8 = UsbDevice_EndpointsConfigureCompletion;
LABEL_5:
    *(_QWORD *)(a1 + 496) = v8;
    v9 = *(_DWORD *)(a1 + 492) & 0xFFFF31FF;
    *(_QWORD *)(a1 + 504) = a1;
    *(_DWORD *)(a1 + 492) = v9 | 0x3000;
    *(_BYTE *)(a1 + 495) = *(_BYTE *)(a1 + 135);
    v10 = *(_QWORD *)((*(_BYTE *)(a1 + 657) != 0 ? 648LL : 640LL) + a1);
    if ( v10 )
      v11 = *(_QWORD *)(v10 + 24);
    else
      v11 = 0LL;
    *(_QWORD *)(a1 + 480) = v11;
    *(_QWORD *)(a1 + 528) = v7;
    v12 = *(_QWORD *)((*(_BYTE *)(a1 + 657) != 0 ? 648LL : 640LL) + a1);
    if ( v12 )
      v5 = *(_DWORD *)(v12 + 44);
    v13 = *(_QWORD *)(a1 + 8);
    *(_DWORD *)(a1 + 536) = v5;
    *(_DWORD *)(a1 + 540) = 1;
    *(_QWORD *)(a1 + 544) = a1;
    return Command_SendCommand(*(_QWORD *)(v13 + 144), v3);
  }
  if ( a2 == 1 )
  {
    v8 = UsbDevice_DropEndpointsCompletion;
    goto LABEL_5;
  }
  if ( *(_DWORD *)(a1 + 448) == 259 )
    *(_DWORD *)(a1 + 448) = -1073741595;
  return UsbDevice_QueueConfigureEndpointEvent(a1, 2LL, v7);
}
