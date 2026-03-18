/*
 * XREFs of _xxxRealInternalGetMessage@24 @ 0x68850
 * Callers:
 *     _xxxInternalGetMessage@24 @ 0xA199C (_xxxInternalGetMessage@24.c)
 *     _NtUserRealInternalGetMessage@24 @ 0x167E36 (_NtUserRealInternalGetMessage@24.c)
 * Callees:
 *     @HMValidateHandleNoRip@8 @ 0x16F4A (@HMValidateHandleNoRip@8.c)
 *     _WPP_RECORDER_SF_qqq@32 @ 0x350A8 (_WPP_RECORDER_SF_qqq@32.c)
 *     ?xxxScanSysQueue@@YG?AW4_SCANSYSQUEUERESULT@@PAUtagTHREADINFO@@PAUtagMSG@@PAUtagWND@@IIKKPAPAUtagQMSG@@@Z @ 0x38D60 (-xxxScanSysQueue@@YG-AW4_SCANSYSQUEUERESULT@@PAUtagTHREADINFO@@PAUtagMSG@@PAUtagWND@@IIKKPAPAUta.c)
 *     @HMValidateHandleNoSecure@8 @ 0x3C46E (@HMValidateHandleNoSecure@8.c)
 *     _W32GetThreadWin32Thread@4 @ 0x3FA3E (_W32GetThreadWin32Thread@4.c)
 *     _xxxReceiveMessage@4 @ 0x415B8 (_xxxReceiveMessage@4.c)
 *     _SetWakeBit@8 @ 0x44776 (_SetWakeBit@8.c)
 *     _xxxSleepThread2@20 @ 0x4510E (_xxxSleepThread2@20.c)
 *     _zzzWakeInputIdle@4 @ 0x4584E (_zzzWakeInputIdle@4.c)
 *     _CalcWakeMask@12 @ 0x69C20 (_CalcWakeMask@12.c)
 *     ?HandleProcessSpinning@@YGHXZ @ 0x69E70 (-HandleProcessSpinning@@YGHXZ.c)
 *     ?xxxReadPostMessage@@YGHPAUtagTHREADINFO@@PAUtagMSG@@PAUtagWND@@IIPAU_QMSG_POSTCHAR_FLAGS@@H@Z @ 0x69F40 (-xxxReadPostMessage@@YGHPAUtagTHREADINFO@@PAUtagMSG@@PAUtagWND@@IIPAU_QMSG_POSTCHAR_FLAGS@@H@Z.c)
 *     ?GetMessageW@Delivery@InputTraceLogging@@SGXPBUtagMSG@@PBUtagTHREADINFO@@PAUtagWND@@PAUtagBWND@@_N@Z @ 0x6A6A0 (-GetMessageW@Delivery@InputTraceLogging@@SGXPBUtagMSG@@PBUtagTHREADINFO@@PAUtagWND@@PAUtagBWND@@.c)
 *     ?xxxCallHook@@YGHHIJH@Z @ 0x6A6D0 (-xxxCallHook@@YGHHIJH@Z.c)
 *     _xxxDoPaint@8 @ 0x6BD40 (_xxxDoPaint@8.c)
 *     _xxxUpdateInputHangInfo@8 @ 0x6C0FA (_xxxUpdateInputHangInfo@8.c)
 *     _xxxCallCtfHook@16 @ 0x6D91E (_xxxCallCtfHook@16.c)
 *     _xxxDrainQueueCompletions@4 @ 0x6EB04 (_xxxDrainQueueCompletions@4.c)
 *     _PhkFirstGlobalValid@8 @ 0x6F434 (_PhkFirstGlobalValid@8.c)
 *     ??0?$CLockExclusiveAllowRecursion@VDLT_QUEUE@@@@QAE@AAUtagObjLock@@@Z @ 0x6FF02 (--0-$CLockExclusiveAllowRecursion@VDLT_QUEUE@@@@QAE@AAUtagObjLock@@@Z.c)
 *     _DoTimer@4 @ 0x742FA (_DoTimer@4.c)
 *     _zzzCalcStartCursorHide@8 @ 0x744FA (_zzzCalcStartCursorHide@8.c)
 *     @HMValidateHandle@8 @ 0x7531C (@HMValidateHandle@8.c)
 *     _UserSetLastError@4 @ 0x81122 (_UserSetLastError@4.c)
 *     _xxxUserYield@4 @ 0x9875A (_xxxUserYield@4.c)
 *     _xxxSleepThreadWithPwnd@16 @ 0xAB35C (_xxxSleepThreadWithPwnd@16.c)
 *     _IsShellFrameHangResilient@4 @ 0xAEC08 (_IsShellFrameHangResilient@4.c)
 *     ??1ThreadLockedPerfRegion@InputTraceLogging@@QAE@XZ @ 0xAFB6A (--1ThreadLockedPerfRegion@InputTraceLogging@@QAE@XZ.c)
 *     _IsAdaptiveQueueDetachExempted@4 @ 0xC1162 (_IsAdaptiveQueueDetachExempted@4.c)
 *     ?xxxKeyboardCorrectionCallout@@YGIPBUtagMSG@@U_QMSG_POSTCHAR_FLAGS@@@Z @ 0xC12BC (-xxxKeyboardCorrectionCallout@@YGIPBUtagMSG@@U_QMSG_POSTCHAR_FLAGS@@@Z.c)
 *     _SlowAppThreadInShellFrame@16 @ 0xC4096 (_SlowAppThreadInShellFrame@16.c)
 *     _zzzReattachThreads@12 @ 0xC795C (_zzzReattachThreads@12.c)
 *     _xxxDoSysExpunge@4 @ 0xD2E12 (_xxxDoSysExpunge@4.c)
 *     _IsThreadCrossSessionAttached@0 @ 0xEF2EA (_IsThreadCrossSessionAttached@0.c)
 *     ??0ThreadLockedPerfRegion@InputTraceLogging@@QAE@PBDPBU01@@Z @ 0xF0204 (--0ThreadLockedPerfRegion@InputTraceLogging@@QAE@PBDPBU01@@Z.c)
 *     ??0CInpLockGuardExclusive@@QAE@AAUCInpLockGuard@@PAX@Z @ 0xF0ED2 (--0CInpLockGuardExclusive@@QAE@AAUCInpLockGuard@@PAX@Z.c)
 *     ??1CInpLockGuardExclusive@@QAE@XZ @ 0xF0EF5 (--1CInpLockGuardExclusive@@QAE@XZ.c)
 *     ?Feature_DeliverViaSendMessage__private_IsEnabledPreCheck@@YGHXZ @ 0xF0F32 (-Feature_DeliverViaSendMessage__private_IsEnabledPreCheck@@YGHXZ.c)
 *     ?UnblockDeferredInput@@YGXPAUtagTHREADINFO@@@Z @ 0xF1082 (-UnblockDeferredInput@@YGXPAUtagTHREADINFO@@@Z.c)
 *     _xxxProcessDelegateCapturedPointers@4 @ 0xF1CCE (_xxxProcessDelegateCapturedPointers@4.c)
 *     _FreeHidData@4 @ 0x144291 (_FreeHidData@4.c)
 *     __FreeTouchInputInfo@8 @ 0x149EED (__FreeTouchInputInfo@8.c)
 *     ?CallDelegateThread@Delivery@InputTraceLogging@@SGXPBUtagQMSG@@@Z @ 0x14CB1D (-CallDelegateThread@Delivery@InputTraceLogging@@SGXPBUtagQMSG@@@Z.c)
 *     ?TryAttachShellFrame@@YGXPAUtagTHREADINFO@@I@Z @ 0x14DB96 (-TryAttachShellFrame@@YGXPAUtagTHREADINFO@@I@Z.c)
 *     ?_HandleDelegatedInputWorker@@YGPAUtagQMSG@@PAUtagTHREADINFO@@KPAU1@@Z @ 0x14DF5D (-_HandleDelegatedInputWorker@@YGPAUtagQMSG@@PAUtagTHREADINFO@@KPAU1@@Z.c)
 *     _IsMiPEnabledForWindow@4 @ 0x14E372 (_IsMiPEnabledForWindow@4.c)
 *     _TryDetachShellFrame@16 @ 0x14E7E3 (_TryDetachShellFrame@16.c)
 *     ?IsPTPAllowedOnThread@@YGHPAUtagTHREADINFO@@II@Z @ 0x15AE16 (-IsPTPAllowedOnThread@@YGHPAUtagTHREADINFO@@II@Z.c)
 *     ?MarkPendingPromotion@PointerPromotion@@YGXPAUtagTHREADINFO@@G@Z @ 0x17D0B9 (-MarkPendingPromotion@PointerPromotion@@YGXPAUtagTHREADINFO@@G@Z.c)
 *     ?xxxCompletePendingPromotion@PointerPromotion@@YGXPAUtagTHREADINFO@@@Z @ 0x17D816 (-xxxCompletePendingPromotion@PointerPromotion@@YGXPAUtagTHREADINFO@@@Z.c)
 *     ?TraceLoggingMiPSuppressedForWindow@@YGXQBUtagWND@@IH@Z @ 0x186A5C (-TraceLoggingMiPSuppressedForWindow@@YGXQBUtagWND@@IH@Z.c)
 *     ?TraceLoggingSysQueueLockedRetryFailed@@YGXKK@Z @ 0x1870B6 (-TraceLoggingSysQueueLockedRetryFailed@@YGXKK@Z.c)
 *     __FreeGestureInfo@8 @ 0x188C90 (__FreeGestureInfo@8.c)
 *     _xxxClientCallDefWindowProc@4 @ 0x1934F1 (_xxxClientCallDefWindowProc@4.c)
 *     _xxxClientCallDefaultInputHandler@4 @ 0x1935FC (_xxxClientCallDefaultInputHandler@4.c)
 *     _xxxClientCallDelegateThread@12 @ 0x19370C (_xxxClientCallDelegateThread@12.c)
 */

// write access to const memory has been detected, the output may be wrong!
int __fastcall xxxRealInternalGetMessage(
        _DWORD *a1,
        unsigned int a2,
        struct tagMSG *a3,
        unsigned int a4,
        unsigned int a5,
        int a6)
{
  unsigned int v6; // esi
  struct tagTHREADINFO *v8; // esi
  __int32 v10; // ecx
  char v11; // si
  int v12; // ecx
  int v13; // eax
  int v14; // esi
  unsigned int v15; // edx
  int CurrentProcessWin32Process; // eax
  int v17; // edx
  int v18; // ecx
  int v19; // ecx
  PKTHREAD CurrentThread; // eax
  PKTHREAD v21; // eax
  int v22; // edi
  int v23; // esi
  int v24; // eax
  int v25; // edx
  int v26; // ecx
  int v27; // ecx
  int v28; // esi
  int i; // edx
  PKTHREAD v30; // eax
  PKTHREAD v31; // eax
  int v32; // ecx
  int v33; // edx
  unsigned __int16 v34; // di
  int v35; // esi
  _DWORD *v36; // eax
  int v37; // eax
  int v38; // esi
  int v39; // eax
  __int16 v40; // ax
  int v41; // eax
  struct tagTHREADINFO *v42; // edi
  int v43; // eax
  int v44; // eax
  int v45; // esi
  unsigned int j; // edx
  int v47; // edx
  int v48; // esi
  int v49; // edi
  int v50; // ecx
  int v51; // esi
  int v52; // ecx
  unsigned int v53; // esi
  int v54; // edi
  int v55; // eax
  int v56; // eax
  int v57; // edx
  int v58; // eax
  int v59; // eax
  _DWORD *v60; // eax
  PKTHREAD v61; // eax
  PKTHREAD v62; // eax
  BOOL v63; // ecx
  int v64; // edi
  PKTHREAD v65; // eax
  PKTHREAD v66; // eax
  int v68; // eax
  int v69; // esi
  int v70; // edi
  int v71; // edi
  unsigned int v72; // ecx
  unsigned int v73; // edx
  BOOL v74; // esi
  _DWORD *v75; // ecx
  int v76; // eax
  struct tagWND *v77; // edx
  int v78; // eax
  int v79; // eax
  int v80; // ecx
  int v81; // ecx
  unsigned __int16 v82; // dx
  int v83; // edi
  struct CInpLockGuard *TouchProcessorLock; // eax
  void *v85; // edi
  _DWORD *v86; // esi
  unsigned int v87; // ecx
  int v88; // edx
  BOOL v89; // ecx
  int v90; // eax
  void *v91; // edi
  int v92; // edi
  int v93; // ecx
  int v94; // eax
  int v95; // eax
  int v96; // eax
  int v97; // eax
  int v98; // eax
  _DWORD *v99; // esi
  int v100; // ecx
  int v101; // eax
  int v102; // edi
  unsigned int v103; // edx
  unsigned int *v104; // ecx
  unsigned int v105; // edi
  PKTHREAD v106; // esi
  int v107; // ecx
  int v108; // esi
  const struct tagMSG **v109; // eax
  unsigned int v110; // edi
  const struct tagMSG *v111; // eax
  int v112; // [esp-8h] [ebp-118h]
  int v113; // [esp-4h] [ebp-114h]
  struct tagTHREADINFO *v114; // [esp-4h] [ebp-114h]
  struct tagTHREADINFO *v115; // [esp+0h] [ebp-110h]
  struct tagTHREADINFO *v116; // [esp+4h] [ebp-10Ch]
  unsigned __int16 v117; // [esp+8h] [ebp-108h]
  _BYTE v118[24]; // [esp+14h] [ebp-FCh] BYREF
  _DWORD v119[7]; // [esp+40h] [ebp-D0h] BYREF
  _DWORD v120[7]; // [esp+5Ch] [ebp-B4h] BYREF
  int v121; // [esp+78h] [ebp-98h] BYREF
  struct tagTHREADINFO *v122; // [esp+7Ch] [ebp-94h]
  int v123; // [esp+80h] [ebp-90h]
  int v124; // [esp+88h] [ebp-88h]
  int v125; // [esp+8Ch] [ebp-84h]
  char v126[4]; // [esp+90h] [ebp-80h] BYREF
  char v127[4]; // [esp+94h] [ebp-7Ch] BYREF
  int v128; // [esp+98h] [ebp-78h]
  int v129; // [esp+9Ch] [ebp-74h]
  int v130; // [esp+A0h] [ebp-70h]
  int v131; // [esp+A4h] [ebp-6Ch]
  int v132; // [esp+ACh] [ebp-64h]
  char v133[4]; // [esp+B0h] [ebp-60h] BYREF
  unsigned int v134; // [esp+B4h] [ebp-5Ch] BYREF
  int v135; // [esp+B8h] [ebp-58h] BYREF
  int v136; // [esp+BCh] [ebp-54h]
  int v137; // [esp+C0h] [ebp-50h]
  int v138; // [esp+C4h] [ebp-4Ch]
  int v139; // [esp+C8h] [ebp-48h]
  int v140; // [esp+CCh] [ebp-44h]
  struct tagTHREADINFO *v141; // [esp+D0h] [ebp-40h]
  char v142; // [esp+D7h] [ebp-39h] BYREF
  struct tagWND *v143; // [esp+D8h] [ebp-38h]
  struct tagTHREADINFO *v144; // [esp+DCh] [ebp-34h] BYREF
  int v145; // [esp+E0h] [ebp-30h]
  int v146; // [esp+E4h] [ebp-2Ch]
  char v147; // [esp+EBh] [ebp-25h]
  int v148; // [esp+ECh] [ebp-24h]
  int v149; // [esp+F0h] [ebp-20h]
  int v150; // [esp+F4h] [ebp-1Ch]
  CPPEH_RECORD ms_exc; // [esp+F8h] [ebp-18h]
  int v152; // [esp+120h] [ebp+10h]

  v6 = a2;
  v139 = a2;
  v150 = (int)a1;
  v121 = 0;
  v122 = 0;
  v123 = 0;
  v147 = 0;
  v144 = 0;
  v134 = 0;
  v135 = 0;
  v145 = 0;
  v138 = 0;
  v140 = 0;
  v149 = 0;
  v136 = 0;
  EtwTraceEndAppMessageProcessing(a6);
  if ( v6 == -1 || v6 == 0xFFFF )
  {
    v6 = 1;
    v139 = 1;
  }
  else if ( v6 >= 2 )
  {
    v8 = (struct tagTHREADINFO *)ValidateHwnd(v6);
    v141 = v8;
    if ( !v8 )
    {
      *a1 = 0;
      a1[1] = 0;
      EtwTraceBeginAppMessageProcessing(a6, 16, a1);
      return -(a6 != 0);
    }
    v121 = *(_DWORD *)(_gptiCurrent + 228);
    *(_DWORD *)(_gptiCurrent + 228) = &v121;
    v122 = v8;
    HMLockObject(v8);
    v137 = 1;
    goto LABEL_9;
  }
  v141 = (struct tagTHREADINFO *)v6;
  v137 = 0;
LABEL_9:
  ms_exc.registration.TryLevel = 0;
  ++*(_DWORD *)(*(_DWORD *)(_gptiCurrent + 260) + 4);
  ms_exc.registration.TryLevel = -2;
  if ( !a4 )
    a4 = -1;
  if ( (unsigned int)MEMORY[0xFFDF0004] < 0x1000000 )
  {
    while ( MEMORY[0xFFDF0324] != MEMORY[0xFFDF0328] )
      _mm_pause();
    v10 = MEMORY[0xFFDF0004] * (MEMORY[0xFFDF0324] << 8)
        + (((unsigned int)MEMORY[0xFFDF0004] * (unsigned __int64)MEMORY[0xFFDF0320]) >> 24);
  }
  else
  {
    v10 = ((unsigned int)MEMORY[0xFFDF0004] * (unsigned __int64)MEMORY[0xFFDF0320]) >> 24;
  }
  _InterlockedExchange((volatile __int32 *)(*(_DWORD *)(_gptiCurrent + 244) + 12), v10);
  v11 = a5;
  v12 = CalcWakeMask(HIWORD(a5));
  v146 = v12;
  v129 = v12 & 0x1C07;
  if ( (v12 & 0x1C07) != 0 )
  {
    if ( (unsigned int)MEMORY[0xFFDF0004] < 0x1000000 )
    {
      v14 = MEMORY[0xFFDF0324];
      v15 = MEMORY[0xFFDF0320];
      if ( MEMORY[0xFFDF0324] != MEMORY[0xFFDF0328] )
      {
        do
        {
          _mm_pause();
          v14 = MEMORY[0xFFDF0324];
          v15 = MEMORY[0xFFDF0320];
        }
        while ( MEMORY[0xFFDF0324] != MEMORY[0xFFDF0328] );
        LOBYTE(v12) = v146;
      }
      v13 = MEMORY[0xFFDF0004] * (v14 << 8) + (((unsigned int)MEMORY[0xFFDF0004] * (unsigned __int64)v15) >> 24);
      v11 = a5;
    }
    else
    {
      v13 = ((unsigned int)MEMORY[0xFFDF0004] * (unsigned __int64)MEMORY[0xFFDF0320]) >> 24;
    }
    *(_DWORD *)(_gptiCurrent + 804) = v13;
  }
  if ( (v12 & 7) == 7 || (v12 & 6) != 0 && *(_DWORD *)(*(_DWORD *)(_gptiCurrent + 236) + 56) )
  {
    if ( v137 )
    {
      if ( *((_DWORD *)v141 + 2) == _gptiCurrent )
        xxxUpdateInputHangInfo(v141, 1);
    }
    else if ( !v139 )
    {
      xxxUpdateInputHangInfo(0, 1);
    }
  }
  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process();
  v18 = *(_DWORD *)(CurrentProcessWin32Process + 8);
  if ( (v18 & 4) != 0 )
  {
    *(_DWORD *)(CurrentProcessWin32Process + 8) = v18 & 0xFFFFFFFB;
    zzzCalcStartCursorHide(0, 0);
  }
  v19 = *(_DWORD *)(_gptiCurrent + 232);
  if ( *(_DWORD *)(v19 + 220) != _gcSysExpunge )
  {
    *(_DWORD *)(v19 + 220) = _gcSysExpunge;
    v19 = *(_DWORD *)(_gptiCurrent + 232);
    if ( (gdwSysExpungeMask & *(_DWORD *)(v19 + 224)) != 0 )
      xxxDoSysExpunge(_gptiCurrent);
  }
  v143 = (struct tagWND *)(v11 & 1);
  if ( (v11 & 1) != 0 )
  {
    v19 = v146;
    if ( (v146 & 0x1CBF) != 0
      && ((unsigned int)&loc_80000 & *(_DWORD *)(_gptiCurrent + 688)) != 0
      && (*(_WORD *)(*(_DWORD *)(_gptiCurrent + 244) + 6) & (unsigned __int16)v146) != 0 )
    {
      CurrentThread = KeGetCurrentThread();
      if ( !*(_DWORD *)(*(_DWORD *)(W32GetThreadWin32Thread(CurrentThread) + 252) + 28) )
      {
        v21 = KeGetCurrentThread();
        if ( !*(_DWORD *)(*(_DWORD *)(W32GetThreadWin32Thread(v21) + 252) + 24) )
          TryAttachShellFrame(v115, (unsigned int)v116);
      }
    }
  }
  v22 = *(_DWORD *)(_gptiCurrent + 236);
  v23 = *(_DWORD *)(v22 + 36);
  if ( *(_DWORD *)(_gptiCurrent + 276)
    || v23 == _gptiCurrent && *(_DWORD *)(v22 + 40) == *(_DWORD *)(_gptiCurrent + 308) )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v17) = 4;
      WPP_RECORDER_SF_qqq(
        v19,
        v17,
        0x12u,
        15,
        (int)&WPP_639f646729e7343d7b80e44c73d47209_Traceguids,
        v22,
        _gptiCurrent,
        *(_DWORD *)(v22 + 36));
    }
    *(_DWORD *)(v22 + 36) = 0;
    v147 = 1;
    v24 = 0;
  }
  else
  {
    v24 = *(_DWORD *)(v22 + 36);
    if ( v23 && !*(_DWORD *)(v23 + 508) )
    {
      if ( PhkFirstGlobalValid(_gptiCurrent) )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v25) = 4;
          WPP_RECORDER_SF_qqq(
            v26,
            v25,
            0x12u,
            16,
            (int)&WPP_639f646729e7343d7b80e44c73d47209_Traceguids,
            v22,
            _gptiCurrent,
            v23);
        }
        *(_DWORD *)(v22 + 36) = 0;
        v24 = 0;
      }
      else
      {
        v24 = v23;
      }
    }
  }
  if ( v24 != _gptiCurrent )
    **(_DWORD **)(_gptiCurrent + 244) &= ~1u;
  *(_WORD *)(_gptiCurrent + 484) = 0;
  v132 = a5 & 2;
  if ( (a5 & 2) == 0 )
  {
    v27 = *(_DWORD *)(_gptiCurrent + 264);
    if ( ((unsigned int)&loc_80000 & v27) != 0 )
    {
      ms_exc.registration.TryLevel = 1;
      *(_DWORD *)(*(_DWORD *)(_gptiCurrent + 260) + 20) = v27 & 0xFFF7FFFF;
      ms_exc.registration.TryLevel = -2;
      *(_WORD *)(*(_DWORD *)(_gptiCurrent + 244) + 6) |= 0x2000u;
      *(_WORD *)(*(_DWORD *)(_gptiCurrent + 244) + 4) |= 0x2000u;
      *(_DWORD *)(_gptiCurrent + 264) &= ~0x80000u;
    }
  }
  v131 = v146 & 0xFFBF;
  v130 = ~v131;
  v128 = 49152;
  v28 = 0;
  for ( i = 0; ; i = v145 )
  {
    while ( 1 )
    {
      while ( 1 )
      {
        while ( 1 )
        {
          v136 = i;
          v144 = 0;
          *(_WORD *)(*(_DWORD *)(_gptiCurrent + 244) + 6) |= *(_WORD *)(*(_DWORD *)(_gptiCurrent + 244) + 8);
          if ( *(_DWORD *)(_gptiCurrent + 248) == _gpdeskRecalcQueueAttach )
          {
            _gpdeskRecalcQueueAttach = 0;
            if ( *(_DWORD *)(_gptiCurrent + 248) )
            {
              v30 = KeGetCurrentThread();
              if ( !*(_DWORD *)(*(_DWORD *)(W32GetThreadWin32Thread(v30) + 252) + 24) )
              {
                v31 = KeGetCurrentThread();
                if ( !*(_DWORD *)(*(_DWORD *)(W32GetThreadWin32Thread(v31) + 252) + 28) )
                  zzzReattachThreads(2, 0);
              }
            }
          }
          v32 = *(_DWORD *)(_gptiCurrent + 244);
          *(_WORD *)(_gptiCurrent + 484) |= *(_WORD *)(v32 + 4) & (unsigned __int16)v131;
          *(_WORD *)(v32 + 4) &= v130;
          v33 = v146;
          if ( (*(_WORD *)(*(_DWORD *)(_gptiCurrent + 244) + 6) & 0x40) != 0 )
          {
            if ( ((unsigned __int8)v146 & (unsigned __int8)*(_WORD *)(*(_DWORD *)(_gptiCurrent + 244) + 6) & 0x40) == 0 )
            {
              v35 = v28 | 0x80;
              goto LABEL_78;
            }
            do
              xxxReceiveMessage(_gptiCurrent);
            while ( (*(_BYTE *)(*(_DWORD *)(_gptiCurrent + 244) + 6) & 0x40) != 0 );
            v33 = v146;
          }
          if ( v129 != 0 && (v33 & 0x40) != 0 )
          {
            xxxProcessDelegateCapturedPointers(_gptiCurrent);
            v33 = v146;
          }
          if ( *(_DWORD *)(_gptiCurrent + 836) && (v33 & 8) != 0 )
          {
            xxxDrainQueueCompletions(1);
            v33 = v146;
          }
          v34 = *(_WORD *)(*(_DWORD *)(_gptiCurrent + 244) + 6);
          v148 = (unsigned __int16)(v33 & v34);
          if ( ((unsigned __int16)v33 & v34) == 0 )
          {
            v35 = v28 | 0x100;
LABEL_78:
            v149 = v35;
            goto LABEL_79;
          }
          v37 = *(_DWORD *)(_gptiCurrent + 236);
          if ( *(_DWORD *)(v37 + 36) == _gptiCurrent && (*(_DWORD *)(v37 + 284) & 0x400) != 0 )
          {
            EtwTraceInputQueueNoRemoveLocker(*(_DWORD *)(_gptiCurrent + 236));
            if ( (v148 & 0x3C07) != 0 )
            {
              v38 = v150;
              v39 = xxxScanSysQueue(_gptiCurrent, (_DWORD *)v150, (int)v141, a3, a4, a5, v148 & 0x3C07, (int *)&v144);
              if ( v39 == 1 )
                goto LABEL_122;
              if ( !v39 )
                UnblockDeferredInput(v115);
            }
            else if ( (v34 & 0x2000) != 0 )
            {
              v35 = v28 | 0x200;
              goto LABEL_78;
            }
          }
          v40 = v148;
          if ( (v148 & 8) == 0 )
            goto LABEL_96;
          if ( xxxReadPostMessage(
                 v141,
                 a3,
                 (struct tagWND *)a4,
                 (unsigned int)&v134,
                 (unsigned int)v143,
                 v115,
                 (int)v116) )
          {
            break;
          }
          v40 = v148;
LABEL_96:
          if ( v141 == (struct tagTHREADINFO *)1 )
          {
            v149 |= 0x400u;
            goto LABEL_79;
          }
          v41 = v40 & 0x3C07;
          if ( !v41 )
          {
            if ( (v34 & 0x2000) != 0 )
            {
              v149 |= 0x800u;
              goto LABEL_79;
            }
            goto LABEL_115;
          }
          v42 = v141;
          v38 = v150;
          v43 = xxxScanSysQueue(_gptiCurrent, (_DWORD *)v150, (int)v141, a3, a4, a5, v41, (int *)&v144);
          if ( v43 == 2 )
          {
            if ( !IsShellFrameHangResilient(_gptiCurrent) || (v148 & 1) == 0 || !a6 )
              goto LABEL_116;
            if ( (unsigned int)MEMORY[0xFFDF0004] < 0x1000000 )
            {
              v45 = MEMORY[0xFFDF0324];
              for ( j = MEMORY[0xFFDF0320]; MEMORY[0xFFDF0324] != MEMORY[0xFFDF0328]; j = MEMORY[0xFFDF0320] )
              {
                _mm_pause();
                v45 = MEMORY[0xFFDF0324];
              }
              v44 = MEMORY[0xFFDF0004] * (v45 << 8) + (((unsigned int)MEMORY[0xFFDF0004] * (unsigned __int64)j) >> 24);
            }
            else
            {
              v44 = ((unsigned int)MEMORY[0xFFDF0004] * (unsigned __int64)MEMORY[0xFFDF0320]) >> 24;
            }
            v47 = v145;
            if ( v145 )
            {
              v48 = v138;
            }
            else
            {
              v48 = v44;
              v138 = v44;
              v47 = v44;
              v145 = v44;
            }
            v49 = v136 != 0 ? v140 : 0;
            v140 = v49;
            if ( (unsigned int)(v44 - v47) >= 0xFA )
            {
              if ( v48 == v47 )
              {
                TraceLoggingSysQueueLockedRetryFailed((unsigned int)v115, (unsigned int)v116);
                v138 = 0;
                v140 = v49;
              }
LABEL_115:
              v42 = v141;
              goto LABEL_116;
            }
            xxxSleepThread2(1u, 0, (int)&v135);
            v140 = v49 + 1;
            v28 = v149;
            i = v145;
          }
          else
          {
            v138 = 0;
            v140 = 0;
            v145 = 0;
            if ( v43 == 1 )
            {
LABEL_122:
              v70 = 2;
              goto LABEL_187;
            }
LABEL_116:
            v50 = *(_DWORD *)(_gptiCurrent + 244);
            v33 = *(_WORD *)(v50 + 6) & 0x40;
            if ( ((unsigned __int8)v146 & *(_BYTE *)(v50 + 6) & 0x40) != 0 )
            {
              for ( ; (*(_BYTE *)(v50 + 6) & 0x40) != 0; v50 = *(_DWORD *)(_gptiCurrent + 244) )
                xxxReceiveMessage(_gptiCurrent);
            }
            else if ( (*(_WORD *)(v50 + 6) & 0x40) != 0 )
            {
              v149 |= 0x1000u;
              goto LABEL_79;
            }
            LOWORD(v51) = *(_WORD *)(v50 + 6);
            v33 = v146;
            if ( ((unsigned __int16)v146 & (unsigned __int16)v51) == 0 )
            {
              v149 |= 0x2000u;
              goto LABEL_79;
            }
            if ( ((unsigned __int8)v146 & (unsigned __int8)v51 & 0x20) != 0 )
            {
              if ( xxxDoPaint(v42, v150) )
              {
                v70 = 4;
                goto LABEL_186;
              }
              v33 = v146;
            }
            if ( !v132 )
            {
              zzzWakeInputIdle(_gptiCurrent);
              xxxUserYield(_gptiCurrent);
              v52 = *(_DWORD *)(_gptiCurrent + 244);
              v33 = *(_WORD *)(v52 + 6) & 0x40;
              if ( ((unsigned __int8)v146 & *(_BYTE *)(v52 + 6) & 0x40) != 0 )
              {
                for ( ; (*(_BYTE *)(v52 + 6) & 0x40) != 0; v52 = *(_DWORD *)(_gptiCurrent + 244) )
                  xxxReceiveMessage(_gptiCurrent);
              }
              else if ( (*(_WORD *)(v52 + 6) & 0x40) != 0 )
              {
                v149 |= 0x4000u;
                goto LABEL_79;
              }
              v51 = *(unsigned __int16 *)(v52 + 6);
              v33 = v146;
              if ( (v51 & v146) == 0 )
              {
                v149 |= 0x8000u;
                goto LABEL_79;
              }
            }
            if ( ((unsigned __int8)v51 & (unsigned __int8)v33 & 0x10) != 0 && DoTimer(v42) )
            {
              v28 = v149 | 8;
              v149 |= 8u;
              i = v145;
            }
            else
            {
LABEL_79:
              v36 = *(_DWORD **)(_gptiCurrent + 236);
              if ( v36[9] == _gptiCurrent )
              {
                v36[10] = 0;
                if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                {
                  LOBYTE(v33) = 4;
                  WPP_RECORDER_SF_qqq(
                    *(_DWORD *)(_gptiCurrent + 236),
                    v33,
                    0x12u,
                    17,
                    (int)&WPP_639f646729e7343d7b80e44c73d47209_Traceguids,
                    *(_DWORD *)(_gptiCurrent + 236),
                    _gptiCurrent,
                    *(_DWORD *)(*(_DWORD *)(_gptiCurrent + 236) + 36));
                }
                *(_DWORD *)(*(_DWORD *)(_gptiCurrent + 236) + 36) = 0;
                **(_DWORD **)(_gptiCurrent + 244) &= ~1u;
                v147 = 1;
                v36 = *(_DWORD **)(_gptiCurrent + 236);
              }
              else if ( !v147 )
              {
                goto LABEL_157;
              }
              if ( v36[72] > 1u )
              {
                v53 = 0;
                CLockExclusiveAllowRecursion<DLT_QUEUE>::CLockExclusiveAllowRecursion<DLT_QUEUE>(v36);
                v54 = *(_DWORD *)(*(_DWORD *)(_gptiCurrent + 236) + 12);
                if ( v54 )
                {
                  if ( (*(_BYTE *)(v54 + 64) & 0x10) != 0 || (v55 = *(_DWORD *)(v54 + 68), v55 == _gptiCurrent) )
                  {
                    v58 = 0;
                  }
                  else
                  {
                    v148 = *(_DWORD *)(v54 + 68);
                    if ( !v55 )
                      goto LABEL_157;
                    v56 = CalcWakeMask(0);
                    v53 = v56 & 0xFFFFFFB7;
                    if ( !*(_DWORD *)(v54 + 60) )
                      v53 = v56 & 0xFFFFDFB7;
                    if ( v57 != 786 )
                      v53 &= ~0x80u;
                    if ( (v53 & *(_WORD *)(*(_DWORD *)(v148 + 244) + 4)) == v53 )
                      goto LABEL_157;
                    v58 = v148;
                  }
                }
                else
                {
                  v58 = 0;
                }
                if ( v58 )
                  SetWakeBit(v58, v53);
              }
LABEL_157:
              if ( !a6 )
              {
                if ( !v132 )
                {
                  zzzWakeInputIdle(_gptiCurrent);
                  xxxUserYield(_gptiCurrent);
                }
                goto LABEL_294;
              }
              if ( v137 )
              {
                v59 = xxxSleepThreadWithPwnd(v141, v146, v112, v113);
                i = v145;
                goto LABEL_183;
              }
              v135 = 0;
              v60 = *(_DWORD **)(_gptiCurrent + 236);
              v125 = v60[10];
              v124 = v60[9];
              v63 = 0;
              if ( (*(_DWORD *)(_gptiCurrent + 688) & 0x40000) != 0 && v60[72] > 1u )
              {
                v61 = KeGetCurrentThread();
                if ( !*(_DWORD *)(*(_DWORD *)(W32GetThreadWin32Thread(v61) + 252) + 24) )
                {
                  v62 = KeGetCurrentThread();
                  if ( !*(_DWORD *)(*(_DWORD *)(W32GetThreadWin32Thread(v62) + 252) + 28)
                    && !IsAdaptiveQueueDetachExempted(_gptiCurrent) )
                  {
                    v63 = 1;
                  }
                }
              }
              v140 &= -!v63;
              v64 = v140;
              v138 &= -!v63;
              v136 = v138;
              v145 = !v63 ? v145 : 0;
              v139 = v145;
              v148 = xxxSleepThread2(1u, 0, (int)&v135);
              if ( (*(_DWORD *)(_gptiCurrent + 688) & 0x40000) != 0
                && *(_DWORD *)(*(_DWORD *)(_gptiCurrent + 236) + 288) > 1u
                && (v65 = KeGetCurrentThread(), !*(_DWORD *)(*(_DWORD *)(W32GetThreadWin32Thread(v65) + 252) + 24))
                && (v66 = KeGetCurrentThread(), !*(_DWORD *)(*(_DWORD *)(W32GetThreadWin32Thread(v66) + 252) + 28))
                && !IsAdaptiveQueueDetachExempted(_gptiCurrent) )
              {
                v68 = *(_DWORD *)(*(_DWORD *)(_gptiCurrent + 236) + 64);
                v69 = v136;
                if ( v68 != *(_DWORD *)(_gptiCurrent + 796) )
                {
                  i = v139;
                  v145 = v139;
                  v138 = v136;
                  v140 = v64;
                  if ( v68 )
                    goto LABEL_182;
                }
                i = v139;
                v145 = v139;
                v138 = v136;
                v140 = v64;
                if ( !v135 )
                  goto LABEL_182;
                if ( SlowAppThreadInShellFrame(_gptiCurrent, v124, v125, v135 == 2) )
                  TryDetachShellFrame(v135 == 2, 0);
                i = v139;
                v145 = v139;
                v138 = v69;
                v140 = v64;
                v28 = v149;
              }
              else
              {
                i = v145;
LABEL_182:
                v59 = v148;
LABEL_183:
                if ( !v59 )
                {
                  v149 |= 0x10000u;
LABEL_294:
                  v86 = (_DWORD *)v150;
                  goto LABEL_295;
                }
                v28 = 0;
                v149 = 0;
              }
            }
          }
        }
        Feature_DeliverViaSendMessage__private_IsEnabledPreCheck();
        v70 = 1;
LABEL_186:
        v38 = v150;
LABEL_187:
        v71 = v149 | v70;
        v139 = v71;
        v72 = *(_DWORD *)(v38 + 4);
        if ( v72 == 595 && *(_DWORD *)(v38 + 12) == -1 )
          v73 = -1;
        else
          v73 = 0;
        v74 = (v72 == 571
            || v72 == 572
            || (v72 - 577 <= 3 || v72 >= 0x245 && v72 <= 0x24A || v72 == 593 || v72 == 594 || v72 == 595)
            && CTouchProcessor::IsPointerMessageTouchpad(_gpTouchProcessor, _gptiCurrent, v73, *(_WORD *)(v38 + 8)))
           && (*(_DWORD *)(_gptiCurrent + 688) & 0x2000) == 0
           && !IsPTPAllowedOnThread(*(struct tagTHREADINFO **)(v38 + 8), (unsigned int)v115, (unsigned int)v116);
        if ( v143 && v144 && *(_DWORD *)(_gptiCurrent + 708) || v74 )
        {
          v75 = (_DWORD *)v150;
        }
        else
        {
          v75 = (_DWORD *)v150;
          if ( v143 )
          {
            if ( *(_DWORD *)(v150 + 4) == 258 && (*(_BYTE *)(_gptiCurrent + 764) & 1) != 0 && (v134 & 1) != 0 )
            {
              v76 = xxxKeyboardCorrectionCallout(v134);
              v75 = (_DWORD *)v150;
              if ( v76 == 1296 )
              {
                *(_DWORD *)(v150 + 4) = 0;
                v75[2] = 0;
                v75[3] = 0;
              }
            }
          }
        }
        v77 = v143;
        if ( v143
          && ((v78 = v75[1], v78 == 258)
           || v78 == 582
           || v78 == 578
           || v78 == 583
           || v78 == 579
           || (unsigned __int16)v78 >= (unsigned __int16)v128) )
        {
          v79 = xxxCallCtfHook(3, 0, a5, v75);
          v80 = v150;
          v77 = v143;
          if ( v79 && *(_DWORD *)(v150 + 4) == 258 )
          {
            *(_DWORD *)(v150 + 4) = 0;
            *(_DWORD *)(v80 + 8) = 0;
            *(_DWORD *)(v80 + 12) = 0;
          }
        }
        else
        {
          v80 = v150;
        }
        if ( (!v77 || !v144 || !*(_DWORD *)(_gptiCurrent + 708))
          && !v74
          && ((*(_BYTE *)(_gptiCurrent + 372) | *(_BYTE *)(**(_DWORD **)(_gptiCurrent + 252) + 8)) & 0x10) != 0 )
        {
          xxxCallHook(v80, 3u, (int)v115, (int)v116);
        }
        if ( v143 )
        {
          if ( *(_DWORD *)(_gptiCurrent + 628) )
            PointerPromotion::xxxCompletePendingPromotion(v115, v116);
          v81 = *(_DWORD *)(v150 + 4);
          if ( v81 == 583 && (*(_WORD *)(v150 + 10) & 0x2000) != 0 )
          {
            PointerPromotion::MarkPendingPromotion(v115, v116, v117);
            v81 = *(_DWORD *)(v150 + 4);
          }
          v82 = 0;
          if ( ((unsigned int)(v81 - 577) <= 3 || (unsigned int)(v81 - 581) <= 0x12 && v81 != 589) && v81 != 595 )
            v82 = *(_WORD *)(v150 + 8);
          CTouchProcessor::UpdateThreadPointerList(
            _gpTouchProcessor,
            (struct tagTHREADINPUTPOINTERLIST *)(_gptiCurrent + 612),
            v82);
        }
        if ( !v144 || (*((_DWORD *)v144 + 16) & 0x100) == 0 )
          break;
        CMultiPerObjectLockExclusivePpiPtiQ::CMultiPerObjectLockExclusivePpiPtiQ(
          (CMultiPerObjectLockExclusivePpiPtiQ *)&v142,
          _gptiCurrent);
        if ( !v143 || !*(_DWORD *)(_gptiCurrent + 708) )
        {
          *((_DWORD *)v144 + 16) &= ~0x100u;
          CMultiPerObjectLockExclusivePpiPtiQ::~CMultiPerObjectLockExclusivePpiPtiQ((CMultiPerObjectLockExclusivePpiPtiQ *)&v142);
          break;
        }
        InputTraceLogging::ThreadLockedPerfRegion::ThreadLockedPerfRegion(
          (InputTraceLogging::ThreadLockedPerfRegion *)v133,
          "Delegation",
          0);
        v83 = v150;
        EtwTraceBeginDelegateInputCallback(v144, v150);
        InputTraceLogging::Delivery::CallDelegateThread(v115);
        InputTraceLogging::ThreadLockedPerfRegion::ThreadLockedPerfRegion(
          (InputTraceLogging::ThreadLockedPerfRegion *)v127,
          "DelegationCallout",
          (const struct InputTraceLogging::ThreadLockedPerfRegion *)v133);
        xxxClientCallDelegateThread(*(_DWORD *)(_gptiCurrent + 712));
        InputTraceLogging::ThreadLockedPerfRegion::~ThreadLockedPerfRegion((InputTraceLogging::ThreadLockedPerfRegion *)v127);
        EtwTraceEndDelegateInputCallback(v144, v83);
        if ( (*((_BYTE *)v144 + 64) & 0x20) != 0 )
        {
          v114 = v144;
          TouchProcessorLock = CTouchProcessor::GetTouchProcessorLock(_gpTouchProcessor);
          CInpLockGuardExclusive::CInpLockGuardExclusive((CInpLockGuardExclusive *)v118, TouchProcessorLock, v114);
          *((_DWORD *)v144 + 16) &= ~0x100u;
          _HandleDelegatedInputWorker(v144, (unsigned int)v115, v116);
          CInpLockGuardExclusive::~CInpLockGuardExclusive((CInpLockGuardExclusive *)v118);
        }
        v28 = (int)&loc_20000;
        v149 = (int)&loc_20000;
        InputTraceLogging::ThreadLockedPerfRegion::~ThreadLockedPerfRegion((InputTraceLogging::ThreadLockedPerfRegion *)v133);
        CMultiPerObjectLockExclusivePpiPtiQ::~CMultiPerObjectLockExclusivePpiPtiQ((CMultiPerObjectLockExclusivePpiPtiQ *)&v142);
        i = v145;
      }
      if ( !v74 )
        break;
      InputTraceLogging::ThreadLockedPerfRegion::ThreadLockedPerfRegion(
        (InputTraceLogging::ThreadLockedPerfRegion *)v126,
        "PTPDownleveling",
        0);
      v85 = (void *)v150;
      xxxClientCallDefaultInputHandler(v150);
      memset(v120, 0, sizeof(v120));
      qmemcpy(v85, v120, 0x1Cu);
      InputTraceLogging::ThreadLockedPerfRegion::~ThreadLockedPerfRegion((InputTraceLogging::ThreadLockedPerfRegion *)v126);
      v28 = v139;
      v149 = v139;
      i = v145;
    }
    v86 = (_DWORD *)v150;
    v87 = *(_DWORD *)(v150 + 8);
    v88 = *(_DWORD *)(v150 + 4);
    if ( (unsigned int)(v88 - 577) > 3 && ((unsigned int)(v88 - 581) > 0x12 || v88 == 589) )
    {
      if ( v88 != 528 || (_WORD)v87 != 582 )
        goto LABEL_268;
      v89 = HIWORD(v87) == 1;
    }
    else
    {
      v89 = (_WORD)v87 == 1;
    }
    if ( !v89 )
      goto LABEL_268;
    v90 = HMValidateHandleNoSecure(*(_DWORD *)v150, 1);
    if ( !v90 || IsMiPEnabledForWindow(v90) )
      break;
    v91 = (void *)v150;
    TraceLoggingMiPSuppressedForWindow(v143, (unsigned int)v115, (int)v116);
    if ( v143 )
      xxxClientCallDefWindowProc(v91);
    memset(v119, 0, sizeof(v119));
    qmemcpy(v91, v119, 0x1Cu);
    v28 = v139;
    v149 = v139;
  }
  v86 = (_DWORD *)v150;
LABEL_268:
  if ( a6 && v86[1] == 18 )
  {
    v149 = v71 | 0x40000;
LABEL_295:
    v92 = 0;
    v152 = 0;
    goto LABEL_296;
  }
  v92 = 1;
  v152 = 1;
  if ( v143 )
  {
    v93 = *(_DWORD *)(_gptiCurrent + 600);
    if ( v93 )
    {
      v94 = HMValidateHandleNoRip(v93, 18);
      if ( v94 )
        FreeHidData(v94);
      *(_DWORD *)(_gptiCurrent + 600) = 0;
    }
    v95 = *(_DWORD *)(_gptiCurrent + 604);
    if ( v95 )
    {
      _FreeTouchInputInfo(v95, 1);
      *(_DWORD *)(_gptiCurrent + 604) = 0;
    }
    v96 = *(_DWORD *)(_gptiCurrent + 608);
    if ( v96 )
    {
      _FreeGestureInfo(v96, 1);
      *(_DWORD *)(_gptiCurrent + 608) = 0;
    }
    v97 = v86[1];
    if ( v97 == 255 )
    {
      if ( v86[2] <= 1u )
      {
        *(_DWORD *)(_gptiCurrent + 600) = v86[3];
        v149 = v139;
        goto LABEL_296;
      }
    }
    else
    {
      if ( v97 == 576 )
      {
        LOBYTE(v88) = 20;
        if ( HMValidateHandle(v86[3], v88) )
        {
          *(_DWORD *)(_gptiCurrent + 604) = v86[3];
          v149 = v139;
          goto LABEL_296;
        }
      }
      v98 = v86[1];
      if ( v98 == 283 || v98 == 281 )
      {
        LOBYTE(v88) = 21;
        if ( HMValidateHandle(v86[3], v88) )
          *(_DWORD *)(_gptiCurrent + 608) = v86[3];
      }
    }
  }
  v149 = v139;
LABEL_296:
  if ( v137 )
    ThreadUnlock1();
  if ( HandleProcessSpinning() )
  {
    if ( v92 )
    {
      if ( v86[1] == 512 && (*(_DWORD *)(_gptiCurrent + 688) & 0x40000) != 0 )
      {
        v99 = *(_DWORD **)(_gptiCurrent + 368);
        if ( v99 )
        {
          if ( (v99[46] & 0x100000) != 0 && v99[74] )
          {
            v100 = MEMORY[0xFFDF0004];
            a4 = MEMORY[0xFFDF0004];
            if ( (unsigned int)MEMORY[0xFFDF0004] < 0x1000000 )
            {
              v102 = MEMORY[0xFFDF0324];
              v103 = MEMORY[0xFFDF0320];
              if ( MEMORY[0xFFDF0324] != MEMORY[0xFFDF0328] )
              {
                do
                {
                  _mm_pause();
                  v102 = MEMORY[0xFFDF0324];
                  v103 = MEMORY[0xFFDF0320];
                }
                while ( MEMORY[0xFFDF0324] != MEMORY[0xFFDF0328] );
                v100 = MEMORY[0xFFDF0004];
              }
              v101 = v100 * (v102 << 8) + (((unsigned int)v100 * (unsigned __int64)v103) >> 24);
              v92 = v152;
            }
            else
            {
              v101 = ((unsigned int)MEMORY[0xFFDF0004] * (unsigned __int64)MEMORY[0xFFDF0320]) >> 24;
            }
            v99[75] += v101 - v99[74];
            ++v99[76];
            v99[74] = 0;
          }
        }
      }
      if ( v92 )
      {
        v104 = (unsigned int *)v150;
        *(_DWORD *)(_gptiCurrent + 664) = *(_DWORD *)v150;
        *(_DWORD *)(_gptiCurrent + 668) = v104[1];
        *(_DWORD *)(_gptiCurrent + 672) = v104[2];
        LOBYTE(a4) = (_BYTE)v143;
        v105 = *v104;
        v106 = KeGetCurrentThread();
        if ( !IsThreadCrossSessionAttached() )
          PsGetThreadWin32Thread(v106);
        v107 = (unsigned __int16)v105;
        if ( (unsigned int)(unsigned __int16)v105 < *(_DWORD *)(_gpsi + 4)
          && ((v108 = _gSharedInfo[1] + (unsigned __int16)v105 * _gSharedInfo[2],
               v109 = (const struct tagMSG **)HMPkheFromPhe(v108),
               v110 = HIWORD(v105),
               (_WORD)v110 == *(_WORD *)(v108 + 14))
           || !(_WORD)v110
           || (v107 = 0xFFFF, (_WORD)v110 == 0xFFFF))
          && (*(_BYTE *)(v108 + 13) & 1) == 0
          && *(_BYTE *)(v108 + 12) == 1 )
        {
          v111 = *v109;
        }
        else
        {
          v111 = 0;
        }
        InputTraceLogging::Delivery::GetMessageW(
          v111,
          (const struct tagTHREADINFO *)v107,
          (struct tagWND *)a4,
          v115,
          (bool)v116);
        v92 = v152;
      }
    }
  }
  else
  {
    v92 = 0;
  }
  EtwTraceBeginAppMessageProcessing(a6, v149, v150);
  return v92;
}
