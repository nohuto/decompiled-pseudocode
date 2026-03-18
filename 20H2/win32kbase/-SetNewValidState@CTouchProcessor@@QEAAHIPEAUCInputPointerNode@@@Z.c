/*
 * XREFs of ?SetNewValidState@CTouchProcessor@@QEAAHIPEAUCInputPointerNode@@@Z @ 0x1C0197B54
 * Callers:
 *     ?CancelActivePointer@CTouchProcessor@@AEAAXPEAUCInputPointerNode@@@Z @ 0x1C0186FEC (-CancelActivePointer@CTouchProcessor@@AEAAXPEAUCInputPointerNode@@@Z.c)
 *     ?CreateNode@CTouchProcessor@@AEAAPEAUCInputPointerNode@@GKIG@Z @ 0x1C0189B24 (-CreateNode@CTouchProcessor@@AEAAPEAUCInputPointerNode@@GKIG@Z.c)
 *     ?UpdateActivePointer@CTouchProcessor@@QEAAGPEBUCPointerInputFrame@@PEAUtagPOINTEREVENTINT@@PEAUtagCHitTestState@@PEAVCInputDest@@PEAKPEAGPEAIKG@Z @ 0x1C019ADC4 (-UpdateActivePointer@CTouchProcessor@@QEAAGPEBUCPointerInputFrame@@PEAUtagPOINTEREVENTINT@@PEAUt.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C004F07C (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_L @ 0x1C019C15C (WPP_RECORDER_SF_L.c)
 *     WPP_RECORDER_SF_LL @ 0x1C019C350 (WPP_RECORDER_SF_LL.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01FA2AC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

_BOOL8 __fastcall CTouchProcessor::SetNewValidState(
        struct _KTHREAD **this,
        __int64 a2,
        struct CInputPointerNode *a3,
        __int64 a4)
{
  unsigned int v5; // ebp
  _QWORD *v6; // rdx
  int v7; // ecx
  BOOL v8; // ebx
  int v10; // esi
  bool v11; // zf
  _QWORD *v12; // rax
  __int64 v13; // rcx
  int v14; // [rsp+20h] [rbp-38h]

  v5 = a2;
  if ( this[9] != KeGetCurrentThread() )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(this, a2, a3, a4);
  v6 = &WPP_50814762fbc63e38c7e5eacf83347307_Traceguids;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(v6) = 5;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      (_DWORD)v6,
      7,
      64,
      (__int64)&WPP_50814762fbc63e38c7e5eacf83347307_Traceguids);
    v6 = &WPP_50814762fbc63e38c7e5eacf83347307_Traceguids;
  }
  v7 = 1;
  if ( (v5 & 0x70006) == 0x10006 )
  {
    v10 = 2;
  }
  else
  {
    if ( (v5 & 0x70006) == 0x20000 )
    {
      v11 = *((_DWORD *)a3 + 13) == 1;
      v10 = 3;
LABEL_25:
      v8 = v11;
      goto LABEL_30;
    }
    if ( (v5 & 0x70006) != 0x20002 )
    {
      if ( (v5 & 0x70006) == 0x20006 )
      {
        v10 = 2;
        v11 = *((_DWORD *)a3 + 13) == 2;
      }
      else
      {
        if ( (v5 & 0x70006) == 0x40000 )
        {
          v10 = 3;
        }
        else
        {
          if ( (v5 & 0x70006) != 0x40002 )
          {
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              LOBYTE(v6) = 2;
              WPP_RECORDER_SF_L(1, (_DWORD)v6, 7, 65, (__int64)&WPP_50814762fbc63e38c7e5eacf83347307_Traceguids, v5);
            }
            goto LABEL_14;
          }
          v10 = 1;
        }
        v11 = *((_DWORD *)a3 + 13) == 2;
      }
      goto LABEL_25;
    }
    v10 = 1;
  }
  v8 = *((_DWORD *)a3 + 13) <= 1u;
LABEL_30:
  if ( !v8 )
    goto LABEL_15;
  if ( (v5 & 4) != 0 )
  {
    if ( (v5 & 0x1F0) == 0 )
    {
LABEL_14:
      v8 = 0;
      goto LABEL_15;
    }
    v8 = 1;
  }
  if ( (*((_DWORD *)a3 + 70) & 8) != 0 )
  {
    v8 = (v5 & 0x8000) != 0;
    if ( (v5 & 0x8000) == 0 )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(1LL, &WPP_50814762fbc63e38c7e5eacf83347307_Traceguids, a3, a4);
  }
  if ( v8 )
  {
    *((_DWORD *)a3 + 13) = v10;
    if ( v10 == 3 )
    {
      v12 = (_QWORD *)((char *)a3 + 16);
      v13 = *((_QWORD *)a3 + 2);
      if ( (struct CInputPointerNode *)v13 != (struct CInputPointerNode *)((char *)a3 + 16) )
      {
        if ( *(_QWORD **)(v13 + 8) != v12 || (v6 = (_QWORD *)*((_QWORD *)a3 + 3), (_QWORD *)*v6 != v12) )
          __fastfail(3u);
        *v6 = v13;
        *(_QWORD *)(v13 + 8) = v6;
        *((_QWORD *)a3 + 3) = (char *)a3 + 16;
        *v12 = v12;
      }
    }
    *((_DWORD *)a3 + 70) = *((_DWORD *)a3 + 70) & 0xFFFFFFF3 | ((v5 & 0x2000 | (v5 >> 1) & 0x4000) >> 11);
    goto LABEL_17;
  }
LABEL_15:
  if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    return v8;
  LOBYTE(v6) = 2;
  WPP_RECORDER_SF_LL(v7, (_DWORD)v6, (_DWORD)a3, 66, v14, v5, *((_DWORD *)a3 + 13));
LABEL_17:
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(v6) = 5;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      (_DWORD)v6,
      7,
      67,
      (__int64)&WPP_50814762fbc63e38c7e5eacf83347307_Traceguids);
  }
  return v8;
}
