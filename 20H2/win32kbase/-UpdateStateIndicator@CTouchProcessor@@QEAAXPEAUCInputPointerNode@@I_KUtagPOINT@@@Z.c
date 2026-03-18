/*
 * XREFs of ?UpdateStateIndicator@CTouchProcessor@@QEAAXPEAUCInputPointerNode@@I_KUtagPOINT@@@Z @ 0x1C019BC78
 * Callers:
 *     ?UpdateActivePointer@CTouchProcessor@@QEAAGPEBUCPointerInputFrame@@PEAUtagPOINTEREVENTINT@@PEAUtagCHitTestState@@PEAVCInputDest@@PEAKPEAGPEAIKG@Z @ 0x1C019ADC4 (-UpdateActivePointer@CTouchProcessor@@QEAAGPEBUCPointerInputFrame@@PEAUtagPOINTEREVENTINT@@PEAUt.c)
 * Callees:
 *     PtInRect @ 0x1C002F07C (PtInRect.c)
 *     WPP_RECORDER_SF_ @ 0x1C004F07C (WPP_RECORDER_SF_.c)
 *     ?PassedHoldTime@CTouchProcessor@@AEAAHK_K0@Z @ 0x1C0193718 (-PassedHoldTime@CTouchProcessor@@AEAAHK_K0@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01FA2AC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall CTouchProcessor::UpdateStateIndicator(
        struct _KTHREAD **this,
        struct CInputPointerNode *a2,
        __int64 a3,
        __int64 a4,
        struct tagPOINT a5)
{
  int v6; // edi
  struct CInputPointerNode *v7; // rbx
  int v9; // r8d
  bool v10; // zf
  int v11; // r9d
  PDEVICE_OBJECT v12; // rcx
  int v13; // r9d
  int v14; // r9d

  v6 = a3;
  v7 = a2;
  if ( this[9] != KeGetCurrentThread() )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(this, a2, a3, a4);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(a2) = 5;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      (_DWORD)a2,
      7,
      68,
      (__int64)&WPP_50814762fbc63e38c7e5eacf83347307_Traceguids);
  }
  v9 = *((_DWORD *)v7 + 70);
  if ( (v6 & 0x10000) != 0 )
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
          (__int64)&WPP_50814762fbc63e38c7e5eacf83347307_Traceguids);
      }
    }
  }
  else if ( (v6 & 0x40004) != 0 )
  {
    LOBYTE(v14) = *((_DWORD *)v7 + 70);
    if ( (v9 & 2) == 0 && !PtInRect((_DWORD *)v7 + 52, *(_QWORD *)&a5) )
    {
      v14 |= 2u;
      *((_DWORD *)v7 + 70) = v14;
    }
    if ( (v14 & 2) == 0
      && (v14 & 1) == 0
      && CTouchProcessor::PassedHoldTime(this, *((unsigned int *)v7 + 14), *((_QWORD *)v7 + 25), a4).LowPart )
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
