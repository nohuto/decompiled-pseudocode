/*
 * XREFs of ?GetPointerFrameDataWithHistory@CTouchProcessor@@QEAAH_KKHKPEAI1PEAE@Z @ 0x1C018F810
 * Callers:
 *     ?GetPointerFrameInfoInternal@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@GKHKPEAI1PEAE@Z @ 0x1C018FBD0 (-GetPointerFrameInfoInternal@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@GKHKPEAI1PEAE@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C004F07C (WPP_RECORDER_SF_.c)
 *     ??0CInpLockGuardShared@@QEAA@AEAUCInpLockGuard@@PEAX@Z @ 0x1C00D1280 (--0CInpLockGuardShared@@QEAA@AEAUCInpLockGuard@@PEAX@Z.c)
 *     ?UnLock@CInpLockGuard@@QEAAXAEAVCRefUnRefPointerMsgId@@@Z @ 0x1C00D1E30 (-UnLock@CInpLockGuard@@QEAAXAEAVCRefUnRefPointerMsgId@@@Z.c)
 *     GetPointerInfoSize @ 0x1C012B68C (GetPointerInfoSize.c)
 *     ?FindFrameById@CTouchProcessor@@AEAAPEAUCPointerInputFrame@@K@Z @ 0x1C018B6A8 (-FindFrameById@CTouchProcessor@@AEAAPEAUCPointerInputFrame@@K@Z.c)
 *     ?GetHistoryCount@CPointerInfoNode@@QEBAKXZ @ 0x1C018E38C (-GetHistoryCount@CPointerInfoNode@@QEBAKXZ.c)
 *     ?GetPointerFrameData@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@PEBUCPointerInfoNode@@KIPEAIPEAE@Z @ 0x1C018F6D0 (-GetPointerFrameData@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@PEBUCPointerInfoNode@@KIPEAIP.c)
 *     ?GetPointerHistoryFrameData@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@KIIPEAE1@Z @ 0x1C018FDA0 (-GetPointerHistoryFrameData@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@KIIPEAE1@Z.c)
 *     ?GetPreviousFrameByDevice@CTouchProcessor@@AEAAPEBUCPointerInputFrame@@PEBU2@@Z @ 0x1C0191B5C (-GetPreviousFrameByDevice@CTouchProcessor@@AEAAPEBUCPointerInputFrame@@PEBU2@@Z.c)
 *     ?IsFullyReleased@CPointerInfoNode@@QEBAHXZ @ 0x1C0192A48 (-IsFullyReleased@CPointerInfoNode@@QEBAHXZ.c)
 *     ?IsValid@CPointerInfoNode@@QEBAHXZ @ 0x1C0193120 (-IsValid@CPointerInfoNode@@QEBAHXZ.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01FA2AC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall CTouchProcessor::GetPointerFrameDataWithHistory(
        struct _KTHREAD **this,
        int *a2,
        unsigned int a3,
        int a4,
        unsigned int a5,
        unsigned int *a6,
        unsigned int *a7,
        unsigned __int8 *a8)
{
  unsigned __int8 *v8; // r12
  unsigned int PointerInfoSize; // eax
  int v12; // edx
  unsigned int v13; // r14d
  __int64 v14; // r13
  __int64 v15; // rdx
  PDEVICE_OBJECT v16; // rcx
  int v17; // r9d
  __int64 v18; // rcx
  struct CPointerInputFrame *FrameById; // rbp
  __int64 v20; // r8
  __int64 v21; // r9
  __int64 v22; // rax
  CPointerInfoNode *v23; // rsi
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // r9
  unsigned int PointerFrameData; // ebx
  unsigned int v29; // r15d
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // r8
  __int64 v33; // r9
  __int64 v34; // rdi
  unsigned int v35; // r13d
  unsigned __int64 v36; // rdi
  unsigned int HistoryCount; // eax
  unsigned int v38; // r15d
  unsigned int v39; // r13d
  __int64 v40; // rcx
  const struct CPointerInputFrame *PreviousFrameByDevice; // rsi
  __int64 v42; // r8
  __int64 v43; // r9
  CPointerInfoNode *v44; // rbp
  __int64 v45; // rdx
  __int64 v46; // rcx
  __int64 v47; // r8
  __int64 v48; // r9
  int v49; // eax
  __int64 v50; // rdx
  __int64 v51; // r8
  __int64 v52; // r9
  __int64 v53; // rcx
  unsigned int v54; // eax
  _BYTE v56[40]; // [rsp+40h] [rbp-88h] BYREF
  CInpLockGuard *v57; // [rsp+68h] [rbp-60h]
  int v58; // [rsp+70h] [rbp-58h]
  unsigned int v60; // [rsp+D8h] [rbp+10h] BYREF
  unsigned int v61; // [rsp+E0h] [rbp+18h]
  int v62; // [rsp+E8h] [rbp+20h]

  v62 = a4;
  v61 = a3;
  v8 = a8;
  v60 = 0;
  PointerInfoSize = GetPointerInfoSize(a3);
  v13 = a5;
  v14 = PointerInfoSize;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(v12) = 5;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      v12,
      7,
      128,
      (__int64)&WPP_50814762fbc63e38c7e5eacf83347307_Traceguids);
  }
  CInpLockGuardShared::CInpLockGuardShared((CInpLockGuardShared *)v56, (struct CInpLockGuard *)(this + 5), a2);
  if ( !a2 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_21;
    v16 = WPP_GLOBAL_Control;
    if ( !LOWORD(WPP_GLOBAL_Control->DeviceType) )
      goto LABEL_21;
    v17 = 129;
LABEL_20:
    LOBYTE(v15) = 5;
    WPP_RECORDER_SF_(v16->DeviceExtension, v15, 7, v17, (__int64)&WPP_50814762fbc63e38c7e5eacf83347307_Traceguids);
LABEL_21:
    PointerFrameData = 0;
    goto LABEL_48;
  }
  FrameById = CTouchProcessor::FindFrameById(this, a2[7]);
  if ( !FrameById )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_21;
    v16 = WPP_GLOBAL_Control;
    if ( !LOWORD(WPP_GLOBAL_Control->DeviceType) )
      goto LABEL_21;
    v17 = 130;
    goto LABEL_20;
  }
  v22 = (unsigned int)a2[8];
  if ( (unsigned int)v22 >= *((_DWORD *)FrameById + 12) )
  {
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v18, v15, v20, v21);
    v22 = (unsigned int)a2[8];
  }
  v23 = (CPointerInfoNode *)(*((_QWORD *)FrameById + 17) + 480 * v22);
  if ( !(unsigned int)CPointerInfoNode::IsValid(v23) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v25, v24, v26, v27);
  if ( (unsigned int)CPointerInfoNode::IsFullyReleased(v23) )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_21;
    v16 = WPP_GLOBAL_Control;
    if ( !LOWORD(WPP_GLOBAL_Control->DeviceType) )
      goto LABEL_21;
    v17 = 131;
    goto LABEL_20;
  }
  v29 = 1;
  a5 = 1;
  PointerFrameData = CTouchProcessor::GetPointerFrameData(
                       (CTouchProcessor *)this,
                       FrameById,
                       v23,
                       v61,
                       v13,
                       &v60,
                       (struct tagPOINTER_INFO *)v8);
  if ( PointerFrameData )
  {
    v34 = v14;
    v35 = v60;
    v36 = v60 * v34;
    if ( v36 > 0xFFFFFFFF )
    {
      PointerFrameData = 0;
    }
    else
    {
      PointerFrameData = 1;
      if ( v13 >= (unsigned int)v36 )
      {
        if ( !(_DWORD)v36 )
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v31, v30, v32, v33);
        v8 = &a8[(unsigned int)v36];
        v13 -= v36;
      }
      if ( v62 )
      {
        HistoryCount = CPointerInfoNode::GetHistoryCount(v23);
        v38 = *((_DWORD *)v23 + 86);
        v39 = HistoryCount;
        PreviousFrameByDevice = CTouchProcessor::GetPreviousFrameByDevice((CTouchProcessor *)this, FrameById);
        do
        {
          if ( !PreviousFrameByDevice || v39 <= 1 )
            break;
          if ( v38 >= *((_DWORD *)PreviousFrameByDevice + 12) )
            MicrosoftTelemetryAssertTriggeredNoArgsKM(v40, v30, v42, v43);
          v44 = (CPointerInfoNode *)(*((_QWORD *)PreviousFrameByDevice + 17) + 480LL * v38);
          if ( !(unsigned int)CPointerInfoNode::IsValid(v44) )
            MicrosoftTelemetryAssertTriggeredNoArgsKM(v46, v45, v47, v48);
          ++a5;
          if ( v13 >= (unsigned int)v36 )
          {
            PointerFrameData = CTouchProcessor::GetPointerHistoryFrameData(
                                 (CTouchProcessor *)this,
                                 PreviousFrameByDevice,
                                 v61,
                                 v60,
                                 v36,
                                 a8,
                                 v8);
            if ( PointerFrameData )
            {
              v8 += (unsigned int)v36;
              v13 -= v36;
            }
          }
          v49 = CPointerInfoNode::GetHistoryCount(v44);
          v53 = v39 - 1;
          if ( v49 != (_DWORD)v53 )
            MicrosoftTelemetryAssertTriggeredNoArgsKM(v53, v50, v51, v52);
          v54 = CPointerInfoNode::GetHistoryCount(v44);
          v38 = *((_DWORD *)v44 + 86);
          v39 = v54;
          PreviousFrameByDevice = CTouchProcessor::GetPreviousFrameByDevice(
                                    (CTouchProcessor *)this,
                                    PreviousFrameByDevice);
        }
        while ( PointerFrameData );
        if ( !PointerFrameData )
          goto LABEL_45;
        v29 = a5;
        v35 = v60;
      }
      *a6 = v29;
      *a7 = v35;
    }
  }
LABEL_45:
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(v30) = 5;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      v30,
      7,
      132,
      (__int64)&WPP_50814762fbc63e38c7e5eacf83347307_Traceguids);
  }
LABEL_48:
  if ( !v58 )
    CInpLockGuard::UnLock((PERESOURCE *)v57, (struct CRefUnRefPointerMsgId *)v56);
  return PointerFrameData;
}
