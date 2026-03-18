/*
 * XREFs of ?CopyPTPPointerInputFrame@CTouchProcessor@@IEAAPEAUCPointerInputFrame@@PEAU2@PEAX@Z @ 0x1C01892EC
 * Callers:
 *     ?CreateGestureCache@CPTPProcessor@@AEAAXIPEBUPTPEnginePointerNode@@_N@Z @ 0x1C01A05DC (-CreateGestureCache@CPTPProcessor@@AEAAXIPEBUPTPEnginePointerNode@@_N@Z.c)
 * Callees:
 *     HMValidateHandleNoSecure @ 0x1C0032DF0 (HMValidateHandleNoSecure.c)
 *     HMAssignmentLock @ 0x1C00555C0 (HMAssignmentLock.c)
 *     Win32FreePool @ 0x1C0057A50 (Win32FreePool.c)
 *     Win32AllocPoolZInit @ 0x1C006B1A0 (Win32AllocPoolZInit.c)
 *     ??0CInpLockGuardExclusive@@QEAA@AEAUCInpLockGuard@@PEAX@Z @ 0x1C00D11E4 (--0CInpLockGuardExclusive@@QEAA@AEAUCInpLockGuard@@PEAX@Z.c)
 *     ??0CInpLockGuardExclusiveIfNeeded@@QEAA@AEAUCInpLockGuard@@PEAX@Z @ 0x1C00D1224 (--0CInpLockGuardExclusiveIfNeeded@@QEAA@AEAUCInpLockGuard@@PEAX@Z.c)
 *     ?UnLock@CInpLockGuard@@QEAAXAEAVCRefUnRefPointerMsgId@@@Z @ 0x1C00D1E30 (-UnLock@CInpLockGuard@@QEAAXAEAVCRefUnRefPointerMsgId@@@Z.c)
 *     ??4CPointerInfoNode@@QEAAAEAU0@AEBU0@@Z @ 0x1C0185394 (--4CPointerInfoNode@@QEAAAEAU0@AEBU0@@Z.c)
 *     ??4CPointerQFrame@@QEAAAEAU0@AEBU0@@Z @ 0x1C0185734 (--4CPointerQFrame@@QEAAAEAU0@AEBU0@@Z.c)
 *     ?AllocPointerInfoNodeList@CTouchProcessor@@AEAAPEAUCPointerInfoNode@@K@Z @ 0x1C0185F84 (-AllocPointerInfoNodeList@CTouchProcessor@@AEAAPEAUCPointerInfoNode@@K@Z.c)
 *     ?AllocPointerQFrameList@CTouchProcessor@@AEAAPEAUCPointerQFrame@@K@Z @ 0x1C0185FD8 (-AllocPointerQFrameList@CTouchProcessor@@AEAAPEAUCPointerQFrame@@K@Z.c)
 *     ?CopyRawDataList@CTouchProcessor@@IEAAPEAUCPointerRawData@@PEBUCPointerInputFrame@@@Z @ 0x1C01895B4 (-CopyRawDataList@CTouchProcessor@@IEAAPEAUCPointerRawData@@PEBUCPointerInputFrame@@@Z.c)
 *     ?FreePointerInfoList@CTouchProcessor@@AEAAXPEAUCPointerInfoNode@@K@Z @ 0x1C018C28C (-FreePointerInfoList@CTouchProcessor@@AEAAXPEAUCPointerInfoNode@@K@Z.c)
 *     ?FreePointerQFrameList@CTouchProcessor@@AEAAXPEAUCPointerQFrame@@K@Z @ 0x1C018C460 (-FreePointerQFrameList@CTouchProcessor@@AEAAXPEAUCPointerQFrame@@K@Z.c)
 *     ApiSetResetLastSeenFrameId @ 0x1C01CA590 (ApiSetResetLastSeenFrameId.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01FA2AC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

LARGE_INTEGER *__fastcall CTouchProcessor::CopyPTPPointerInputFrame(
        struct _KTHREAD **this,
        struct CPointerInputFrame *a2,
        unsigned __int64 a3)
{
  LARGE_INTEGER *v6; // rax
  __int64 v7; // r8
  __int64 v8; // r9
  LARGE_INTEGER *v9; // rbx
  LARGE_INTEGER *v10; // rdi
  LARGE_INTEGER *v11; // rax
  struct CPointerInfoNode *v12; // rax
  CTouchProcessor *v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  LARGE_INTEGER v16; // r8
  LARGE_INTEGER v17; // r9
  unsigned int v18; // ebp
  __int64 v19; // rdx
  struct CPointerQFrame *v20; // rax
  unsigned int i; // ebp
  struct CPointerRawData *v22; // rax
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // rbp
  __int64 v26; // r8
  __int64 v27; // r9
  struct A0xad387374::CFrameIdGenerator *v28; // r14
  int v29; // ebp
  struct CPointerInfoNode *QuadPart; // rdx
  struct CPointerQFrame *v31; // rdx
  _QWORD v33[2]; // [rsp+20h] [rbp-98h] BYREF
  _BYTE v34[40]; // [rsp+30h] [rbp-88h] BYREF
  CInpLockGuard *v35; // [rsp+58h] [rbp-60h]
  _BYTE v36[40]; // [rsp+60h] [rbp-58h] BYREF
  CInpLockGuard *v37; // [rsp+88h] [rbp-30h]
  int v38; // [rsp+90h] [rbp-28h]

  CInpLockGuardExclusive::CInpLockGuardExclusive((CInpLockGuardExclusive *)v34, (struct CInpLockGuard *)(this + 5), 0LL);
  v6 = (LARGE_INTEGER *)Win32AllocPoolZInit(0xA0uLL, 0x66707355u);
  v9 = 0LL;
  v10 = v6;
  if ( v6 )
  {
    *(_OWORD *)&v6->LowPart = *(_OWORD *)a2;
    *(_OWORD *)&v6[2].LowPart = *((_OWORD *)a2 + 1);
    *(_OWORD *)&v6[4].LowPart = *((_OWORD *)a2 + 2);
    *(_OWORD *)&v6[6].LowPart = *((_OWORD *)a2 + 3);
    *(_OWORD *)&v6[8].LowPart = *((_OWORD *)a2 + 4);
    *(_OWORD *)&v6[10].LowPart = *((_OWORD *)a2 + 5);
    *(_OWORD *)&v6[12].LowPart = *((_OWORD *)a2 + 6);
    *(_OWORD *)&v6[14].LowPart = *((_OWORD *)a2 + 7);
    *(_OWORD *)&v6[16].LowPart = *((_OWORD *)a2 + 8);
    *(_OWORD *)&v6[18].LowPart = *((_OWORD *)a2 + 9);
    v11 = v6 + 1;
    v10[19].QuadPart = 0LL;
    v11[1].QuadPart = (LONGLONG)v11;
    v11->QuadPart = (LONGLONG)v11;
    v10[4].QuadPart = (LONGLONG)&v10[3];
    v10[3].QuadPart = (LONGLONG)&v10[3];
    v10[17].QuadPart = 0LL;
    v10[18].QuadPart = 0LL;
    v10[16].QuadPart = 0LL;
    v12 = CTouchProcessor::AllocPointerInfoNodeList(this, *((unsigned int *)a2 + 12), v7, v8);
    v10[17].QuadPart = (LONGLONG)v12;
    if ( !v12 )
      goto LABEL_17;
    v10[9] = KeQueryPerformanceCounter(0LL);
    v18 = 0;
    v19 = *((unsigned int *)a2 + 12);
    if ( (_DWORD)v19 )
    {
      do
      {
        CPointerInfoNode::operator=(v10[17].QuadPart + 480LL * v18, 480LL * v18 + *((_QWORD *)a2 + 17));
        v19 = *((unsigned int *)a2 + 12);
        ++v18;
      }
      while ( v18 < (unsigned int)v19 );
    }
    v20 = CTouchProcessor::AllocPointerQFrameList(this, v19, v16.QuadPart, v17.QuadPart);
    v10[18].QuadPart = (LONGLONG)v20;
    if ( !v20 )
      goto LABEL_17;
    for ( i = 0; i < *((_DWORD *)a2 + 12); ++i )
      CPointerQFrame::operator=(v10[18].QuadPart + 160LL * i, 160LL * i + *((_QWORD *)a2 + 18), v14, v15);
    if ( !*((_QWORD *)a2 + 16)
      || (v22 = CTouchProcessor::CopyRawDataList((CTouchProcessor *)this, a2), (v10[16].QuadPart = (LONGLONG)v22) != 0) )
    {
      v25 = HMValidateHandleNoSecure(a3, 19);
      if ( !v25 )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v24, v23, v26, v27);
      v33[1] = *(_QWORD *)(v25 + 480);
      v33[0] = v10 + 19;
      HMAssignmentLock((__int64)v33, v23);
      v28 = `anonymous namespace'::CFrameIdGenerator::s_pInstance;
      CInpLockGuardExclusiveIfNeeded::CInpLockGuardExclusiveIfNeeded(
        (CInpLockGuardExclusiveIfNeeded *)v36,
        (struct A0xad387374::CFrameIdGenerator *)((char *)`anonymous namespace'::CFrameIdGenerator::s_pInstance + 8),
        0LL);
      v29 = (*(_DWORD *)v28)++;
      if ( v29 == -1 )
      {
        *(_DWORD *)v28 = 1;
        ApiSetResetLastSeenFrameId();
      }
      if ( !v38 )
        CInpLockGuard::UnLock((PERESOURCE *)v37, (struct CRefUnRefPointerMsgId *)v36);
      *((_DWORD *)a2 + 10) = v29;
      v9 = v10;
    }
    else
    {
LABEL_17:
      QuadPart = (struct CPointerInfoNode *)v10[17].QuadPart;
      if ( QuadPart )
      {
        if ( QuadPart == *((struct CPointerInfoNode **)a2 + 17) )
        {
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v13, QuadPart, v14, v15);
          QuadPart = (struct CPointerInfoNode *)v10[17].QuadPart;
        }
        CTouchProcessor::FreePointerInfoList(v13, QuadPart, v10[6].LowPart);
      }
      v31 = (struct CPointerQFrame *)v10[18].QuadPart;
      if ( v31 )
      {
        if ( v31 == *((struct CPointerQFrame **)a2 + 18) )
        {
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v13, v31, v14, v15);
          v31 = (struct CPointerQFrame *)v10[18].QuadPart;
        }
        CTouchProcessor::FreePointerQFrameList(v13, v31, v10[6].LowPart);
      }
      Win32FreePool((__int64)v10);
    }
  }
  CInpLockGuard::UnLock((PERESOURCE *)v35, (struct CRefUnRefPointerMsgId *)v34);
  return v9;
}
