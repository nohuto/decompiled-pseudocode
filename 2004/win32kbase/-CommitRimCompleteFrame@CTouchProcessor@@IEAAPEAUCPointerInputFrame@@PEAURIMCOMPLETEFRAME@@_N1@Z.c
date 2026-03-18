/*
 * XREFs of ?CommitRimCompleteFrame@CTouchProcessor@@IEAAPEAUCPointerInputFrame@@PEAURIMCOMPLETEFRAME@@_N1@Z @ 0x1C018B058
 * Callers:
 *     ?ProcessInjectedInput@CTouchProcessor@@QEAAXPEAX0_NK1@Z @ 0x1C0197988 (-ProcessInjectedInput@CTouchProcessor@@QEAAXPEAX0_NK1@Z.c)
 *     ?ProcessInput@CTouchProcessor@@QEAAXPEAX0HHH@Z @ 0x1C0197BB4 (-ProcessInput@CTouchProcessor@@QEAAXPEAX0HHH@Z.c)
 *     ?ProcessInput@CPTPProcessor@@QEAAXPEAX0HHH@Z @ 0x1C01A3F04 (-ProcessInput@CPTPProcessor@@QEAAXPEAX0HHH@Z.c)
 * Callees:
 *     Win32AllocPoolZInit @ 0x1C000EDD0 (Win32AllocPoolZInit.c)
 *     HMValidateHandleNoSecure @ 0x1C006DF18 (HMValidateHandleNoSecure.c)
 *     WPP_RECORDER_SF_ @ 0x1C0072EBC (WPP_RECORDER_SF_.c)
 *     ?SetEmpty@CInputDest@@QEAAXXZ @ 0x1C00746C4 (-SetEmpty@CInputDest@@QEAAXXZ.c)
 *     HMAssignmentLock @ 0x1C00748C0 (HMAssignmentLock.c)
 *     Win32FreePool @ 0x1C0096F60 (Win32FreePool.c)
 *     WPP_RECORDER_SF_d @ 0x1C00AA920 (WPP_RECORDER_SF_d.c)
 *     RawInputManagerDeviceObjectResolveHandle @ 0x1C00AB3A0 (RawInputManagerDeviceObjectResolveHandle.c)
 *     ??0CInpLockGuardExclusiveIfNeeded@@QEAA@AEAUCInpLockGuard@@PEAX@Z @ 0x1C00D1334 (--0CInpLockGuardExclusiveIfNeeded@@QEAA@AEAUCInpLockGuard@@PEAX@Z.c)
 *     ?UnLock@CInpLockGuard@@QEAAXAEAVCRefUnRefPointerMsgId@@@Z @ 0x1C00D1ED0 (-UnLock@CInpLockGuard@@QEAAXAEAVCRefUnRefPointerMsgId@@@Z.c)
 *     memmove @ 0x1C00D3980 (memmove.c)
 *     EtwTraceBeginPointerFrameCommit @ 0x1C01279E0 (EtwTraceBeginPointerFrameCommit.c)
 *     ?AllocPointerQFrameList@CTouchProcessor@@AEAAPEAUCPointerQFrame@@K@Z @ 0x1C0188518 (-AllocPointerQFrameList@CTouchProcessor@@AEAAPEAUCPointerQFrame@@K@Z.c)
 *     ?CommitFrame@Pointer@InputTraceLogging@@SAXPEBURIMDEV@@PEBUCPointerInputFrame@@@Z @ 0x1C018A3BC (-CommitFrame@Pointer@InputTraceLogging@@SAXPEBURIMDEV@@PEBUCPointerInputFrame@@@Z.c)
 *     ?CommitFramePointer@Pointer@InputTraceLogging@@SAXPEBURIMDEV@@PEBUCPointerInputFrame@@PEBUtagPOINTEREVENTINT@@@Z @ 0x1C018A554 (-CommitFramePointer@Pointer@InputTraceLogging@@SAXPEBURIMDEV@@PEBUCPointerInputFrame@@PEBUtagPOI.c)
 *     ?CommitInputFrame@CTouchProcessor@@IEAAXPEAUCPointerInputFrame@@@Z @ 0x1C018AFC4 (-CommitInputFrame@CTouchProcessor@@IEAAXPEAUCPointerInputFrame@@@Z.c)
 *     ?FreePointerInfoList@CTouchProcessor@@AEAAXPEAUCPointerInfoNode@@K@Z @ 0x1C018E7AC (-FreePointerInfoList@CTouchProcessor@@AEAAXPEAUCPointerInfoNode@@K@Z.c)
 *     ?FreePointerQFrameList@CTouchProcessor@@AEAAXPEAUCPointerQFrame@@K@Z @ 0x1C018E980 (-FreePointerQFrameList@CTouchProcessor@@AEAAXPEAUCPointerQFrame@@K@Z.c)
 *     IsTouchpadDevice @ 0x1C01ABA40 (IsTouchpadDevice.c)
 *     ApiSetResetLastSeenFrameId @ 0x1C01CC910 (ApiSetResetLastSeenFrameId.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01FBBDC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

struct CPointerInputFrame *__fastcall CTouchProcessor::CommitRimCompleteFrame(
        CTouchProcessor *this,
        struct RIMCOMPLETEFRAME *a2,
        char a3,
        char a4)
{
  struct RIMCOMPLETEFRAME *v5; // rsi
  CTouchProcessor *v6; // r14
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  int v11; // edx
  PDEVICE_OBJECT v12; // rcx
  int v13; // r9d
  char *v14; // rcx
  KPROCESSOR_MODE v15; // r8
  int v16; // eax
  int v17; // edx
  unsigned __int64 v18; // r12
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  __int64 v23; // r15
  __int64 v24; // rdx
  int v25; // edx
  char *v26; // rdi
  __int64 v27; // r8
  __int64 v28; // r9
  struct CPointerQFrame *v29; // rax
  int v30; // edx
  unsigned __int64 v31; // rcx
  int v32; // edx
  struct A0xad387374::CFrameIdGenerator *v33; // rbx
  int v34; // r13d
  _DWORD *v35; // r13
  __int64 v36; // rax
  _DWORD *v37; // r14
  __int64 v38; // rbx
  __int64 v39; // rcx
  _QWORD *v40; // r13
  __int64 v41; // rbx
  int v42; // edx
  CTouchProcessor *v43; // rcx
  _QWORD *v44; // r15
  void *v45; // rax
  int v46; // edx
  __int64 v47; // r8
  __int64 v48; // r9
  __int64 v49; // rbx
  __int64 v50; // rcx
  __int64 v51; // r14
  CTouchProcessor *v52; // rcx
  PVOID Object; // [rsp+38h] [rbp-69h] BYREF
  __int64 v55; // [rsp+40h] [rbp-61h]
  __int64 *v56[2]; // [rsp+48h] [rbp-59h] BYREF
  _BYTE v57[40]; // [rsp+58h] [rbp-49h] BYREF
  CInpLockGuard *v58; // [rsp+80h] [rbp-21h]
  int v59; // [rsp+88h] [rbp-19h]
  _BYTE v60[40]; // [rsp+90h] [rbp-11h] BYREF
  CInpLockGuard *v61; // [rsp+B8h] [rbp+17h]
  int v62; // [rsp+C0h] [rbp+1Fh]

  v5 = a2;
  v6 = this;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(a2) = 5;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      (_DWORD)a2,
      7,
      159,
      (__int64)&WPP_8113a81d21a7371434699e4b0bdc9bc8_Traceguids);
  }
  CInpLockGuardExclusiveIfNeeded::CInpLockGuardExclusiveIfNeeded(
    (CInpLockGuardExclusiveIfNeeded *)v60,
    (CTouchProcessor *)((char *)v6 + 40),
    0LL);
  if ( *((struct _KTHREAD **)v6 + 9) != KeGetCurrentThread() )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v8, v7, v9, v10);
  if ( a4 )
  {
    if ( *((_DWORD *)v6 + 57) )
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_80;
      LOBYTE(v7) = 3;
      WPP_RECORDER_SF_(
        WPP_MAIN_CB.Queue.ListEntry.Flink,
        v7,
        7,
        160,
        (__int64)&WPP_8113a81d21a7371434699e4b0bdc9bc8_Traceguids);
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_80;
      v12 = WPP_GLOBAL_Control;
      if ( !LOWORD(WPP_GLOBAL_Control->DeviceType) )
        goto LABEL_80;
      v13 = 161;
LABEL_79:
      LOBYTE(v11) = 5;
      WPP_RECORDER_SF_(v12->DeviceExtension, v11, 7, v13, (__int64)&WPP_8113a81d21a7371434699e4b0bdc9bc8_Traceguids);
LABEL_80:
      v26 = 0LL;
      goto LABEL_81;
    }
  }
  else if ( *((_DWORD *)v6 + 56) )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_80;
    LOBYTE(v7) = 3;
    WPP_RECORDER_SF_(
      WPP_MAIN_CB.Queue.ListEntry.Flink,
      v7,
      7,
      162,
      (__int64)&WPP_8113a81d21a7371434699e4b0bdc9bc8_Traceguids);
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_80;
    v12 = WPP_GLOBAL_Control;
    if ( !LOWORD(WPP_GLOBAL_Control->DeviceType) )
      goto LABEL_80;
    v13 = 163;
    goto LABEL_79;
  }
  v14 = (char *)*((_QWORD *)v5 + 4);
  v15 = *((_DWORD *)v5 + 20) == 0;
  Object = 0LL;
  v16 = RawInputManagerDeviceObjectResolveHandle(v14, 3u, v15, &Object);
  if ( v16 < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_80;
    LOBYTE(v17) = 2;
    WPP_RECORDER_SF_d(
      WPP_MAIN_CB.Queue.ListEntry.Flink,
      v17,
      7,
      164,
      (__int64)&WPP_8113a81d21a7371434699e4b0bdc9bc8_Traceguids,
      v16);
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_80;
    v12 = WPP_GLOBAL_Control;
    if ( !LOWORD(WPP_GLOBAL_Control->DeviceType) )
      goto LABEL_80;
    v13 = 165;
    goto LABEL_79;
  }
  v18 = 0LL;
  if ( Object != (PVOID)-88LL )
    v18 = *((_QWORD *)Object + 11);
  ObfDereferenceObject(Object);
  v55 = HMValidateHandleNoSecure(v18, 19);
  v23 = v55;
  if ( !v55 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v20, v19, v21, v22);
  v24 = *((unsigned int *)v5 + 6);
  if ( !(_DWORD)v24 )
  {
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v20, v24, v21, v22);
    LODWORD(v24) = *((_DWORD *)v5 + 6);
  }
  EtwTraceBeginPointerFrameCommit(0, v24, v21);
  v26 = (char *)Win32AllocPoolZInit(0xA0uLL, 1718645589LL);
  if ( !v26 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_80;
    LOBYTE(v25) = 2;
    WPP_RECORDER_SF_(
      WPP_MAIN_CB.Queue.ListEntry.Flink,
      v25,
      7,
      166,
      (__int64)&WPP_8113a81d21a7371434699e4b0bdc9bc8_Traceguids);
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_80;
    v12 = WPP_GLOBAL_Control;
    if ( !LOWORD(WPP_GLOBAL_Control->DeviceType) )
      goto LABEL_80;
    v13 = 167;
    goto LABEL_79;
  }
  v29 = CTouchProcessor::AllocPointerQFrameList((struct _KTHREAD **)v6, *((unsigned int *)v5 + 6), v27, v28);
  *((_QWORD *)v26 + 18) = v29;
  if ( !v29 )
  {
    Win32FreePool((__int64)v26);
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_80;
    LOBYTE(v30) = 2;
    WPP_RECORDER_SF_(
      WPP_MAIN_CB.Queue.ListEntry.Flink,
      v30,
      7,
      168,
      (__int64)&WPP_8113a81d21a7371434699e4b0bdc9bc8_Traceguids);
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_80;
    v12 = WPP_GLOBAL_Control;
    if ( !LOWORD(WPP_GLOBAL_Control->DeviceType) )
      goto LABEL_80;
    v13 = 169;
    goto LABEL_79;
  }
  v31 = 480LL * *((unsigned int *)v5 + 6);
  if ( v31 <= 0xFFFFFFFF )
    *((_QWORD *)v26 + 17) = Win32AllocPoolZInit((unsigned int)v31, 1701868373LL);
  if ( !*((_QWORD *)v26 + 17) )
  {
    CTouchProcessor::FreePointerQFrameList(
      (CTouchProcessor *)v31,
      *((struct CPointerQFrame **)v26 + 18),
      *((_DWORD *)v5 + 6));
    Win32FreePool((__int64)v26);
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_80;
    LOBYTE(v32) = 2;
    WPP_RECORDER_SF_(
      WPP_MAIN_CB.Queue.ListEntry.Flink,
      v32,
      7,
      170,
      (__int64)&WPP_8113a81d21a7371434699e4b0bdc9bc8_Traceguids);
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_80;
    v12 = WPP_GLOBAL_Control;
    if ( !LOWORD(WPP_GLOBAL_Control->DeviceType) )
      goto LABEL_80;
    v13 = 171;
    goto LABEL_79;
  }
  v33 = `anonymous namespace'::CFrameIdGenerator::s_pInstance;
  CInpLockGuardExclusiveIfNeeded::CInpLockGuardExclusiveIfNeeded(
    (CInpLockGuardExclusiveIfNeeded *)v57,
    (struct A0xad387374::CFrameIdGenerator *)((char *)`anonymous namespace'::CFrameIdGenerator::s_pInstance + 8),
    0LL);
  v34 = (*(_DWORD *)v33)++;
  if ( v34 == -1 )
  {
    *(_DWORD *)v33 = 1;
    ApiSetResetLastSeenFrameId();
  }
  if ( !v59 )
    CInpLockGuard::UnLock((PERESOURCE *)v58, (struct CRefUnRefPointerMsgId *)v57);
  *((_DWORD *)v26 + 10) = v34;
  *((_DWORD *)v26 + 12) = *((_DWORD *)v5 + 6);
  *((_QWORD *)v26 + 8) = v18;
  *(_OWORD *)(v26 + 72) = *(_OWORD *)((char *)v5 + 40);
  *(_OWORD *)(v26 + 88) = *(_OWORD *)((char *)v5 + 56);
  *((_QWORD *)v26 + 13) = *((_QWORD *)v5 + 9);
  *((_QWORD *)v26 + 14) = *(_QWORD *)(*((_QWORD *)v5 + 15) + 96LL);
  InputTraceLogging::Pointer::CommitFrame((const struct RIMDEV *)v23, (const struct CPointerInputFrame *)v26);
  v35 = (_DWORD *)*((_QWORD *)v5 + 15);
  v36 = 0LL;
  LODWORD(Object) = 0;
  if ( *((_DWORD *)v5 + 6) )
  {
    v37 = v35 + 2;
    do
    {
      v38 = 480 * v36;
      *(_DWORD *)(*((_QWORD *)v26 + 17) + v38 + 156) = *v35;
      v39 = 480 * v36 + *((_QWORD *)v26 + 17) + 160LL;
      *(_OWORD *)v39 = *(_OWORD *)v37;
      *(_OWORD *)(v39 + 16) = *((_OWORD *)v37 + 1);
      *(_OWORD *)(v39 + 32) = *((_OWORD *)v37 + 2);
      *(_OWORD *)(v39 + 48) = *((_OWORD *)v37 + 3);
      *(_OWORD *)(v39 + 64) = *((_OWORD *)v37 + 4);
      *(_OWORD *)(v39 + 80) = *((_OWORD *)v37 + 5);
      *(_OWORD *)(v39 + 96) = *((_OWORD *)v37 + 6);
      *(_OWORD *)(v39 + 112) = *((_OWORD *)v37 + 7);
      *(_OWORD *)(v39 + 128) = *((_OWORD *)v37 + 8);
      *(_OWORD *)(v39 + 144) = *((_OWORD *)v37 + 9);
      *(_OWORD *)(v39 + 160) = *((_OWORD *)v37 + 10);
      *(_QWORD *)(v39 + 176) = *((_QWORD *)v37 + 22);
      *(_QWORD *)(*((_QWORD *)v26 + 17) + v38 + 184) = v18;
      CInputDest::SetEmpty((CInputDest *)(480 * v36 + *((_QWORD *)v26 + 17) + 352LL));
      InputTraceLogging::Pointer::CommitFramePointer(
        (const struct RIMDEV *)v23,
        (const struct CPointerInputFrame *)v26,
        (const struct tagPOINTEREVENTINT *)(v38 + *((_QWORD *)v26 + 17) + 160LL));
      v36 = (unsigned int)((_DWORD)Object + 1);
      v35 += 48;
      v37 += 48;
      LODWORD(Object) = v36;
    }
    while ( (unsigned int)v36 < *((_DWORD *)v5 + 6) );
    v6 = this;
  }
  v40 = 0LL;
  *((_DWORD *)v26 + 14) = *((_DWORD *)v5 + 7);
  *(_QWORD *)v26 = gpTouchProcessor;
  v41 = *((_QWORD *)v5 + 14);
  if ( v41 )
  {
    while ( 1 )
    {
      v44 = Win32AllocPoolZInit(0x20uLL, 1685222229LL);
      if ( !v44 )
        break;
      v45 = Win32AllocPoolZInit(*(unsigned int *)(v41 + 4), 1685222229LL);
      v44[2] = v45;
      *((_DWORD *)v44 + 1) = *(_DWORD *)v41;
      *((_DWORD *)v44 + 2) = *(_DWORD *)(v41 + 4);
      memmove(v45, *(const void **)(v41 + 8), *(unsigned int *)(v41 + 4));
      if ( v40 )
        v40[3] = v44;
      else
        *((_QWORD *)v26 + 16) = v44;
      v41 = *(_QWORD *)(v41 + 16);
      v40 = v44;
      if ( !v41 )
      {
        v23 = v55;
        goto LABEL_56;
      }
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v42) = 2;
      WPP_RECORDER_SF_(
        WPP_MAIN_CB.Queue.ListEntry.Flink,
        v42,
        7,
        173,
        (__int64)&WPP_8113a81d21a7371434699e4b0bdc9bc8_Traceguids);
    }
    v49 = *((_QWORD *)v26 + 16);
    while ( v49 )
    {
      v50 = *(_QWORD *)(v49 + 16);
      v51 = v49;
      if ( v50 )
        Win32FreePool(v50);
      v49 = *(_QWORD *)(v49 + 24);
      Win32FreePool(v51);
    }
    CTouchProcessor::FreePointerInfoList(v43, *((struct CPointerInfoNode **)v26 + 17), *((_DWORD *)v5 + 6));
    CTouchProcessor::FreePointerQFrameList(v52, *((struct CPointerQFrame **)v26 + 18), *((_DWORD *)v5 + 6));
    Win32FreePool((__int64)v26);
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_80;
    v12 = WPP_GLOBAL_Control;
    if ( !LOWORD(WPP_GLOBAL_Control->DeviceType) )
      goto LABEL_80;
    v13 = 174;
    goto LABEL_79;
  }
LABEL_56:
  v56[0] = (__int64 *)(v26 + 152);
  v56[1] = *(__int64 **)(v23 + 480);
  HMAssignmentLock(v56);
  if ( a3
    || (CTouchProcessor::CommitInputFrame((struct _KTHREAD **)v6, (struct CPointerInputFrame *)v26, v47, v48),
        (unsigned __int8)IsTouchpadDevice(v18)) )
  {
    *((_DWORD *)v26 + 30) |= 0x100u;
  }
  else if ( a4 )
  {
    *((_DWORD *)v26 + 30) |= 0x80u;
    ++*((_DWORD *)v6 + 56);
  }
  else
  {
    ++*((_DWORD *)v6 + 57);
  }
  *((_QWORD *)v26 + 4) = v26 + 24;
  *((_QWORD *)v26 + 3) = v26 + 24;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(v46) = 5;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      v46,
      7,
      175,
      (__int64)&WPP_8113a81d21a7371434699e4b0bdc9bc8_Traceguids);
  }
LABEL_81:
  if ( !v62 )
    CInpLockGuard::UnLock((PERESOURCE *)v61, (struct CRefUnRefPointerMsgId *)v60);
  return (struct CPointerInputFrame *)v26;
}
