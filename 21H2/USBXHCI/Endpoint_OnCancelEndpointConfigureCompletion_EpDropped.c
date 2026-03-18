/*
 * XREFs of Endpoint_OnCancelEndpointConfigureCompletion_EpDropped @ 0x1C0038DA0
 * Callers:
 *     <none>
 * Callees:
 *     CommonBuffer_ReleaseBuffer @ 0x1C000182C (CommonBuffer_ReleaseBuffer.c)
 *     Command_SendCommand @ 0x1C0003D94 (Command_SendCommand.c)
 *     WPP_RECORDER_SF_DD @ 0x1C00043B8 (WPP_RECORDER_SF_DD.c)
 *     Endpoint_GetDequeuePointer @ 0x1C0004B68 (Endpoint_GetDequeuePointer.c)
 *     ESM_AddEvent @ 0x1C0005174 (ESM_AddEvent.c)
 *     WPP_RECORDER_SF_ddL @ 0x1C002F238 (WPP_RECORDER_SF_ddL.c)
 *     Controller_ReportFatalError @ 0x1C0032C20 (Controller_ReportFatalError.c)
 *     Endpoint_SetUpConfigureEndpointCommand @ 0x1C003A428 (Endpoint_SetUpConfigureEndpointCommand.c)
 */

void __fastcall Endpoint_OnCancelEndpointConfigureCompletion_EpDropped(__int64 a1, int a2)
{
  __int64 v2; // rdi
  __int64 v4; // rcx
  __int64 v5; // rsi
  int v6; // edx
  __int64 DequeuePointer; // rax
  __int64 v8; // [rsp+50h] [rbp+8h] BYREF

  v2 = *(_QWORD *)(a1 + 48);
  v8 = 0LL;
  v4 = *(_QWORD *)v2;
  v5 = *(_QWORD *)(*(_QWORD *)v2 + 144LL);
  if ( a2 == 3 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(a2) = 4;
      WPP_RECORDER_SF_DD(
        *(_QWORD *)(v2 + 80),
        a2,
        13,
        71,
        (__int64)&WPP_60b6c7b69d133891580a7186b105caca_Traceguids,
        *(_BYTE *)(*(_QWORD *)(v2 + 16) + 135LL),
        *(_DWORD *)(v2 + 144));
    }
LABEL_8:
    CommonBuffer_ReleaseBuffer(*(_QWORD *)(*(_QWORD *)v2 + 120LL), *(_QWORD *)(v2 + 256));
    *(_QWORD *)(v2 + 256) = 0LL;
    _m_prefetchw((const void *)(v2 + 32));
    if ( (_InterlockedOr((volatile signed __int32 *)(v2 + 32), 2u) & 2) == 0 )
      ESM_AddEvent((KSPIN_LOCK *)(v2 + 288), 12);
    return;
  }
  v6 = *(unsigned __int8 *)(a1 + 60);
  if ( (_BYTE)v6 != 1 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      WPP_RECORDER_SF_ddL(
        *(_QWORD *)(v2 + 80),
        2u,
        0xDu,
        0x48u,
        (__int64)&WPP_60b6c7b69d133891580a7186b105caca_Traceguids,
        *(unsigned __int8 *)(*(_QWORD *)(v2 + 16) + 135LL),
        *(_DWORD *)(v2 + 144),
        *(unsigned __int8 *)(a1 + 60));
      v4 = *(_QWORD *)v2;
    }
    Controller_ReportFatalError(v4, 2, 4119, 0LL, *(_QWORD *)(v2 + 16), v2, 0LL);
    goto LABEL_8;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v6) = 4;
    WPP_RECORDER_SF_DD(
      *(_QWORD *)(v2 + 80),
      v6,
      13,
      73,
      (__int64)&WPP_60b6c7b69d133891580a7186b105caca_Traceguids,
      *(_BYTE *)(*(_QWORD *)(v2 + 16) + 135LL),
      *(_DWORD *)(v2 + 144));
  }
  Endpoint_SetUpConfigureEndpointCommand(
    v2,
    0,
    (int)Endpoint_OnCancelEndpointConfigureCompletion,
    v2,
    *(_QWORD *)(v2 + 256),
    0LL,
    (__int64)&v8,
    (void *)(v2 + 160));
  DequeuePointer = Endpoint_GetDequeuePointer(v2, 0);
  *(_QWORD *)(v8 + 8) = DequeuePointer;
  Command_SendCommand(v5, v2 + 160);
}
