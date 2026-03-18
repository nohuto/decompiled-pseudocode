/*
 * XREFs of ?SetPointerFrameTargetWindows@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@_KIPEAH@Z @ 0x1C019A590
 * Callers:
 *     <none>
 * Callees:
 *     PushW32ThreadLock @ 0x1C0030B70 (PushW32ThreadLock.c)
 *     PopAndFreeAlwaysW32ThreadLock @ 0x1C0030EBC (PopAndFreeAlwaysW32ThreadLock.c)
 *     ??4CInputDest@@QEAAAEAV0@AEBV0@@Z @ 0x1C0047438 (--4CInputDest@@QEAAAEAV0@AEBV0@@Z.c)
 *     ?PostQEventWork@CBaseProcessor@@IEAAXPEAUHWND__@@W4EventWorkId@1@I_K_J@Z @ 0x1C00535B0 (-PostQEventWork@CBaseProcessor@@IEAAXPEAUHWND__@@W4EventWorkId@1@I_K_J@Z.c)
 *     ?GetWindowHandle@CInputDest@@QEBAPEAUHWND__@@XZ @ 0x1C0069090 (-GetWindowHandle@CInputDest@@QEBAPEAUHWND__@@XZ.c)
 *     ??0CThreadLockInputDest@@QEAA@PEAVCInputDest@@@Z @ 0x1C00690EC (--0CThreadLockInputDest@@QEAA@PEAVCInputDest@@@Z.c)
 *     ??1CThreadLockInputDest@@QEAA@XZ @ 0x1C00692B8 (--1CThreadLockInputDest@@QEAA@XZ.c)
 *     ??4CInputDest@@QEAAAEAV0@$$QEAV0@@Z @ 0x1C006EEE0 (--4CInputDest@@QEAAAEAV0@$$QEAV0@@Z.c)
 *     ?GetQueue@CInputDest@@QEBAPEAXW4QType@1@@Z @ 0x1C0071274 (-GetQueue@CInputDest@@QEBAPEAXW4QType@1@@Z.c)
 *     WPP_RECORDER_SF_ @ 0x1C0072EBC (WPP_RECORDER_SF_.c)
 *     ?SetEmpty@CInputDest@@QEAAXXZ @ 0x1C00746C4 (-SetEmpty@CInputDest@@QEAAXXZ.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C007477C (--1UserAtomicCheck@@QEAA@XZ.c)
 *     ??0CInputDest@@QEAA@AEBUtagINPUTDEST@@@Z @ 0x1C0074820 (--0CInputDest@@QEAA@AEBUtagINPUTDEST@@@Z.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C0074948 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     Win32AllocPool @ 0x1C0080DF0 (Win32AllocPool.c)
 *     __security_check_cookie @ 0x1C00CCA30 (__security_check_cookie.c)
 *     ??0CInpLockGuardExclusive@@QEAA@AEAUCInpLockGuard@@PEAX@Z @ 0x1C00D12F4 (--0CInpLockGuardExclusive@@QEAA@AEAUCInpLockGuard@@PEAX@Z.c)
 *     ??0CInpUnlockGuardExclusive@@QEAA@AEAUCInpLockGuard@@PEAX@Z @ 0x1C00D13EC (--0CInpUnlockGuardExclusive@@QEAA@AEAUCInpLockGuard@@PEAX@Z.c)
 *     Feature_Servicing_2108c_32449232__private_IsEnabled @ 0x1C00D1670 (Feature_Servicing_2108c_32449232__private_IsEnabled.c)
 *     ?UnLock@CInpLockGuard@@QEAAXAEAVCRefUnRefPointerMsgId@@@Z @ 0x1C00D1ED0 (-UnLock@CInpLockGuard@@QEAAXAEAVCRefUnRefPointerMsgId@@@Z.c)
 *     ?UnRefPointerMsgIdAndLockExclusive@CInpLockGuard@@QEAAXAEAVCRefUnRefPointerMsgId@@@Z @ 0x1C00D1F20 (-UnRefPointerMsgIdAndLockExclusive@CInpLockGuard@@QEAAXAEAVCRefUnRefPointerMsgId@@@Z.c)
 *     memset @ 0x1C00D3880 (memset.c)
 *     ?HasDelegationThread@CInputDest@@QEBA_NXZ @ 0x1C01833DC (-HasDelegationThread@CInputDest@@QEBA_NXZ.c)
 *     ?IsEqualByWindowHandle@CInputDest@@QEBA_NPEAXW4HandleValidationType@1@@Z @ 0x1C0183428 (-IsEqualByWindowHandle@CInputDest@@QEBA_NPEAXW4HandleValidationType@1@@Z.c)
 *     ?UsesQueue@CInputDest@@QEBA_NPEBUtagQ@@@Z @ 0x1C01836BC (-UsesQueue@CInputDest@@QEBA_NPEBUtagQ@@@Z.c)
 *     ?DeterminePointerTargetWindow@CTouchProcessor@@AEAAXPEAUtagTHREADINFO@@PEAUCPointerInfoNode@@PEAUtagQ@@HPEAHPEAUtagPOINT@@PEAVCInputDest@@@Z @ 0x1C018CC74 (-DeterminePointerTargetWindow@CTouchProcessor@@AEAAXPEAUtagTHREADINFO@@PEAUCPointerInfoNode@@PEA.c)
 *     ?DetermineTouchpadPointerTargetWindow@CTouchProcessor@@AEAAXPEAUtagTHREADINFO@@PEBUCPointerInputFrame@@PEAUCPointerInfoNode@@PEAUtagQ@@KHPEAHPEAUtagPOINT@@PEAVCInputDest@@@Z @ 0x1C018D084 (-DetermineTouchpadPointerTargetWindow@CTouchProcessor@@AEAAXPEAUtagTHREADINFO@@PEBUCPointerInput.c)
 *     ?FindAndReferenceFrameById@CTouchProcessor@@AEAAPEAUCPointerInputFrame@@K@Z @ 0x1C018DB80 (-FindAndReferenceFrameById@CTouchProcessor@@AEAAPEAUCPointerInputFrame@@K@Z.c)
 *     ?GetPointerInfoNodeQFrame@CTouchProcessor@@AEAAPEBUCPointerQFrame@@PEBUCPointerInputFrame@@PEBUCPointerInfoNode@@@Z @ 0x1C0192A88 (-GetPointerInfoNodeQFrame@CTouchProcessor@@AEAAPEBUCPointerQFrame@@PEBUCPointerInputFrame@@PEBUC.c)
 *     ?GetQueue@CPointerInfoNode@@QEAAPEAVCInputDest@@PEAH@Z @ 0x1C0194154 (-GetQueue@CPointerInfoNode@@QEAAPEAVCInputDest@@PEAH@Z.c)
 *     ?GetQueueForCurrentNode@CTouchProcessor@@AEAAPEAUtagQ@@PEAUtagTHREADINFO@@HIHPEBUCPointerInfoNode@@@Z @ 0x1C019435C (-GetQueueForCurrentNode@CTouchProcessor@@AEAAPEAUtagQ@@PEAUtagTHREADINFO@@HIHPEBUCPointerInfoNod.c)
 *     ?HandlePointerNodeWithTarget@CTouchProcessor@@AEAA?AW4PointerNodeWithTargetHandling@1@PEBUCPointerInfoNode@@IPEAU3@@Z @ 0x1C01948A0 (-HandlePointerNodeWithTarget@CTouchProcessor@@AEAA-AW4PointerNodeWithTargetHandling@1@PEBUCPoint.c)
 *     ?IsAnyMessageNonDelegated@CPointerInfoNode@@QEBAHXZ @ 0x1C0194E4C (-IsAnyMessageNonDelegated@CPointerInfoNode@@QEBAHXZ.c)
 *     ?IsMessageDelegated@CPointerInfoNode@@QEBAHI@Z @ 0x1C0195058 (-IsMessageDelegated@CPointerInfoNode@@QEBAHI@Z.c)
 *     ?IsTargetSetForRetrieval@CPointerInfoNode@@QEBAHPEAUtagTHREADINFO@@@Z @ 0x1C019556C (-IsTargetSetForRetrieval@CPointerInfoNode@@QEBAHPEAUtagTHREADINFO@@@Z.c)
 *     ?IsTouchpad@CPointerInfoNode@@QEBAHXZ @ 0x1C0195614 (-IsTouchpad@CPointerInfoNode@@QEBAHXZ.c)
 *     ?IsValid@CPointerInfoNode@@QEBAHXZ @ 0x1C0195650 (-IsValid@CPointerInfoNode@@QEBAHXZ.c)
 *     ?LookupNode@CTouchProcessor@@AEAAPEAUCPointerInfoNode@@PEBUCPointerInputFrame@@K@Z @ 0x1C0195674 (-LookupNode@CTouchProcessor@@AEAAPEAUCPointerInfoNode@@PEBUCPointerInputFrame@@K@Z.c)
 *     ?PointerParentNotify@CTouchProcessor@@AEAAXPEAVCInputDest@@PEAUCPointerInfoNode@@@Z @ 0x1C0195E58 (-PointerParentNotify@CTouchProcessor@@AEAAXPEAVCInputDest@@PEAUCPointerInfoNode@@@Z.c)
 *     ?RecheckPointerCapture@CTouchProcessor@@AEAAH_KHPEAPEAVCInputDest@@PEAH@Z @ 0x1C0198A70 (-RecheckPointerCapture@CTouchProcessor@@AEAAH_KHPEAPEAVCInputDest@@PEAH@Z.c)
 *     ?ReferenceFrame@CTouchProcessor@@AEAAPEBUCPointerInputFrame@@K@Z @ 0x1C0198B80 (-ReferenceFrame@CTouchProcessor@@AEAAPEBUCPointerInputFrame@@K@Z.c)
 *     ?RevalidateFrameProcessing@CTouchProcessor@@AEAAHPEAUtagTHREADINFO@@HPEBUCPointerInfoNode@@H@Z @ 0x1C019914C (-RevalidateFrameProcessing@CTouchProcessor@@AEAAHPEAUtagTHREADINFO@@HPEBUCPointerInfoNode@@H@Z.c)
 *     ?SetPointerExplicitCapture@CTouchProcessor@@AEAAH_KAEBVCInputDest@@HH@Z @ 0x1C019A528 (-SetPointerExplicitCapture@CTouchProcessor@@AEAAH_KAEBVCInputDest@@HH@Z.c)
 *     ?SetPointerImplicitCapture@CTouchProcessor@@AEAAH_KAEBVCInputDest@@HH@Z @ 0x1C019B238 (-SetPointerImplicitCapture@CTouchProcessor@@AEAAH_KAEBVCInputDest@@HH@Z.c)
 *     ?SetPointerInfoNodeTarget@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@KAEBVCInputDest@@HPEBUtagPOINT@@HHHH@Z @ 0x1C019B930 (-SetPointerInfoNodeTarget@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@KAEBVCInputDest@@HPEBUta.c)
 *     ?SetQFrameNonCoalescable@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@PEBUCPointerInfoNode@@@Z @ 0x1C019BD84 (-SetQFrameNonCoalescable@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@PEBUCPointerInfoNode@@@Z.c)
 *     ?ShouldForegroundActivate@CPointerInfoNode@@QEBAHXZ @ 0x1C019C114 (-ShouldForegroundActivate@CPointerInfoNode@@QEBAHXZ.c)
 *     ?UnreferenceFrame@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@@Z @ 0x1C019CC50 (-UnreferenceFrame@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@@Z.c)
 *     ?UnreferenceFrameInt@CTouchProcessor@@AEAAKPEAUCPointerInputFrame@@@Z @ 0x1C019CF04 (-UnreferenceFrameInt@CTouchProcessor@@AEAAKPEAUCPointerInputFrame@@@Z.c)
 *     ApiSetEditionPointerActivate @ 0x1C01C9100 (ApiSetEditionPointerActivate.c)
 *     ApiSetEditionPointerSpeedHitTest @ 0x1C01C936C (ApiSetEditionPointerSpeedHitTest.c)
 *     PopW32ThreadLock @ 0x1C01F8200 (PopW32ThreadLock.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01FBBDC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall CTouchProcessor::SetPointerFrameTargetWindows(
        struct _KTHREAD **this,
        struct tagTHREADINFO *a2,
        __int64 a3,
        unsigned int a4,
        int *a5)
{
  struct tagTHREADINFO *v7; // r12
  int v9; // edx
  __int64 v10; // r8
  __int64 v11; // r9
  PDEVICE_OBJECT v12; // rcx
  int v13; // r9d
  PDEVICE_OBJECT v14; // rcx
  int v15; // r9d
  const struct CPointerInputFrame *v16; // rax
  __int64 v17; // r15
  unsigned int v18; // ebx
  _DWORD *v19; // rsi
  __int64 v20; // r9
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // r9
  __int64 v25; // rax
  __int64 v26; // r13
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r8
  __int64 v30; // r9
  unsigned int v31; // r12d
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // r8
  __int64 v35; // r9
  __int64 v36; // rdx
  struct tagTHREADINFO *v37; // r8
  CInputDest *v38; // r9
  __int64 v39; // rax
  unsigned __int64 v40; // rdi
  unsigned __int64 v41; // rcx
  CPointerInfoNode *v42; // rcx
  int IsTargetSetForRetrieval; // eax
  int v44; // eax
  __int64 v45; // rcx
  unsigned int v46; // ecx
  CInputDest *Queue; // rax
  __int64 v48; // rax
  CTouchProcessor *v49; // rcx
  __int64 v50; // rdx
  __int64 v51; // r8
  __int64 v52; // r9
  __int64 v53; // rdx
  __int64 v54; // rcx
  __int64 v55; // r8
  __int64 v56; // r9
  _OWORD *v57; // rax
  __int128 v58; // xmm1
  __int128 v59; // xmm0
  __int128 v60; // xmm1
  __int128 v61; // xmm0
  __int128 v62; // xmm1
  __int128 v63; // xmm0
  char HasDelegationThread; // al
  int WindowHandle; // eax
  CTouchProcessor *v66; // rcx
  BOOL v67; // eax
  BOOL v68; // eax
  __int64 v69; // rdx
  CTouchProcessor *v70; // rcx
  __int64 v71; // r9
  struct CPointerInfoNode *v72; // rax
  __int64 v73; // r8
  __int64 v74; // r9
  __int64 v75; // r8
  __int128 v76; // xmm1
  __int64 v77; // rdx
  __int128 v78; // xmm0
  __int128 v79; // xmm1
  __int128 v80; // xmm0
  __int128 v81; // xmm1
  __int128 v82; // xmm0
  BOOL v83; // eax
  __int64 v84; // rdx
  __int64 v85; // rdx
  __int64 v86; // rcx
  __int64 v87; // r8
  __int64 v88; // r9
  int IsTouchpad; // eax
  unsigned int v90; // r13d
  __int64 v91; // rcx
  int v92; // r9d
  __int64 v93; // r8
  __int64 v94; // r9
  struct CPointerInputFrame *v95; // rax
  int v96; // edx
  unsigned int v98; // [rsp+50h] [rbp-B0h]
  int v99; // [rsp+54h] [rbp-ACh] BYREF
  CInputDest *v100; // [rsp+58h] [rbp-A8h] BYREF
  unsigned int v101; // [rsp+60h] [rbp-A0h]
  CTouchProcessor *v102; // [rsp+68h] [rbp-98h]
  int v103; // [rsp+70h] [rbp-90h]
  unsigned int v104; // [rsp+74h] [rbp-8Ch]
  int IsMessageDelegated; // [rsp+78h] [rbp-88h]
  struct tagQ *QueueForCurrentNode; // [rsp+80h] [rbp-80h]
  struct tagPOINT v107; // [rsp+88h] [rbp-78h] BYREF
  int v108; // [rsp+90h] [rbp-70h] BYREF
  int *v109; // [rsp+98h] [rbp-68h]
  _BYTE v110[8]; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v111; // [rsp+A8h] [rbp-58h]
  __int128 v112; // [rsp+B0h] [rbp-50h] BYREF
  __int64 v113; // [rsp+C0h] [rbp-40h]
  __int128 v114; // [rsp+C8h] [rbp-38h] BYREF
  __int64 v115; // [rsp+D8h] [rbp-28h]
  _BYTE v116[40]; // [rsp+E0h] [rbp-20h] BYREF
  CInpLockGuard *v117; // [rsp+108h] [rbp+8h]
  _OWORD v118[7]; // [rsp+120h] [rbp+20h] BYREF
  _OWORD v119[7]; // [rsp+190h] [rbp+90h] BYREF
  _BYTE v120[40]; // [rsp+200h] [rbp+100h] BYREF
  CInpLockGuard *v121; // [rsp+228h] [rbp+128h]
  _BYTE v122[112]; // [rsp+230h] [rbp+130h] BYREF
  _QWORD v123[16]; // [rsp+2A0h] [rbp+1A0h] BYREF

  v109 = a5;
  v101 = a4;
  v7 = a2;
  v102 = a2;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(a2) = 5;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      (_DWORD)a2,
      7,
      95,
      (__int64)&WPP_8113a81d21a7371434699e4b0bdc9bc8_Traceguids);
  }
  CInpLockGuardExclusive::CInpLockGuardExclusive(
    (CInpLockGuardExclusive *)v120,
    (struct CInpLockGuard *)(this + 5),
    (void *)a3);
  v99 = 0;
  v113 = 0LL;
  v115 = 0LL;
  v107 = 0LL;
  v108 = 0;
  *a5 = 0;
  v112 = 0LL;
  v114 = 0LL;
  if ( a4 == 595 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_21;
    v12 = WPP_GLOBAL_Control;
    if ( !LOWORD(WPP_GLOBAL_Control->DeviceType) )
      goto LABEL_21;
    v13 = 96;
LABEL_20:
    LOBYTE(v9) = 5;
    WPP_RECORDER_SF_(v12->DeviceExtension, v9, 7, v13, (__int64)&WPP_8113a81d21a7371434699e4b0bdc9bc8_Traceguids);
LABEL_21:
    v18 = 1;
    goto LABEL_145;
  }
  if ( !a3 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_27;
    v14 = WPP_GLOBAL_Control;
    if ( !LOWORD(WPP_GLOBAL_Control->DeviceType) )
      goto LABEL_27;
    v15 = 97;
LABEL_26:
    LOBYTE(v9) = 5;
    WPP_RECORDER_SF_(v14->DeviceExtension, v9, 7, v15, (__int64)&WPP_8113a81d21a7371434699e4b0bdc9bc8_Traceguids);
LABEL_27:
    v18 = 0;
    goto LABEL_145;
  }
  v16 = CTouchProcessor::ReferenceFrame(this, *(unsigned int *)(a3 + 28), v10, v11);
  v17 = (__int64)v16;
  if ( !v16 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_27;
    v14 = WPP_GLOBAL_Control;
    if ( !LOWORD(WPP_GLOBAL_Control->DeviceType) )
      goto LABEL_27;
    v15 = 98;
    goto LABEL_26;
  }
  if ( (*((_DWORD *)v16 + 30) & 0x20) != 0 )
  {
    CTouchProcessor::UnreferenceFrame((CTouchProcessor *)this, v16);
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_21;
    v12 = WPP_GLOBAL_Control;
    if ( !LOWORD(WPP_GLOBAL_Control->DeviceType) )
      goto LABEL_21;
    v13 = 99;
    goto LABEL_20;
  }
  v19 = (_DWORD *)Win32AllocPool(120LL, 0x70697355u);
  if ( !v19 )
  {
    CTouchProcessor::UnreferenceFrame((CTouchProcessor *)this, (const struct CPointerInputFrame *)v17);
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_27;
    v14 = WPP_GLOBAL_Control;
    if ( !LOWORD(WPP_GLOBAL_Control->DeviceType) )
      goto LABEL_27;
    v15 = 100;
    goto LABEL_26;
  }
  *(_DWORD *)((char *)v19 + 113) = 0;
  *(_WORD *)((char *)v19 + 117) = 0;
  *((_BYTE *)v19 + 119) = 0;
  memset(v19, 0, 0x70uLL);
  *((_BYTE *)v19 + 112) = 0;
  PushW32ThreadLock(
    (__int64)v19,
    (__int64)&v114,
    (__int64)lambda_0e67b526681aa6a0208369450a9126fb_::_lambda_invoker_cdecl_,
    v20);
  v25 = *(unsigned int *)(a3 + 32);
  if ( (unsigned int)v25 >= *(_DWORD *)(v17 + 48) )
  {
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v22, v21, v23, v24);
    v25 = *(unsigned int *)(a3 + 32);
  }
  v26 = *(_QWORD *)(v17 + 136) + 480 * v25;
  v111 = v26;
  if ( !(unsigned int)CPointerInfoNode::IsValid((CPointerInfoNode *)v26) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v28, v27, v29, v30);
  if ( *(_WORD *)(v26 + 172) != *(_WORD *)(a3 + 16) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v28, v27, v29, v30);
  if ( a4 == 585 )
  {
    if ( (*(_DWORD *)v26 & 0x800000) != 0 )
      goto LABEL_46;
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v28, v27, v29, v30);
  }
  if ( a4 == 586 )
  {
    if ( (*(_DWORD *)v26 & 0x8000000) != 0 )
      goto LABEL_46;
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v28, v27, v29, v30);
  }
  if ( a4 == 593 )
  {
    if ( *(int *)v26 < 0 )
      goto LABEL_46;
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v28, v27, v29, v30);
  }
  if ( a4 == 594 && (*(_DWORD *)(v26 + 4) & 8) == 0 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v28, v27, v29, v30);
LABEL_46:
  if ( (*(_DWORD *)v26 & 0x100) == 0 && !*(_QWORD *)(v26 + 192) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v28, v27, v29, v30);
  v18 = 1;
  v31 = (*((_DWORD *)v7 + 306) >> 13) & 1;
  IsMessageDelegated = CPointerInfoNode::IsMessageDelegated((CPointerInfoNode *)v26, a4, v29, v30);
  QueueForCurrentNode = CTouchProcessor::GetQueueForCurrentNode(
                          this,
                          v102,
                          v31,
                          a4,
                          IsMessageDelegated,
                          (const struct CPointerInfoNode *)v26);
  if ( !QueueForCurrentNode )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v33, v32, v34, v35);
  PushW32ThreadLock(v17, (__int64)&v112, (__int64)CTouchProcessor::DereferencePointerInputFrame, v35);
  v39 = *(unsigned int *)(v17 + 48);
  v40 = *(_QWORD *)(v17 + 136);
  v103 = 1;
  v98 = 0;
  if ( !(_DWORD)v39 )
    goto LABEL_136;
  while ( 1 )
  {
    v41 = *(_QWORD *)(v17 + 136) + 480 * v39;
    if ( v40 >= v41 )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v41, v36, v37, v38);
    CInputDest::SetEmpty((CInputDest *)v19);
    if ( v31 && (*((_DWORD *)v102 + 306) & 0x2000) == 0 )
      goto LABEL_136;
    if ( !(unsigned int)CPointerInfoNode::IsValid((CPointerInfoNode *)v40) )
      goto LABEL_61;
    IsTargetSetForRetrieval = CPointerInfoNode::IsTargetSetForRetrieval(v42, v37);
    v38 = 0LL;
    if ( IsTargetSetForRetrieval )
    {
      v44 = CTouchProcessor::HandlePointerNodeWithTarget(this, (CPointerInfoNode *)v26, v101, v40);
      if ( v44 == 1 )
      {
        *v109 = 1;
        v18 = 0;
        goto LABEL_136;
      }
      if ( (v44 & 0xFFFFFFFD) != 0 )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v45, v36, v37, v38);
LABEL_61:
      v46 = v98;
      goto LABEL_62;
    }
    if ( *(_DWORD *)(v40 + 8) != *(_DWORD *)(v26 + 8)
      || v40 != v26
      && (!v31 && !(unsigned int)CPointerInfoNode::IsAnyMessageNonDelegated((CPointerInfoNode *)v40)
       || (Queue = CPointerInfoNode::GetQueue((CPointerInfoNode *)v40, &v108), v38 = 0LL, v100 = Queue, v108)
       || Queue
       && (v48 = CInputDest::GetQueue(Queue, 2LL, (__int64)v37, 0LL), v38 = 0LL, v48)
       && !CInputDest::UsesQueue(v100, QueueForCurrentNode)) )
    {
      v103 = (int)v38;
      goto LABEL_61;
    }
    v49 = v102;
    if ( (*((_DWORD *)v102 + 306) & 0x2000) != 0 )
    {
      v50 = *(_QWORD *)(v40 + 16);
      v100 = v38;
      if ( (unsigned int)CTouchProcessor::RecheckPointerCapture(this, v50, v31, &v100, &v99) )
      {
        CInputDest::operator=((__int64)v19, (__int64)v100);
      }
      else
      {
        v99 = 1;
        if ( *(_DWORD *)(v40 + 24) )
        {
          if ( !CInputDest::IsEqualByWindowHandle(v40 + 24, *(_QWORD *)(v40 + 192), 0) )
            MicrosoftTelemetryAssertTriggeredNoArgsKM(v54, v53, v55, v56);
          CInputDest::operator=((__int64)v19, v40 + 24);
        }
        if ( !*v19 )
        {
          CThreadLockInputDest::CThreadLockInputDest(
            (CThreadLockInputDest *)v116,
            (struct CInputDest *)(v40 + 352),
            v51,
            v52);
          v57 = (_OWORD *)ApiSetEditionPointerSpeedHitTest((unsigned int)v122, (int)v40 + 160, 0, 0, 0LL, 0LL);
          v58 = v57[1];
          v118[0] = *v57;
          v59 = v57[2];
          v118[1] = v58;
          v60 = v57[3];
          v118[2] = v59;
          v61 = v57[4];
          v118[3] = v60;
          v62 = v57[5];
          v118[4] = v61;
          v63 = v57[6];
          v118[5] = v62;
          v118[6] = v63;
          CInputDest::CInputDest((CInputDest *)v123, (const struct tagINPUTDEST *)v118);
          CInputDest::operator=((__int64)v19, v123);
          CInputDest::SetEmpty((CInputDest *)v123);
          CThreadLockInputDest::~CThreadLockInputDest((CThreadLockInputDest *)v116);
        }
      }
      HasDelegationThread = CInputDest::HasDelegationThread((CInputDest *)v19);
      v49 = 0LL;
      if ( HasDelegationThread )
      {
        CTouchProcessor::SetPointerInfoNodeTarget(
          (CTouchProcessor *)this,
          (const struct CPointerInputFrame *)v17,
          v98,
          (const struct CInputDest *)v19,
          v99,
          &v107,
          0,
          0,
          1,
          1);
        v103 = 0;
        if ( (unsigned int)CPointerInfoNode::ShouldForegroundActivate((CPointerInfoNode *)v40) )
        {
          UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)v110);
          WindowHandle = (unsigned int)CInputDest::GetWindowHandle((CInputDest *)v19);
          CBaseProcessor::PostQEventWork((__int64)this, WindowHandle, 2, 0, 0LL, *(_QWORD *)(v40 + 16));
          UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)v110);
        }
        goto LABEL_61;
      }
    }
    v66 = (CTouchProcessor *)*((unsigned int *)CTouchProcessor::GetPointerInfoNodeQFrame(
                                                 v49,
                                                 (const struct CPointerInputFrame *)v17,
                                                 (const struct CPointerInfoNode *)v40)
                             + 35);
    if ( ((unsigned __int8)v66 & 1) != 0 && (*((_DWORD *)v102 + 306) & 0x2000) == 0 )
      CTouchProcessor::SetQFrameNonCoalescable(
        v66,
        (const struct CPointerInputFrame *)v17,
        (const struct CPointerInfoNode *)v40);
    v99 = 1;
    if ( (unsigned int)CPointerInfoNode::IsTouchpad((CPointerInfoNode *)v40) )
    {
      CTouchProcessor::DetermineTouchpadPointerTargetWindow(
        (CTouchProcessor *)this,
        v102,
        (const struct CPointerInputFrame *)v17,
        (struct CPointerInfoNode *)v40,
        QueueForCurrentNode,
        v98,
        v31,
        &v99,
        &v107,
        (struct CInputDest *)v19);
      if ( !*v19 )
        goto LABEL_61;
    }
    else
    {
      CTouchProcessor::DeterminePointerTargetWindow(
        (CTouchProcessor *)this,
        v102,
        (struct CPointerInfoNode *)v40,
        QueueForCurrentNode,
        v31,
        &v99,
        &v107,
        (struct CInputDest *)v19);
    }
    QueueForCurrentNode = CTouchProcessor::GetQueueForCurrentNode(
                            this,
                            v102,
                            v31,
                            v101,
                            IsMessageDelegated,
                            (const struct CPointerInfoNode *)v26);
    if ( !QueueForCurrentNode )
      break;
    v67 = CTouchProcessor::RevalidateFrameProcessing(0LL, v102, v31, (const struct CPointerInfoNode *)v40, 0);
    v38 = 0LL;
    if ( !v67 )
      goto LABEL_61;
    if ( *v19 )
    {
      if ( (*(_DWORD *)(v40 + 180) & 0x10000) != 0
        && !(unsigned int)CPointerInfoNode::IsTouchpad((CPointerInfoNode *)v40)
        && (*(_DWORD *)(v40 + 4) & 0x80u) == 0 )
      {
        CTouchProcessor::PointerParentNotify(this, (struct CInputDest *)v19, (struct CPointerInfoNode *)v40, 0LL);
        QueueForCurrentNode = CTouchProcessor::GetQueueForCurrentNode(
                                this,
                                v102,
                                v31,
                                v101,
                                IsMessageDelegated,
                                (const struct CPointerInfoNode *)v26);
        if ( !QueueForCurrentNode )
          break;
        v68 = CTouchProcessor::RevalidateFrameProcessing(0LL, v102, v31, (const struct CPointerInfoNode *)v40, 0);
        v38 = 0LL;
        if ( !v68 )
          goto LABEL_61;
        v69 = *(_QWORD *)(v40 + 16);
        v100 = 0LL;
        if ( (unsigned int)CTouchProcessor::RecheckPointerCapture(this, v69, v31, &v100, &v99) )
          CInputDest::operator=((__int64)v19, (__int64)v100);
      }
      if ( *v19 && (unsigned int)CPointerInfoNode::ShouldForegroundActivate((CPointerInfoNode *)v40) )
      {
        v72 = CTouchProcessor::LookupNode(v70, (const struct CPointerInputFrame *)v17, v98, v71);
        *((_DWORD *)v72 + 36) = v99;
        CThreadLockInputDest::CThreadLockInputDest((CThreadLockInputDest *)v122, (struct CInputDest *)v19, v73, v74);
        CInpUnlockGuardExclusive::CInpUnlockGuardExclusive(
          (CInpUnlockGuardExclusive *)v116,
          (struct CInpLockGuard *)(this + 5),
          0LL);
        v75 = *(_QWORD *)(v40 + 16);
        v76 = *((_OWORD *)v19 + 1);
        v77 = *(unsigned __int16 *)(v40 + 144);
        v119[0] = *(_OWORD *)v19;
        v78 = *((_OWORD *)v19 + 2);
        v119[1] = v76;
        v79 = *((_OWORD *)v19 + 3);
        v119[2] = v78;
        v80 = *((_OWORD *)v19 + 4);
        v119[3] = v79;
        v81 = *((_OWORD *)v19 + 5);
        v119[4] = v80;
        v82 = *((_OWORD *)v19 + 6);
        v119[5] = v81;
        v119[6] = v82;
        ApiSetEditionPointerActivate(v119, v77, v75, v40 + 160);
        CInpLockGuard::UnRefPointerMsgIdAndLockExclusive((PERESOURCE *)v117, (struct CRefUnRefPointerMsgId *)v116);
        CThreadLockInputDest::~CThreadLockInputDest((CThreadLockInputDest *)v122);
        QueueForCurrentNode = CTouchProcessor::GetQueueForCurrentNode(
                                this,
                                v102,
                                v31,
                                v101,
                                IsMessageDelegated,
                                (const struct CPointerInfoNode *)v26);
        if ( !QueueForCurrentNode )
          break;
        v83 = CTouchProcessor::RevalidateFrameProcessing(0LL, v102, v31, (const struct CPointerInfoNode *)v40, 0);
        v38 = 0LL;
        if ( !v83 )
          goto LABEL_61;
        v84 = *(_QWORD *)(v40 + 16);
        v100 = 0LL;
        if ( (unsigned int)CTouchProcessor::RecheckPointerCapture(this, v84, v31, &v100, &v99) )
          CInputDest::operator=((__int64)v19, (__int64)v100);
      }
    }
    if ( (unsigned int)CPointerInfoNode::IsTargetSetForRetrieval((CPointerInfoNode *)v40, v102) )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v86, v85, v87, v88);
    CTouchProcessor::SetPointerInfoNodeTarget(
      (CTouchProcessor *)this,
      (const struct CPointerInputFrame *)v17,
      v98,
      (const struct CInputDest *)v19,
      v99,
      &v107,
      0,
      0,
      1,
      0);
    if ( *v19 )
    {
      if ( (*(_DWORD *)(v40 + 180) & 0x10000) != 0 )
      {
        CTouchProcessor::SetPointerImplicitCapture(
          (CTouchProcessor *)this,
          *(_QWORD *)(v40 + 16),
          (const struct CInputDest *)v19,
          v99,
          v31);
      }
      else if ( v101 == 593 )
      {
        CTouchProcessor::SetPointerExplicitCapture(
          (struct _DEVICE_OBJECT *)this,
          *(_QWORD *)(v40 + 16),
          (const struct CInputDest *)v19,
          (unsigned int)v99,
          v31);
      }
    }
    IsTouchpad = CPointerInfoNode::IsTouchpad((CPointerInfoNode *)v40);
    v38 = 0LL;
    if ( !IsTouchpad )
      goto LABEL_61;
    v46 = v98;
    if ( (*(_DWORD *)(v40 + 180) & 0x2000) != 0 )
    {
      v104 = 0;
      if ( v98 )
      {
        v90 = v99;
        v100 = 0LL;
        while ( 1 )
        {
          if ( (unsigned int)Feature_Servicing_2108c_32449232__private_IsEnabled() )
          {
            if ( (unsigned int)CPointerInfoNode::IsValid((CInputDest *)((char *)v100 + *(_QWORD *)(v17 + 136)))
              && *(_DWORD *)(v40 + 8) == *(_DWORD *)(v91 + 8) )
            {
              if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              {
                v92 = 101;
                goto LABEL_126;
              }
              goto LABEL_127;
            }
          }
          else if ( (unsigned int)CPointerInfoNode::IsValid((CPointerInfoNode *)(*(_QWORD *)(v17 + 136) + 480LL * v104)) )
          {
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              v92 = 102;
LABEL_126:
              LOBYTE(v36) = 4;
              WPP_RECORDER_SF_(
                WPP_MAIN_CB.Queue.ListEntry.Flink,
                v36,
                7,
                v92,
                (__int64)&WPP_8113a81d21a7371434699e4b0bdc9bc8_Traceguids);
              LODWORD(v38) = 0;
            }
LABEL_127:
            CTouchProcessor::SetPointerInfoNodeTarget(
              (CTouchProcessor *)this,
              (const struct CPointerInputFrame *)v17,
              v104,
              (const struct CInputDest *)v19,
              v90,
              &v107,
              (int)v38,
              (int)v38,
              1,
              (int)v38);
            if ( *v19 )
            {
              v36 = *(_QWORD *)(v17 + 136);
              if ( (*(_DWORD *)((_BYTE *)v100 + v36 + 180) & 0x10000) != 0 )
              {
                CTouchProcessor::SetPointerImplicitCapture(
                  (CTouchProcessor *)this,
                  *(_QWORD *)((char *)v100 + v36 + 16),
                  (const struct CInputDest *)v19,
                  v90,
                  v31);
              }
              else if ( v101 == 593 )
              {
                CTouchProcessor::SetPointerExplicitCapture(
                  (struct _DEVICE_OBJECT *)this,
                  *(_QWORD *)(v40 + 16),
                  (const struct CInputDest *)v19,
                  v90,
                  v31);
              }
            }
          }
          v100 = (CInputDest *)((char *)v100 + 480);
          v46 = v98;
          if ( ++v104 >= v98 )
          {
            v26 = v111;
            break;
          }
        }
      }
    }
LABEL_62:
    v39 = *(unsigned int *)(v17 + 48);
    v40 += 480LL;
    v98 = v46 + 1;
    if ( v46 + 1 >= (unsigned int)v39 )
      goto LABEL_136;
  }
  *v109 = 1;
  v18 = 0;
LABEL_136:
  PopW32ThreadLock(&v112);
  PopAndFreeAlwaysW32ThreadLock((__int64)&v114);
  if ( v18 )
  {
    if ( (*(_DWORD *)(v17 + 120) & 0x20) == 0 )
    {
      if ( v103 )
      {
        if ( !v31 )
        {
          v95 = CTouchProcessor::FindAndReferenceFrameById(this, *(unsigned int *)(v17 + 40), v93, v94);
          if ( v95 )
          {
            *((_DWORD *)v95 + 30) |= 0x20u;
            CTouchProcessor::UnreferenceFrameInt((CTouchProcessor *)this, v95);
          }
        }
      }
    }
  }
  CTouchProcessor::UnreferenceFrame((CTouchProcessor *)this, (const struct CPointerInputFrame *)v17);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(v96) = 5;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      v96,
      7,
      103,
      (__int64)&WPP_8113a81d21a7371434699e4b0bdc9bc8_Traceguids);
  }
LABEL_145:
  CInpLockGuard::UnLock((PERESOURCE *)v121, (struct CRefUnRefPointerMsgId *)v120);
  return v18;
}
