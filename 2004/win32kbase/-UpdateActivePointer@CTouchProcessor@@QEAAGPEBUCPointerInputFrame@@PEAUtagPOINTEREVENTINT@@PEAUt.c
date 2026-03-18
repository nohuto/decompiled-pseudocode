/*
 * XREFs of ?UpdateActivePointer@CTouchProcessor@@QEAAGPEBUCPointerInputFrame@@PEAUtagPOINTEREVENTINT@@PEAUtagCHitTestState@@PEAVCInputDest@@PEAKPEAGPEAIKG@Z @ 0x1C019D2C4
 * Callers:
 *     ?PopulatePointerInfoNode@CTouchProcessor@@QEAAHPEAUCPointerInputFrame@@PEAUCPointerInfoNode@@PEAUtagCHitTestState@@K@Z @ 0x1C019605C (-PopulatePointerInfoNode@CTouchProcessor@@QEAAHPEAUCPointerInputFrame@@PEAUCPointerInfoNode@@PEA.c)
 * Callees:
 *     ??4CInputDest@@QEAAAEAV0@$$QEAV0@@Z @ 0x1C006EEE0 (--4CInputDest@@QEAAAEAV0@$$QEAV0@@Z.c)
 *     WPP_RECORDER_SF_ @ 0x1C0072EBC (WPP_RECORDER_SF_.c)
 *     ?SetEmpty@CInputDest@@QEAAXXZ @ 0x1C00746C4 (-SetEmpty@CInputDest@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C00CCA30 (__security_check_cookie.c)
 *     ?CreateNode@CTouchProcessor@@AEAAPEAUCInputPointerNode@@GKIG@Z @ 0x1C018C04C (-CreateNode@CTouchProcessor@@AEAAPEAUCInputPointerNode@@GKIG@Z.c)
 *     ?DropInput@Pointer@InputTraceLogging@@SAXPEBUCPointerInputFrame@@PEBUtagPOINTEREVENTINT@@W4DropReason@12@@Z @ 0x1C018D920 (-DropInput@Pointer@InputTraceLogging@@SAXPEBUCPointerInputFrame@@PEBUtagPOINTEREVENTINT@@W4DropR.c)
 *     ?FindNodeById@CTouchProcessor@@AEAAPEAUCInputPointerNode@@GHH@Z @ 0x1C018DC38 (-FindNodeById@CTouchProcessor@@AEAAPEAUCInputPointerNode@@GHH@Z.c)
 *     ?SetNewValidState@CTouchProcessor@@QEAAHIPEAUCInputPointerNode@@@Z @ 0x1C019A084 (-SetNewValidState@CTouchProcessor@@QEAAHIPEAUCInputPointerNode@@@Z.c)
 *     ?UpdateInputCaptureAndGetTarget@CTouchProcessor@@QEAA?AVCInputDest@@PEBUtagPOINTEREVENTINT@@PEAUCInputPointerNode@@IPEAUtagCHitTestState@@PEAGPEAIK@Z @ 0x1C019D840 (-UpdateInputCaptureAndGetTarget@CTouchProcessor@@QEAA-AVCInputDest@@PEBUtagPOINTEREVENTINT@@PEAU.c)
 *     ?UpdateStateIndicator@CTouchProcessor@@QEAAXPEAUCInputPointerNode@@I_KUtagPOINT@@@Z @ 0x1C019E178 (-UpdateStateIndicator@CTouchProcessor@@QEAAXPEAUCInputPointerNode@@I_KUtagPOINT@@@Z.c)
 *     WPP_RECORDER_SF_LL @ 0x1C019E850 (WPP_RECORDER_SF_LL.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01FBBDC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall CTouchProcessor::UpdateActivePointer(
        struct _KTHREAD **this,
        const struct CPointerInputFrame *a2,
        struct tagPOINT *a3,
        struct tagCHitTestState *a4,
        struct CInputDest *a5,
        unsigned int *a6,
        unsigned __int16 *a7,
        unsigned int *a8,
        unsigned int a9,
        unsigned __int16 a10)
{
  int v11; // edx
  unsigned __int16 x; // r12
  unsigned int v15; // r14d
  unsigned int y; // r15d
  int v17; // edx
  int v18; // ecx
  struct CInputPointerNode *NodeById; // rdi
  int v20; // r8d
  __int64 v21; // r9
  int v22; // edx
  int v23; // edx
  int v24; // eax
  int v25; // edx
  int v27; // edx
  int v28; // edx
  unsigned __int64 v29; // r9
  _QWORD *Target; // rax
  unsigned __int16 v31; // cx
  int v32; // edx
  int v33; // [rsp+20h] [rbp-138h]
  __int16 v34; // [rsp+54h] [rbp-104h]
  _BYTE v36[128]; // [rsp+80h] [rbp-D8h] BYREF

  v11 = 0;
  x = a3->x;
  v15 = a3[1].x;
  y = a3[2].y;
  v34 = 0;
  if ( this[9] != KeGetCurrentThread() )
  {
    MicrosoftTelemetryAssertTriggeredNoArgsKM(this, 0LL, a3, a4);
    v11 = 0;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(v11) = 5;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      v11,
      7,
      56,
      (__int64)&WPP_8113a81d21a7371434699e4b0bdc9bc8_Traceguids);
  }
  *a7 = 0;
  *a8 = 0;
  NodeById = CTouchProcessor::FindNodeById(this, x, 1, 1);
  if ( NodeById )
  {
    if ( (a3[2].y & 1) == 0 )
    {
      v24 = *((_DWORD *)NodeById + 14);
      if ( v24 != v15 )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v17) = 2;
          WPP_RECORDER_SF_LL(v18, v17, v20, 59, v33, v24, v15);
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
            {
              LOBYTE(v25) = 5;
              WPP_RECORDER_SF_(
                WPP_GLOBAL_Control->DeviceExtension,
                v25,
                7,
                60,
                (__int64)&WPP_8113a81d21a7371434699e4b0bdc9bc8_Traceguids);
            }
          }
        }
        goto LABEL_19;
      }
      if ( !CTouchProcessor::SetNewValidState(this, y, NodeById, v21) )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v27) = 2;
          WPP_RECORDER_SF_(
            WPP_MAIN_CB.Queue.ListEntry.Flink,
            v27,
            7,
            61,
            (__int64)&WPP_8113a81d21a7371434699e4b0bdc9bc8_Traceguids);
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
            {
              LOBYTE(v28) = 5;
              WPP_RECORDER_SF_(
                WPP_GLOBAL_Control->DeviceExtension,
                v28,
                7,
                62,
                (__int64)&WPP_8113a81d21a7371434699e4b0bdc9bc8_Traceguids);
            }
          }
        }
        goto LABEL_19;
      }
    }
  }
  else
  {
    v34 = 1;
    NodeById = CTouchProcessor::CreateNode((CTouchProcessor *)this, x, v15, y, a10);
    if ( !NodeById )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v22) = 2;
        WPP_RECORDER_SF_(
          WPP_MAIN_CB.Queue.ListEntry.Flink,
          v22,
          7,
          57,
          (__int64)&WPP_8113a81d21a7371434699e4b0bdc9bc8_Traceguids);
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
          {
            LOBYTE(v23) = 5;
            WPP_RECORDER_SF_(
              WPP_GLOBAL_Control->DeviceExtension,
              v23,
              7,
              58,
              (__int64)&WPP_8113a81d21a7371434699e4b0bdc9bc8_Traceguids);
          }
        }
      }
LABEL_19:
      InputTraceLogging::Pointer::DropInput();
      return 0LL;
    }
  }
  v29 = (unsigned __int64)a3[11];
  a3[1].y = *((unsigned __int16 *)NodeById + 16);
  a3[22].y = -__CFSHR__(*((_DWORD *)a2 + 30), 10);
  CTouchProcessor::UpdateStateIndicator((CTouchProcessor *)this, NodeById, y, v29, a3[6]);
  Target = (_QWORD *)CTouchProcessor::UpdateInputCaptureAndGetTarget(this, v36, a3, NodeById, y, a4, a7, a8, a9);
  CInputDest::operator=((__int64)a5, Target);
  CInputDest::SetEmpty((CInputDest *)v36);
  *a7 |= v34;
  v31 = *a7 | (2 * (*((_DWORD *)NodeById + 70) & 4));
  *a7 = v31;
  v32 = 2 * (*((_DWORD *)NodeById + 70) & 1);
  LOWORD(v32) = v31 | (2 * (*((_WORD *)NodeById + 140) & 1));
  *a7 = v32;
  *a7 = v32 | (2 * (*((_DWORD *)NodeById + 70) & 2));
  *a6 = *((_DWORD *)NodeById + 15) & 0x1F0;
  *((_DWORD *)NodeById + 15) = y;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(v32) = 5;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      v32,
      7,
      63,
      (__int64)&WPP_8113a81d21a7371434699e4b0bdc9bc8_Traceguids);
  }
  return *((unsigned __int16 *)NodeById + 16);
}
