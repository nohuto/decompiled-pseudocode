/*
 * XREFs of Endpoint_ControlEndpointResetCompletion @ 0x1C00195F0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_dd @ 0x1C0005520 (WPP_RECORDER_SF_dd.c)
 *     TR_InitializeTransferRing @ 0x1C0005758 (TR_InitializeTransferRing.c)
 *     Command_SendCommand @ 0x1C0006C80 (Command_SendCommand.c)
 *     Endpoint_GetDequeuePointer @ 0x1C0008334 (Endpoint_GetDequeuePointer.c)
 *     ESM_AddEvent @ 0x1C0008850 (ESM_AddEvent.c)
 *     WPP_RECORDER_SF_ddL @ 0x1C0015850 (WPP_RECORDER_SF_ddL.c)
 *     WPP_RECORDER_SF_ddi @ 0x1C0019704 (WPP_RECORDER_SF_ddi.c)
 *     memset @ 0x1C001BFC0 (memset.c)
 *     Controller_HwVerifierBreakIfEnabled @ 0x1C00329C4 (Controller_HwVerifierBreakIfEnabled.c)
 *     Controller_ReportFatalError @ 0x1C00338A0 (Controller_ReportFatalError.c)
 */

void __fastcall Endpoint_ControlEndpointResetCompletion(_QWORD *a1, int a2, __int64 a3)
{
  __int64 v3; // rbx
  char v6; // cl
  __int64 v7; // rsi
  unsigned int v8; // r10d
  int v9; // r10d
  int v10; // r8d
  int v11; // edx
  int v12; // edx

  v3 = a1[6];
  if ( a2 == 3 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(a2) = 4;
      WPP_RECORDER_SF_dd(
        *(_QWORD *)(v3 + 80),
        a2,
        13,
        84,
        (__int64)&WPP_e17193f9e7953bf0d59f9dd2738aa1c9_Traceguids,
        *(_BYTE *)(*(_QWORD *)(v3 + 16) + 135LL),
        *(_DWORD *)(v3 + 144));
    }
  }
  else
  {
    v6 = *((_BYTE *)a1 + 60);
    if ( v6 == 1 )
    {
      v7 = *(_QWORD *)(*(_QWORD *)v3 + 144LL);
      TR_InitializeTransferRing(*(_QWORD *)(v3 + 88));
      memset(a1, 0, 0x60uLL);
      v8 = *((_DWORD *)a1 + 9) & 0xFFFF43FF;
      a1[5] = Endpoint_ControlEndpointResetSetDequeuePointerCompletion;
      a1[6] = v3;
      *((_DWORD *)a1 + 9) = v8 | 0x4000;
      a1[3] = Endpoint_GetDequeuePointer(v3, 0);
      *((_DWORD *)a1 + 9) = v9 ^ (v9 ^ (*(_DWORD *)(v3 + 144) << 16)) & 0x1F0000;
      v10 = *(unsigned __int8 *)(*(_QWORD *)(v3 + 16) + 135LL);
      *((_BYTE *)a1 + 39) = v10;
      a1[9] = 0LL;
      a1[10] = 0LL;
      a1[11] = 0LL;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v11 = *((_WORD *)a1 + 19) & 0x1F;
        LOBYTE(v11) = 4;
        WPP_RECORDER_SF_ddi(*(_QWORD *)(v3 + 80), v11, v10, 86);
      }
      Command_SendCommand(v7, (__int64)a1);
      return;
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v12 = *(unsigned __int8 *)(*(_QWORD *)(v3 + 16) + 135LL);
      LOBYTE(v12) = 2;
      WPP_RECORDER_SF_ddL(
        *(_QWORD *)(v3 + 80),
        v12,
        13,
        85,
        (__int64)&WPP_e17193f9e7953bf0d59f9dd2738aa1c9_Traceguids,
        *(_BYTE *)(*(_QWORD *)(v3 + 16) + 135LL),
        *(_DWORD *)(v3 + 144),
        v6);
    }
    Controller_HwVerifierBreakIfEnabled(
      *(_QWORD *)v3,
      *(_QWORD *)(v3 + 8),
      *(_QWORD *)(v3 + 24),
      256,
      (__int64)"Endpoint Reset Command failed",
      (__int64)(a1 + 3),
      a3);
    Controller_ReportFatalError(*(_QWORD *)v3, 2, 4102, 0, *(_QWORD *)(v3 + 16), v3, 0LL);
  }
  _m_prefetchw((const void *)(v3 + 32));
  if ( (_InterlockedOr((volatile signed __int32 *)(v3 + 32), 2u) & 2) == 0 )
    ESM_AddEvent((KSPIN_LOCK *)(v3 + 288), 12);
}
