/*
 * XREFs of ?ComputeAndDeliverMouseWheel@CMouseProcessor@@AEAAXAEBVCMouseEvent@1@@Z @ 0x1C01C18E0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C00678DC (WPP_RECORDER_SF_.c)
 *     ?AppCompatWheelRoutingRequested@CMouseProcessor@@AEBA_NXZ @ 0x1C01C14D4 (-AppCompatWheelRoutingRequested@CMouseProcessor@@AEBA_NXZ.c)
 *     ?HittestWheelRoutingRequested@CMouseProcessor@@AEBA_NXZ @ 0x1C01C2DCC (-HittestWheelRoutingRequested@CMouseProcessor@@AEBA_NXZ.c)
 *     ?ProcessMouseWheel@CMouseProcessor@@AEAAXAEBVCWheelEvent@1@@Z @ 0x1C01C3B64 (-ProcessMouseWheel@CMouseProcessor@@AEAAXAEBVCWheelEvent@1@@Z.c)
 *     APISetEditionGetMouseWheelRoutingMode @ 0x1C01CC810 (APISetEditionGetMouseWheelRoutingMode.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02015EC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall CMouseProcessor::ComputeAndDeliverMouseWheel(
        CMouseProcessor *this,
        const struct CMouseProcessor::CMouseEvent *a2)
{
  __int64 v4; // rdx
  int MouseWheelRoutingMode; // ebx
  CMouseProcessor *v6; // rcx
  __int64 v7; // rcx
  unsigned __int16 v8; // ax
  unsigned int v9; // ecx
  _QWORD v10[2]; // [rsp+30h] [rbp-28h] BYREF
  int v11; // [rsp+40h] [rbp-18h]
  int v12; // [rsp+48h] [rbp-10h]
  int v13; // [rsp+4Ch] [rbp-Ch]

  v4 = *((_QWORD *)a2 + 1);
  MouseWheelRoutingMode = 2;
  if ( (*(_DWORD *)(v4 + 112) & 8) != 0 )
    goto LABEL_10;
  if ( *(_DWORD *)(v4 + 104) == 34 || CMouseProcessor::AppCompatWheelRoutingRequested(this) )
  {
    MouseWheelRoutingMode = 0;
  }
  else
  {
    if ( CMouseProcessor::HittestWheelRoutingRequested(v6) )
      goto LABEL_10;
    MouseWheelRoutingMode = APISetEditionGetMouseWheelRoutingMode();
    if ( MouseWheelRoutingMode )
      goto LABEL_10;
  }
  if ( !gpqForeground )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v4) = 3;
      WPP_RECORDER_SF_(
        WPP_MAIN_CB.Queue.ListEntry.Flink,
        v4,
        6,
        38,
        (__int64)&WPP_b12bc820a1813372973d31fc87fa3901_Traceguids);
    }
    return;
  }
LABEL_10:
  v7 = *((_QWORD *)a2 + 1);
  if ( (*(_WORD *)(v7 + 28) & 0xC00) == 0 )
  {
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v7);
    v7 = *((_QWORD *)a2 + 1);
  }
  v8 = *(_WORD *)(v7 + 28);
  v10[1] = v7;
  v10[0] = &CMouseProcessor::CWheelEvent::`vftable';
  v9 = v8;
  LOWORD(v9) = ~v8;
  v12 = MouseWheelRoutingMode;
  v11 = 3;
  v13 = (v9 >> 10) & 1;
  CMouseProcessor::ProcessMouseWheel(this, (const struct CMouseProcessor::CWheelEvent *)v10);
}
