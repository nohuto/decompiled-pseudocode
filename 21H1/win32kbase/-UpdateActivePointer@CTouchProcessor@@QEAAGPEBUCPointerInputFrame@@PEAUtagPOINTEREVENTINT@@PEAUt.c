/*
 * XREFs of ?UpdateActivePointer@CTouchProcessor@@QEAAGPEBUCPointerInputFrame@@PEAUtagPOINTEREVENTINT@@PEAUtagCHitTestState@@PEAVCInputDest@@PEAKPEAGPEAIKG@Z @ 0x1C01A3024
 * Callers:
 *     ?PopulatePointerInfoNode@CTouchProcessor@@QEAAHPEAUCPointerInputFrame@@PEAUCPointerInfoNode@@PEAUtagCHitTestState@@K@Z @ 0x1C019BD4C (-PopulatePointerInfoNode@CTouchProcessor@@QEAAHPEAUCPointerInputFrame@@PEAUCPointerInfoNode@@PEA.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C00678DC (WPP_RECORDER_SF_.c)
 *     ??4CInputDest@@QEAAAEAV0@$$QEAV0@@Z @ 0x1C006E1C0 (--4CInputDest@@QEAAAEAV0@$$QEAV0@@Z.c)
 *     ?SetEmpty@CInputDest@@QEAAXXZ @ 0x1C0071780 (-SetEmpty@CInputDest@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C00CC180 (__security_check_cookie.c)
 *     ?CreateNode@CTouchProcessor@@AEAAPEAUCInputPointerNode@@GKIG@Z @ 0x1C0191D4C (-CreateNode@CTouchProcessor@@AEAAPEAUCInputPointerNode@@GKIG@Z.c)
 *     ?DropInput@Pointer@InputTraceLogging@@SAXPEBUCPointerInputFrame@@PEBUtagPOINTEREVENTINT@@W4DropReason@12@@Z @ 0x1C0193620 (-DropInput@Pointer@InputTraceLogging@@SAXPEBUCPointerInputFrame@@PEBUtagPOINTEREVENTINT@@W4DropR.c)
 *     ?FindNodeById@CTouchProcessor@@AEAAPEAUCInputPointerNode@@GHH@Z @ 0x1C0193938 (-FindNodeById@CTouchProcessor@@AEAAPEAUCInputPointerNode@@GHH@Z.c)
 *     ?SetNewValidState@CTouchProcessor@@QEAAHIPEAUCInputPointerNode@@@Z @ 0x1C019FD74 (-SetNewValidState@CTouchProcessor@@QEAAHIPEAUCInputPointerNode@@@Z.c)
 *     ?UpdateInputCaptureAndGetTarget@CTouchProcessor@@QEAA?AVCInputDest@@PEBUtagPOINTEREVENTINT@@PEAUCInputPointerNode@@IPEAUtagCHitTestState@@PEAGPEAIK@Z @ 0x1C01A35A0 (-UpdateInputCaptureAndGetTarget@CTouchProcessor@@QEAA-AVCInputDest@@PEBUtagPOINTEREVENTINT@@PEAU.c)
 *     ?UpdateStateIndicator@CTouchProcessor@@QEAAXPEAUCInputPointerNode@@I_KUtagPOINT@@@Z @ 0x1C01A3ED8 (-UpdateStateIndicator@CTouchProcessor@@QEAAXPEAUCInputPointerNode@@I_KUtagPOINT@@@Z.c)
 *     WPP_RECORDER_SF_LL @ 0x1C01A45B0 (WPP_RECORDER_SF_LL.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02015EC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
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
  __int16 x; // r12
  unsigned int v15; // r14d
  unsigned int y; // r15d
  int v17; // edx
  int v18; // ecx
  struct CInputPointerNode *NodeById; // rdi
  int v20; // r8d
  int v21; // edx
  int v22; // edx
  int v23; // eax
  int v24; // edx
  int v26; // edx
  int v27; // edx
  unsigned __int64 v28; // r9
  _QWORD *Target; // rax
  unsigned __int16 v30; // cx
  int v31; // edx
  int v32; // [rsp+20h] [rbp-138h]
  __int16 v33; // [rsp+54h] [rbp-104h]
  _BYTE v35[128]; // [rsp+80h] [rbp-D8h] BYREF

  v11 = 0;
  x = a3->x;
  v15 = a3[1].x;
  y = a3[2].y;
  v33 = 0;
  if ( this[9] != KeGetCurrentThread() )
  {
    MicrosoftTelemetryAssertTriggeredNoArgsKM(this);
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
      (__int64)&WPP_6cc13e1a12c13a444721acaa10d1d35b_Traceguids);
  }
  *a7 = 0;
  *a8 = 0;
  NodeById = CTouchProcessor::FindNodeById(this, x, 1, 1);
  if ( NodeById )
  {
    if ( (a3[2].y & 1) == 0 )
    {
      v23 = *((_DWORD *)NodeById + 14);
      if ( v23 != v15 )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v17) = 2;
          WPP_RECORDER_SF_LL(v18, v17, v20, 59, v32, v23, v15);
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
            {
              LOBYTE(v24) = 5;
              WPP_RECORDER_SF_(
                WPP_GLOBAL_Control->DeviceExtension,
                v24,
                7,
                60,
                (__int64)&WPP_6cc13e1a12c13a444721acaa10d1d35b_Traceguids);
            }
          }
        }
        goto LABEL_19;
      }
      if ( !CTouchProcessor::SetNewValidState(this, y, NodeById) )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v26) = 2;
          WPP_RECORDER_SF_(
            WPP_MAIN_CB.Queue.ListEntry.Flink,
            v26,
            7,
            61,
            (__int64)&WPP_6cc13e1a12c13a444721acaa10d1d35b_Traceguids);
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
            {
              LOBYTE(v27) = 5;
              WPP_RECORDER_SF_(
                WPP_GLOBAL_Control->DeviceExtension,
                v27,
                7,
                62,
                (__int64)&WPP_6cc13e1a12c13a444721acaa10d1d35b_Traceguids);
            }
          }
        }
        goto LABEL_19;
      }
    }
  }
  else
  {
    v33 = 1;
    NodeById = CTouchProcessor::CreateNode((CTouchProcessor *)this, x, v15, y, a10);
    if ( !NodeById )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v21) = 2;
        WPP_RECORDER_SF_(
          WPP_MAIN_CB.Queue.ListEntry.Flink,
          v21,
          7,
          57,
          (__int64)&WPP_6cc13e1a12c13a444721acaa10d1d35b_Traceguids);
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
          {
            LOBYTE(v22) = 5;
            WPP_RECORDER_SF_(
              WPP_GLOBAL_Control->DeviceExtension,
              v22,
              7,
              58,
              (__int64)&WPP_6cc13e1a12c13a444721acaa10d1d35b_Traceguids);
          }
        }
      }
LABEL_19:
      InputTraceLogging::Pointer::DropInput();
      return 0LL;
    }
  }
  v28 = (unsigned __int64)a3[11];
  a3[1].y = *((unsigned __int16 *)NodeById + 16);
  a3[22].y = -__CFSHR__(*((_DWORD *)a2 + 30), 10);
  CTouchProcessor::UpdateStateIndicator((CTouchProcessor *)this, NodeById, y, v28, a3[6]);
  Target = (_QWORD *)CTouchProcessor::UpdateInputCaptureAndGetTarget(this, v35, a3, NodeById, y, a4, a7, a8, a9);
  CInputDest::operator=((__int64)a5, Target);
  CInputDest::SetEmpty((CInputDest *)v35);
  *a7 |= v33;
  v30 = *a7 | (2 * (*((_DWORD *)NodeById + 70) & 4));
  *a7 = v30;
  v31 = 2 * (*((_DWORD *)NodeById + 70) & 1);
  LOWORD(v31) = v30 | (2 * (*((_WORD *)NodeById + 140) & 1));
  *a7 = v31;
  *a7 = v31 | (2 * (*((_DWORD *)NodeById + 70) & 2));
  *a6 = *((_DWORD *)NodeById + 15) & 0x1F0;
  *((_DWORD *)NodeById + 15) = y;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(v31) = 5;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      v31,
      7,
      63,
      (__int64)&WPP_6cc13e1a12c13a444721acaa10d1d35b_Traceguids);
  }
  return *((unsigned __int16 *)NodeById + 16);
}
