/*
 * XREFs of ?SetPointerFrameTargetWindows@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@_KIPEAH@Z @ 0x1C01A0280
 * Callers:
 *     <none>
 * Callees:
 *     ?PostQEventWork@CBaseProcessor@@IEAAXPEAUHWND__@@W4EventWorkId@1@I_K_J@Z @ 0x1C00458A0 (-PostQEventWork@CBaseProcessor@@IEAAXPEAUHWND__@@W4EventWorkId@1@I_K_J@Z.c)
 *     ??4CInputDest@@QEAAAEAV0@AEBV0@@Z @ 0x1C005D1E8 (--4CInputDest@@QEAAAEAV0@AEBV0@@Z.c)
 *     ??0CThreadLockInputDest@@QEAA@PEAVCInputDest@@@Z @ 0x1C005F5A8 (--0CThreadLockInputDest@@QEAA@PEAVCInputDest@@@Z.c)
 *     ??1CThreadLockInputDest@@QEAA@XZ @ 0x1C005F774 (--1CThreadLockInputDest@@QEAA@XZ.c)
 *     ?GetQueue@CInputDest@@QEBAPEAXW4QType@1@@Z @ 0x1C00658A4 (-GetQueue@CInputDest@@QEBAPEAXW4QType@1@@Z.c)
 *     WPP_RECORDER_SF_ @ 0x1C00678DC (WPP_RECORDER_SF_.c)
 *     ?GetWindowHandle@CInputDest@@QEBAPEAUHWND__@@XZ @ 0x1C0069AA8 (-GetWindowHandle@CInputDest@@QEBAPEAUHWND__@@XZ.c)
 *     ??4CInputDest@@QEAAAEAV0@$$QEAV0@@Z @ 0x1C006E1C0 (--4CInputDest@@QEAAAEAV0@$$QEAV0@@Z.c)
 *     ?SetEmpty@CInputDest@@QEAAXXZ @ 0x1C0071780 (-SetEmpty@CInputDest@@QEAAXXZ.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C0071838 (--1UserAtomicCheck@@QEAA@XZ.c)
 *     ??0CInputDest@@QEAA@AEBUtagINPUTDEST@@@Z @ 0x1C00718E0 (--0CInputDest@@QEAA@AEBUtagINPUTDEST@@@Z.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C0071A08 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     Win32AllocPool @ 0x1C008D7C0 (Win32AllocPool.c)
 *     __security_check_cookie @ 0x1C00CC180 (__security_check_cookie.c)
 *     ??0CInpLockGuardExclusive@@QEAA@AEAUCInpLockGuard@@PEAX@Z @ 0x1C00D0A44 (--0CInpLockGuardExclusive@@QEAA@AEAUCInpLockGuard@@PEAX@Z.c)
 *     ??0CInpUnlockGuardExclusive@@QEAA@AEAUCInpLockGuard@@PEAX@Z @ 0x1C00D0B3C (--0CInpUnlockGuardExclusive@@QEAA@AEAUCInpLockGuard@@PEAX@Z.c)
 *     ?UnLock@CInpLockGuard@@QEAAXAEAVCRefUnRefPointerMsgId@@@Z @ 0x1C00D15B0 (-UnLock@CInpLockGuard@@QEAAXAEAVCRefUnRefPointerMsgId@@@Z.c)
 *     ?UnRefPointerMsgIdAndLockExclusive@CInpLockGuard@@QEAAXAEAVCRefUnRefPointerMsgId@@@Z @ 0x1C00D1600 (-UnRefPointerMsgIdAndLockExclusive@CInpLockGuard@@QEAAXAEAVCRefUnRefPointerMsgId@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D2DC0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00D2E00 (memset.c)
 *     ?HasDelegationThread@CInputDest@@QEBA_NXZ @ 0x1C01890DC (-HasDelegationThread@CInputDest@@QEBA_NXZ.c)
 *     ?IsEqualByWindowHandle@CInputDest@@QEBA_NPEAXW4HandleValidationType@1@@Z @ 0x1C0189128 (-IsEqualByWindowHandle@CInputDest@@QEBA_NPEAXW4HandleValidationType@1@@Z.c)
 *     ?UsesQueue@CInputDest@@QEBA_NPEBUtagQ@@@Z @ 0x1C01893BC (-UsesQueue@CInputDest@@QEBA_NPEBUtagQ@@@Z.c)
 *     ?DeterminePointerTargetWindow@CTouchProcessor@@AEAAXPEAUtagTHREADINFO@@PEAUCPointerInfoNode@@PEAUtagQ@@HPEAHPEAUtagPOINT@@PEAVCInputDest@@@Z @ 0x1C0192974 (-DeterminePointerTargetWindow@CTouchProcessor@@AEAAXPEAUtagTHREADINFO@@PEAUCPointerInfoNode@@PEA.c)
 *     ?DetermineTouchpadPointerTargetWindow@CTouchProcessor@@AEAAXPEAUtagTHREADINFO@@PEBUCPointerInputFrame@@PEAUCPointerInfoNode@@PEAUtagQ@@KHPEAHPEAUtagPOINT@@PEAVCInputDest@@@Z @ 0x1C0192D84 (-DetermineTouchpadPointerTargetWindow@CTouchProcessor@@AEAAXPEAUtagTHREADINFO@@PEBUCPointerInput.c)
 *     ?FindAndReferenceFrameById@CTouchProcessor@@AEAAPEAUCPointerInputFrame@@K@Z @ 0x1C0193880 (-FindAndReferenceFrameById@CTouchProcessor@@AEAAPEAUCPointerInputFrame@@K@Z.c)
 *     ?GetPointerInfoNodeQFrame@CTouchProcessor@@AEAAPEBUCPointerQFrame@@PEBUCPointerInputFrame@@PEBUCPointerInfoNode@@@Z @ 0x1C0198788 (-GetPointerInfoNodeQFrame@CTouchProcessor@@AEAAPEBUCPointerQFrame@@PEBUCPointerInputFrame@@PEBUC.c)
 *     ?GetQueue@CPointerInfoNode@@QEAAPEAVCInputDest@@PEAH@Z @ 0x1C0199E54 (-GetQueue@CPointerInfoNode@@QEAAPEAVCInputDest@@PEAH@Z.c)
 *     ?GetQueueForCurrentNode@CTouchProcessor@@AEAAPEAUtagQ@@PEAUtagTHREADINFO@@HIHPEBUCPointerInfoNode@@@Z @ 0x1C019A05C (-GetQueueForCurrentNode@CTouchProcessor@@AEAAPEAUtagQ@@PEAUtagTHREADINFO@@HIHPEBUCPointerInfoNod.c)
 *     ?HandlePointerNodeWithTarget@CTouchProcessor@@AEAA?AW4PointerNodeWithTargetHandling@1@PEBUCPointerInfoNode@@IPEAU3@@Z @ 0x1C019A5A0 (-HandlePointerNodeWithTarget@CTouchProcessor@@AEAA-AW4PointerNodeWithTargetHandling@1@PEBUCPoint.c)
 *     ?IsAnyMessageNonDelegated@CPointerInfoNode@@QEBAHXZ @ 0x1C019AB4C (-IsAnyMessageNonDelegated@CPointerInfoNode@@QEBAHXZ.c)
 *     ?IsMessageDelegated@CPointerInfoNode@@QEBAHI@Z @ 0x1C019AD58 (-IsMessageDelegated@CPointerInfoNode@@QEBAHI@Z.c)
 *     ?IsTargetSetForRetrieval@CPointerInfoNode@@QEBAHPEAUtagTHREADINFO@@@Z @ 0x1C019B254 (-IsTargetSetForRetrieval@CPointerInfoNode@@QEBAHPEAUtagTHREADINFO@@@Z.c)
 *     ?IsTouchpad@CPointerInfoNode@@QEBAHXZ @ 0x1C019B2FC (-IsTouchpad@CPointerInfoNode@@QEBAHXZ.c)
 *     ?IsValid@CPointerInfoNode@@QEBAHXZ @ 0x1C019B338 (-IsValid@CPointerInfoNode@@QEBAHXZ.c)
 *     ?LookupNode@CTouchProcessor@@AEAAPEAUCPointerInfoNode@@PEBUCPointerInputFrame@@K@Z @ 0x1C019B35C (-LookupNode@CTouchProcessor@@AEAAPEAUCPointerInfoNode@@PEBUCPointerInputFrame@@K@Z.c)
 *     ?PointerParentNotify@CTouchProcessor@@AEAAXPEAVCInputDest@@PEAUCPointerInfoNode@@@Z @ 0x1C019BB48 (-PointerParentNotify@CTouchProcessor@@AEAAXPEAVCInputDest@@PEAUCPointerInfoNode@@@Z.c)
 *     ?RecheckPointerCapture@CTouchProcessor@@AEAAH_KHPEAPEAVCInputDest@@PEAH@Z @ 0x1C019E760 (-RecheckPointerCapture@CTouchProcessor@@AEAAH_KHPEAPEAVCInputDest@@PEAH@Z.c)
 *     ?ReferenceFrame@CTouchProcessor@@AEAAPEBUCPointerInputFrame@@K@Z @ 0x1C019E870 (-ReferenceFrame@CTouchProcessor@@AEAAPEBUCPointerInputFrame@@K@Z.c)
 *     ?RevalidateFrameProcessing@CTouchProcessor@@AEAAHPEAUtagTHREADINFO@@HPEBUCPointerInfoNode@@H@Z @ 0x1C019EE3C (-RevalidateFrameProcessing@CTouchProcessor@@AEAAHPEAUtagTHREADINFO@@HPEBUCPointerInfoNode@@H@Z.c)
 *     ?SetPointerExplicitCapture@CTouchProcessor@@AEAAH_KAEBVCInputDest@@HH@Z @ 0x1C01A0218 (-SetPointerExplicitCapture@CTouchProcessor@@AEAAH_KAEBVCInputDest@@HH@Z.c)
 *     ?SetPointerImplicitCapture@CTouchProcessor@@AEAAH_KAEBVCInputDest@@HH@Z @ 0x1C01A0F9C (-SetPointerImplicitCapture@CTouchProcessor@@AEAAH_KAEBVCInputDest@@HH@Z.c)
 *     ?SetPointerInfoNodeTarget@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@KAEBVCInputDest@@HPEBUtagPOINT@@HHHH@Z @ 0x1C01A1690 (-SetPointerInfoNodeTarget@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@KAEBVCInputDest@@HPEBUta.c)
 *     ?SetQFrameNonCoalescable@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@PEBUCPointerInfoNode@@@Z @ 0x1C01A1AE4 (-SetQFrameNonCoalescable@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@PEBUCPointerInfoNode@@@Z.c)
 *     ?ShouldForegroundActivate@CPointerInfoNode@@QEBAHXZ @ 0x1C01A1E74 (-ShouldForegroundActivate@CPointerInfoNode@@QEBAHXZ.c)
 *     ?UnreferenceFrame@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@@Z @ 0x1C01A29B0 (-UnreferenceFrame@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@@Z.c)
 *     ?UnreferenceFrameInt@CTouchProcessor@@AEAAKPEAUCPointerInputFrame@@@Z @ 0x1C01A2C64 (-UnreferenceFrameInt@CTouchProcessor@@AEAAKPEAUCPointerInputFrame@@@Z.c)
 *     ApiSetEditionPointerActivate @ 0x1C01CF080 (ApiSetEditionPointerActivate.c)
 *     ApiSetEditionPointerSpeedHitTest @ 0x1C01CF2EC (ApiSetEditionPointerSpeedHitTest.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02015EC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
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
  PDEVICE_OBJECT v10; // rcx
  int v11; // r9d
  PDEVICE_OBJECT v12; // rcx
  int v13; // r9d
  const struct CPointerInputFrame *v14; // rax
  const struct CPointerInputFrame *v15; // r14
  unsigned int v16; // ebx
  _DWORD *v17; // rdi
  __int64 v18; // rcx
  __int64 v19; // rax
  __int64 v20; // r13
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r9
  int v24; // r12d
  struct tagQ *QueueForCurrentNode; // rax
  __int64 v26; // rcx
  struct CInputDest *v27; // r9
  unsigned __int64 v28; // r15
  unsigned int v29; // ecx
  unsigned __int64 v30; // rcx
  CPointerInfoNode *v31; // rcx
  struct tagTHREADINFO *v32; // r8
  int IsTargetSetForRetrieval; // eax
  int v34; // eax
  __int64 v35; // rcx
  unsigned int v36; // eax
  CTouchProcessor *v37; // rcx
  CInputDest *Queue; // rax
  __int64 v39; // rax
  __int64 v40; // rdx
  CTouchProcessor *v41; // rax
  __int64 v42; // rcx
  _OWORD *v43; // rax
  __int128 v44; // xmm1
  __int128 v45; // xmm0
  __int128 v46; // xmm1
  __int128 v47; // xmm0
  __int128 v48; // xmm1
  __int128 v49; // xmm0
  char HasDelegationThread; // al
  int ShouldForegroundActivate; // eax
  int WindowHandle; // eax
  CTouchProcessor *v53; // rcx
  struct tagQ *v54; // rax
  CTouchProcessor *v55; // rcx
  BOOL v56; // eax
  struct tagQ *v57; // rax
  CTouchProcessor *v58; // rcx
  BOOL v59; // eax
  CTouchProcessor *v60; // rcx
  struct CPointerInfoNode *v61; // rax
  __int128 v62; // xmm1
  __int64 v63; // r8
  __int64 v64; // rdx
  __int128 v65; // xmm0
  __int128 v66; // xmm1
  __int128 v67; // xmm0
  __int128 v68; // xmm1
  __int128 v69; // xmm0
  struct tagQ *v70; // rax
  CTouchProcessor *v71; // rcx
  BOOL v72; // eax
  __int64 v73; // rcx
  int IsTouchpad; // eax
  CTouchProcessor *v75; // r13
  char *v76; // rcx
  int v77; // r15d
  int v78; // edx
  __int64 v79; // rcx
  struct CPointerInputFrame *v80; // rax
  int v81; // edx
  unsigned int v83; // [rsp+50h] [rbp-B0h]
  int v84; // [rsp+54h] [rbp-ACh] BYREF
  CTouchProcessor *v85; // [rsp+58h] [rbp-A8h]
  struct tagTHREADINFO *v86; // [rsp+60h] [rbp-A0h]
  unsigned int v87; // [rsp+68h] [rbp-98h]
  int v88; // [rsp+6Ch] [rbp-94h]
  struct CInputDest *v89; // [rsp+70h] [rbp-90h] BYREF
  int IsMessageDelegated; // [rsp+78h] [rbp-88h]
  unsigned int v91; // [rsp+7Ch] [rbp-84h]
  struct tagQ *v92; // [rsp+80h] [rbp-80h]
  int v93; // [rsp+88h] [rbp-78h] BYREF
  struct tagPOINT v94; // [rsp+90h] [rbp-70h] BYREF
  int *v95; // [rsp+98h] [rbp-68h]
  CInputDest *v96; // [rsp+A0h] [rbp-60h]
  unsigned __int64 v97; // [rsp+A8h] [rbp-58h]
  _BYTE v98[8]; // [rsp+B0h] [rbp-50h] BYREF
  __int64 v99; // [rsp+B8h] [rbp-48h]
  __int128 v100; // [rsp+C0h] [rbp-40h] BYREF
  __int64 v101; // [rsp+D0h] [rbp-30h]
  __int128 v102; // [rsp+D8h] [rbp-28h] BYREF
  __int64 v103; // [rsp+E8h] [rbp-18h]
  _BYTE v104[40]; // [rsp+F0h] [rbp-10h] BYREF
  CInpLockGuard *v105; // [rsp+118h] [rbp+18h]
  _OWORD v106[7]; // [rsp+130h] [rbp+30h] BYREF
  _OWORD v107[7]; // [rsp+1A0h] [rbp+A0h] BYREF
  _BYTE v108[40]; // [rsp+210h] [rbp+110h] BYREF
  CInpLockGuard *v109; // [rsp+238h] [rbp+138h]
  _BYTE v110[112]; // [rsp+240h] [rbp+140h] BYREF
  _QWORD v111[16]; // [rsp+2B0h] [rbp+1B0h] BYREF

  v95 = a5;
  v87 = a4;
  v7 = a2;
  v86 = a2;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(a2) = 5;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      (_DWORD)a2,
      7,
      95,
      (__int64)&WPP_6cc13e1a12c13a444721acaa10d1d35b_Traceguids);
  }
  CInpLockGuardExclusive::CInpLockGuardExclusive(
    (CInpLockGuardExclusive *)v108,
    (struct CInpLockGuard *)(this + 5),
    (void *)a3);
  v84 = 0;
  v101 = 0LL;
  v103 = 0LL;
  v94 = 0LL;
  v93 = 0;
  *a5 = 0;
  v100 = 0LL;
  v102 = 0LL;
  if ( a4 == 595 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_21;
    v10 = WPP_GLOBAL_Control;
    if ( !LOWORD(WPP_GLOBAL_Control->DeviceType) )
      goto LABEL_21;
    v11 = 96;
LABEL_20:
    LOBYTE(v9) = 5;
    WPP_RECORDER_SF_(v10->DeviceExtension, v9, 7, v11, (__int64)&WPP_6cc13e1a12c13a444721acaa10d1d35b_Traceguids);
LABEL_21:
    v16 = 1;
    goto LABEL_151;
  }
  if ( !a3 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_27;
    v12 = WPP_GLOBAL_Control;
    if ( !LOWORD(WPP_GLOBAL_Control->DeviceType) )
      goto LABEL_27;
    v13 = 97;
LABEL_26:
    LOBYTE(v9) = 5;
    WPP_RECORDER_SF_(v12->DeviceExtension, v9, 7, v13, (__int64)&WPP_6cc13e1a12c13a444721acaa10d1d35b_Traceguids);
LABEL_27:
    v16 = 0;
    goto LABEL_151;
  }
  v14 = CTouchProcessor::ReferenceFrame(this, *(_DWORD *)(a3 + 28));
  v15 = v14;
  if ( !v14 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_27;
    v12 = WPP_GLOBAL_Control;
    if ( !LOWORD(WPP_GLOBAL_Control->DeviceType) )
      goto LABEL_27;
    v13 = 98;
    goto LABEL_26;
  }
  if ( (*((_DWORD *)v14 + 30) & 0x20) != 0 )
  {
    CTouchProcessor::UnreferenceFrame((CTouchProcessor *)this, v14);
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_21;
    v10 = WPP_GLOBAL_Control;
    if ( !LOWORD(WPP_GLOBAL_Control->DeviceType) )
      goto LABEL_21;
    v11 = 99;
    goto LABEL_20;
  }
  v17 = (_DWORD *)Win32AllocPool(120LL, 0x70697355u);
  if ( !v17 )
  {
    CTouchProcessor::UnreferenceFrame((CTouchProcessor *)this, v15);
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_27;
    v12 = WPP_GLOBAL_Control;
    if ( !LOWORD(WPP_GLOBAL_Control->DeviceType) )
      goto LABEL_27;
    v13 = 100;
    goto LABEL_26;
  }
  *(_DWORD *)((char *)v17 + 113) = 0;
  *(_WORD *)((char *)v17 + 117) = 0;
  *((_BYTE *)v17 + 119) = 0;
  memset(v17, 0, 0x70uLL);
  *((_BYTE *)v17 + 112) = 0;
  if ( qword_1C0257E80 )
    qword_1C0257E80(v17, &v102, lambda_0e67b526681aa6a0208369450a9126fb_::_lambda_invoker_cdecl_);
  v19 = *(unsigned int *)(a3 + 32);
  if ( (unsigned int)v19 >= *((_DWORD *)v15 + 12) )
  {
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v18);
    v19 = *(unsigned int *)(a3 + 32);
  }
  v20 = *((_QWORD *)v15 + 17) + 480 * v19;
  v99 = v20;
  if ( !(unsigned int)CPointerInfoNode::IsValid((CPointerInfoNode *)v20) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v21);
  if ( *(_WORD *)(v20 + 172) != *(_WORD *)(a3 + 16) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v21);
  if ( a4 == 585 )
  {
    if ( (*(_DWORD *)v20 & 0x800000) != 0 )
      goto LABEL_48;
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v21);
  }
  if ( a4 == 586 )
  {
    if ( (*(_DWORD *)v20 & 0x8000000) != 0 )
      goto LABEL_48;
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v21);
  }
  if ( a4 == 593 )
  {
    if ( *(int *)v20 < 0 )
      goto LABEL_48;
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v21);
  }
  if ( a4 == 594 && (*(_DWORD *)(v20 + 4) & 8) == 0 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v21);
LABEL_48:
  if ( (*(_DWORD *)v20 & 0x100) == 0 && !*(_QWORD *)(v20 + 192) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v21);
  v16 = 1;
  v24 = (*((_DWORD *)v7 + 304) >> 13) & 1;
  IsMessageDelegated = CPointerInfoNode::IsMessageDelegated((CPointerInfoNode *)v20, a4, v22, v23);
  QueueForCurrentNode = CTouchProcessor::GetQueueForCurrentNode(
                          this,
                          v86,
                          v24,
                          a4,
                          IsMessageDelegated,
                          (const struct CPointerInfoNode *)v20);
  LODWORD(v27) = 0;
  v92 = QueueForCurrentNode;
  if ( !QueueForCurrentNode )
  {
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v26);
    LODWORD(v27) = 0;
  }
  if ( qword_1C0257E80 )
  {
    qword_1C0257E80(v15, &v100, CTouchProcessor::DereferencePointerInputFrame);
    LODWORD(v27) = 0;
  }
  v28 = *((_QWORD *)v15 + 17);
  v29 = *((_DWORD *)v15 + 12);
  v97 = v28;
  v88 = 1;
  v83 = 0;
  if ( v29 )
  {
    v85 = (CTouchProcessor *)(v28 + 24);
    do
    {
      v30 = *((_QWORD *)v15 + 17) + 480LL * v29;
      if ( v28 >= v30 )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v30);
      CInputDest::SetEmpty((CInputDest *)v17);
      LODWORD(v27) = 0;
      if ( v24 && (*((_DWORD *)v86 + 304) & 0x2000) == 0 )
        break;
      if ( !(unsigned int)CPointerInfoNode::IsValid((CPointerInfoNode *)v28) )
        goto LABEL_67;
      IsTargetSetForRetrieval = CPointerInfoNode::IsTargetSetForRetrieval(v31, v32);
      v27 = 0LL;
      if ( IsTargetSetForRetrieval )
      {
        v34 = CTouchProcessor::HandlePointerNodeWithTarget(this, (CPointerInfoNode *)v20, v87, v28);
        if ( v34 != 1 )
        {
          if ( (v34 & 0xFFFFFFFD) != 0 )
            MicrosoftTelemetryAssertTriggeredNoArgsKM(v35);
          goto LABEL_66;
        }
        LODWORD(v27) = 0;
LABEL_137:
        *v95 = 1;
        v16 = 0;
        break;
      }
      v37 = v85;
      if ( *((_DWORD *)v85 - 4) != *(_DWORD *)(v20 + 8) )
        goto LABEL_71;
      if ( v28 != v20 )
      {
        if ( !v24 && !(unsigned int)CPointerInfoNode::IsAnyMessageNonDelegated((CPointerInfoNode *)v28)
          || (Queue = CPointerInfoNode::GetQueue((CPointerInfoNode *)v28, &v93), v27 = 0LL, v96 = Queue, v93)
          || Queue && (v39 = CInputDest::GetQueue(Queue, 2), v27 = 0LL, v39) && !CInputDest::UsesQueue(v96, v92) )
        {
LABEL_71:
          v88 = (int)v27;
          goto LABEL_67;
        }
        v37 = v85;
      }
      if ( (*((_DWORD *)v86 + 304) & 0x2000) != 0 )
      {
        v40 = *((_QWORD *)v37 - 1);
        v89 = v27;
        if ( (unsigned int)CTouchProcessor::RecheckPointerCapture(this, v40, v24, &v89, &v84) )
        {
          CInputDest::operator=((__int64)v17, (__int64)v89);
        }
        else
        {
          v41 = v85;
          v84 = 1;
          if ( *(_DWORD *)v85 )
          {
            if ( !CInputDest::IsEqualByWindowHandle((__int64)v85, *((_QWORD *)v85 + 21), 0) )
              MicrosoftTelemetryAssertTriggeredNoArgsKM(v42);
            CInputDest::operator=((__int64)v17, (__int64)v85);
            v41 = v85;
          }
          if ( !*v17 )
          {
            CThreadLockInputDest::CThreadLockInputDest(
              (CThreadLockInputDest *)v104,
              (CTouchProcessor *)((char *)v41 + 328));
            v43 = (_OWORD *)ApiSetEditionPointerSpeedHitTest((unsigned int)v110, (int)v85 + 136, 0, 0, 0LL, 0LL);
            v44 = v43[1];
            v106[0] = *v43;
            v45 = v43[2];
            v106[1] = v44;
            v46 = v43[3];
            v106[2] = v45;
            v47 = v43[4];
            v106[3] = v46;
            v48 = v43[5];
            v106[4] = v47;
            v49 = v43[6];
            v106[5] = v48;
            v106[6] = v49;
            CInputDest::CInputDest((CInputDest *)v111, (const struct tagINPUTDEST *)v106);
            CInputDest::operator=((__int64)v17, v111);
            CInputDest::SetEmpty((CInputDest *)v111);
            CThreadLockInputDest::~CThreadLockInputDest((CThreadLockInputDest *)v104);
          }
        }
        HasDelegationThread = CInputDest::HasDelegationThread((CInputDest *)v17);
        v37 = 0LL;
        if ( HasDelegationThread )
        {
          CTouchProcessor::SetPointerInfoNodeTarget(
            (CTouchProcessor *)this,
            v15,
            v83,
            (const struct CInputDest *)v17,
            v84,
            &v94,
            0,
            0,
            1,
            1);
          v88 = 0;
          ShouldForegroundActivate = CPointerInfoNode::ShouldForegroundActivate((CPointerInfoNode *)v28);
          LODWORD(v27) = 0;
          if ( !ShouldForegroundActivate )
            goto LABEL_67;
          UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)v98);
          WindowHandle = (unsigned int)CInputDest::GetWindowHandle((CInputDest *)v17);
          CBaseProcessor::PostQEventWork((__int64)this, WindowHandle, 2, 0, 0LL, *((_QWORD *)v85 - 1));
          UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)v98);
LABEL_66:
          LODWORD(v27) = 0;
          goto LABEL_67;
        }
      }
      v53 = (CTouchProcessor *)*((unsigned int *)CTouchProcessor::GetPointerInfoNodeQFrame(
                                                   v37,
                                                   v15,
                                                   (const struct CPointerInfoNode *)v28)
                               + 35);
      if ( ((unsigned __int8)v53 & 1) != 0 && (*((_DWORD *)v86 + 304) & 0x2000) == 0 )
        CTouchProcessor::SetQFrameNonCoalescable(v53, v15, (const struct CPointerInfoNode *)v28);
      v84 = 1;
      if ( (unsigned int)CPointerInfoNode::IsTouchpad((CPointerInfoNode *)v28) )
      {
        CTouchProcessor::DetermineTouchpadPointerTargetWindow(
          (CTouchProcessor *)this,
          v86,
          v15,
          (struct CPointerInfoNode *)v28,
          v92,
          v83,
          v24,
          &v84,
          &v94,
          (struct CInputDest *)v17);
        LODWORD(v27) = 0;
        if ( !*v17 )
          goto LABEL_67;
      }
      else
      {
        CTouchProcessor::DeterminePointerTargetWindow(
          (CTouchProcessor *)this,
          v86,
          (struct CPointerInfoNode *)v28,
          v92,
          v24,
          &v84,
          &v94,
          (struct CInputDest *)v17);
      }
      v54 = CTouchProcessor::GetQueueForCurrentNode(
              this,
              v86,
              v24,
              v87,
              IsMessageDelegated,
              (const struct CPointerInfoNode *)v20);
      LODWORD(v27) = 0;
      v92 = v54;
      if ( !v54 )
        goto LABEL_137;
      v56 = CTouchProcessor::RevalidateFrameProcessing(v55, v86, v24, (const struct CPointerInfoNode *)v28, 0);
      LODWORD(v27) = 0;
      if ( !v56 )
        goto LABEL_67;
      if ( *v17 )
      {
        if ( (*((_DWORD *)v85 + 39) & 0x10000) != 0
          && !(unsigned int)CPointerInfoNode::IsTouchpad((CPointerInfoNode *)v28)
          && (*((_DWORD *)v85 - 5) & 0x80u) == 0 )
        {
          CTouchProcessor::PointerParentNotify(this, (struct CInputDest *)v17, (struct CPointerInfoNode *)v28);
          v57 = CTouchProcessor::GetQueueForCurrentNode(
                  this,
                  v86,
                  v24,
                  v87,
                  IsMessageDelegated,
                  (const struct CPointerInfoNode *)v20);
          LODWORD(v27) = 0;
          v92 = v57;
          if ( !v57 )
            goto LABEL_137;
          v59 = CTouchProcessor::RevalidateFrameProcessing(v58, v86, v24, (const struct CPointerInfoNode *)v28, 0);
          LODWORD(v27) = 0;
          if ( !v59 )
            goto LABEL_67;
          v89 = 0LL;
          if ( (unsigned int)CTouchProcessor::RecheckPointerCapture(this, *((_QWORD *)v85 - 1), v24, &v89, &v84) )
            CInputDest::operator=((__int64)v17, (__int64)v89);
        }
        if ( *v17 && (unsigned int)CPointerInfoNode::ShouldForegroundActivate((CPointerInfoNode *)v28) )
        {
          v61 = CTouchProcessor::LookupNode(v60, v15, v83);
          *((_DWORD *)v61 + 36) = v84;
          CThreadLockInputDest::CThreadLockInputDest((CThreadLockInputDest *)v110, (struct CInputDest *)v17);
          CInpUnlockGuardExclusive::CInpUnlockGuardExclusive(
            (CInpUnlockGuardExclusive *)v104,
            (struct CInpLockGuard *)(this + 5),
            0LL);
          v62 = *((_OWORD *)v17 + 1);
          v63 = *((_QWORD *)v85 - 1);
          v64 = *((unsigned __int16 *)v85 + 60);
          v107[0] = *(_OWORD *)v17;
          v65 = *((_OWORD *)v17 + 2);
          v107[1] = v62;
          v66 = *((_OWORD *)v17 + 3);
          v107[2] = v65;
          v67 = *((_OWORD *)v17 + 4);
          v107[3] = v66;
          v68 = *((_OWORD *)v17 + 5);
          v107[4] = v67;
          v69 = *((_OWORD *)v17 + 6);
          v107[5] = v68;
          v107[6] = v69;
          ApiSetEditionPointerActivate(v107, v64, v63, (char *)v85 + 136);
          CInpLockGuard::UnRefPointerMsgIdAndLockExclusive((PERESOURCE *)v105, (struct CRefUnRefPointerMsgId *)v104);
          CThreadLockInputDest::~CThreadLockInputDest((CThreadLockInputDest *)v110);
          v70 = CTouchProcessor::GetQueueForCurrentNode(
                  this,
                  v86,
                  v24,
                  v87,
                  IsMessageDelegated,
                  (const struct CPointerInfoNode *)v20);
          LODWORD(v27) = 0;
          v92 = v70;
          if ( !v70 )
            goto LABEL_137;
          v72 = CTouchProcessor::RevalidateFrameProcessing(v71, v86, v24, (const struct CPointerInfoNode *)v28, 0);
          LODWORD(v27) = 0;
          if ( !v72 )
            goto LABEL_67;
          v89 = 0LL;
          if ( (unsigned int)CTouchProcessor::RecheckPointerCapture(this, *((_QWORD *)v85 - 1), v24, &v89, &v84) )
            CInputDest::operator=((__int64)v17, (__int64)v89);
        }
      }
      if ( (unsigned int)CPointerInfoNode::IsTargetSetForRetrieval((CPointerInfoNode *)v28, v86) )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v73);
      CTouchProcessor::SetPointerInfoNodeTarget(
        (CTouchProcessor *)this,
        v15,
        v83,
        (const struct CInputDest *)v17,
        v84,
        &v94,
        0,
        0,
        1,
        0);
      if ( *v17 )
      {
        if ( (*((_DWORD *)v85 + 39) & 0x10000) != 0 )
        {
          CTouchProcessor::SetPointerImplicitCapture(
            (CTouchProcessor *)this,
            *((_QWORD *)v85 - 1),
            (const struct CInputDest *)v17,
            v84,
            v24);
        }
        else if ( v87 == 593 )
        {
          CTouchProcessor::SetPointerExplicitCapture(
            (struct _DEVICE_OBJECT *)this,
            *((_QWORD *)v85 - 1),
            (const struct CInputDest *)v17,
            v84,
            v24);
        }
      }
      IsTouchpad = CPointerInfoNode::IsTouchpad((CPointerInfoNode *)v28);
      LODWORD(v27) = 0;
      if ( IsTouchpad )
      {
        v36 = v83;
        if ( (*((_DWORD *)v85 + 39) & 0x2000) != 0 )
        {
          v91 = 0;
          if ( v83 )
          {
            v75 = v85;
            v76 = 0LL;
            v77 = v84;
            v96 = 0LL;
            v89 = 0LL;
            while ( 1 )
            {
              if ( !(unsigned int)CPointerInfoNode::IsValid((CPointerInfoNode *)&v76[*((_QWORD *)v15 + 17)]) )
                goto LABEL_134;
              if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              {
                LOBYTE(v78) = 4;
                WPP_RECORDER_SF_(
                  WPP_MAIN_CB.Queue.ListEntry.Flink,
                  v78,
                  7,
                  101,
                  (__int64)&WPP_6cc13e1a12c13a444721acaa10d1d35b_Traceguids);
                LODWORD(v27) = 0;
              }
              CTouchProcessor::SetPointerInfoNodeTarget(
                (CTouchProcessor *)this,
                v15,
                v91,
                (const struct CInputDest *)v17,
                v77,
                &v94,
                (int)v27,
                (int)v27,
                1,
                (int)v27);
              LODWORD(v27) = 0;
              if ( !*v17 )
                goto LABEL_134;
              v79 = *((_QWORD *)v15 + 17);
              if ( (*(_DWORD *)((_BYTE *)v89 + v79 + 180) & 0x10000) != 0 )
                break;
              if ( v87 == 593 )
              {
                CTouchProcessor::SetPointerExplicitCapture(
                  (struct _DEVICE_OBJECT *)this,
                  *((_QWORD *)v75 - 1),
                  (const struct CInputDest *)v17,
                  v77,
                  v24);
                goto LABEL_133;
              }
LABEL_134:
              v89 = (struct CInputDest *)((char *)v89 + 480);
              v76 = (char *)v96 + 480;
              ++v91;
              v96 = (CInputDest *)((char *)v96 + 480);
              if ( v91 >= v83 )
              {
                v28 = v97;
                v20 = v99;
                goto LABEL_67;
              }
            }
            CTouchProcessor::SetPointerImplicitCapture(
              (CTouchProcessor *)this,
              *(_QWORD *)((char *)v89 + v79 + 16),
              (const struct CInputDest *)v17,
              v77,
              v24);
LABEL_133:
            LODWORD(v27) = 0;
            goto LABEL_134;
          }
        }
      }
      else
      {
LABEL_67:
        v36 = v83;
      }
      v85 = (CTouchProcessor *)((char *)v85 + 480);
      v28 += 480LL;
      v29 = *((_DWORD *)v15 + 12);
      v83 = v36 + 1;
      v97 = v28;
    }
    while ( v36 + 1 < v29 );
  }
  if ( qword_1C0257E90 )
  {
    qword_1C0257E90(&v100);
    LODWORD(v27) = 0;
  }
  if ( qword_1C0257FA8 )
  {
    qword_1C0257FA8(&v102);
    LODWORD(v27) = 0;
  }
  if ( v16 )
  {
    if ( (*((_DWORD *)v15 + 30) & 0x20) == 0 && v88 != (_DWORD)v27 && !v24 )
    {
      v80 = CTouchProcessor::FindAndReferenceFrameById(this, *((_DWORD *)v15 + 10));
      if ( v80 )
      {
        *((_DWORD *)v80 + 30) |= 0x20u;
        CTouchProcessor::UnreferenceFrameInt((CTouchProcessor *)this, v80);
      }
    }
  }
  CTouchProcessor::UnreferenceFrame((CTouchProcessor *)this, v15);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(v81) = 5;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      v81,
      7,
      102,
      (__int64)&WPP_6cc13e1a12c13a444721acaa10d1d35b_Traceguids);
  }
LABEL_151:
  CInpLockGuard::UnLock((PERESOURCE *)v109, (struct CRefUnRefPointerMsgId *)v108);
  return v16;
}
