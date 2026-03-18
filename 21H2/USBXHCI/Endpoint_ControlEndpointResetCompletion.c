/*
 * XREFs of Endpoint_ControlEndpointResetCompletion @ 0x1C0037F40
 * Callers:
 *     <none>
 * Callees:
 *     TR_InitializeTransferRing @ 0x1C00013FC (TR_InitializeTransferRing.c)
 *     Command_SendCommand @ 0x1C0003D94 (Command_SendCommand.c)
 *     WPP_RECORDER_SF_DD @ 0x1C00043B8 (WPP_RECORDER_SF_DD.c)
 *     Endpoint_GetDequeuePointer @ 0x1C0004B68 (Endpoint_GetDequeuePointer.c)
 *     ESM_AddEvent @ 0x1C0005174 (ESM_AddEvent.c)
 *     memset @ 0x1C0019CC0 (memset.c)
 *     WPP_RECORDER_SF_ddL @ 0x1C002F238 (WPP_RECORDER_SF_ddL.c)
 *     Controller_HwVerifierBreakIfEnabled @ 0x1C0031C54 (Controller_HwVerifierBreakIfEnabled.c)
 *     Controller_ReportFatalError @ 0x1C0032C20 (Controller_ReportFatalError.c)
 *     WPP_RECORDER_SF_ddi @ 0x1C003B904 (WPP_RECORDER_SF_ddi.c)
 */

void __fastcall Endpoint_ControlEndpointResetCompletion(unsigned __int8 *a1, int a2, __int128 *a3)
{
  __int64 v3; // rbx
  int v6; // ecx
  __int64 v7; // rsi
  unsigned int v8; // r10d
  int v9; // r10d
  int v10; // r8d
  int v11; // edx

  v3 = *((_QWORD *)a1 + 6);
  if ( a2 == 3 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(a2) = 4;
      WPP_RECORDER_SF_DD(
        *(_QWORD *)(v3 + 80),
        a2,
        13,
        84,
        (__int64)&WPP_60b6c7b69d133891580a7186b105caca_Traceguids,
        *(_BYTE *)(*(_QWORD *)(v3 + 16) + 135LL),
        *(_DWORD *)(v3 + 144));
    }
LABEL_8:
    _m_prefetchw((const void *)(v3 + 32));
    if ( (_InterlockedOr((volatile signed __int32 *)(v3 + 32), 2u) & 2) == 0 )
      ESM_AddEvent((KSPIN_LOCK *)(v3 + 288), 12);
    return;
  }
  v6 = a1[60];
  if ( (_BYTE)v6 != 1 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_ddL(
        *(_QWORD *)(v3 + 80),
        2u,
        0xDu,
        0x55u,
        (__int64)&WPP_60b6c7b69d133891580a7186b105caca_Traceguids,
        *(unsigned __int8 *)(*(_QWORD *)(v3 + 16) + 135LL),
        *(_DWORD *)(v3 + 144),
        v6);
    Controller_HwVerifierBreakIfEnabled(
      *(_QWORD **)v3,
      *(_QWORD *)(v3 + 8),
      *(_QWORD *)(v3 + 24),
      256LL,
      "Endpoint Reset Command failed",
      (__int128 *)(a1 + 24),
      a3);
    Controller_ReportFatalError(*(_QWORD *)v3, 2, 4102, 0LL, *(_QWORD *)(v3 + 16), v3, 0LL);
    goto LABEL_8;
  }
  v7 = *(_QWORD *)(*(_QWORD *)v3 + 144LL);
  TR_InitializeTransferRing(*(_QWORD *)(v3 + 88));
  memset(a1, 0, 0x60uLL);
  v8 = *((_DWORD *)a1 + 9) & 0xFFFF43FF;
  *((_QWORD *)a1 + 5) = Endpoint_ControlEndpointResetSetDequeuePointerCompletion;
  *((_QWORD *)a1 + 6) = v3;
  *((_DWORD *)a1 + 9) = v8 | 0x4000;
  *((_QWORD *)a1 + 3) = Endpoint_GetDequeuePointer(v3, 0);
  *((_DWORD *)a1 + 9) = v9 ^ (v9 ^ (*(_DWORD *)(v3 + 144) << 16)) & 0x1F0000;
  v10 = *(unsigned __int8 *)(*(_QWORD *)(v3 + 16) + 135LL);
  a1[39] = v10;
  *((_QWORD *)a1 + 9) = 0LL;
  *((_QWORD *)a1 + 10) = 0LL;
  *((_QWORD *)a1 + 11) = 0LL;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v11 = *((_WORD *)a1 + 19) & 0x1F;
    LOBYTE(v11) = 4;
    WPP_RECORDER_SF_ddi(*(_QWORD *)(v3 + 80), v11, v10, 86);
  }
  Command_SendCommand(v7, (__int64)a1);
}
