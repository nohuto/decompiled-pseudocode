/*
 * XREFs of ?CommitRimCompleteFrame@CTouchProcessor@@IEAAPEAUCPointerInputFrame@@PEAURIMCOMPLETEFRAME@@_N1@Z @ 0x1C0188B30
 * Callers:
 *     ?ProcessInjectedInput@CTouchProcessor@@QEAAXPEAX0_NK1@Z @ 0x1C0195458 (-ProcessInjectedInput@CTouchProcessor@@QEAAXPEAX0_NK1@Z.c)
 *     ?ProcessInput@CTouchProcessor@@QEAAXPEAX0HHH@Z @ 0x1C0195684 (-ProcessInput@CTouchProcessor@@QEAAXPEAX0HHH@Z.c)
 *     ?ProcessInput@CPTPProcessor@@QEAAXPEAX0HHH@Z @ 0x1C01A1B84 (-ProcessInput@CPTPProcessor@@QEAAXPEAX0HHH@Z.c)
 * Callees:
 *     RawInputManagerDeviceObjectResolveHandle @ 0x1C00230E0 (RawInputManagerDeviceObjectResolveHandle.c)
 *     HMValidateHandleNoSecure @ 0x1C0032DF0 (HMValidateHandleNoSecure.c)
 *     WPP_RECORDER_SF_ @ 0x1C004F07C (WPP_RECORDER_SF_.c)
 *     ?SetEmpty@CInputDest@@QEAAXXZ @ 0x1C0055364 (-SetEmpty@CInputDest@@QEAAXXZ.c)
 *     HMAssignmentLock @ 0x1C00555C0 (HMAssignmentLock.c)
 *     Win32FreePool @ 0x1C0057A50 (Win32FreePool.c)
 *     WPP_RECORDER_SF_d @ 0x1C0063040 (WPP_RECORDER_SF_d.c)
 *     Win32AllocPoolZInit @ 0x1C006B1A0 (Win32AllocPoolZInit.c)
 *     ??0CInpLockGuardExclusiveIfNeeded@@QEAA@AEAUCInpLockGuard@@PEAX@Z @ 0x1C00D1224 (--0CInpLockGuardExclusiveIfNeeded@@QEAA@AEAUCInpLockGuard@@PEAX@Z.c)
 *     ?UnLock@CInpLockGuard@@QEAAXAEAVCRefUnRefPointerMsgId@@@Z @ 0x1C00D1E30 (-UnLock@CInpLockGuard@@QEAAXAEAVCRefUnRefPointerMsgId@@@Z.c)
 *     memmove @ 0x1C00D3840 (memmove.c)
 *     EtwTraceBeginPointerFrameCommit @ 0x1C0125690 (EtwTraceBeginPointerFrameCommit.c)
 *     ?AllocPointerQFrameList@CTouchProcessor@@AEAAPEAUCPointerQFrame@@K@Z @ 0x1C0185FD8 (-AllocPointerQFrameList@CTouchProcessor@@AEAAPEAUCPointerQFrame@@K@Z.c)
 *     ?CommitFrame@Pointer@InputTraceLogging@@SAXPEBURIMDEV@@PEBUCPointerInputFrame@@@Z @ 0x1C0187E94 (-CommitFrame@Pointer@InputTraceLogging@@SAXPEBURIMDEV@@PEBUCPointerInputFrame@@@Z.c)
 *     ?CommitFramePointer@Pointer@InputTraceLogging@@SAXPEBURIMDEV@@PEBUCPointerInputFrame@@PEBUtagPOINTEREVENTINT@@@Z @ 0x1C018802C (-CommitFramePointer@Pointer@InputTraceLogging@@SAXPEBURIMDEV@@PEBUCPointerInputFrame@@PEBUtagPOI.c)
 *     ?CommitInputFrame@CTouchProcessor@@IEAAXPEAUCPointerInputFrame@@@Z @ 0x1C0188A9C (-CommitInputFrame@CTouchProcessor@@IEAAXPEAUCPointerInputFrame@@@Z.c)
 *     ?FreePointerInfoList@CTouchProcessor@@AEAAXPEAUCPointerInfoNode@@K@Z @ 0x1C018C28C (-FreePointerInfoList@CTouchProcessor@@AEAAXPEAUCPointerInfoNode@@K@Z.c)
 *     ?FreePointerQFrameList@CTouchProcessor@@AEAAXPEAUCPointerQFrame@@K@Z @ 0x1C018C460 (-FreePointerQFrameList@CTouchProcessor@@AEAAXPEAUCPointerQFrame@@K@Z.c)
 *     IsTouchpadDevice @ 0x1C01A96C0 (IsTouchpadDevice.c)
 *     ApiSetResetLastSeenFrameId @ 0x1C01CA590 (ApiSetResetLastSeenFrameId.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01FA2AC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
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
  __int64 v35; // rdx
  __int64 v36; // r8
  __int64 v37; // r9
  _DWORD *v38; // r13
  __int64 v39; // rax
  _DWORD *v40; // r14
  __int64 v41; // rbx
  __int64 v42; // rcx
  _QWORD *v43; // r13
  __int64 v44; // rbx
  int v45; // edx
  CTouchProcessor *v46; // rcx
  _QWORD *v47; // r15
  void *v48; // rax
  int v49; // edx
  __int64 v50; // r8
  __int64 v51; // r9
  __int64 v52; // rbx
  __int64 v53; // rcx
  __int64 v54; // r14
  CTouchProcessor *v55; // rcx
  PVOID Object; // [rsp+38h] [rbp-69h] BYREF
  __int64 v58; // [rsp+40h] [rbp-61h]
  _QWORD v59[2]; // [rsp+48h] [rbp-59h] BYREF
  _BYTE v60[40]; // [rsp+58h] [rbp-49h] BYREF
  CInpLockGuard *v61; // [rsp+80h] [rbp-21h]
  int v62; // [rsp+88h] [rbp-19h]
  _BYTE v63[40]; // [rsp+90h] [rbp-11h] BYREF
  CInpLockGuard *v64; // [rsp+B8h] [rbp+17h]
  int v65; // [rsp+C0h] [rbp+1Fh]

  v5 = a2;
  v6 = this;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(a2) = 5;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      (_DWORD)a2,
      7,
      158,
      (__int64)&WPP_50814762fbc63e38c7e5eacf83347307_Traceguids);
  }
  CInpLockGuardExclusiveIfNeeded::CInpLockGuardExclusiveIfNeeded(
    (CInpLockGuardExclusiveIfNeeded *)v63,
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
        159,
        (__int64)&WPP_50814762fbc63e38c7e5eacf83347307_Traceguids);
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_80;
      v12 = WPP_GLOBAL_Control;
      if ( !LOWORD(WPP_GLOBAL_Control->DeviceType) )
        goto LABEL_80;
      v13 = 160;
LABEL_79:
      LOBYTE(v11) = 5;
      WPP_RECORDER_SF_(v12->DeviceExtension, v11, 7, v13, (__int64)&WPP_50814762fbc63e38c7e5eacf83347307_Traceguids);
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
      161,
      (__int64)&WPP_50814762fbc63e38c7e5eacf83347307_Traceguids);
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_80;
    v12 = WPP_GLOBAL_Control;
    if ( !LOWORD(WPP_GLOBAL_Control->DeviceType) )
      goto LABEL_80;
    v13 = 162;
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
      163,
      (__int64)&WPP_50814762fbc63e38c7e5eacf83347307_Traceguids,
      v16);
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_80;
    v12 = WPP_GLOBAL_Control;
    if ( !LOWORD(WPP_GLOBAL_Control->DeviceType) )
      goto LABEL_80;
    v13 = 164;
    goto LABEL_79;
  }
  v18 = 0LL;
  if ( Object != (PVOID)-88LL )
    v18 = *((_QWORD *)Object + 11);
  ObfDereferenceObject(Object);
  v58 = HMValidateHandleNoSecure(v18, 19);
  v23 = v58;
  if ( !v58 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v20, v19, v21, v22);
  v24 = *((unsigned int *)v5 + 6);
  if ( !(_DWORD)v24 )
  {
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v20, v24, v21, v22);
    LODWORD(v24) = *((_DWORD *)v5 + 6);
  }
  EtwTraceBeginPointerFrameCommit(0, v24, v21);
  v26 = (char *)Win32AllocPoolZInit(0xA0uLL, 0x66707355u);
  if ( !v26 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_80;
    LOBYTE(v25) = 2;
    WPP_RECORDER_SF_(
      WPP_MAIN_CB.Queue.ListEntry.Flink,
      v25,
      7,
      165,
      (__int64)&WPP_50814762fbc63e38c7e5eacf83347307_Traceguids);
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_80;
    v12 = WPP_GLOBAL_Control;
    if ( !LOWORD(WPP_GLOBAL_Control->DeviceType) )
      goto LABEL_80;
    v13 = 166;
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
      167,
      (__int64)&WPP_50814762fbc63e38c7e5eacf83347307_Traceguids);
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_80;
    v12 = WPP_GLOBAL_Control;
    if ( !LOWORD(WPP_GLOBAL_Control->DeviceType) )
      goto LABEL_80;
    v13 = 168;
    goto LABEL_79;
  }
  v31 = 480LL * *((unsigned int *)v5 + 6);
  if ( v31 <= 0xFFFFFFFF )
    *((_QWORD *)v26 + 17) = Win32AllocPoolZInit((unsigned int)v31, 0x65707355u);
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
      169,
      (__int64)&WPP_50814762fbc63e38c7e5eacf83347307_Traceguids);
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_80;
    v12 = WPP_GLOBAL_Control;
    if ( !LOWORD(WPP_GLOBAL_Control->DeviceType) )
      goto LABEL_80;
    v13 = 170;
    goto LABEL_79;
  }
  v33 = `anonymous namespace'::CFrameIdGenerator::s_pInstance;
  CInpLockGuardExclusiveIfNeeded::CInpLockGuardExclusiveIfNeeded(
    (CInpLockGuardExclusiveIfNeeded *)v60,
    (struct A0xad387374::CFrameIdGenerator *)((char *)`anonymous namespace'::CFrameIdGenerator::s_pInstance + 8),
    0LL);
  v34 = (*(_DWORD *)v33)++;
  if ( v34 == -1 )
  {
    *(_DWORD *)v33 = 1;
    ApiSetResetLastSeenFrameId();
  }
  if ( !v62 )
    CInpLockGuard::UnLock((PERESOURCE *)v61, (struct CRefUnRefPointerMsgId *)v60);
  *((_DWORD *)v26 + 10) = v34;
  *((_DWORD *)v26 + 12) = *((_DWORD *)v5 + 6);
  *((_QWORD *)v26 + 8) = v18;
  *(_OWORD *)(v26 + 72) = *(_OWORD *)((char *)v5 + 40);
  *(_OWORD *)(v26 + 88) = *(_OWORD *)((char *)v5 + 56);
  *((_QWORD *)v26 + 13) = *((_QWORD *)v5 + 9);
  *((_QWORD *)v26 + 14) = *(_QWORD *)(*((_QWORD *)v5 + 15) + 96LL);
  InputTraceLogging::Pointer::CommitFrame((const struct RIMDEV *)v23, (const struct CPointerInputFrame *)v26);
  v38 = (_DWORD *)*((_QWORD *)v5 + 15);
  v39 = 0LL;
  LODWORD(Object) = 0;
  if ( *((_DWORD *)v5 + 6) )
  {
    v40 = v38 + 2;
    do
    {
      v41 = 480 * v39;
      *(_DWORD *)(*((_QWORD *)v26 + 17) + v41 + 156) = *v38;
      v42 = 480 * v39 + *((_QWORD *)v26 + 17) + 160LL;
      *(_OWORD *)v42 = *(_OWORD *)v40;
      *(_OWORD *)(v42 + 16) = *((_OWORD *)v40 + 1);
      *(_OWORD *)(v42 + 32) = *((_OWORD *)v40 + 2);
      *(_OWORD *)(v42 + 48) = *((_OWORD *)v40 + 3);
      *(_OWORD *)(v42 + 64) = *((_OWORD *)v40 + 4);
      *(_OWORD *)(v42 + 80) = *((_OWORD *)v40 + 5);
      *(_OWORD *)(v42 + 96) = *((_OWORD *)v40 + 6);
      *(_OWORD *)(v42 + 112) = *((_OWORD *)v40 + 7);
      *(_OWORD *)(v42 + 128) = *((_OWORD *)v40 + 8);
      *(_OWORD *)(v42 + 144) = *((_OWORD *)v40 + 9);
      *(_OWORD *)(v42 + 160) = *((_OWORD *)v40 + 10);
      *(_QWORD *)(v42 + 176) = *((_QWORD *)v40 + 22);
      *(_QWORD *)(*((_QWORD *)v26 + 17) + v41 + 184) = v18;
      CInputDest::SetEmpty((CInputDest *)(480 * v39 + *((_QWORD *)v26 + 17) + 352LL), v35, v36, v37);
      InputTraceLogging::Pointer::CommitFramePointer(
        (const struct RIMDEV *)v23,
        (const struct CPointerInputFrame *)v26,
        (const struct tagPOINTEREVENTINT *)(v41 + *((_QWORD *)v26 + 17) + 160LL));
      v39 = (unsigned int)((_DWORD)Object + 1);
      v38 += 48;
      v40 += 48;
      LODWORD(Object) = v39;
    }
    while ( (unsigned int)v39 < *((_DWORD *)v5 + 6) );
    v6 = this;
  }
  v43 = 0LL;
  *((_DWORD *)v26 + 14) = *((_DWORD *)v5 + 7);
  *(_QWORD *)v26 = gpTouchProcessor;
  v44 = *((_QWORD *)v5 + 14);
  if ( v44 )
  {
    while ( 1 )
    {
      v47 = Win32AllocPoolZInit(0x20uLL, 0x64727355u);
      if ( !v47 )
        break;
      v48 = Win32AllocPoolZInit(*(unsigned int *)(v44 + 4), 0x64727355u);
      v47[2] = v48;
      *((_DWORD *)v47 + 1) = *(_DWORD *)v44;
      *((_DWORD *)v47 + 2) = *(_DWORD *)(v44 + 4);
      memmove(v48, *(const void **)(v44 + 8), *(unsigned int *)(v44 + 4));
      if ( v43 )
        v43[3] = v47;
      else
        *((_QWORD *)v26 + 16) = v47;
      v44 = *(_QWORD *)(v44 + 16);
      v43 = v47;
      if ( !v44 )
      {
        v23 = v58;
        goto LABEL_56;
      }
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v45) = 2;
      WPP_RECORDER_SF_(
        WPP_MAIN_CB.Queue.ListEntry.Flink,
        v45,
        7,
        172,
        (__int64)&WPP_50814762fbc63e38c7e5eacf83347307_Traceguids);
    }
    v52 = *((_QWORD *)v26 + 16);
    while ( v52 )
    {
      v53 = *(_QWORD *)(v52 + 16);
      v54 = v52;
      if ( v53 )
        Win32FreePool(v53);
      v52 = *(_QWORD *)(v52 + 24);
      Win32FreePool(v54);
    }
    CTouchProcessor::FreePointerInfoList(v46, *((struct CPointerInfoNode **)v26 + 17), *((_DWORD *)v5 + 6));
    CTouchProcessor::FreePointerQFrameList(v55, *((struct CPointerQFrame **)v26 + 18), *((_DWORD *)v5 + 6));
    Win32FreePool((__int64)v26);
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_80;
    v12 = WPP_GLOBAL_Control;
    if ( !LOWORD(WPP_GLOBAL_Control->DeviceType) )
      goto LABEL_80;
    v13 = 173;
    goto LABEL_79;
  }
LABEL_56:
  v59[0] = v26 + 152;
  v59[1] = *(_QWORD *)(v23 + 480);
  HMAssignmentLock((__int64)v59, v35);
  if ( a3
    || (CTouchProcessor::CommitInputFrame((struct _KTHREAD **)v6, (struct CPointerInputFrame *)v26, v50, v51),
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
    LOBYTE(v49) = 5;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      v49,
      7,
      174,
      (__int64)&WPP_50814762fbc63e38c7e5eacf83347307_Traceguids);
  }
LABEL_81:
  if ( !v65 )
    CInpLockGuard::UnLock((PERESOURCE *)v64, (struct CRefUnRefPointerMsgId *)v63);
  return (struct CPointerInputFrame *)v26;
}
