/*
 * XREFs of UsbDevice_QueueConfigureEndpointEvent @ 0x1C00071A4
 * Callers:
 *     UsbDevice_SendConfigureEndpointCommand @ 0x1C0005C40 (UsbDevice_SendConfigureEndpointCommand.c)
 *     UsbDevice_EndpointsConfigureCompletion @ 0x1C0006F40 (UsbDevice_EndpointsConfigureCompletion.c)
 *     UsbDevice_QueueConfigureEndpointEvent @ 0x1C00071A4 (UsbDevice_QueueConfigureEndpointEvent.c)
 *     UsbDevice_HandleAddAndDropEndpointsState @ 0x1C0007354 (UsbDevice_HandleAddAndDropEndpointsState.c)
 *     UsbDevice_UcxEvtEndpointsConfigure @ 0x1C00075B0 (UsbDevice_UcxEvtEndpointsConfigure.c)
 *     UsbDevice_SetDeviceDisabled @ 0x1C000A1DC (UsbDevice_SetDeviceDisabled.c)
 *     UsbDevice_DropEndpointsCompletion @ 0x1C0045890 (UsbDevice_DropEndpointsCompletion.c)
 *     UsbDevice_HandleAddEndpointsState @ 0x1C0045D2C (UsbDevice_HandleAddEndpointsState.c)
 *     UsbDevice_HandleDropEndpointsState @ 0x1C0045F1C (UsbDevice_HandleDropEndpointsState.c)
 *     UsbDevice_HandleSendStopEndpointToOffloadedEndpointsState @ 0x1C0045F78 (UsbDevice_HandleSendStopEndpointToOffloadedEndpointsState.c)
 *     UsbDevice_SetResourceAssignmentCompletion @ 0x1C0046870 (UsbDevice_SetResourceAssignmentCompletion.c)
 *     UsbDevice_StopEndpointToOffloadedEndpointCompletion @ 0x1C00469D0 (UsbDevice_StopEndpointToOffloadedEndpointCompletion.c)
 * Callees:
 *     UsbDevice_ValidateEndpointConfigureRequest @ 0x1C0005BA4 (UsbDevice_ValidateEndpointConfigureRequest.c)
 *     UsbDevice_SendConfigureEndpointCommand @ 0x1C0005C40 (UsbDevice_SendConfigureEndpointCommand.c)
 *     UsbDevice_QueueConfigureEndpointEvent @ 0x1C00071A4 (UsbDevice_QueueConfigureEndpointEvent.c)
 *     UsbDevice_HandleAddAndDropEndpointsState @ 0x1C0007354 (UsbDevice_HandleAddAndDropEndpointsState.c)
 *     UsbDevice_CompleteConfigureEndpointRequest @ 0x1C00073CC (UsbDevice_CompleteConfigureEndpointRequest.c)
 *     WPP_RECORDER_SF_ddd @ 0x1C0012BE0 (WPP_RECORDER_SF_ddd.c)
 *     Controller_ReportFatalError @ 0x1C00323C0 (Controller_ReportFatalError.c)
 *     WPP_RECORDER_SF_sds @ 0x1C003567C (WPP_RECORDER_SF_sds.c)
 *     UsbDevice_HandleAddEndpointsState @ 0x1C0045D2C (UsbDevice_HandleAddEndpointsState.c)
 *     UsbDevice_HandleAssignPinsForEndpointsToOffloadState @ 0x1C0045D80 (UsbDevice_HandleAssignPinsForEndpointsToOffloadState.c)
 *     UsbDevice_HandleDropEndpointsState @ 0x1C0045F1C (UsbDevice_HandleDropEndpointsState.c)
 *     UsbDevice_HandleSendStopEndpointToOffloadedEndpointsState @ 0x1C0045F78 (UsbDevice_HandleSendStopEndpointToOffloadedEndpointsState.c)
 *     UsbDevice_HandleUnassignPinsForOffloadedEndpointsState @ 0x1C0046078 (UsbDevice_HandleUnassignPinsForOffloadedEndpointsState.c)
 *     UsbDevice_HandleUnhandledEventReceivedState @ 0x1C00461C4 (UsbDevice_HandleUnhandledEventReceivedState.c)
 *     UsbDevice_NumberOfOffloadedEndpointsInDropEndpointsList @ 0x1C004624C (UsbDevice_NumberOfOffloadedEndpointsInDropEndpointsList.c)
 */

__int64 __fastcall UsbDevice_QueueConfigureEndpointEvent(__int64 a1, __int64 a2)
{
  __int64 v2; // r8
  _UNKNOWN **v3; // r9
  int v5; // ecx
  unsigned int v6; // ebp
  __int64 v7; // rsi
  int v8; // ebx
  int v9; // ecx
  int v10; // ecx
  int v11; // ebx
  int v12; // eax
  __int64 v13; // r8
  __int64 v14; // rdx
  int v16; // ebx
  int v17; // ebx
  int v18; // ebx
  int v19; // ebx
  int v20; // ebx
  int v21; // ecx
  int v22; // ecx
  int v23; // ecx
  int v24; // ecx
  int v25; // ebx
  int v26; // ecx
  int v27; // ecx
  int v28; // ecx
  int v29; // ecx
  int v30; // ebx
  int v31; // ebx
  int v32; // ebx
  int v33; // ebx
  char v34; // [rsp+30h] [rbp-18h]

  v2 = 14LL;
  v3 = &WPP_RECORDER_INITIALIZED;
  v5 = *(_DWORD *)(a1 + 600);
  v6 = 1;
  while ( 1 )
  {
    while ( 1 )
    {
      while ( 1 )
      {
        v7 = *(_QWORD *)(a1 + 592);
        v8 = 14;
        if ( v5 > 7 )
        {
          v23 = v5 - 8;
          if ( !v23 )
          {
            v10 = a2 - 1;
            if ( (_DWORD)a2 == 1 )
            {
LABEL_61:
              v8 = 10;
              goto LABEL_10;
            }
LABEL_63:
            if ( v10 == 1 )
              v8 = 12;
            goto LABEL_10;
          }
          v24 = v23 - 1;
          if ( !v24 )
          {
            v22 = a2 - 3;
            if ( (_DWORD)a2 == 3 )
              goto LABEL_61;
LABEL_28:
            if ( v22 == 1 )
              v8 = 11;
            goto LABEL_10;
          }
          if ( (unsigned int)(v24 - 1) <= 1 )
          {
            v8 = 12;
            if ( (unsigned int)(a2 - 1) > 1 )
              v8 = 14;
          }
        }
        else if ( v5 == 7 )
        {
          if ( (_DWORD)a2 == 3 )
          {
            v8 = 8;
          }
          else if ( (_DWORD)a2 == 4 )
          {
            v8 = 9;
          }
        }
        else if ( v5 )
        {
          v9 = v5 - 1;
          if ( !v9 )
          {
            v10 = a2 - 1;
            if ( (_DWORD)a2 == 1 )
            {
              v8 = v10 + 2;
              goto LABEL_10;
            }
            goto LABEL_63;
          }
          v21 = v9 - 1;
          if ( !v21 )
          {
            v22 = a2 - 3;
            if ( (_DWORD)a2 == 3 )
            {
              v8 = 3;
              goto LABEL_10;
            }
            goto LABEL_28;
          }
          v26 = v21 - 1;
          if ( v26 )
          {
            v27 = v26 - 1;
            if ( v27 )
            {
              v28 = v27 - 1;
              if ( v28 )
              {
                if ( v28 != 1 )
                  goto LABEL_10;
                v29 = a2 - 1;
                if ( (_DWORD)a2 == 1 )
                  goto LABEL_53;
              }
              else
              {
                v29 = a2 - 1;
                if ( (_DWORD)a2 == 1 )
                {
                  v8 = v29 + 6;
                  goto LABEL_10;
                }
              }
            }
            else
            {
              v29 = a2 - 1;
              if ( (_DWORD)a2 == 1 )
              {
                v8 = v29 + 5;
                goto LABEL_10;
              }
            }
            if ( v29 == 1 )
              v8 = 13;
          }
          else
          {
            if ( (_DWORD)a2 == 3 )
            {
              v8 = 4;
              goto LABEL_10;
            }
            if ( (_DWORD)a2 == 4 )
LABEL_53:
              v8 = 7;
          }
        }
        else
        {
          v8 = 1;
          if ( (_DWORD)a2 != 5 )
            v8 = 14;
        }
LABEL_10:
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
        {
          v34 = a2;
          LOBYTE(a2) = 5;
          WPP_RECORDER_SF_ddd(
            *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL),
            a2,
            12,
            46,
            (__int64)&WPP_2d0c5f6bf4263c2e7a5f7f01b810c292_Traceguids,
            *(_DWORD *)(a1 + 600),
            v34,
            v8);
          v2 = 14LL;
          v3 = &WPP_RECORDER_INITIALIZED;
        }
        *(_DWORD *)(a1 + 600) = v8;
        if ( v8 <= 7 )
          break;
        v16 = v8 - 8;
        if ( !v16 )
          return UsbDevice_HandleAssignPinsForEndpointsToOffloadState(a1, v7, 14LL, &WPP_RECORDER_INITIALIZED);
        v17 = v16 - 1;
        if ( v17 )
        {
          v18 = v17 - 1;
          if ( !v18 )
            return UsbDevice_HandleAddEndpointsState(a1, v7, 14LL, &WPP_RECORDER_INITIALIZED);
          v19 = v18 - 1;
          if ( !v19 )
            return UsbDevice_HandleAddAndDropEndpointsState(a1, v7, 14LL, &WPP_RECORDER_INITIALIZED);
          v20 = v19 - 1;
          if ( !v20 )
            return UsbDevice_CompleteConfigureEndpointRequest(a1, a2, v2, v3);
          v33 = v20 - 1;
          if ( v33 )
          {
            if ( v33 != 1 )
              goto LABEL_82;
            return UsbDevice_HandleUnhandledEventReceivedState(a1, a2, 14LL, &WPP_RECORDER_INITIALIZED);
          }
          else
          {
            UsbDevice_CompleteConfigureEndpointRequest(a1, a2, 14LL, &WPP_RECORDER_INITIALIZED);
            return Controller_ReportFatalError(*(_QWORD *)(a1 + 8), 2, 4119, 0, 0LL, 0LL, 0LL);
          }
        }
        a2 = 4 - (unsigned int)(*(_BYTE *)(a1 + 452) != 0);
        v5 = 9;
      }
      if ( v8 != 7 )
        break;
      a2 = 4 - (unsigned int)(*(_DWORD *)(v7 + 84) != 0);
      v5 = 7;
    }
    if ( !v8 )
      return UsbDevice_SendConfigureEndpointCommand(a1, 5);
    v11 = v8 - 1;
    if ( !v11 )
    {
      v12 = UsbDevice_ValidateEndpointConfigureRequest(a1, v7);
      if ( v12 < 0 )
      {
        if ( *(_DWORD *)(a1 + 448) == 259 )
          *(_DWORD *)(a1 + 448) = v12;
        v6 = 2;
      }
      v14 = v6;
      return UsbDevice_QueueConfigureEndpointEvent(a1, v14, v13);
    }
    v25 = v11 - 1;
    if ( v25 )
      break;
    a2 = (unsigned int)(*(_DWORD *)(*(_QWORD *)(a1 + 8) + 572LL) != 2) + 3;
    v5 = 2;
  }
  v30 = v25 - 1;
  if ( !v30 )
  {
    v14 = 4
        - (unsigned int)((unsigned int)UsbDevice_NumberOfOffloadedEndpointsInDropEndpointsList(
                                         v7,
                                         a2,
                                         14LL,
                                         &WPP_RECORDER_INITIALIZED) != 0);
    return UsbDevice_QueueConfigureEndpointEvent(a1, v14, v13);
  }
  v31 = v30 - 1;
  if ( !v31 )
    return UsbDevice_HandleSendStopEndpointToOffloadedEndpointsState(a1, v7, 14LL, &WPP_RECORDER_INITIALIZED);
  v32 = v31 - 1;
  if ( v32 )
  {
    if ( v32 == 1 )
      return UsbDevice_HandleUnassignPinsForOffloadedEndpointsState(a1, v7, 14LL, &WPP_RECORDER_INITIALIZED);
LABEL_82:
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_sds(WPP_GLOBAL_Control->DeviceExtension, a2, 14, (unsigned int)&WPP_RECORDER_INITIALIZED);
    if ( !KdRefreshDebuggerNotPresent() )
      __debugbreak();
    if ( *(_DWORD *)(a1 + 448) == 259 )
      *(_DWORD *)(a1 + 448) = -1073741595;
    return UsbDevice_CompleteConfigureEndpointRequest(a1, a2, v2, v3);
  }
  return UsbDevice_HandleDropEndpointsState(a1, v7, 14LL, &WPP_RECORDER_INITIALIZED);
}
