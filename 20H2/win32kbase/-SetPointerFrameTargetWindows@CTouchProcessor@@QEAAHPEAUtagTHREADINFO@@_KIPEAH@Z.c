/*
 * XREFs of ?SetPointerFrameTargetWindows@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@_KIPEAH@Z @ 0x1C0198060
 * Callers:
 *     <none>
 * Callees:
 *     ?GetWindowHandle@CInputDest@@QEBAPEAUHWND__@@XZ @ 0x1C002C860 (-GetWindowHandle@CInputDest@@QEBAPEAUHWND__@@XZ.c)
 *     ?GetQueue@CInputDest@@QEBAPEAXW4QType@1@@Z @ 0x1C0033D14 (-GetQueue@CInputDest@@QEBAPEAXW4QType@1@@Z.c)
 *     ??4CInputDest@@QEAAAEAV0@$$QEAV0@@Z @ 0x1C0033F64 (--4CInputDest@@QEAAAEAV0@$$QEAV0@@Z.c)
 *     Win32AllocPool @ 0x1C003C610 (Win32AllocPool.c)
 *     WPP_RECORDER_SF_ @ 0x1C004F07C (WPP_RECORDER_SF_.c)
 *     ?SetEmpty@CInputDest@@QEAAXXZ @ 0x1C0055364 (-SetEmpty@CInputDest@@QEAAXXZ.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C005541C (--0UserAtomicCheck@@QEAA@XZ.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C0055474 (--1UserAtomicCheck@@QEAA@XZ.c)
 *     ??0CInputDest@@QEAA@AEBUtagINPUTDEST@@@Z @ 0x1C0055520 (--0CInputDest@@QEAA@AEBUtagINPUTDEST@@@Z.c)
 *     PushW32ThreadLock @ 0x1C0096A30 (PushW32ThreadLock.c)
 *     PopAndFreeAlwaysW32ThreadLock @ 0x1C009715C (PopAndFreeAlwaysW32ThreadLock.c)
 *     ??1CThreadLockInputDest@@QEAA@XZ @ 0x1C00A6E9C (--1CThreadLockInputDest@@QEAA@XZ.c)
 *     ??4CInputDest@@QEAAAEAV0@AEBV0@@Z @ 0x1C00A89D0 (--4CInputDest@@QEAAAEAV0@AEBV0@@Z.c)
 *     ??0CThreadLockInputDest@@QEAA@PEAVCInputDest@@@Z @ 0x1C00AAC14 (--0CThreadLockInputDest@@QEAA@PEAVCInputDest@@@Z.c)
 *     ?PostQEventWork@CBaseProcessor@@IEAAXPEAUHWND__@@W4EventWorkId@1@I_K_J@Z @ 0x1C00B39E0 (-PostQEventWork@CBaseProcessor@@IEAAXPEAUHWND__@@W4EventWorkId@1@I_K_J@Z.c)
 *     __security_check_cookie @ 0x1C00CBC40 (__security_check_cookie.c)
 *     ??0CInpLockGuardExclusive@@QEAA@AEAUCInpLockGuard@@PEAX@Z @ 0x1C00D11E4 (--0CInpLockGuardExclusive@@QEAA@AEAUCInpLockGuard@@PEAX@Z.c)
 *     ??0CInpUnlockGuardExclusive@@QEAA@AEAUCInpLockGuard@@PEAX@Z @ 0x1C00D12DC (--0CInpUnlockGuardExclusive@@QEAA@AEAUCInpLockGuard@@PEAX@Z.c)
 *     ?UnLock@CInpLockGuard@@QEAAXAEAVCRefUnRefPointerMsgId@@@Z @ 0x1C00D1E30 (-UnLock@CInpLockGuard@@QEAAXAEAVCRefUnRefPointerMsgId@@@Z.c)
 *     ?UnRefPointerMsgIdAndLockExclusive@CInpLockGuard@@QEAAXAEAVCRefUnRefPointerMsgId@@@Z @ 0x1C00D1EB0 (-UnRefPointerMsgIdAndLockExclusive@CInpLockGuard@@QEAAXAEAVCRefUnRefPointerMsgId@@@Z.c)
 *     memset @ 0x1C00D3740 (memset.c)
 *     ?HasDelegationThread@CInputDest@@QEBA_NXZ @ 0x1C0180E9C (-HasDelegationThread@CInputDest@@QEBA_NXZ.c)
 *     ?IsEqualByWindowHandle@CInputDest@@QEBA_NPEAXW4HandleValidationType@1@@Z @ 0x1C0180EE8 (-IsEqualByWindowHandle@CInputDest@@QEBA_NPEAXW4HandleValidationType@1@@Z.c)
 *     ?UsesQueue@CInputDest@@QEBA_NPEBUtagQ@@@Z @ 0x1C018117C (-UsesQueue@CInputDest@@QEBA_NPEBUtagQ@@@Z.c)
 *     ?DeterminePointerTargetWindow@CTouchProcessor@@AEAAXPEAUtagTHREADINFO@@PEAUCPointerInfoNode@@PEAUtagQ@@HPEAHPEAUtagPOINT@@PEAVCInputDest@@@Z @ 0x1C018A754 (-DeterminePointerTargetWindow@CTouchProcessor@@AEAAXPEAUtagTHREADINFO@@PEAUCPointerInfoNode@@PEA.c)
 *     ?DetermineTouchpadPointerTargetWindow@CTouchProcessor@@AEAAXPEAUtagTHREADINFO@@PEBUCPointerInputFrame@@PEAUCPointerInfoNode@@PEAUtagQ@@KHPEAHPEAUtagPOINT@@PEAVCInputDest@@@Z @ 0x1C018AB64 (-DetermineTouchpadPointerTargetWindow@CTouchProcessor@@AEAAXPEAUtagTHREADINFO@@PEBUCPointerInput.c)
 *     ?FindAndReferenceFrameById@CTouchProcessor@@AEAAPEAUCPointerInputFrame@@K@Z @ 0x1C018B660 (-FindAndReferenceFrameById@CTouchProcessor@@AEAAPEAUCPointerInputFrame@@K@Z.c)
 *     ?GetPointerInfoNodeQFrame@CTouchProcessor@@AEAAPEBUCPointerQFrame@@PEBUCPointerInputFrame@@PEBUCPointerInfoNode@@@Z @ 0x1C0190568 (-GetPointerInfoNodeQFrame@CTouchProcessor@@AEAAPEBUCPointerQFrame@@PEBUCPointerInputFrame@@PEBUC.c)
 *     ?GetQueue@CPointerInfoNode@@QEAAPEAVCInputDest@@PEAH@Z @ 0x1C0191C24 (-GetQueue@CPointerInfoNode@@QEAAPEAVCInputDest@@PEAH@Z.c)
 *     ?GetQueueForCurrentNode@CTouchProcessor@@AEAAPEAUtagQ@@PEAUtagTHREADINFO@@HIHPEBUCPointerInfoNode@@@Z @ 0x1C0191E2C (-GetQueueForCurrentNode@CTouchProcessor@@AEAAPEAUtagQ@@PEAUtagTHREADINFO@@HIHPEBUCPointerInfoNod.c)
 *     ?HandlePointerNodeWithTarget@CTouchProcessor@@AEAA?AW4PointerNodeWithTargetHandling@1@PEBUCPointerInfoNode@@IPEAU3@@Z @ 0x1C0192370 (-HandlePointerNodeWithTarget@CTouchProcessor@@AEAA-AW4PointerNodeWithTargetHandling@1@PEBUCPoint.c)
 *     ?IsAnyMessageNonDelegated@CPointerInfoNode@@QEBAHXZ @ 0x1C019291C (-IsAnyMessageNonDelegated@CPointerInfoNode@@QEBAHXZ.c)
 *     ?IsMessageDelegated@CPointerInfoNode@@QEBAHI@Z @ 0x1C0192B28 (-IsMessageDelegated@CPointerInfoNode@@QEBAHI@Z.c)
 *     ?IsTargetSetForRetrieval@CPointerInfoNode@@QEBAHPEAUtagTHREADINFO@@@Z @ 0x1C019303C (-IsTargetSetForRetrieval@CPointerInfoNode@@QEBAHPEAUtagTHREADINFO@@@Z.c)
 *     ?IsTouchpad@CPointerInfoNode@@QEBAHXZ @ 0x1C01930E4 (-IsTouchpad@CPointerInfoNode@@QEBAHXZ.c)
 *     ?IsValid@CPointerInfoNode@@QEBAHXZ @ 0x1C0193120 (-IsValid@CPointerInfoNode@@QEBAHXZ.c)
 *     ?LookupNode@CTouchProcessor@@AEAAPEAUCPointerInfoNode@@PEBUCPointerInputFrame@@K@Z @ 0x1C0193144 (-LookupNode@CTouchProcessor@@AEAAPEAUCPointerInfoNode@@PEBUCPointerInputFrame@@K@Z.c)
 *     ?PointerParentNotify@CTouchProcessor@@AEAAXPEAVCInputDest@@PEAUCPointerInfoNode@@@Z @ 0x1C0193928 (-PointerParentNotify@CTouchProcessor@@AEAAXPEAVCInputDest@@PEAUCPointerInfoNode@@@Z.c)
 *     ?RecheckPointerCapture@CTouchProcessor@@AEAAH_KHPEAPEAVCInputDest@@PEAH@Z @ 0x1C0196540 (-RecheckPointerCapture@CTouchProcessor@@AEAAH_KHPEAPEAVCInputDest@@PEAH@Z.c)
 *     ?ReferenceFrame@CTouchProcessor@@AEAAPEBUCPointerInputFrame@@K@Z @ 0x1C0196650 (-ReferenceFrame@CTouchProcessor@@AEAAPEBUCPointerInputFrame@@K@Z.c)
 *     ?RevalidateFrameProcessing@CTouchProcessor@@AEAAHPEAUtagTHREADINFO@@HPEBUCPointerInfoNode@@H@Z @ 0x1C0196C1C (-RevalidateFrameProcessing@CTouchProcessor@@AEAAHPEAUtagTHREADINFO@@HPEBUCPointerInfoNode@@H@Z.c)
 *     ?SetPointerExplicitCapture@CTouchProcessor@@AEAAH_KAEBVCInputDest@@HH@Z @ 0x1C0197FF8 (-SetPointerExplicitCapture@CTouchProcessor@@AEAAH_KAEBVCInputDest@@HH@Z.c)
 *     ?SetPointerImplicitCapture@CTouchProcessor@@AEAAH_KAEBVCInputDest@@HH@Z @ 0x1C0198D34 (-SetPointerImplicitCapture@CTouchProcessor@@AEAAH_KAEBVCInputDest@@HH@Z.c)
 *     ?SetPointerInfoNodeTarget@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@KAEBVCInputDest@@HPEBUtagPOINT@@HHHH@Z @ 0x1C0199430 (-SetPointerInfoNodeTarget@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@KAEBVCInputDest@@HPEBUta.c)
 *     ?SetQFrameNonCoalescable@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@PEBUCPointerInfoNode@@@Z @ 0x1C0199884 (-SetQFrameNonCoalescable@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@PEBUCPointerInfoNode@@@Z.c)
 *     ?ShouldForegroundActivate@CPointerInfoNode@@QEBAHXZ @ 0x1C0199C14 (-ShouldForegroundActivate@CPointerInfoNode@@QEBAHXZ.c)
 *     ?UnreferenceFrame@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@@Z @ 0x1C019A750 (-UnreferenceFrame@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@@Z.c)
 *     ?UnreferenceFrameInt@CTouchProcessor@@AEAAKPEAUCPointerInputFrame@@@Z @ 0x1C019AA04 (-UnreferenceFrameInt@CTouchProcessor@@AEAAKPEAUCPointerInputFrame@@@Z.c)
 *     ApiSetEditionPointerActivate @ 0x1C01C6D80 (ApiSetEditionPointerActivate.c)
 *     ApiSetEditionPointerSpeedHitTest @ 0x1C01C6FEC (ApiSetEditionPointerSpeedHitTest.c)
 *     PopW32ThreadLock @ 0x1C01F68D0 (PopW32ThreadLock.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01FA2AC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
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
  __int64 v17; // r14
  unsigned int v18; // ebx
  _DWORD *v19; // rdi
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r9
  __int64 v24; // rax
  __int64 v25; // r13
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // r9
  unsigned int v30; // r12d
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // r8
  __int64 v34; // r9
  __int64 v35; // rdx
  __int64 v36; // r8
  __int64 v37; // r9
  unsigned __int64 v38; // r15
  unsigned int v39; // ecx
  unsigned __int64 v40; // rcx
  CPointerInfoNode *v41; // rcx
  struct tagTHREADINFO *v42; // r8
  int IsTargetSetForRetrieval; // eax
  CInputDest *v44; // r9
  int v45; // eax
  __int64 v46; // rcx
  __int64 v47; // r8
  __int64 v48; // r9
  CTouchProcessor *v49; // rcx
  CInputDest *Queue; // rax
  __int64 v51; // r8
  __int64 v52; // rax
  __int64 v53; // rdx
  __int64 v54; // r8
  __int64 v55; // r9
  CTouchProcessor *v56; // rax
  __int64 v57; // rdx
  __int64 v58; // rcx
  __int64 v59; // r8
  __int64 v60; // r9
  _OWORD *v61; // rax
  __int128 v62; // xmm1
  __int128 v63; // xmm0
  __int128 v64; // xmm1
  __int128 v65; // xmm0
  __int128 v66; // xmm1
  __int128 v67; // xmm0
  __int64 v68; // rdx
  __int64 v69; // r8
  __int64 v70; // r9
  char HasDelegationThread; // al
  int WindowHandle; // eax
  CTouchProcessor *v73; // rcx
  __int64 v74; // r8
  CTouchProcessor *v75; // rcx
  __int64 v76; // r9
  struct CPointerInfoNode *v77; // rax
  __int64 v78; // r8
  __int64 v79; // r9
  __int128 v80; // xmm1
  __int64 v81; // r8
  __int64 v82; // rdx
  __int128 v83; // xmm0
  __int128 v84; // xmm1
  __int128 v85; // xmm0
  __int128 v86; // xmm1
  __int128 v87; // xmm0
  __int64 v88; // r8
  __int64 v89; // r9
  __int64 v90; // rdx
  __int64 v91; // rcx
  __int64 v92; // r8
  __int64 v93; // r9
  unsigned int v94; // r15d
  __int64 v95; // r13
  __int64 v96; // rcx
  __int64 v97; // r8
  int v98; // r9d
  __int64 v99; // r8
  __int64 v100; // r9
  struct CPointerInputFrame *v101; // rax
  int v102; // edx
  int v104; // [rsp+50h] [rbp-B0h] BYREF
  CTouchProcessor *v105; // [rsp+58h] [rbp-A8h]
  unsigned int v106; // [rsp+60h] [rbp-A0h]
  CInputDest *v107; // [rsp+68h] [rbp-98h] BYREF
  struct tagTHREADINFO *v108; // [rsp+70h] [rbp-90h]
  unsigned int v109; // [rsp+78h] [rbp-88h]
  int v110; // [rsp+7Ch] [rbp-84h]
  int IsMessageDelegated; // [rsp+80h] [rbp-80h]
  struct tagQ *QueueForCurrentNode; // [rsp+88h] [rbp-78h]
  int v113; // [rsp+90h] [rbp-70h] BYREF
  struct tagPOINT v114; // [rsp+98h] [rbp-68h] BYREF
  int *v115; // [rsp+A0h] [rbp-60h]
  unsigned __int64 v116; // [rsp+A8h] [rbp-58h]
  _BYTE v117[8]; // [rsp+B0h] [rbp-50h] BYREF
  __int64 v118; // [rsp+B8h] [rbp-48h]
  __int128 v119; // [rsp+C0h] [rbp-40h] BYREF
  __int64 v120; // [rsp+D0h] [rbp-30h]
  __int128 v121; // [rsp+D8h] [rbp-28h] BYREF
  __int64 v122; // [rsp+E8h] [rbp-18h]
  _BYTE v123[40]; // [rsp+F0h] [rbp-10h] BYREF
  CInpLockGuard *v124; // [rsp+118h] [rbp+18h]
  _OWORD v125[7]; // [rsp+130h] [rbp+30h] BYREF
  _OWORD v126[7]; // [rsp+1A0h] [rbp+A0h] BYREF
  _BYTE v127[40]; // [rsp+210h] [rbp+110h] BYREF
  CInpLockGuard *v128; // [rsp+238h] [rbp+138h]
  _BYTE v129[112]; // [rsp+240h] [rbp+140h] BYREF
  _QWORD v130[16]; // [rsp+2B0h] [rbp+1B0h] BYREF

  v115 = a5;
  v109 = a4;
  v7 = a2;
  v108 = a2;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(a2) = 5;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      (_DWORD)a2,
      7,
      95,
      (__int64)&WPP_50814762fbc63e38c7e5eacf83347307_Traceguids);
  }
  CInpLockGuardExclusive::CInpLockGuardExclusive(
    (CInpLockGuardExclusive *)v127,
    (struct CInpLockGuard *)(this + 5),
    (void *)a3);
  v104 = 0;
  v120 = 0LL;
  v122 = 0LL;
  v114 = 0LL;
  v113 = 0;
  *a5 = 0;
  v119 = 0LL;
  v121 = 0LL;
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
    WPP_RECORDER_SF_(v12->DeviceExtension, v9, 7, v13, (__int64)&WPP_50814762fbc63e38c7e5eacf83347307_Traceguids);
LABEL_21:
    v18 = 1;
    goto LABEL_141;
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
    WPP_RECORDER_SF_(v14->DeviceExtension, v9, 7, v15, (__int64)&WPP_50814762fbc63e38c7e5eacf83347307_Traceguids);
LABEL_27:
    v18 = 0;
    goto LABEL_141;
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
    (__int64)&v121,
    (__int64)lambda_0e67b526681aa6a0208369450a9126fb_::_lambda_invoker_cdecl_);
  v24 = *(unsigned int *)(a3 + 32);
  if ( (unsigned int)v24 >= *(_DWORD *)(v17 + 48) )
  {
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v21, v20, v22, v23);
    v24 = *(unsigned int *)(a3 + 32);
  }
  v25 = *(_QWORD *)(v17 + 136) + 480 * v24;
  v118 = v25;
  if ( !(unsigned int)CPointerInfoNode::IsValid((CPointerInfoNode *)v25) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v27, v26, v28, v29);
  if ( *(_WORD *)(v25 + 172) != *(_WORD *)(a3 + 16) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v27, v26, v28, v29);
  if ( a4 == 585 )
  {
    if ( (*(_DWORD *)v25 & 0x800000) != 0 )
      goto LABEL_46;
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v27, v26, v28, v29);
  }
  if ( a4 == 586 )
  {
    if ( (*(_DWORD *)v25 & 0x8000000) != 0 )
      goto LABEL_46;
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v27, v26, v28, v29);
  }
  if ( a4 == 593 )
  {
    if ( *(int *)v25 < 0 )
      goto LABEL_46;
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v27, v26, v28, v29);
  }
  if ( a4 == 594 && (*(_DWORD *)(v25 + 4) & 8) == 0 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v27, v26, v28, v29);
LABEL_46:
  if ( (*(_DWORD *)v25 & 0x100) == 0 && !*(_QWORD *)(v25 + 192) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v27, v26, v28, v29);
  v18 = 1;
  v30 = (*((_DWORD *)v7 + 308) >> 13) & 1;
  IsMessageDelegated = CPointerInfoNode::IsMessageDelegated((CPointerInfoNode *)v25, a4, v28, v29);
  QueueForCurrentNode = CTouchProcessor::GetQueueForCurrentNode(
                          this,
                          v108,
                          v30,
                          a4,
                          IsMessageDelegated,
                          (const struct CPointerInfoNode *)v25);
  if ( !QueueForCurrentNode )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v32, v31, v33, v34);
  PushW32ThreadLock(v17, (__int64)&v119, (__int64)CTouchProcessor::DereferencePointerInputFrame);
  v38 = *(_QWORD *)(v17 + 136);
  v39 = *(_DWORD *)(v17 + 48);
  v116 = v38;
  v110 = 1;
  v106 = 0;
  if ( v39 )
  {
    v105 = (CTouchProcessor *)(v38 + 24);
    do
    {
      v40 = *(_QWORD *)(v17 + 136) + 480LL * v39;
      if ( v38 >= v40 )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v40, v35, v36, v37);
      CInputDest::SetEmpty((CInputDest *)v19, v35, v36, v37);
      if ( v30 && (*((_DWORD *)v108 + 308) & 0x2000) == 0 )
        break;
      if ( (unsigned int)CPointerInfoNode::IsValid((CPointerInfoNode *)v38) )
      {
        IsTargetSetForRetrieval = CPointerInfoNode::IsTargetSetForRetrieval(v41, v42);
        v44 = 0LL;
        if ( IsTargetSetForRetrieval )
        {
          v45 = CTouchProcessor::HandlePointerNodeWithTarget(this, (CPointerInfoNode *)v25, v109, v38);
          if ( v45 == 1 )
          {
            *v115 = 1;
            v18 = 0;
            break;
          }
          if ( (v45 & 0xFFFFFFFD) != 0 )
            MicrosoftTelemetryAssertTriggeredNoArgsKM(v46, v35, v47, v48);
          goto LABEL_128;
        }
        v49 = v105;
        if ( *((_DWORD *)v105 - 4) != *(_DWORD *)(v25 + 8) )
          goto LABEL_63;
        if ( v38 != v25 )
        {
          if ( !v30 && !(unsigned int)CPointerInfoNode::IsAnyMessageNonDelegated((CPointerInfoNode *)v38)
            || (Queue = CPointerInfoNode::GetQueue((CPointerInfoNode *)v38, &v113), v44 = 0LL, v107 = Queue, v113)
            || Queue
            && (v52 = CInputDest::GetQueue(Queue, 2LL, v51, 0LL), v44 = 0LL, v52)
            && !CInputDest::UsesQueue(v107, QueueForCurrentNode) )
          {
LABEL_63:
            v110 = (int)v44;
            goto LABEL_128;
          }
          v49 = v105;
        }
        if ( (*((_DWORD *)v108 + 308) & 0x2000) != 0 )
        {
          v53 = *((_QWORD *)v49 - 1);
          v107 = v44;
          if ( (unsigned int)CTouchProcessor::RecheckPointerCapture(this, v53, v30, &v107, &v104) )
          {
            CInputDest::operator=((__int64)v19, (__int64)v107, v54, v55);
          }
          else
          {
            v56 = v105;
            v104 = 1;
            if ( *(_DWORD *)v105 )
            {
              if ( !CInputDest::IsEqualByWindowHandle((__int64)v105, *((_QWORD *)v105 + 21), 0) )
                MicrosoftTelemetryAssertTriggeredNoArgsKM(v58, v57, v59, v60);
              CInputDest::operator=((__int64)v19, (__int64)v105, v59, v60);
              v56 = v105;
            }
            if ( !*v19 )
            {
              CThreadLockInputDest::CThreadLockInputDest(
                (CThreadLockInputDest *)v123,
                (CTouchProcessor *)((char *)v56 + 328),
                v54,
                v55);
              v61 = (_OWORD *)ApiSetEditionPointerSpeedHitTest((unsigned int)v129, (int)v105 + 136, 0, 0, 0LL, 0LL);
              v62 = v61[1];
              v125[0] = *v61;
              v63 = v61[2];
              v125[1] = v62;
              v64 = v61[3];
              v125[2] = v63;
              v65 = v61[4];
              v125[3] = v64;
              v66 = v61[5];
              v125[4] = v65;
              v67 = v61[6];
              v125[5] = v66;
              v125[6] = v67;
              CInputDest::CInputDest((CInputDest *)v130, (const struct tagINPUTDEST *)v125);
              CInputDest::operator=((__int64)v19, v130);
              CInputDest::SetEmpty((CInputDest *)v130, v68, v69, v70);
              CThreadLockInputDest::~CThreadLockInputDest((CThreadLockInputDest *)v123);
            }
          }
          HasDelegationThread = CInputDest::HasDelegationThread((CInputDest *)v19);
          v49 = 0LL;
          if ( HasDelegationThread )
          {
            CTouchProcessor::SetPointerInfoNodeTarget(
              (CTouchProcessor *)this,
              (const struct CPointerInputFrame *)v17,
              v106,
              (const struct CInputDest *)v19,
              v104,
              &v114,
              0,
              0,
              1,
              1);
            v110 = 0;
            if ( (unsigned int)CPointerInfoNode::ShouldForegroundActivate((CPointerInfoNode *)v38) )
            {
              UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)v117);
              WindowHandle = (unsigned int)CInputDest::GetWindowHandle((CInputDest *)v19);
              CBaseProcessor::PostQEventWork((__int64)this, WindowHandle, 2, 0, 0LL, *((_QWORD *)v105 - 1));
              UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)v117);
            }
            goto LABEL_128;
          }
        }
        v73 = (CTouchProcessor *)*((unsigned int *)CTouchProcessor::GetPointerInfoNodeQFrame(
                                                     v49,
                                                     (const struct CPointerInputFrame *)v17,
                                                     (const struct CPointerInfoNode *)v38)
                                 + 35);
        if ( ((unsigned __int8)v73 & 1) != 0 && (*((_DWORD *)v108 + 308) & 0x2000) == 0 )
          CTouchProcessor::SetQFrameNonCoalescable(
            v73,
            (const struct CPointerInputFrame *)v17,
            (const struct CPointerInfoNode *)v38);
        v104 = 1;
        if ( (unsigned int)CPointerInfoNode::IsTouchpad((CPointerInfoNode *)v38) )
        {
          CTouchProcessor::DetermineTouchpadPointerTargetWindow(
            (CTouchProcessor *)this,
            v108,
            (const struct CPointerInputFrame *)v17,
            (struct CPointerInfoNode *)v38,
            QueueForCurrentNode,
            v106,
            v30,
            &v104,
            &v114,
            (struct CInputDest *)v19);
          if ( !*v19 )
            goto LABEL_128;
        }
        else
        {
          CTouchProcessor::DeterminePointerTargetWindow(
            (CTouchProcessor *)this,
            v108,
            (struct CPointerInfoNode *)v38,
            QueueForCurrentNode,
            v30,
            &v104,
            &v114,
            (struct CInputDest *)v19);
        }
        QueueForCurrentNode = CTouchProcessor::GetQueueForCurrentNode(
                                this,
                                v108,
                                v30,
                                v109,
                                IsMessageDelegated,
                                (const struct CPointerInfoNode *)v25);
        if ( !QueueForCurrentNode )
          goto LABEL_131;
        if ( CTouchProcessor::RevalidateFrameProcessing(0LL, v108, v30, (const struct CPointerInfoNode *)v38, 0) )
        {
          if ( !*v19 )
            goto LABEL_106;
          if ( (*((_DWORD *)v105 + 39) & 0x10000) != 0
            && !(unsigned int)CPointerInfoNode::IsTouchpad((CPointerInfoNode *)v38)
            && (*((_DWORD *)v105 - 5) & 0x80u) == 0 )
          {
            CTouchProcessor::PointerParentNotify(this, (struct CInputDest *)v19, (struct CPointerInfoNode *)v38, 0LL);
            QueueForCurrentNode = CTouchProcessor::GetQueueForCurrentNode(
                                    this,
                                    v108,
                                    v30,
                                    v109,
                                    IsMessageDelegated,
                                    (const struct CPointerInfoNode *)v25);
            if ( !QueueForCurrentNode )
              goto LABEL_131;
            if ( !CTouchProcessor::RevalidateFrameProcessing(0LL, v108, v30, (const struct CPointerInfoNode *)v38, 0) )
              goto LABEL_128;
            v107 = 0LL;
            if ( (unsigned int)CTouchProcessor::RecheckPointerCapture(this, *((_QWORD *)v105 - 1), v30, &v107, &v104) )
              CInputDest::operator=((__int64)v19, (__int64)v107, v74, 0LL);
          }
          if ( !*v19 || !(unsigned int)CPointerInfoNode::ShouldForegroundActivate((CPointerInfoNode *)v38) )
            goto LABEL_106;
          v77 = CTouchProcessor::LookupNode(v75, (const struct CPointerInputFrame *)v17, v106, v76);
          *((_DWORD *)v77 + 36) = v104;
          CThreadLockInputDest::CThreadLockInputDest((CThreadLockInputDest *)v129, (struct CInputDest *)v19, v78, v79);
          CInpUnlockGuardExclusive::CInpUnlockGuardExclusive(
            (CInpUnlockGuardExclusive *)v123,
            (struct CInpLockGuard *)(this + 5),
            0LL);
          v80 = *((_OWORD *)v19 + 1);
          v81 = *((_QWORD *)v105 - 1);
          v82 = *((unsigned __int16 *)v105 + 60);
          v126[0] = *(_OWORD *)v19;
          v83 = *((_OWORD *)v19 + 2);
          v126[1] = v80;
          v84 = *((_OWORD *)v19 + 3);
          v126[2] = v83;
          v85 = *((_OWORD *)v19 + 4);
          v126[3] = v84;
          v86 = *((_OWORD *)v19 + 5);
          v126[4] = v85;
          v87 = *((_OWORD *)v19 + 6);
          v126[5] = v86;
          v126[6] = v87;
          ApiSetEditionPointerActivate(v126, v82, v81, (char *)v105 + 136);
          CInpLockGuard::UnRefPointerMsgIdAndLockExclusive((PERESOURCE *)v124, (struct CRefUnRefPointerMsgId *)v123);
          CThreadLockInputDest::~CThreadLockInputDest((CThreadLockInputDest *)v129);
          QueueForCurrentNode = CTouchProcessor::GetQueueForCurrentNode(
                                  this,
                                  v108,
                                  v30,
                                  v109,
                                  IsMessageDelegated,
                                  (const struct CPointerInfoNode *)v25);
          if ( !QueueForCurrentNode )
          {
LABEL_131:
            *v115 = 1;
            v18 = 0;
            break;
          }
          if ( CTouchProcessor::RevalidateFrameProcessing(0LL, v108, v30, (const struct CPointerInfoNode *)v38, 0) )
          {
            v107 = 0LL;
            if ( (unsigned int)CTouchProcessor::RecheckPointerCapture(this, *((_QWORD *)v105 - 1), v30, &v107, &v104) )
              CInputDest::operator=((__int64)v19, (__int64)v107, v88, v89);
LABEL_106:
            if ( (unsigned int)CPointerInfoNode::IsTargetSetForRetrieval((CPointerInfoNode *)v38, v108) )
              MicrosoftTelemetryAssertTriggeredNoArgsKM(v91, v90, v92, v93);
            CTouchProcessor::SetPointerInfoNodeTarget(
              (CTouchProcessor *)this,
              (const struct CPointerInputFrame *)v17,
              v106,
              (const struct CInputDest *)v19,
              v104,
              &v114,
              0,
              0,
              1,
              0);
            if ( *v19 )
            {
              if ( (*((_DWORD *)v105 + 39) & 0x10000) != 0 )
              {
                CTouchProcessor::SetPointerImplicitCapture(
                  (CTouchProcessor *)this,
                  *((_QWORD *)v105 - 1),
                  (const struct CInputDest *)v19,
                  v104,
                  v30);
              }
              else if ( v109 == 593 )
              {
                CTouchProcessor::SetPointerExplicitCapture(
                  (struct _DEVICE_OBJECT *)this,
                  *((_QWORD *)v105 - 1),
                  (const struct CInputDest *)v19,
                  (unsigned int)v104,
                  v30);
              }
            }
            if ( (unsigned int)CPointerInfoNode::IsTouchpad((CPointerInfoNode *)v38) )
            {
              if ( (*((_DWORD *)v105 + 39) & 0x2000) != 0 )
              {
                LODWORD(v107) = 0;
                if ( v106 )
                {
                  v94 = v104;
                  v95 = 0LL;
                  do
                  {
                    if ( (unsigned int)CPointerInfoNode::IsValid((CPointerInfoNode *)(v95 + *(_QWORD *)(v17 + 136)))
                      && *(_DWORD *)(v97 - 16) == *(_DWORD *)(v96 + 8) )
                    {
                      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                      {
                        LOBYTE(v35) = 4;
                        WPP_RECORDER_SF_(
                          WPP_MAIN_CB.Queue.ListEntry.Flink,
                          v35,
                          7,
                          101,
                          (__int64)&WPP_50814762fbc63e38c7e5eacf83347307_Traceguids);
                        v98 = 0;
                      }
                      CTouchProcessor::SetPointerInfoNodeTarget(
                        (CTouchProcessor *)this,
                        (const struct CPointerInputFrame *)v17,
                        (unsigned int)v107,
                        (const struct CInputDest *)v19,
                        v94,
                        &v114,
                        v98,
                        v98,
                        1,
                        v98);
                      if ( *v19 )
                      {
                        v35 = *(_QWORD *)(v17 + 136);
                        if ( (*(_DWORD *)(v35 + v95 + 180) & 0x10000) != 0 )
                        {
                          CTouchProcessor::SetPointerImplicitCapture(
                            (CTouchProcessor *)this,
                            *(_QWORD *)(v35 + v95 + 16),
                            (const struct CInputDest *)v19,
                            v94,
                            v30);
                        }
                        else if ( v109 == 593 )
                        {
                          CTouchProcessor::SetPointerExplicitCapture(
                            (struct _DEVICE_OBJECT *)this,
                            *((_QWORD *)v105 - 1),
                            (const struct CInputDest *)v19,
                            v94,
                            v30);
                        }
                      }
                    }
                    v95 += 480LL;
                    LODWORD(v107) = (_DWORD)v107 + 1;
                  }
                  while ( (unsigned int)v107 < v106 );
                  v38 = v116;
                  v25 = v118;
                }
              }
            }
          }
        }
      }
LABEL_128:
      v37 = 480LL;
      v105 = (CTouchProcessor *)((char *)v105 + 480);
      v36 = v106 + 1;
      v39 = *(_DWORD *)(v17 + 48);
      v38 += 480LL;
      v106 = v36;
      v116 = v38;
    }
    while ( (unsigned int)v36 < v39 );
  }
  PopW32ThreadLock(&v119);
  PopAndFreeAlwaysW32ThreadLock((__int64)&v121);
  if ( v18 )
  {
    if ( (*(_DWORD *)(v17 + 120) & 0x20) == 0 )
    {
      if ( v110 )
      {
        if ( !v30 )
        {
          v101 = CTouchProcessor::FindAndReferenceFrameById(this, *(unsigned int *)(v17 + 40), v99, v100);
          if ( v101 )
          {
            *((_DWORD *)v101 + 30) |= 0x20u;
            CTouchProcessor::UnreferenceFrameInt((CTouchProcessor *)this, v101);
          }
        }
      }
    }
  }
  CTouchProcessor::UnreferenceFrame((CTouchProcessor *)this, (const struct CPointerInputFrame *)v17);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(v102) = 5;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      v102,
      7,
      102,
      (__int64)&WPP_50814762fbc63e38c7e5eacf83347307_Traceguids);
  }
LABEL_141:
  CInpLockGuard::UnLock((PERESOURCE *)v128, (struct CRefUnRefPointerMsgId *)v127);
  return v18;
}
