/*
 * XREFs of ?CanCoalesceNodeWithPrevious@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@PEBUCPointerInfoNode@@PEAUtagQMSG@@PEAUCPointerQFrame@@PEAW4CPointerCoalesce@@@Z @ 0x1C0188C3C
 * Callers:
 *     ?CoalesceQFrames@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@PEAUCPointerQFrame@@PEAU2@@Z @ 0x1C0189FAC (-CoalesceQFrames@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@PEAUCPointerQFrame@@PEAU2@@Z.c)
 *     ?ProcessQFrameNode@CTouchProcessor@@QEAAXPEAUCPointerQFrame@@PEBUCPointerInputFrame@@PEAUCPointerInfoNode@@@Z @ 0x1C0198480 (-ProcessQFrameNode@CTouchProcessor@@QEAAXPEAUCPointerQFrame@@PEBUCPointerInputFrame@@PEAUCPointe.c)
 * Callees:
 *     ?IsEqualByQ@CInputDest@@QEBA_NAEBV1@@Z @ 0x1C00475C0 (-IsEqualByQ@CInputDest@@QEBA_NAEBV1@@Z.c)
 *     WPP_RECORDER_SF_ @ 0x1C0072EBC (WPP_RECORDER_SF_.c)
 *     ?SetEmpty@CInputDest@@QEAAXXZ @ 0x1C00746C4 (-SetEmpty@CInputDest@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C00CCA30 (__security_check_cookie.c)
 *     ??0CInputDest@@QEAA@PEAUHWND__@@W4INPUT_DESTINATION_WINDOW_TYPE@@W4HandleValidationType@0@@Z @ 0x1C01830B0 (--0CInputDest@@QEAA@PEAUHWND__@@W4INPUT_DESTINATION_WINDOW_TYPE@@W4HandleValidationType@0@@Z.c)
 *     ?FindValidNodeInFrame@CTouchProcessor@@AEAAPEAUCPointerInfoNode@@PEBUCPointerInputFrame@@GPEAK@Z @ 0x1C018E054 (-FindValidNodeInFrame@CTouchProcessor@@AEAAPEAUCPointerInfoNode@@PEBUCPointerInputFrame@@GPEAK@Z.c)
 *     ?GetQueue@CPointerInfoNode@@QEAAPEAVCInputDest@@PEAH@Z @ 0x1C0194154 (-GetQueue@CPointerInfoNode@@QEAAPEAVCInputDest@@PEAH@Z.c)
 *     ?IsFrameReferenced@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@@Z @ 0x1C0194F44 (-IsFrameReferenced@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@@Z.c)
 *     ?IsValid@CPointerInfoNode@@QEBAHXZ @ 0x1C0195650 (-IsValid@CPointerInfoNode@@QEBAHXZ.c)
 *     ApiSetEditionIsPointerQueuedMessageCoalescable @ 0x1C01C8A24 (ApiSetEditionIsPointerQueuedMessageCoalescable.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01FBBDC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
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
  int v33; // edx
  int v34; // edx
  int v35; // edx
  PDEVICE_OBJECT v36; // rcx
  int v37; // r9d
  int v38; // eax
  int v39; // r9d
  int v40; // r8d
  __int64 v41; // rax
  __int64 v42; // rdx
  __int64 v43; // rcx
  __int64 v44; // r8
  __int64 v45; // r9
  int v46; // edx
  int v48; // [rsp+28h] [rbp-D8h]
  int v49; // [rsp+30h] [rbp-D0h] BYREF
  struct tagQMSG *v50; // [rsp+38h] [rbp-C8h]
  _OWORD v51[7]; // [rsp+40h] [rbp-C0h] BYREF
  __m128i v52[8]; // [rsp+B0h] [rbp-50h] BYREF

  v7 = a2;
  v50 = a4;
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
        255,
        (__int64)&WPP_8113a81d21a7371434699e4b0bdc9bc8_Traceguids);
    }
  }
  v49 = 0;
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
        258,
        (__int64)&WPP_8113a81d21a7371434699e4b0bdc9bc8_Traceguids);
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        return 0LL;
      v10 = WPP_GLOBAL_Control;
      if ( !LOWORD(WPP_GLOBAL_Control->DeviceType) )
        return 0LL;
      v11 = 259;
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
        260,
        (__int64)&WPP_8113a81d21a7371434699e4b0bdc9bc8_Traceguids);
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        return 0LL;
      v10 = WPP_GLOBAL_Control;
      if ( !LOWORD(WPP_GLOBAL_Control->DeviceType) )
        return 0LL;
      v11 = 261;
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
        262,
        (__int64)&WPP_8113a81d21a7371434699e4b0bdc9bc8_Traceguids);
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        return 0LL;
      v10 = WPP_GLOBAL_Control;
      if ( !LOWORD(WPP_GLOBAL_Control->DeviceType) )
        return 0LL;
      v11 = 263;
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
        264,
        (__int64)&WPP_8113a81d21a7371434699e4b0bdc9bc8_Traceguids);
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        return 0LL;
      v10 = WPP_GLOBAL_Control;
      if ( !LOWORD(WPP_GLOBAL_Control->DeviceType) )
        return 0LL;
      v11 = 265;
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
        266,
        (__int64)&WPP_8113a81d21a7371434699e4b0bdc9bc8_Traceguids);
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        return 0LL;
      v10 = WPP_GLOBAL_Control;
      if ( !LOWORD(WPP_GLOBAL_Control->DeviceType) )
        return 0LL;
      v11 = 267;
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
        268,
        (__int64)&WPP_8113a81d21a7371434699e4b0bdc9bc8_Traceguids);
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        return 0LL;
      v10 = WPP_GLOBAL_Control;
      if ( !LOWORD(WPP_GLOBAL_Control->DeviceType) )
        return 0LL;
      v11 = 269;
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
        270,
        (__int64)&WPP_8113a81d21a7371434699e4b0bdc9bc8_Traceguids);
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        return 0LL;
      v10 = WPP_GLOBAL_Control;
      if ( !LOWORD(WPP_GLOBAL_Control->DeviceType) )
        return 0LL;
      v11 = 271;
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
        272,
        (__int64)&WPP_8113a81d21a7371434699e4b0bdc9bc8_Traceguids);
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        return 0LL;
      v10 = WPP_GLOBAL_Control;
      if ( !LOWORD(WPP_GLOBAL_Control->DeviceType) )
        return 0LL;
      v11 = 273;
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
        274,
        (__int64)&WPP_8113a81d21a7371434699e4b0bdc9bc8_Traceguids);
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        return 0LL;
      v10 = WPP_GLOBAL_Control;
      if ( !LOWORD(WPP_GLOBAL_Control->DeviceType) )
        return 0LL;
      v11 = 275;
      goto LABEL_106;
    }
    CInputDest::CInputDest(v52, *((_QWORD *)a3 + 24), *((_DWORD *)a3 + 111), 1);
    Queue = CPointerInfoNode::GetQueue((CPointerInfoNode *)v26, &v49);
    if ( Queue && CInputDest::IsEqualByQ(Queue, (const struct CInputDest *)v52) )
    {
      if ( CInputDest::IsEqualByQ((CInputDest *)v52, (const struct CInputDest *)(v27 + 16)) )
      {
        if ( *((_QWORD *)a5 + 19) == v27 )
        {
          v38 = *((_DWORD *)a3 + 42);
          v39 = *((_DWORD *)a3 + 44);
          v40 = *((_DWORD *)v7 + 10);
          v51[0] = v52[0];
          v51[2] = v52[2];
          v51[1] = v52[1];
          v48 = v38;
          v41 = v26[2];
          v51[4] = v52[4];
          v51[3] = v52[3];
          v51[6] = v52[6];
          v51[5] = v52[5];
          if ( (unsigned int)ApiSetEditionIsPointerQueuedMessageCoalescable(
                               (unsigned int)v51,
                               (_DWORD)v50,
                               v40,
                               v39,
                               v41,
                               v48) )
          {
            if ( *(_DWORD *)a6 != 1 )
              MicrosoftTelemetryAssertTriggeredNoArgsKM(v43, v42, v44, v45);
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              LOBYTE(v42) = 4;
              WPP_RECORDER_SF_(
                WPP_MAIN_CB.Queue.ListEntry.Flink,
                v42,
                7,
                282,
                (__int64)&WPP_8113a81d21a7371434699e4b0bdc9bc8_Traceguids);
              if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              {
                if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
                {
                  LOBYTE(v46) = 5;
                  WPP_RECORDER_SF_(
                    WPP_GLOBAL_Control->DeviceExtension,
                    v46,
                    7,
                    283,
                    (__int64)&WPP_8113a81d21a7371434699e4b0bdc9bc8_Traceguids);
                }
              }
            }
            goto LABEL_97;
          }
          *(_DWORD *)a6 = 7;
LABEL_96:
          v21 = 0;
LABEL_97:
          CInputDest::SetEmpty((CInputDest *)v52);
          return v21;
        }
        *(_DWORD *)a6 = 4;
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          goto LABEL_96;
        LOBYTE(v34) = 4;
        WPP_RECORDER_SF_(
          WPP_MAIN_CB.Queue.ListEntry.Flink,
          v34,
          7,
          280,
          (__int64)&WPP_8113a81d21a7371434699e4b0bdc9bc8_Traceguids);
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          goto LABEL_96;
        v36 = WPP_GLOBAL_Control;
        if ( !LOWORD(WPP_GLOBAL_Control->DeviceType) )
          goto LABEL_96;
        v37 = 281;
      }
      else
      {
        *(_DWORD *)a6 = 4;
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          goto LABEL_96;
        LOBYTE(v34) = 4;
        WPP_RECORDER_SF_(
          WPP_MAIN_CB.Queue.ListEntry.Flink,
          v34,
          7,
          278,
          (__int64)&WPP_8113a81d21a7371434699e4b0bdc9bc8_Traceguids);
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          goto LABEL_96;
        v36 = WPP_GLOBAL_Control;
        if ( !LOWORD(WPP_GLOBAL_Control->DeviceType) )
          goto LABEL_96;
        v37 = 279;
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
        276,
        (__int64)&WPP_8113a81d21a7371434699e4b0bdc9bc8_Traceguids);
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_96;
      v36 = WPP_GLOBAL_Control;
      if ( !LOWORD(WPP_GLOBAL_Control->DeviceType) )
        goto LABEL_96;
      v37 = 277;
    }
    LOBYTE(v35) = 5;
    WPP_RECORDER_SF_(v36->DeviceExtension, v35, 7, v37, (__int64)&WPP_8113a81d21a7371434699e4b0bdc9bc8_Traceguids);
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
    256,
    (__int64)&WPP_8113a81d21a7371434699e4b0bdc9bc8_Traceguids);
  if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    return 0LL;
  v10 = WPP_GLOBAL_Control;
  if ( !LOWORD(WPP_GLOBAL_Control->DeviceType) )
    return 0LL;
  v11 = 257;
LABEL_106:
  LOBYTE(v9) = 5;
  WPP_RECORDER_SF_(v10->DeviceExtension, v9, 7, v11, (__int64)&WPP_8113a81d21a7371434699e4b0bdc9bc8_Traceguids);
  return 0LL;
}
