/*
 * XREFs of Endpoint_OnResetEndpointConfigureCompletion_EpDropped @ 0x1C0038900
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_dd @ 0x1C0005520 (WPP_RECORDER_SF_dd.c)
 *     Command_SendCommand @ 0x1C00068E0 (Command_SendCommand.c)
 *     Endpoint_GetDequeuePointer @ 0x1C0007C48 (Endpoint_GetDequeuePointer.c)
 *     ESM_AddEvent @ 0x1C0007E70 (ESM_AddEvent.c)
 *     Endpoint_InitializeTransferRing @ 0x1C000F840 (Endpoint_InitializeTransferRing.c)
 *     WPP_RECORDER_SF_ddL @ 0x1C0016684 (WPP_RECORDER_SF_ddL.c)
 *     CommonBuffer_ReleaseBuffer @ 0x1C0018AA0 (CommonBuffer_ReleaseBuffer.c)
 *     Controller_ReportFatalError @ 0x1C00323C0 (Controller_ReportFatalError.c)
 *     XilEndpoint_CommitStreamContextArrayUpdates @ 0x1C0036A24 (XilEndpoint_CommitStreamContextArrayUpdates.c)
 *     XilEndpoint_FetchStreamContextArray @ 0x1C0036CE0 (XilEndpoint_FetchStreamContextArray.c)
 *     Endpoint_SetUpConfigureEndpointCommand @ 0x1C003980C (Endpoint_SetUpConfigureEndpointCommand.c)
 */

void __fastcall Endpoint_OnResetEndpointConfigureCompletion_EpDropped(__int64 a1, int a2)
{
  __int64 v2; // rsi
  __int64 *v4; // rdi
  __int64 v5; // rcx
  __int64 v6; // rbp
  int v7; // edx
  int v8; // edx
  __int64 v9; // rcx
  unsigned int i; // ebx
  __int64 DequeuePointer; // rax
  __int64 v12; // rdx
  __int64 v13; // rax
  __int64 v14; // [rsp+50h] [rbp+8h] BYREF

  v2 = *(_QWORD *)(a1 + 48);
  v14 = 0LL;
  v4 = *(__int64 **)v2;
  v5 = **(_QWORD **)v2;
  v6 = *(_QWORD *)(v5 + 144);
  if ( a2 == 3 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(a2) = 4;
      WPP_RECORDER_SF_dd(
        v4[10],
        a2,
        13,
        50,
        (__int64)&WPP_90fdb84eefba3b5477bce0ca4c98412a_Traceguids,
        *(_BYTE *)(v4[2] + 135),
        *((_DWORD *)v4 + 36));
    }
  }
  else
  {
    v7 = *(unsigned __int8 *)(a1 + 60);
    if ( (_BYTE)v7 == 1 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v7) = 4;
        WPP_RECORDER_SF_dd(
          v4[10],
          v7,
          13,
          52,
          (__int64)&WPP_90fdb84eefba3b5477bce0ca4c98412a_Traceguids,
          *(_BYTE *)(v4[2] + 135),
          *((_DWORD *)v4 + 36));
      }
      if ( (int)XilEndpoint_FetchStreamContextArray(v4[17]) >= 0 )
      {
        v9 = v4[17];
        for ( i = 1; i <= *(_DWORD *)(v9 + 8); v9 = v4[17] )
        {
          Endpoint_InitializeTransferRing(v4, i);
          DequeuePointer = Endpoint_GetDequeuePointer((__int64)v4, i);
          v12 = i++;
          *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v4[17] + 32) + 16LL) + 16 * v12) = DequeuePointer;
        }
        if ( (int)XilEndpoint_CommitStreamContextArrayUpdates(v9) >= 0 )
        {
          Endpoint_SetUpConfigureEndpointCommand(
            (int)v4,
            0,
            (int)Endpoint_OnResetEndpointConfigureCompletion,
            v2,
            *(_QWORD *)(v2 + 8),
            0LL,
            (__int64)&v14,
            (void *)(v2 + 16));
          v13 = Endpoint_GetDequeuePointer((__int64)v4, 0);
          *(_QWORD *)(v14 + 8) = v13;
          Command_SendCommand(v6, v2 + 16);
          return;
        }
      }
    }
    else
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v8 = *(unsigned __int8 *)(v4[2] + 135);
        LOBYTE(v8) = 2;
        WPP_RECORDER_SF_ddL(
          v4[10],
          v8,
          13,
          51,
          (__int64)&WPP_90fdb84eefba3b5477bce0ca4c98412a_Traceguids,
          *(_BYTE *)(v4[2] + 135),
          *((_DWORD *)v4 + 36),
          *(_BYTE *)(a1 + 60));
        v5 = *v4;
      }
      Controller_ReportFatalError(v5, 2, 4119, 0LL, v4[2], (__int64)v4, 0LL);
    }
  }
  CommonBuffer_ReleaseBuffer(*(_QWORD *)(*v4 + 120), *(_QWORD *)(v2 + 8));
  *(_QWORD *)(v2 + 8) = 0LL;
  *((_DWORD *)v4 + 70) = 0;
  _m_prefetchw(v4 + 4);
  if ( (_InterlockedOr((volatile signed __int32 *)v4 + 8, 2u) & 2) == 0 )
    ESM_AddEvent((KSPIN_LOCK *)v4 + 36, 12);
}
