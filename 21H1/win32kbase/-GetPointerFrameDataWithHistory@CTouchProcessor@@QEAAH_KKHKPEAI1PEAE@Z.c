/*
 * XREFs of ?GetPointerFrameDataWithHistory@CTouchProcessor@@QEAAH_KKHKPEAI1PEAE@Z @ 0x1C0197A30
 * Callers:
 *     ?GetPointerFrameInfoInternal@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@GKHKPEAI1PEAE@Z @ 0x1C0197DF0 (-GetPointerFrameInfoInternal@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@GKHKPEAI1PEAE@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C00678DC (WPP_RECORDER_SF_.c)
 *     ??0CInpLockGuardShared@@QEAA@AEAUCInpLockGuard@@PEAX@Z @ 0x1C00D0AE0 (--0CInpLockGuardShared@@QEAA@AEAUCInpLockGuard@@PEAX@Z.c)
 *     ?UnLock@CInpLockGuard@@QEAAXAEAVCRefUnRefPointerMsgId@@@Z @ 0x1C00D15B0 (-UnLock@CInpLockGuard@@QEAAXAEAVCRefUnRefPointerMsgId@@@Z.c)
 *     GetPointerInfoSize @ 0x1C01339CC (GetPointerInfoSize.c)
 *     ?FindFrameById@CTouchProcessor@@AEAAPEAUCPointerInputFrame@@K@Z @ 0x1C01938C8 (-FindFrameById@CTouchProcessor@@AEAAPEAUCPointerInputFrame@@K@Z.c)
 *     ?GetHistoryCount@CPointerInfoNode@@QEBAKXZ @ 0x1C01965AC (-GetHistoryCount@CPointerInfoNode@@QEBAKXZ.c)
 *     ?GetPointerFrameData@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@PEBUCPointerInfoNode@@KIPEAIPEAE@Z @ 0x1C01978F0 (-GetPointerFrameData@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@PEBUCPointerInfoNode@@KIPEAIP.c)
 *     ?GetPointerHistoryFrameData@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@KIIPEAE1@Z @ 0x1C0197FC0 (-GetPointerHistoryFrameData@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@KIIPEAE1@Z.c)
 *     ?GetPreviousFrameByDevice@CTouchProcessor@@AEAAPEBUCPointerInputFrame@@PEBU2@@Z @ 0x1C0199D8C (-GetPreviousFrameByDevice@CTouchProcessor@@AEAAPEBUCPointerInputFrame@@PEBU2@@Z.c)
 *     ?IsFullyReleased@CPointerInfoNode@@QEBAHXZ @ 0x1C019AC78 (-IsFullyReleased@CPointerInfoNode@@QEBAHXZ.c)
 *     ?IsValid@CPointerInfoNode@@QEBAHXZ @ 0x1C019B338 (-IsValid@CPointerInfoNode@@QEBAHXZ.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02015EC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
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
  int v15; // edx
  PDEVICE_OBJECT v16; // rcx
  int v17; // r9d
  __int64 v18; // rcx
  struct CPointerInputFrame *FrameById; // rbp
  __int64 v20; // rax
  CPointerInfoNode *v21; // rsi
  __int64 v22; // rcx
  unsigned int PointerFrameData; // ebx
  unsigned int v24; // r15d
  int v25; // edx
  __int64 v26; // rcx
  __int64 v27; // rdi
  unsigned int v28; // r13d
  unsigned __int64 v29; // rdi
  unsigned int HistoryCount; // eax
  unsigned int v31; // r15d
  unsigned int v32; // r13d
  __int64 v33; // rcx
  const struct CPointerInputFrame *PreviousFrameByDevice; // rsi
  CPointerInfoNode *v35; // rbp
  __int64 v36; // rcx
  int v37; // eax
  __int64 v38; // rcx
  unsigned int v39; // eax
  _BYTE v41[40]; // [rsp+40h] [rbp-88h] BYREF
  CInpLockGuard *v42; // [rsp+68h] [rbp-60h]
  int v43; // [rsp+70h] [rbp-58h]
  unsigned int v45; // [rsp+D8h] [rbp+10h] BYREF
  unsigned int v46; // [rsp+E0h] [rbp+18h]
  int v47; // [rsp+E8h] [rbp+20h]

  v47 = a4;
  v46 = a3;
  v8 = a8;
  v45 = 0;
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
      (__int64)&WPP_6cc13e1a12c13a444721acaa10d1d35b_Traceguids);
  }
  CInpLockGuardShared::CInpLockGuardShared((CInpLockGuardShared *)v41, (struct CInpLockGuard *)(this + 5), a2);
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
    WPP_RECORDER_SF_(v16->DeviceExtension, v15, 7, v17, (__int64)&WPP_6cc13e1a12c13a444721acaa10d1d35b_Traceguids);
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
  v20 = (unsigned int)a2[8];
  if ( (unsigned int)v20 >= *((_DWORD *)FrameById + 12) )
  {
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v18);
    v20 = (unsigned int)a2[8];
  }
  v21 = (CPointerInfoNode *)(*((_QWORD *)FrameById + 17) + 480 * v20);
  if ( !(unsigned int)CPointerInfoNode::IsValid(v21) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v22);
  if ( (unsigned int)CPointerInfoNode::IsFullyReleased(v21) )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_21;
    v16 = WPP_GLOBAL_Control;
    if ( !LOWORD(WPP_GLOBAL_Control->DeviceType) )
      goto LABEL_21;
    v17 = 131;
    goto LABEL_20;
  }
  v24 = 1;
  a5 = 1;
  PointerFrameData = CTouchProcessor::GetPointerFrameData(
                       (CTouchProcessor *)this,
                       FrameById,
                       v21,
                       v46,
                       v13,
                       &v45,
                       (struct tagPOINTER_INFO *)v8);
  if ( PointerFrameData )
  {
    v27 = v14;
    v28 = v45;
    v29 = v45 * v27;
    if ( v29 > 0xFFFFFFFF )
    {
      PointerFrameData = 0;
    }
    else
    {
      PointerFrameData = 1;
      if ( v13 >= (unsigned int)v29 )
      {
        if ( !(_DWORD)v29 )
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v26);
        v8 = &a8[(unsigned int)v29];
        v13 -= v29;
      }
      if ( v47 )
      {
        HistoryCount = CPointerInfoNode::GetHistoryCount(v21);
        v31 = *((_DWORD *)v21 + 86);
        v32 = HistoryCount;
        PreviousFrameByDevice = CTouchProcessor::GetPreviousFrameByDevice((CTouchProcessor *)this, FrameById);
        do
        {
          if ( !PreviousFrameByDevice || v32 <= 1 )
            break;
          if ( v31 >= *((_DWORD *)PreviousFrameByDevice + 12) )
            MicrosoftTelemetryAssertTriggeredNoArgsKM(v33);
          v35 = (CPointerInfoNode *)(*((_QWORD *)PreviousFrameByDevice + 17) + 480LL * v31);
          if ( !(unsigned int)CPointerInfoNode::IsValid(v35) )
            MicrosoftTelemetryAssertTriggeredNoArgsKM(v36);
          ++a5;
          if ( v13 >= (unsigned int)v29 )
          {
            PointerFrameData = CTouchProcessor::GetPointerHistoryFrameData(
                                 (CTouchProcessor *)this,
                                 PreviousFrameByDevice,
                                 v46,
                                 v45,
                                 v29,
                                 a8,
                                 v8);
            if ( PointerFrameData )
            {
              v8 += (unsigned int)v29;
              v13 -= v29;
            }
          }
          v37 = CPointerInfoNode::GetHistoryCount(v35);
          v38 = v32 - 1;
          if ( v37 != (_DWORD)v38 )
            MicrosoftTelemetryAssertTriggeredNoArgsKM(v38);
          v39 = CPointerInfoNode::GetHistoryCount(v35);
          v31 = *((_DWORD *)v35 + 86);
          v32 = v39;
          PreviousFrameByDevice = CTouchProcessor::GetPreviousFrameByDevice(
                                    (CTouchProcessor *)this,
                                    PreviousFrameByDevice);
        }
        while ( PointerFrameData );
        if ( !PointerFrameData )
          goto LABEL_45;
        v24 = a5;
        v28 = v45;
      }
      *a6 = v24;
      *a7 = v28;
    }
  }
LABEL_45:
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(v25) = 5;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      v25,
      7,
      132,
      (__int64)&WPP_6cc13e1a12c13a444721acaa10d1d35b_Traceguids);
  }
LABEL_48:
  if ( !v43 )
    CInpLockGuard::UnLock((PERESOURCE *)v42, (struct CRefUnRefPointerMsgId *)v41);
  return PointerFrameData;
}
