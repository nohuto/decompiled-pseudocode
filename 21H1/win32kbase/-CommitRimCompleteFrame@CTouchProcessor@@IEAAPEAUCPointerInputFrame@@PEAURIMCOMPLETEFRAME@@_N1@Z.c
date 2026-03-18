/*
 * XREFs of ?CommitRimCompleteFrame@CTouchProcessor@@IEAAPEAUCPointerInputFrame@@PEAURIMCOMPLETEFRAME@@_N1@Z @ 0x1C0190D58
 * Callers:
 *     ?ProcessInjectedInput@CTouchProcessor@@QEAAXPEAX0_NK1@Z @ 0x1C019D678 (-ProcessInjectedInput@CTouchProcessor@@QEAAXPEAX0_NK1@Z.c)
 *     ?ProcessInput@CTouchProcessor@@QEAAXPEAX0HHH@Z @ 0x1C019D8A4 (-ProcessInput@CTouchProcessor@@QEAAXPEAX0HHH@Z.c)
 *     ?ProcessInput@CPTPProcessor@@QEAAXPEAX0HHH@Z @ 0x1C01A9C64 (-ProcessInput@CPTPProcessor@@QEAAXPEAX0HHH@Z.c)
 * Callees:
 *     HMValidateHandleNoSecure @ 0x1C0063044 (HMValidateHandleNoSecure.c)
 *     WPP_RECORDER_SF_ @ 0x1C00678DC (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x1C006ACC8 (WPP_RECORDER_SF_d.c)
 *     ?SetEmpty@CInputDest@@QEAAXXZ @ 0x1C0071780 (-SetEmpty@CInputDest@@QEAAXXZ.c)
 *     HMAssignmentLock @ 0x1C0071980 (HMAssignmentLock.c)
 *     Win32FreePool @ 0x1C008C9A0 (Win32FreePool.c)
 *     Win32AllocPoolZInit @ 0x1C0090430 (Win32AllocPoolZInit.c)
 *     RawInputManagerDeviceObjectResolveHandle @ 0x1C00A3EC0 (RawInputManagerDeviceObjectResolveHandle.c)
 *     ??0CInpLockGuardExclusiveIfNeeded@@QEAA@AEAUCInpLockGuard@@PEAX@Z @ 0x1C00D0A84 (--0CInpLockGuardExclusiveIfNeeded@@QEAA@AEAUCInpLockGuard@@PEAX@Z.c)
 *     ?UnLock@CInpLockGuard@@QEAAXAEAVCRefUnRefPointerMsgId@@@Z @ 0x1C00D15B0 (-UnLock@CInpLockGuard@@QEAAXAEAVCRefUnRefPointerMsgId@@@Z.c)
 *     memmove @ 0x1C00D2F00 (memmove.c)
 *     EtwTraceBeginPointerFrameCommit @ 0x1C012D9D0 (EtwTraceBeginPointerFrameCommit.c)
 *     ?AllocPointerQFrameList@CTouchProcessor@@AEAAPEAUCPointerQFrame@@K@Z @ 0x1C018E218 (-AllocPointerQFrameList@CTouchProcessor@@AEAAPEAUCPointerQFrame@@K@Z.c)
 *     ?CommitFrame@Pointer@InputTraceLogging@@SAXPEBURIMDEV@@PEBUCPointerInputFrame@@@Z @ 0x1C01900BC (-CommitFrame@Pointer@InputTraceLogging@@SAXPEBURIMDEV@@PEBUCPointerInputFrame@@@Z.c)
 *     ?CommitFramePointer@Pointer@InputTraceLogging@@SAXPEBURIMDEV@@PEBUCPointerInputFrame@@PEBUtagPOINTEREVENTINT@@@Z @ 0x1C0190254 (-CommitFramePointer@Pointer@InputTraceLogging@@SAXPEBURIMDEV@@PEBUCPointerInputFrame@@PEBUtagPOI.c)
 *     ?CommitInputFrame@CTouchProcessor@@IEAAXPEAUCPointerInputFrame@@@Z @ 0x1C0190CC4 (-CommitInputFrame@CTouchProcessor@@IEAAXPEAUCPointerInputFrame@@@Z.c)
 *     ?FreePointerInfoList@CTouchProcessor@@AEAAXPEAUCPointerInfoNode@@K@Z @ 0x1C01944AC (-FreePointerInfoList@CTouchProcessor@@AEAAXPEAUCPointerInfoNode@@K@Z.c)
 *     ?FreePointerQFrameList@CTouchProcessor@@AEAAXPEAUCPointerQFrame@@K@Z @ 0x1C0194680 (-FreePointerQFrameList@CTouchProcessor@@AEAAXPEAUCPointerQFrame@@K@Z.c)
 *     IsTouchpadDevice @ 0x1C01B17A0 (IsTouchpadDevice.c)
 *     ApiSetResetLastSeenFrameId @ 0x1C01D2890 (ApiSetResetLastSeenFrameId.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02015EC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

struct CPointerInputFrame *__fastcall CTouchProcessor::CommitRimCompleteFrame(
        CTouchProcessor *this,
        struct RIMCOMPLETEFRAME *a2,
        char a3,
        char a4)
{
  struct RIMCOMPLETEFRAME *v5; // rsi
  CTouchProcessor *v6; // r14
  int v7; // edx
  __int64 v8; // rcx
  int v9; // edx
  PDEVICE_OBJECT v10; // rcx
  int v11; // r9d
  char *v12; // rcx
  KPROCESSOR_MODE v13; // r8
  int v14; // eax
  int v15; // edx
  unsigned __int64 v16; // r12
  __int64 v17; // rcx
  int v18; // r8d
  __int64 v19; // r15
  int v20; // edx
  int v21; // edx
  char *v22; // rdi
  struct CPointerQFrame *v23; // rax
  __int64 v24; // rdx
  __int64 v25; // r8
  int v26; // edx
  unsigned __int64 v27; // rcx
  __int64 v28; // rdx
  __int64 v29; // r8
  int v30; // edx
  struct A0xad387374::CFrameIdGenerator *v31; // rbx
  int v32; // r13d
  _DWORD *v33; // r13
  __int64 v34; // rax
  _DWORD *v35; // r14
  __int64 v36; // rbx
  __int64 v37; // rcx
  _QWORD *v38; // r13
  __int64 v39; // rbx
  __int64 v40; // rdx
  CTouchProcessor *v41; // rcx
  __int64 v42; // r8
  _QWORD *v43; // r15
  void *v44; // rax
  int v45; // edx
  __int64 v46; // rbx
  __int64 v47; // rcx
  __int64 v48; // r14
  CTouchProcessor *v49; // rcx
  __int64 v50; // rdx
  __int64 v51; // r8
  PVOID Object; // [rsp+38h] [rbp-69h] BYREF
  __int64 v54; // [rsp+40h] [rbp-61h]
  __int64 *v55[2]; // [rsp+48h] [rbp-59h] BYREF
  _BYTE v56[40]; // [rsp+58h] [rbp-49h] BYREF
  CInpLockGuard *v57; // [rsp+80h] [rbp-21h]
  int v58; // [rsp+88h] [rbp-19h]
  _BYTE v59[40]; // [rsp+90h] [rbp-11h] BYREF
  CInpLockGuard *v60; // [rsp+B8h] [rbp+17h]
  int v61; // [rsp+C0h] [rbp+1Fh]

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
      (__int64)&WPP_6cc13e1a12c13a444721acaa10d1d35b_Traceguids);
  }
  CInpLockGuardExclusiveIfNeeded::CInpLockGuardExclusiveIfNeeded(
    (CInpLockGuardExclusiveIfNeeded *)v59,
    (CTouchProcessor *)((char *)v6 + 40),
    0LL);
  if ( *((struct _KTHREAD **)v6 + 9) != KeGetCurrentThread() )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v8);
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
        (__int64)&WPP_6cc13e1a12c13a444721acaa10d1d35b_Traceguids);
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_80;
      v10 = WPP_GLOBAL_Control;
      if ( !LOWORD(WPP_GLOBAL_Control->DeviceType) )
        goto LABEL_80;
      v11 = 160;
LABEL_79:
      LOBYTE(v9) = 5;
      WPP_RECORDER_SF_(v10->DeviceExtension, v9, 7, v11, (__int64)&WPP_6cc13e1a12c13a444721acaa10d1d35b_Traceguids);
LABEL_80:
      v22 = 0LL;
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
      (__int64)&WPP_6cc13e1a12c13a444721acaa10d1d35b_Traceguids);
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_80;
    v10 = WPP_GLOBAL_Control;
    if ( !LOWORD(WPP_GLOBAL_Control->DeviceType) )
      goto LABEL_80;
    v11 = 162;
    goto LABEL_79;
  }
  v12 = (char *)*((_QWORD *)v5 + 4);
  v13 = *((_DWORD *)v5 + 20) == 0;
  Object = 0LL;
  v14 = RawInputManagerDeviceObjectResolveHandle(v12, 3u, v13, &Object);
  if ( v14 < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_80;
    LOBYTE(v15) = 2;
    WPP_RECORDER_SF_d(
      WPP_MAIN_CB.Queue.ListEntry.Flink,
      v15,
      7,
      163,
      (__int64)&WPP_6cc13e1a12c13a444721acaa10d1d35b_Traceguids,
      v14);
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_80;
    v10 = WPP_GLOBAL_Control;
    if ( !LOWORD(WPP_GLOBAL_Control->DeviceType) )
      goto LABEL_80;
    v11 = 164;
    goto LABEL_79;
  }
  v16 = 0LL;
  if ( Object != (PVOID)-88LL )
    v16 = *((_QWORD *)Object + 11);
  ObfDereferenceObject(Object);
  v54 = HMValidateHandleNoSecure(v16, 19);
  v19 = v54;
  if ( !v54 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v17);
  v20 = *((_DWORD *)v5 + 6);
  if ( !v20 )
  {
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v17);
    v20 = *((_DWORD *)v5 + 6);
  }
  EtwTraceBeginPointerFrameCommit(0, v20, v18);
  v22 = (char *)Win32AllocPoolZInit(0xA0uLL, 0x66707355u);
  if ( !v22 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_80;
    LOBYTE(v21) = 2;
    WPP_RECORDER_SF_(
      WPP_MAIN_CB.Queue.ListEntry.Flink,
      v21,
      7,
      165,
      (__int64)&WPP_6cc13e1a12c13a444721acaa10d1d35b_Traceguids);
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_80;
    v10 = WPP_GLOBAL_Control;
    if ( !LOWORD(WPP_GLOBAL_Control->DeviceType) )
      goto LABEL_80;
    v11 = 166;
    goto LABEL_79;
  }
  v23 = CTouchProcessor::AllocPointerQFrameList((struct _KTHREAD **)v6, *((_DWORD *)v5 + 6));
  *((_QWORD *)v22 + 18) = v23;
  if ( !v23 )
  {
    Win32FreePool((__int64)v22, v24, v25);
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_80;
    LOBYTE(v26) = 2;
    WPP_RECORDER_SF_(
      WPP_MAIN_CB.Queue.ListEntry.Flink,
      v26,
      7,
      167,
      (__int64)&WPP_6cc13e1a12c13a444721acaa10d1d35b_Traceguids);
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_80;
    v10 = WPP_GLOBAL_Control;
    if ( !LOWORD(WPP_GLOBAL_Control->DeviceType) )
      goto LABEL_80;
    v11 = 168;
    goto LABEL_79;
  }
  v27 = 480LL * *((unsigned int *)v5 + 6);
  if ( v27 <= 0xFFFFFFFF )
    *((_QWORD *)v22 + 17) = Win32AllocPoolZInit((unsigned int)v27, 0x65707355u);
  if ( !*((_QWORD *)v22 + 17) )
  {
    CTouchProcessor::FreePointerQFrameList(
      (CTouchProcessor *)v27,
      *((struct CPointerQFrame **)v22 + 18),
      *((_DWORD *)v5 + 6));
    Win32FreePool((__int64)v22, v28, v29);
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_80;
    LOBYTE(v30) = 2;
    WPP_RECORDER_SF_(
      WPP_MAIN_CB.Queue.ListEntry.Flink,
      v30,
      7,
      169,
      (__int64)&WPP_6cc13e1a12c13a444721acaa10d1d35b_Traceguids);
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_80;
    v10 = WPP_GLOBAL_Control;
    if ( !LOWORD(WPP_GLOBAL_Control->DeviceType) )
      goto LABEL_80;
    v11 = 170;
    goto LABEL_79;
  }
  v31 = `anonymous namespace'::CFrameIdGenerator::s_pInstance;
  CInpLockGuardExclusiveIfNeeded::CInpLockGuardExclusiveIfNeeded(
    (CInpLockGuardExclusiveIfNeeded *)v56,
    (struct A0xad387374::CFrameIdGenerator *)((char *)`anonymous namespace'::CFrameIdGenerator::s_pInstance + 8),
    0LL);
  v32 = (*(_DWORD *)v31)++;
  if ( v32 == -1 )
  {
    *(_DWORD *)v31 = 1;
    ApiSetResetLastSeenFrameId();
  }
  if ( !v58 )
    CInpLockGuard::UnLock((PERESOURCE *)v57, (struct CRefUnRefPointerMsgId *)v56);
  *((_DWORD *)v22 + 10) = v32;
  *((_DWORD *)v22 + 12) = *((_DWORD *)v5 + 6);
  *((_QWORD *)v22 + 8) = v16;
  *(_OWORD *)(v22 + 72) = *(_OWORD *)((char *)v5 + 40);
  *(_OWORD *)(v22 + 88) = *(_OWORD *)((char *)v5 + 56);
  *((_QWORD *)v22 + 13) = *((_QWORD *)v5 + 9);
  *((_QWORD *)v22 + 14) = *(_QWORD *)(*((_QWORD *)v5 + 15) + 96LL);
  InputTraceLogging::Pointer::CommitFrame((const struct RIMDEV *)v19, (const struct CPointerInputFrame *)v22);
  v33 = (_DWORD *)*((_QWORD *)v5 + 15);
  v34 = 0LL;
  LODWORD(Object) = 0;
  if ( *((_DWORD *)v5 + 6) )
  {
    v35 = v33 + 2;
    do
    {
      v36 = 480 * v34;
      *(_DWORD *)(*((_QWORD *)v22 + 17) + v36 + 156) = *v33;
      v37 = 480 * v34 + *((_QWORD *)v22 + 17) + 160LL;
      *(_OWORD *)v37 = *(_OWORD *)v35;
      *(_OWORD *)(v37 + 16) = *((_OWORD *)v35 + 1);
      *(_OWORD *)(v37 + 32) = *((_OWORD *)v35 + 2);
      *(_OWORD *)(v37 + 48) = *((_OWORD *)v35 + 3);
      *(_OWORD *)(v37 + 64) = *((_OWORD *)v35 + 4);
      *(_OWORD *)(v37 + 80) = *((_OWORD *)v35 + 5);
      *(_OWORD *)(v37 + 96) = *((_OWORD *)v35 + 6);
      *(_OWORD *)(v37 + 112) = *((_OWORD *)v35 + 7);
      *(_OWORD *)(v37 + 128) = *((_OWORD *)v35 + 8);
      *(_OWORD *)(v37 + 144) = *((_OWORD *)v35 + 9);
      *(_OWORD *)(v37 + 160) = *((_OWORD *)v35 + 10);
      *(_QWORD *)(v37 + 176) = *((_QWORD *)v35 + 22);
      *(_QWORD *)(*((_QWORD *)v22 + 17) + v36 + 184) = v16;
      CInputDest::SetEmpty((CInputDest *)(480 * v34 + *((_QWORD *)v22 + 17) + 352LL));
      InputTraceLogging::Pointer::CommitFramePointer(
        (const struct RIMDEV *)v19,
        (const struct CPointerInputFrame *)v22,
        (const struct tagPOINTEREVENTINT *)(v36 + *((_QWORD *)v22 + 17) + 160LL));
      v34 = (unsigned int)((_DWORD)Object + 1);
      v33 += 48;
      v35 += 48;
      LODWORD(Object) = v34;
    }
    while ( (unsigned int)v34 < *((_DWORD *)v5 + 6) );
    v6 = this;
  }
  v38 = 0LL;
  *((_DWORD *)v22 + 14) = *((_DWORD *)v5 + 7);
  *(_QWORD *)v22 = gpTouchProcessor;
  v39 = *((_QWORD *)v5 + 14);
  if ( v39 )
  {
    while ( 1 )
    {
      v43 = Win32AllocPoolZInit(0x20uLL, 0x64727355u);
      if ( !v43 )
        break;
      v44 = Win32AllocPoolZInit(*(unsigned int *)(v39 + 4), 0x64727355u);
      v43[2] = v44;
      *((_DWORD *)v43 + 1) = *(_DWORD *)v39;
      *((_DWORD *)v43 + 2) = *(_DWORD *)(v39 + 4);
      memmove(v44, *(const void **)(v39 + 8), *(unsigned int *)(v39 + 4));
      if ( v38 )
        v38[3] = v43;
      else
        *((_QWORD *)v22 + 16) = v43;
      v39 = *(_QWORD *)(v39 + 16);
      v38 = v43;
      if ( !v39 )
      {
        v19 = v54;
        goto LABEL_56;
      }
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v40) = 2;
      WPP_RECORDER_SF_(
        WPP_MAIN_CB.Queue.ListEntry.Flink,
        v40,
        7,
        172,
        (__int64)&WPP_6cc13e1a12c13a444721acaa10d1d35b_Traceguids);
    }
    v46 = *((_QWORD *)v22 + 16);
    while ( v46 )
    {
      v47 = *(_QWORD *)(v46 + 16);
      v48 = v46;
      if ( v47 )
        Win32FreePool(v47, v40, v42);
      v46 = *(_QWORD *)(v46 + 24);
      Win32FreePool(v48, v40, v42);
    }
    CTouchProcessor::FreePointerInfoList(v41, *((struct CPointerInfoNode **)v22 + 17), *((_DWORD *)v5 + 6));
    CTouchProcessor::FreePointerQFrameList(v49, *((struct CPointerQFrame **)v22 + 18), *((_DWORD *)v5 + 6));
    Win32FreePool((__int64)v22, v50, v51);
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_80;
    v10 = WPP_GLOBAL_Control;
    if ( !LOWORD(WPP_GLOBAL_Control->DeviceType) )
      goto LABEL_80;
    v11 = 173;
    goto LABEL_79;
  }
LABEL_56:
  v55[0] = (__int64 *)(v22 + 152);
  v55[1] = *(__int64 **)(v19 + 480);
  HMAssignmentLock(v55);
  if ( a3
    || (CTouchProcessor::CommitInputFrame((struct _KTHREAD **)v6, (struct CPointerInputFrame *)v22),
        (unsigned __int8)IsTouchpadDevice(v16)) )
  {
    *((_DWORD *)v22 + 30) |= 0x100u;
  }
  else if ( a4 )
  {
    *((_DWORD *)v22 + 30) |= 0x80u;
    ++*((_DWORD *)v6 + 56);
  }
  else
  {
    ++*((_DWORD *)v6 + 57);
  }
  *((_QWORD *)v22 + 4) = v22 + 24;
  *((_QWORD *)v22 + 3) = v22 + 24;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(v45) = 5;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      v45,
      7,
      174,
      (__int64)&WPP_6cc13e1a12c13a444721acaa10d1d35b_Traceguids);
  }
LABEL_81:
  if ( !v61 )
    CInpLockGuard::UnLock((PERESOURCE *)v60, (struct CRefUnRefPointerMsgId *)v59);
  return (struct CPointerInputFrame *)v22;
}
