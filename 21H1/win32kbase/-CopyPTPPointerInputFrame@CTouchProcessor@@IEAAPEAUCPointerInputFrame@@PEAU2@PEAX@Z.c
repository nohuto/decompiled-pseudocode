/*
 * XREFs of ?CopyPTPPointerInputFrame@CTouchProcessor@@IEAAPEAUCPointerInputFrame@@PEAU2@PEAX@Z @ 0x1C0191514
 * Callers:
 *     ?CreateGestureCache@CPTPProcessor@@AEAAXIPEBUPTPEnginePointerNode@@_N@Z @ 0x1C01A86BC (-CreateGestureCache@CPTPProcessor@@AEAAXIPEBUPTPEnginePointerNode@@_N@Z.c)
 * Callees:
 *     HMValidateHandleNoSecure @ 0x1C0063044 (HMValidateHandleNoSecure.c)
 *     HMAssignmentLock @ 0x1C0071980 (HMAssignmentLock.c)
 *     Win32FreePool @ 0x1C008C9A0 (Win32FreePool.c)
 *     Win32AllocPoolZInit @ 0x1C0090430 (Win32AllocPoolZInit.c)
 *     ??0CInpLockGuardExclusive@@QEAA@AEAUCInpLockGuard@@PEAX@Z @ 0x1C00D0A44 (--0CInpLockGuardExclusive@@QEAA@AEAUCInpLockGuard@@PEAX@Z.c)
 *     ??0CInpLockGuardExclusiveIfNeeded@@QEAA@AEAUCInpLockGuard@@PEAX@Z @ 0x1C00D0A84 (--0CInpLockGuardExclusiveIfNeeded@@QEAA@AEAUCInpLockGuard@@PEAX@Z.c)
 *     ?UnLock@CInpLockGuard@@QEAAXAEAVCRefUnRefPointerMsgId@@@Z @ 0x1C00D15B0 (-UnLock@CInpLockGuard@@QEAAXAEAVCRefUnRefPointerMsgId@@@Z.c)
 *     ??4CPointerInfoNode@@QEAAAEAU0@AEBU0@@Z @ 0x1C018D5D4 (--4CPointerInfoNode@@QEAAAEAU0@AEBU0@@Z.c)
 *     ??4CPointerQFrame@@QEAAAEAU0@AEBU0@@Z @ 0x1C018D974 (--4CPointerQFrame@@QEAAAEAU0@AEBU0@@Z.c)
 *     ?AllocPointerInfoNodeList@CTouchProcessor@@AEAAPEAUCPointerInfoNode@@K@Z @ 0x1C018E1C4 (-AllocPointerInfoNodeList@CTouchProcessor@@AEAAPEAUCPointerInfoNode@@K@Z.c)
 *     ?AllocPointerQFrameList@CTouchProcessor@@AEAAPEAUCPointerQFrame@@K@Z @ 0x1C018E218 (-AllocPointerQFrameList@CTouchProcessor@@AEAAPEAUCPointerQFrame@@K@Z.c)
 *     ?CopyRawDataList@CTouchProcessor@@IEAAPEAUCPointerRawData@@PEBUCPointerInputFrame@@@Z @ 0x1C01917DC (-CopyRawDataList@CTouchProcessor@@IEAAPEAUCPointerRawData@@PEBUCPointerInputFrame@@@Z.c)
 *     ?FreePointerInfoList@CTouchProcessor@@AEAAXPEAUCPointerInfoNode@@K@Z @ 0x1C01944AC (-FreePointerInfoList@CTouchProcessor@@AEAAXPEAUCPointerInfoNode@@K@Z.c)
 *     ?FreePointerQFrameList@CTouchProcessor@@AEAAXPEAUCPointerQFrame@@K@Z @ 0x1C0194680 (-FreePointerQFrameList@CTouchProcessor@@AEAAXPEAUCPointerQFrame@@K@Z.c)
 *     ApiSetResetLastSeenFrameId @ 0x1C01D2890 (ApiSetResetLastSeenFrameId.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02015EC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

LARGE_INTEGER *__fastcall CTouchProcessor::CopyPTPPointerInputFrame(
        struct _KTHREAD **this,
        struct CPointerInputFrame *a2,
        unsigned __int64 a3)
{
  LARGE_INTEGER *v6; // rax
  LARGE_INTEGER *v7; // rbx
  LARGE_INTEGER *v8; // rdi
  LARGE_INTEGER *v9; // rax
  struct CPointerInfoNode *v10; // rax
  CTouchProcessor *v11; // rcx
  __int64 v12; // r8
  unsigned int v13; // ebp
  unsigned int v14; // edx
  struct CPointerQFrame *v15; // rax
  unsigned int i; // ebp
  struct CPointerRawData *v17; // rax
  __int64 v18; // rcx
  __int64 v19; // rbp
  struct A0xad387374::CFrameIdGenerator *v20; // r14
  int v21; // ebp
  struct CPointerInfoNode *QuadPart; // rdx
  struct CPointerQFrame *v23; // rdx
  __int64 *v25[2]; // [rsp+20h] [rbp-98h] BYREF
  _BYTE v26[40]; // [rsp+30h] [rbp-88h] BYREF
  CInpLockGuard *v27; // [rsp+58h] [rbp-60h]
  _BYTE v28[40]; // [rsp+60h] [rbp-58h] BYREF
  CInpLockGuard *v29; // [rsp+88h] [rbp-30h]
  int v30; // [rsp+90h] [rbp-28h]

  CInpLockGuardExclusive::CInpLockGuardExclusive((CInpLockGuardExclusive *)v26, (struct CInpLockGuard *)(this + 5), 0LL);
  v6 = (LARGE_INTEGER *)Win32AllocPoolZInit(0xA0uLL, 0x66707355u);
  v7 = 0LL;
  v8 = v6;
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
    v9 = v6 + 1;
    v8[19].QuadPart = 0LL;
    v9[1].QuadPart = (LONGLONG)v9;
    v9->QuadPart = (LONGLONG)v9;
    v8[4].QuadPart = (LONGLONG)&v8[3];
    v8[3].QuadPart = (LONGLONG)&v8[3];
    v8[17].QuadPart = 0LL;
    v8[18].QuadPart = 0LL;
    v8[16].QuadPart = 0LL;
    v10 = CTouchProcessor::AllocPointerInfoNodeList(this, *((_DWORD *)a2 + 12));
    v8[17].QuadPart = (LONGLONG)v10;
    if ( !v10 )
      goto LABEL_17;
    v8[9] = KeQueryPerformanceCounter(0LL);
    v13 = 0;
    v14 = *((_DWORD *)a2 + 12);
    if ( v14 )
    {
      do
      {
        CPointerInfoNode::operator=(v8[17].QuadPart + 480LL * v13, 480LL * v13 + *((_QWORD *)a2 + 17));
        v14 = *((_DWORD *)a2 + 12);
        ++v13;
      }
      while ( v13 < v14 );
    }
    v15 = CTouchProcessor::AllocPointerQFrameList(this, v14);
    v8[18].QuadPart = (LONGLONG)v15;
    if ( !v15 )
      goto LABEL_17;
    for ( i = 0; i < *((_DWORD *)a2 + 12); ++i )
      CPointerQFrame::operator=(v8[18].QuadPart + 160LL * i, 160LL * i + *((_QWORD *)a2 + 18));
    if ( !*((_QWORD *)a2 + 16)
      || (v17 = CTouchProcessor::CopyRawDataList((CTouchProcessor *)this, a2), (v8[16].QuadPart = (LONGLONG)v17) != 0) )
    {
      v19 = HMValidateHandleNoSecure(a3, 19);
      if ( !v19 )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v18);
      v25[1] = *(__int64 **)(v19 + 480);
      v25[0] = (__int64 *)&v8[19];
      HMAssignmentLock(v25);
      v20 = `anonymous namespace'::CFrameIdGenerator::s_pInstance;
      CInpLockGuardExclusiveIfNeeded::CInpLockGuardExclusiveIfNeeded(
        (CInpLockGuardExclusiveIfNeeded *)v28,
        (struct A0xad387374::CFrameIdGenerator *)((char *)`anonymous namespace'::CFrameIdGenerator::s_pInstance + 8),
        0LL);
      v21 = (*(_DWORD *)v20)++;
      if ( v21 == -1 )
      {
        *(_DWORD *)v20 = 1;
        ApiSetResetLastSeenFrameId();
      }
      if ( !v30 )
        CInpLockGuard::UnLock((PERESOURCE *)v29, (struct CRefUnRefPointerMsgId *)v28);
      *((_DWORD *)a2 + 10) = v21;
      v7 = v8;
    }
    else
    {
LABEL_17:
      QuadPart = (struct CPointerInfoNode *)v8[17].QuadPart;
      if ( QuadPart )
      {
        if ( QuadPart == *((struct CPointerInfoNode **)a2 + 17) )
        {
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v11);
          QuadPart = (struct CPointerInfoNode *)v8[17].QuadPart;
        }
        CTouchProcessor::FreePointerInfoList(v11, QuadPart, v8[6].LowPart);
      }
      v23 = (struct CPointerQFrame *)v8[18].QuadPart;
      if ( v23 )
      {
        if ( v23 == *((struct CPointerQFrame **)a2 + 18) )
        {
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v11);
          v23 = (struct CPointerQFrame *)v8[18].QuadPart;
        }
        CTouchProcessor::FreePointerQFrameList(v11, v23, v8[6].LowPart);
      }
      Win32FreePool((__int64)v8, (__int64)v23, v12);
    }
  }
  CInpLockGuard::UnLock((PERESOURCE *)v27, (struct CRefUnRefPointerMsgId *)v26);
  return v7;
}
