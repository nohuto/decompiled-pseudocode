/*
 * XREFs of ?CanCoalesceNodeWithPrevious@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@PEBUCPointerInfoNode@@PEAUtagQMSG@@PEAUCPointerQFrame@@PEAW4CPointerCoalesce@@@Z @ 0x1C01866FC
 * Callers:
 *     ?CoalesceQFrames@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@PEAUCPointerQFrame@@PEAU2@@Z @ 0x1C0187A6C (-CoalesceQFrames@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@PEAUCPointerQFrame@@PEAU2@@Z.c)
 *     ?ProcessQFrameNode@CTouchProcessor@@QEAAXPEAUCPointerQFrame@@PEBUCPointerInputFrame@@PEAUCPointerInfoNode@@@Z @ 0x1C0195F50 (-ProcessQFrameNode@CTouchProcessor@@QEAAXPEAUCPointerQFrame@@PEBUCPointerInputFrame@@PEAUCPointe.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C004F07C (WPP_RECORDER_SF_.c)
 *     ?SetEmpty@CInputDest@@QEAAXXZ @ 0x1C0055364 (-SetEmpty@CInputDest@@QEAAXXZ.c)
 *     ?IsEqualByQ@CInputDest@@QEBA_NAEBV1@@Z @ 0x1C00A8B58 (-IsEqualByQ@CInputDest@@QEBA_NAEBV1@@Z.c)
 *     __security_check_cookie @ 0x1C00CBC40 (__security_check_cookie.c)
 *     ??0CInputDest@@QEAA@PEAUHWND__@@W4INPUT_DESTINATION_WINDOW_TYPE@@W4HandleValidationType@0@@Z @ 0x1C0180B70 (--0CInputDest@@QEAA@PEAUHWND__@@W4INPUT_DESTINATION_WINDOW_TYPE@@W4HandleValidationType@0@@Z.c)
 *     ?FindValidNodeInFrame@CTouchProcessor@@AEAAPEAUCPointerInfoNode@@PEBUCPointerInputFrame@@GPEAK@Z @ 0x1C018BB34 (-FindValidNodeInFrame@CTouchProcessor@@AEAAPEAUCPointerInfoNode@@PEBUCPointerInputFrame@@GPEAK@Z.c)
 *     ?GetQueue@CPointerInfoNode@@QEAAPEAVCInputDest@@PEAH@Z @ 0x1C0191C24 (-GetQueue@CPointerInfoNode@@QEAAPEAVCInputDest@@PEAH@Z.c)
 *     ?IsFrameReferenced@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@@Z @ 0x1C0192A14 (-IsFrameReferenced@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@@Z.c)
 *     ?IsValid@CPointerInfoNode@@QEBAHXZ @ 0x1C0193120 (-IsValid@CPointerInfoNode@@QEBAHXZ.c)
 *     ApiSetEditionIsPointerQueuedMessageCoalescable @ 0x1C01C66A4 (ApiSetEditionIsPointerQueuedMessageCoalescable.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01FA2AC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
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
  __int64 v12; // rdx
  CTouchProcessor *v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  int v20; // eax
  unsigned int v21; // edi
  struct CPointerInfoNode *ValidNodeInFrame; // rax
  __int64 v23; // rdx
  __int64 v24; // r8
  __int64 v25; // r9
  __int64 *v26; // rsi
  __int64 v27; // r14
  int v28; // eax
  int v29; // eax
  int v30; // edx
  __int64 v31; // rcx
  CInputDest *Queue; // rax
  __int64 v33; // rdx
  __int64 v34; // r8
  __int64 v35; // r9
  PDEVICE_OBJECT v36; // rcx
  int v37; // r9d
  int v38; // eax
  int v39; // r9d
  int v40; // r8d
  __int64 v41; // rax
  __int64 v42; // rcx
  int v44; // [rsp+28h] [rbp-D8h]
  int v45; // [rsp+30h] [rbp-D0h] BYREF
  struct tagQMSG *v46; // [rsp+38h] [rbp-C8h]
  _OWORD v47[7]; // [rsp+40h] [rbp-C0h] BYREF
  __m128i v48[8]; // [rsp+B0h] [rbp-50h] BYREF

  v7 = a2;
  v46 = a4;
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
        (__int64)&WPP_50814762fbc63e38c7e5eacf83347307_Traceguids);
    }
  }
  v45 = 0;
  if ( v8[9] != KeGetCurrentThread() )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(this, a2, 0LL, a4);
  if ( *((_DWORD *)a5 + 27) )
  {
    if ( !(unsigned int)CPointerInfoNode::IsValid(a3) )
    {
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v13, v12, v14, v15);
      v14 = 0LL;
    }
    if ( *((_QWORD *)a3 + 24) == v14 )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v13, v12, v14, v15);
    if ( !(unsigned int)CTouchProcessor::IsFrameReferenced(v13, v7) )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v17, v16, v18, v19);
    v20 = *(_DWORD *)a3;
    v21 = 1;
    if ( (*(_DWORD *)a3 & 1) == 0 )
    {
      *(_DWORD *)a6 = 2;
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        return 0LL;
      LOBYTE(v16) = 4;
      WPP_RECORDER_SF_(
        WPP_MAIN_CB.Queue.ListEntry.Flink,
        v16,
        7,
        257,
        (__int64)&WPP_50814762fbc63e38c7e5eacf83347307_Traceguids);
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        return 0LL;
      v10 = WPP_GLOBAL_Control;
      if ( !LOWORD(WPP_GLOBAL_Control->DeviceType) )
        return 0LL;
      v11 = 258;
      goto LABEL_106;
    }
    if ( (v20 & 8) != 0 || (v20 & 0x10) != 0 || (v20 & 0x40) != 0 || (v20 & 0x20) != 0 )
    {
      *(_DWORD *)a6 = 16;
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        return 0LL;
      LOBYTE(v16) = 4;
      WPP_RECORDER_SF_(
        WPP_MAIN_CB.Queue.ListEntry.Flink,
        v16,
        7,
        259,
        (__int64)&WPP_50814762fbc63e38c7e5eacf83347307_Traceguids);
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        return 0LL;
      v10 = WPP_GLOBAL_Control;
      if ( !LOWORD(WPP_GLOBAL_Control->DeviceType) )
        return 0LL;
      v11 = 260;
      goto LABEL_106;
    }
    ValidNodeInFrame = CTouchProcessor::FindValidNodeInFrame((CTouchProcessor *)v8, v7, *((_WORD *)a3 + 86), 0LL);
    v26 = (__int64 *)ValidNodeInFrame;
    if ( !ValidNodeInFrame )
    {
      *(_DWORD *)a6 = 3;
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        return 0LL;
      LOBYTE(v23) = 4;
      WPP_RECORDER_SF_(
        WPP_MAIN_CB.Queue.ListEntry.Flink,
        v23,
        7,
        261,
        (__int64)&WPP_50814762fbc63e38c7e5eacf83347307_Traceguids);
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        return 0LL;
      v10 = WPP_GLOBAL_Control;
      if ( !LOWORD(WPP_GLOBAL_Control->DeviceType) )
        return 0LL;
      v11 = 262;
      goto LABEL_106;
    }
    v27 = *((_QWORD *)v7 + 18) + 160LL * *((unsigned int *)ValidNodeInFrame + 2);
    if ( !*((_QWORD *)a5 + 19) )
      *((_QWORD *)a5 + 19) = v27;
    v28 = *(_DWORD *)(v27 + 140);
    if ( (v28 & 1) == 0 )
    {
      *(_DWORD *)a6 = 12;
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        return 0LL;
      LOBYTE(v23) = 4;
      WPP_RECORDER_SF_(
        WPP_MAIN_CB.Queue.ListEntry.Flink,
        v23,
        7,
        263,
        (__int64)&WPP_50814762fbc63e38c7e5eacf83347307_Traceguids);
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        return 0LL;
      v10 = WPP_GLOBAL_Control;
      if ( !LOWORD(WPP_GLOBAL_Control->DeviceType) )
        return 0LL;
      v11 = 264;
      goto LABEL_106;
    }
    if ( (v28 & 8) != 0 )
    {
      *(_DWORD *)a6 = 11;
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        return 0LL;
      LOBYTE(v23) = 4;
      WPP_RECORDER_SF_(
        WPP_MAIN_CB.Queue.ListEntry.Flink,
        v23,
        7,
        265,
        (__int64)&WPP_50814762fbc63e38c7e5eacf83347307_Traceguids);
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        return 0LL;
      v10 = WPP_GLOBAL_Control;
      if ( !LOWORD(WPP_GLOBAL_Control->DeviceType) )
        return 0LL;
      v11 = 266;
      goto LABEL_106;
    }
    if ( (*(_DWORD *)v26 & 1) == 0 )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(0LL, v23, v24, v25);
    v29 = *(_DWORD *)a3;
    v30 = 0x800000;
    if ( (*(_DWORD *)a3 & 0x800000) != 0
      || (v29 & 0x8000000) != 0
      || v29 < 0
      || (*((_DWORD *)a3 + 1) & 8) != 0
      || (v31 = *(unsigned int *)v26, (v31 & 0x800000) != 0)
      || (v31 & 0x8000000) != 0
      || (v31 & 0x80000000) != 0
      || (*((_DWORD *)v26 + 1) & 8) != 0 )
    {
      *(_DWORD *)a6 = 16;
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        return 0LL;
      LOBYTE(v30) = 4;
      WPP_RECORDER_SF_(
        WPP_MAIN_CB.Queue.ListEntry.Flink,
        v30,
        7,
        267,
        (__int64)&WPP_50814762fbc63e38c7e5eacf83347307_Traceguids);
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        return 0LL;
      v10 = WPP_GLOBAL_Control;
      if ( !LOWORD(WPP_GLOBAL_Control->DeviceType) )
        return 0LL;
      v11 = 268;
      goto LABEL_106;
    }
    if ( (v31 & 0x100000) != 0 && (v31 & 0x400000) == 0 )
    {
      if ( (v31 & 0x200000) == 0 )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v31, 0x800000LL, 0x8000000LL, 0x80000000LL);
      *(_DWORD *)a6 = 21;
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        return 0LL;
      LOBYTE(v30) = 4;
      WPP_RECORDER_SF_(
        WPP_MAIN_CB.Queue.ListEntry.Flink,
        v30,
        7,
        269,
        (__int64)&WPP_50814762fbc63e38c7e5eacf83347307_Traceguids);
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        return 0LL;
      v10 = WPP_GLOBAL_Control;
      if ( !LOWORD(WPP_GLOBAL_Control->DeviceType) )
        return 0LL;
      v11 = 270;
      goto LABEL_106;
    }
    if ( *((_DWORD *)v26 + 45) != *((_DWORD *)a3 + 45) )
    {
      *(_DWORD *)a6 = 5;
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        return 0LL;
      LOBYTE(v30) = 4;
      WPP_RECORDER_SF_(
        WPP_MAIN_CB.Queue.ListEntry.Flink,
        v30,
        7,
        271,
        (__int64)&WPP_50814762fbc63e38c7e5eacf83347307_Traceguids);
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        return 0LL;
      v10 = WPP_GLOBAL_Control;
      if ( !LOWORD(WPP_GLOBAL_Control->DeviceType) )
        return 0LL;
      v11 = 272;
      goto LABEL_106;
    }
    if ( *((_DWORD *)v26 + 59) == 100 )
    {
      *(_DWORD *)a6 = 6;
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        return 0LL;
      LOBYTE(v30) = 4;
      WPP_RECORDER_SF_(
        WPP_MAIN_CB.Queue.ListEntry.Flink,
        v30,
        7,
        273,
        (__int64)&WPP_50814762fbc63e38c7e5eacf83347307_Traceguids);
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        return 0LL;
      v10 = WPP_GLOBAL_Control;
      if ( !LOWORD(WPP_GLOBAL_Control->DeviceType) )
        return 0LL;
      v11 = 274;
      goto LABEL_106;
    }
    CInputDest::CInputDest(v48, *((_QWORD *)a3 + 24), *((_DWORD *)a3 + 111), 1);
    Queue = CPointerInfoNode::GetQueue((CPointerInfoNode *)v26, &v45);
    if ( Queue && CInputDest::IsEqualByQ(Queue, (const struct CInputDest *)v48) )
    {
      if ( CInputDest::IsEqualByQ((CInputDest *)v48, (const struct CInputDest *)(v27 + 16)) )
      {
        if ( *((_QWORD *)a5 + 19) == v27 )
        {
          v38 = *((_DWORD *)a3 + 42);
          v39 = *((_DWORD *)a3 + 44);
          v40 = *((_DWORD *)v7 + 10);
          v47[0] = v48[0];
          v47[2] = v48[2];
          v47[1] = v48[1];
          v44 = v38;
          v41 = v26[2];
          v47[4] = v48[4];
          v47[3] = v48[3];
          v47[6] = v48[6];
          v47[5] = v48[5];
          if ( (unsigned int)ApiSetEditionIsPointerQueuedMessageCoalescable(
                               (unsigned int)v47,
                               (_DWORD)v46,
                               v40,
                               v39,
                               v41,
                               v44) )
          {
            if ( *(_DWORD *)a6 != 1 )
              MicrosoftTelemetryAssertTriggeredNoArgsKM(v42, v33, v34, v35);
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              LOBYTE(v33) = 4;
              WPP_RECORDER_SF_(
                WPP_MAIN_CB.Queue.ListEntry.Flink,
                v33,
                7,
                281,
                (__int64)&WPP_50814762fbc63e38c7e5eacf83347307_Traceguids);
              if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              {
                if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
                {
                  LOBYTE(v33) = 5;
                  WPP_RECORDER_SF_(
                    WPP_GLOBAL_Control->DeviceExtension,
                    v33,
                    7,
                    282,
                    (__int64)&WPP_50814762fbc63e38c7e5eacf83347307_Traceguids);
                }
              }
            }
            goto LABEL_97;
          }
          *(_DWORD *)a6 = 7;
LABEL_96:
          v21 = 0;
LABEL_97:
          CInputDest::SetEmpty((CInputDest *)v48, v33, v34, v35);
          return v21;
        }
        *(_DWORD *)a6 = 4;
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          goto LABEL_96;
        LOBYTE(v33) = 4;
        WPP_RECORDER_SF_(
          WPP_MAIN_CB.Queue.ListEntry.Flink,
          v33,
          7,
          279,
          (__int64)&WPP_50814762fbc63e38c7e5eacf83347307_Traceguids);
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          goto LABEL_96;
        v36 = WPP_GLOBAL_Control;
        if ( !LOWORD(WPP_GLOBAL_Control->DeviceType) )
          goto LABEL_96;
        v37 = 280;
      }
      else
      {
        *(_DWORD *)a6 = 4;
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          goto LABEL_96;
        LOBYTE(v33) = 4;
        WPP_RECORDER_SF_(
          WPP_MAIN_CB.Queue.ListEntry.Flink,
          v33,
          7,
          277,
          (__int64)&WPP_50814762fbc63e38c7e5eacf83347307_Traceguids);
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          goto LABEL_96;
        v36 = WPP_GLOBAL_Control;
        if ( !LOWORD(WPP_GLOBAL_Control->DeviceType) )
          goto LABEL_96;
        v37 = 278;
      }
    }
    else
    {
      *(_DWORD *)a6 = 4;
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_96;
      LOBYTE(v33) = 4;
      WPP_RECORDER_SF_(
        WPP_MAIN_CB.Queue.ListEntry.Flink,
        v33,
        7,
        275,
        (__int64)&WPP_50814762fbc63e38c7e5eacf83347307_Traceguids);
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_96;
      v36 = WPP_GLOBAL_Control;
      if ( !LOWORD(WPP_GLOBAL_Control->DeviceType) )
        goto LABEL_96;
      v37 = 276;
    }
    LOBYTE(v33) = 5;
    WPP_RECORDER_SF_(v36->DeviceExtension, v33, 7, v37, (__int64)&WPP_50814762fbc63e38c7e5eacf83347307_Traceguids);
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
    (__int64)&WPP_50814762fbc63e38c7e5eacf83347307_Traceguids);
  if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    return 0LL;
  v10 = WPP_GLOBAL_Control;
  if ( !LOWORD(WPP_GLOBAL_Control->DeviceType) )
    return 0LL;
  v11 = 256;
LABEL_106:
  LOBYTE(v9) = 5;
  WPP_RECORDER_SF_(v10->DeviceExtension, v9, 7, v11, (__int64)&WPP_50814762fbc63e38c7e5eacf83347307_Traceguids);
  return 0LL;
}
