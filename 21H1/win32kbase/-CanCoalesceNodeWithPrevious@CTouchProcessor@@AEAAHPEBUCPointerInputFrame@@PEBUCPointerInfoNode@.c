/*
 * XREFs of ?CanCoalesceNodeWithPrevious@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@PEBUCPointerInfoNode@@PEAUtagQMSG@@PEAUCPointerQFrame@@PEAW4CPointerCoalesce@@@Z @ 0x1C018E93C
 * Callers:
 *     ?CoalesceQFrames@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@PEAUCPointerQFrame@@PEAU2@@Z @ 0x1C018FCAC (-CoalesceQFrames@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@PEAUCPointerQFrame@@PEAU2@@Z.c)
 *     ?ProcessQFrameNode@CTouchProcessor@@QEAAXPEAUCPointerQFrame@@PEBUCPointerInputFrame@@PEAUCPointerInfoNode@@@Z @ 0x1C019E170 (-ProcessQFrameNode@CTouchProcessor@@QEAAXPEAUCPointerQFrame@@PEBUCPointerInputFrame@@PEAUCPointe.c)
 * Callees:
 *     ?IsEqualByQ@CInputDest@@QEBA_NAEBV1@@Z @ 0x1C005C774 (-IsEqualByQ@CInputDest@@QEBA_NAEBV1@@Z.c)
 *     WPP_RECORDER_SF_ @ 0x1C00678DC (WPP_RECORDER_SF_.c)
 *     ?SetEmpty@CInputDest@@QEAAXXZ @ 0x1C0071780 (-SetEmpty@CInputDest@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C00CC180 (__security_check_cookie.c)
 *     ??0CInputDest@@QEAA@PEAUHWND__@@W4INPUT_DESTINATION_WINDOW_TYPE@@W4HandleValidationType@0@@Z @ 0x1C0188DB0 (--0CInputDest@@QEAA@PEAUHWND__@@W4INPUT_DESTINATION_WINDOW_TYPE@@W4HandleValidationType@0@@Z.c)
 *     ?FindValidNodeInFrame@CTouchProcessor@@AEAAPEAUCPointerInfoNode@@PEBUCPointerInputFrame@@GPEAK@Z @ 0x1C0193D54 (-FindValidNodeInFrame@CTouchProcessor@@AEAAPEAUCPointerInfoNode@@PEBUCPointerInputFrame@@GPEAK@Z.c)
 *     ?GetQueue@CPointerInfoNode@@QEAAPEAVCInputDest@@PEAH@Z @ 0x1C0199E54 (-GetQueue@CPointerInfoNode@@QEAAPEAVCInputDest@@PEAH@Z.c)
 *     ?IsFrameReferenced@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@@Z @ 0x1C019AC44 (-IsFrameReferenced@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@@Z.c)
 *     ?IsValid@CPointerInfoNode@@QEBAHXZ @ 0x1C019B338 (-IsValid@CPointerInfoNode@@QEBAHXZ.c)
 *     ApiSetEditionIsPointerQueuedMessageCoalescable @ 0x1C01CE9A4 (ApiSetEditionIsPointerQueuedMessageCoalescable.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02015EC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall CTouchProcessor::CanCoalesceNodeWithPrevious(
        struct _KTHREAD **this,
        const struct CPointerInputFrame *a2,
        const struct CPointerInfoNode *a3,
        struct tagQMSG *a4,
        struct CPointerQFrame *a5,
        enum CPointerCoalesce *a6)
{
  const struct CPointerInputFrame *v7; // r12
  struct _KTHREAD **v8; // rsi
  int v9; // edx
  PDEVICE_OBJECT v10; // rcx
  int v11; // r9d
  CTouchProcessor *v12; // rcx
  __int64 v13; // r8
  int v14; // edx
  __int64 v15; // rcx
  int v16; // eax
  unsigned int v17; // edi
  struct CPointerInfoNode *ValidNodeInFrame; // rax
  int v19; // edx
  __int64 *v20; // rsi
  __int64 v21; // r14
  int v22; // eax
  int v23; // eax
  int v24; // edx
  __int64 v25; // rcx
  CInputDest *Queue; // rax
  int v27; // edx
  int v28; // edx
  int v29; // edx
  PDEVICE_OBJECT v30; // rcx
  int v31; // r9d
  int v32; // eax
  int v33; // r9d
  int v34; // r8d
  __int64 v35; // rax
  int v36; // edx
  __int64 v37; // rcx
  int v38; // edx
  int v40; // [rsp+28h] [rbp-D8h]
  int v41; // [rsp+30h] [rbp-D0h] BYREF
  struct tagQMSG *v42; // [rsp+38h] [rbp-C8h]
  _OWORD v43[7]; // [rsp+40h] [rbp-C0h] BYREF
  __m128i v44[8]; // [rsp+B0h] [rbp-50h] BYREF

  v7 = a2;
  v42 = a4;
  v8 = this;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    this = (struct _KTHREAD **)WPP_GLOBAL_Control;
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    {
      LOBYTE(a2) = 5;
      WPP_RECORDER_SF_(
        WPP_GLOBAL_Control->DeviceExtension,
        (_DWORD)a2,
        7,
        254,
        (__int64)&WPP_6cc13e1a12c13a444721acaa10d1d35b_Traceguids);
    }
  }
  v41 = 0;
  if ( v8[9] != KeGetCurrentThread() )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(this);
  if ( *((_DWORD *)a5 + 27) )
  {
    if ( !(unsigned int)CPointerInfoNode::IsValid(a3) )
    {
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v12);
      v13 = 0LL;
    }
    if ( *((_QWORD *)a3 + 24) == v13 )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v12);
    if ( !(unsigned int)CTouchProcessor::IsFrameReferenced(v12, v7) )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v15);
    v16 = *(_DWORD *)a3;
    v17 = 1;
    if ( (*(_DWORD *)a3 & 1) == 0 )
    {
      *(_DWORD *)a6 = 2;
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        return 0LL;
      LOBYTE(v14) = 4;
      WPP_RECORDER_SF_(
        WPP_MAIN_CB.Queue.ListEntry.Flink,
        v14,
        7,
        257,
        (__int64)&WPP_6cc13e1a12c13a444721acaa10d1d35b_Traceguids);
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        return 0LL;
      v10 = WPP_GLOBAL_Control;
      if ( !LOWORD(WPP_GLOBAL_Control->DeviceType) )
        return 0LL;
      v11 = 258;
      goto LABEL_106;
    }
    if ( (v16 & 8) != 0 || (v16 & 0x10) != 0 || (v16 & 0x40) != 0 || (v16 & 0x20) != 0 )
    {
      *(_DWORD *)a6 = 16;
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        return 0LL;
      LOBYTE(v14) = 4;
      WPP_RECORDER_SF_(
        WPP_MAIN_CB.Queue.ListEntry.Flink,
        v14,
        7,
        259,
        (__int64)&WPP_6cc13e1a12c13a444721acaa10d1d35b_Traceguids);
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        return 0LL;
      v10 = WPP_GLOBAL_Control;
      if ( !LOWORD(WPP_GLOBAL_Control->DeviceType) )
        return 0LL;
      v11 = 260;
      goto LABEL_106;
    }
    ValidNodeInFrame = CTouchProcessor::FindValidNodeInFrame((CTouchProcessor *)v8, v7, *((_WORD *)a3 + 86), 0LL);
    v20 = (__int64 *)ValidNodeInFrame;
    if ( !ValidNodeInFrame )
    {
      *(_DWORD *)a6 = 3;
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        return 0LL;
      LOBYTE(v19) = 4;
      WPP_RECORDER_SF_(
        WPP_MAIN_CB.Queue.ListEntry.Flink,
        v19,
        7,
        261,
        (__int64)&WPP_6cc13e1a12c13a444721acaa10d1d35b_Traceguids);
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        return 0LL;
      v10 = WPP_GLOBAL_Control;
      if ( !LOWORD(WPP_GLOBAL_Control->DeviceType) )
        return 0LL;
      v11 = 262;
      goto LABEL_106;
    }
    v21 = *((_QWORD *)v7 + 18) + 160LL * *((unsigned int *)ValidNodeInFrame + 2);
    if ( !*((_QWORD *)a5 + 19) )
      *((_QWORD *)a5 + 19) = v21;
    v22 = *(_DWORD *)(v21 + 140);
    if ( (v22 & 1) == 0 )
    {
      *(_DWORD *)a6 = 12;
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        return 0LL;
      LOBYTE(v19) = 4;
      WPP_RECORDER_SF_(
        WPP_MAIN_CB.Queue.ListEntry.Flink,
        v19,
        7,
        263,
        (__int64)&WPP_6cc13e1a12c13a444721acaa10d1d35b_Traceguids);
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        return 0LL;
      v10 = WPP_GLOBAL_Control;
      if ( !LOWORD(WPP_GLOBAL_Control->DeviceType) )
        return 0LL;
      v11 = 264;
      goto LABEL_106;
    }
    if ( (v22 & 8) != 0 )
    {
      *(_DWORD *)a6 = 11;
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        return 0LL;
      LOBYTE(v19) = 4;
      WPP_RECORDER_SF_(
        WPP_MAIN_CB.Queue.ListEntry.Flink,
        v19,
        7,
        265,
        (__int64)&WPP_6cc13e1a12c13a444721acaa10d1d35b_Traceguids);
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        return 0LL;
      v10 = WPP_GLOBAL_Control;
      if ( !LOWORD(WPP_GLOBAL_Control->DeviceType) )
        return 0LL;
      v11 = 266;
      goto LABEL_106;
    }
    if ( (*(_DWORD *)v20 & 1) == 0 )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(0LL);
    v23 = *(_DWORD *)a3;
    v24 = 0x800000;
    if ( (*(_DWORD *)a3 & 0x800000) != 0
      || (v23 & 0x8000000) != 0
      || v23 < 0
      || (*((_DWORD *)a3 + 1) & 8) != 0
      || (v25 = *(unsigned int *)v20, (v25 & 0x800000) != 0)
      || (v25 & 0x8000000) != 0
      || (v25 & 0x80000000) != 0
      || (*((_DWORD *)v20 + 1) & 8) != 0 )
    {
      *(_DWORD *)a6 = 16;
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        return 0LL;
      LOBYTE(v24) = 4;
      WPP_RECORDER_SF_(
        WPP_MAIN_CB.Queue.ListEntry.Flink,
        v24,
        7,
        267,
        (__int64)&WPP_6cc13e1a12c13a444721acaa10d1d35b_Traceguids);
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        return 0LL;
      v10 = WPP_GLOBAL_Control;
      if ( !LOWORD(WPP_GLOBAL_Control->DeviceType) )
        return 0LL;
      v11 = 268;
      goto LABEL_106;
    }
    if ( (v25 & 0x100000) != 0 && (v25 & 0x400000) == 0 )
    {
      if ( (v25 & 0x200000) == 0 )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v25);
      *(_DWORD *)a6 = 21;
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        return 0LL;
      LOBYTE(v24) = 4;
      WPP_RECORDER_SF_(
        WPP_MAIN_CB.Queue.ListEntry.Flink,
        v24,
        7,
        269,
        (__int64)&WPP_6cc13e1a12c13a444721acaa10d1d35b_Traceguids);
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        return 0LL;
      v10 = WPP_GLOBAL_Control;
      if ( !LOWORD(WPP_GLOBAL_Control->DeviceType) )
        return 0LL;
      v11 = 270;
      goto LABEL_106;
    }
    if ( *((_DWORD *)v20 + 45) != *((_DWORD *)a3 + 45) )
    {
      *(_DWORD *)a6 = 5;
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        return 0LL;
      LOBYTE(v24) = 4;
      WPP_RECORDER_SF_(
        WPP_MAIN_CB.Queue.ListEntry.Flink,
        v24,
        7,
        271,
        (__int64)&WPP_6cc13e1a12c13a444721acaa10d1d35b_Traceguids);
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        return 0LL;
      v10 = WPP_GLOBAL_Control;
      if ( !LOWORD(WPP_GLOBAL_Control->DeviceType) )
        return 0LL;
      v11 = 272;
      goto LABEL_106;
    }
    if ( *((_DWORD *)v20 + 59) == 100 )
    {
      *(_DWORD *)a6 = 6;
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        return 0LL;
      LOBYTE(v24) = 4;
      WPP_RECORDER_SF_(
        WPP_MAIN_CB.Queue.ListEntry.Flink,
        v24,
        7,
        273,
        (__int64)&WPP_6cc13e1a12c13a444721acaa10d1d35b_Traceguids);
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        return 0LL;
      v10 = WPP_GLOBAL_Control;
      if ( !LOWORD(WPP_GLOBAL_Control->DeviceType) )
        return 0LL;
      v11 = 274;
      goto LABEL_106;
    }
    CInputDest::CInputDest(v44, *((_QWORD *)a3 + 24), *((_DWORD *)a3 + 111), 1);
    Queue = CPointerInfoNode::GetQueue((CPointerInfoNode *)v20, &v41);
    if ( Queue && CInputDest::IsEqualByQ(Queue, (const struct CInputDest *)v44) )
    {
      if ( CInputDest::IsEqualByQ((CInputDest *)v44, (const struct CInputDest *)(v21 + 16)) )
      {
        if ( *((_QWORD *)a5 + 19) == v21 )
        {
          v32 = *((_DWORD *)a3 + 42);
          v33 = *((_DWORD *)a3 + 44);
          v34 = *((_DWORD *)v7 + 10);
          v43[0] = v44[0];
          v43[2] = v44[2];
          v43[1] = v44[1];
          v40 = v32;
          v35 = v20[2];
          v43[4] = v44[4];
          v43[3] = v44[3];
          v43[6] = v44[6];
          v43[5] = v44[5];
          if ( (unsigned int)ApiSetEditionIsPointerQueuedMessageCoalescable(
                               (unsigned int)v43,
                               (_DWORD)v42,
                               v34,
                               v33,
                               v35,
                               v40) )
          {
            if ( *(_DWORD *)a6 != 1 )
              MicrosoftTelemetryAssertTriggeredNoArgsKM(v37);
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              LOBYTE(v36) = 4;
              WPP_RECORDER_SF_(
                WPP_MAIN_CB.Queue.ListEntry.Flink,
                v36,
                7,
                281,
                (__int64)&WPP_6cc13e1a12c13a444721acaa10d1d35b_Traceguids);
              if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              {
                if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
                {
                  LOBYTE(v38) = 5;
                  WPP_RECORDER_SF_(
                    WPP_GLOBAL_Control->DeviceExtension,
                    v38,
                    7,
                    282,
                    (__int64)&WPP_6cc13e1a12c13a444721acaa10d1d35b_Traceguids);
                }
              }
            }
            goto LABEL_97;
          }
          *(_DWORD *)a6 = 7;
LABEL_96:
          v17 = 0;
LABEL_97:
          CInputDest::SetEmpty((CInputDest *)v44);
          return v17;
        }
        *(_DWORD *)a6 = 4;
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          goto LABEL_96;
        LOBYTE(v28) = 4;
        WPP_RECORDER_SF_(
          WPP_MAIN_CB.Queue.ListEntry.Flink,
          v28,
          7,
          279,
          (__int64)&WPP_6cc13e1a12c13a444721acaa10d1d35b_Traceguids);
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          goto LABEL_96;
        v30 = WPP_GLOBAL_Control;
        if ( !LOWORD(WPP_GLOBAL_Control->DeviceType) )
          goto LABEL_96;
        v31 = 280;
      }
      else
      {
        *(_DWORD *)a6 = 4;
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          goto LABEL_96;
        LOBYTE(v28) = 4;
        WPP_RECORDER_SF_(
          WPP_MAIN_CB.Queue.ListEntry.Flink,
          v28,
          7,
          277,
          (__int64)&WPP_6cc13e1a12c13a444721acaa10d1d35b_Traceguids);
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          goto LABEL_96;
        v30 = WPP_GLOBAL_Control;
        if ( !LOWORD(WPP_GLOBAL_Control->DeviceType) )
          goto LABEL_96;
        v31 = 278;
      }
    }
    else
    {
      *(_DWORD *)a6 = 4;
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_96;
      LOBYTE(v27) = 4;
      WPP_RECORDER_SF_(
        WPP_MAIN_CB.Queue.ListEntry.Flink,
        v27,
        7,
        275,
        (__int64)&WPP_6cc13e1a12c13a444721acaa10d1d35b_Traceguids);
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_96;
      v30 = WPP_GLOBAL_Control;
      if ( !LOWORD(WPP_GLOBAL_Control->DeviceType) )
        goto LABEL_96;
      v31 = 276;
    }
    LOBYTE(v29) = 5;
    WPP_RECORDER_SF_(v30->DeviceExtension, v29, 7, v31, (__int64)&WPP_6cc13e1a12c13a444721acaa10d1d35b_Traceguids);
    goto LABEL_96;
  }
  *(_DWORD *)a6 = 23;
  if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    return 0LL;
  LOBYTE(a2) = 4;
  WPP_RECORDER_SF_(
    WPP_MAIN_CB.Queue.ListEntry.Flink,
    (_DWORD)a2,
    7,
    255,
    (__int64)&WPP_6cc13e1a12c13a444721acaa10d1d35b_Traceguids);
  if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    return 0LL;
  v10 = WPP_GLOBAL_Control;
  if ( !LOWORD(WPP_GLOBAL_Control->DeviceType) )
    return 0LL;
  v11 = 256;
LABEL_106:
  LOBYTE(v9) = 5;
  WPP_RECORDER_SF_(v10->DeviceExtension, v9, 7, v11, (__int64)&WPP_6cc13e1a12c13a444721acaa10d1d35b_Traceguids);
  return 0LL;
}
