/*
 * XREFs of ?UpdateStateIndicator@CTouchProcessor@@QEAAXPEAUCInputPointerNode@@I_KUtagPOINT@@@Z @ 0x1C01A3ED8
 * Callers:
 *     ?UpdateActivePointer@CTouchProcessor@@QEAAGPEBUCPointerInputFrame@@PEAUtagPOINTEREVENTINT@@PEAUtagCHitTestState@@PEAVCInputDest@@PEAKPEAGPEAIKG@Z @ 0x1C01A3024 (-UpdateActivePointer@CTouchProcessor@@QEAAGPEBUCPointerInputFrame@@PEAUtagPOINTEREVENTINT@@PEAUt.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C00678DC (WPP_RECORDER_SF_.c)
 *     PtInRect @ 0x1C00A649C (PtInRect.c)
 *     ?PassedHoldTime@CTouchProcessor@@AEAAHK_K0@Z @ 0x1C019B938 (-PassedHoldTime@CTouchProcessor@@AEAAHK_K0@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02015EC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall CTouchProcessor::UpdateStateIndicator(
        struct _KTHREAD **this,
        struct CInputPointerNode *a2,
        int a3,
        __int64 a4,
        struct tagPOINT a5)
{
  struct CInputPointerNode *v7; // rbx
  int v9; // r8d
  bool v10; // zf
  int v11; // r9d
  PDEVICE_OBJECT v12; // rcx
  int v13; // r9d
  int v14; // r9d

  v7 = a2;
  if ( this[9] != KeGetCurrentThread() )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(this);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(a2) = 5;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      (_DWORD)a2,
      7,
      68,
      (__int64)&WPP_6cc13e1a12c13a444721acaa10d1d35b_Traceguids);
  }
  v9 = *((_DWORD *)v7 + 70);
  if ( (a3 & 0x10000) != 0 )
  {
    LODWORD(a2) = a5.y;
    *((_QWORD *)v7 + 25) = a4;
    v10 = *((_DWORD *)v7 + 14) == 3;
    *((_DWORD *)v7 + 70) = v9 & 0xFFFFFFFC;
    v11 = 300;
    if ( !v10 )
      v11 = 270;
    *((_DWORD *)v7 + 52) = a5.x - v11;
    *((_DWORD *)v7 + 53) = a5.y - v11;
    *((_DWORD *)v7 + 54) = v11 + a5.x;
    *((_DWORD *)v7 + 55) = v11 + a5.y;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v12 = WPP_GLOBAL_Control;
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      {
        v13 = 69;
LABEL_26:
        LOBYTE(a2) = 5;
        WPP_RECORDER_SF_(
          v12->DeviceExtension,
          (_DWORD)a2,
          7,
          v13,
          (__int64)&WPP_6cc13e1a12c13a444721acaa10d1d35b_Traceguids);
      }
    }
  }
  else if ( (a3 & 0x40004) != 0 )
  {
    LOBYTE(v14) = *((_DWORD *)v7 + 70);
    if ( (v9 & 2) == 0 && !PtInRect((_DWORD *)v7 + 52, *(_QWORD *)&a5) )
    {
      v14 |= 2u;
      *((_DWORD *)v7 + 70) = v14;
    }
    if ( (v14 & 2) == 0
      && (v14 & 1) == 0
      && CTouchProcessor::PassedHoldTime(this, *((_DWORD *)v7 + 14), *((_QWORD *)v7 + 25), a4).LowPart )
    {
      *((_DWORD *)v7 + 70) |= 1u;
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v12 = WPP_GLOBAL_Control;
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      {
        v13 = 71;
        goto LABEL_26;
      }
    }
  }
  else
  {
    *((_QWORD *)v7 + 25) = 0LL;
    *((_DWORD *)v7 + 70) = v9 & 0xFFFFFFFC;
    *((_OWORD *)v7 + 13) = 0LL;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v12 = WPP_GLOBAL_Control;
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      {
        v13 = 70;
        goto LABEL_26;
      }
    }
  }
}
