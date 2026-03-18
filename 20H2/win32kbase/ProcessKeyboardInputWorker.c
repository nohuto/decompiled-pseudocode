/*
 * XREFs of ProcessKeyboardInputWorker @ 0x1C01AB3A0
 * Callers:
 *     ?ProcessInputNoLock@CKeyboardProcessor@@QEAA?AW4InputProcessingResult@@PEAUDEVICEINFO@@PEAU_KEYBOARD_INPUT_DATA@@K_NPEAU_KEYBOARD_VIRTUAL_DEVICE_INFO@@@Z @ 0x1C019D3DC (-ProcessInputNoLock@CKeyboardProcessor@@QEAA-AW4InputProcessingResult@@PEAUDEVICEINFO@@PEAU_KEYB.c)
 *     ?MapFlexibleKeys@@YAHPEAUtagKE@@EPEAUDEVICEINFO@@@Z @ 0x1C01AAA90 (-MapFlexibleKeys@@YAHPEAUtagKE@@EPEAUDEVICEINFO@@@Z.c)
 * Callees:
 *     HMUnlockObject @ 0x1C0042780 (HMUnlockObject.c)
 *     EtwTraceAcquiredExclusiveUserCrit @ 0x1C0045B00 (EtwTraceAcquiredExclusiveUserCrit.c)
 *     IsThreadCrossSessionAttached @ 0x1C0045E90 (IsThreadCrossSessionAttached.c)
 *     ?GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z @ 0x1C0045F40 (-GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C004B4E0 (UserSessionSwitchLeaveCrit.c)
 *     ?LockExclusive@tagDomLock@@QEBAXXZ @ 0x1C004D690 (-LockExclusive@tagDomLock@@QEBAXXZ.c)
 *     InternalMapVirtualKeyEx @ 0x1C004F9B0 (InternalMapVirtualKeyEx.c)
 *     _tlgKeywordOn @ 0x1C0066CD0 (_tlgKeywordOn.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C00689F0 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1C00CBC40 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D36F0 (_guard_dispatch_icall_nop.c)
 *     ?AccessProceduresStream@@YAHPEAUtagKE@@KH@Z @ 0x1C0181210 (-AccessProceduresStream@@YAHPEAUtagKE@@KH@Z.c)
 *     ?AccessTimeOut@@YAXXZ @ 0x1C0181290 (-AccessTimeOut@@YAXXZ.c)
 *     ?DropInput@Keyboard@InputTraceLogging@@SAXW4DropReason@12@@Z @ 0x1C019CCA4 (-DropInput@Keyboard@InputTraceLogging@@SAXW4DropReason@12@@Z.c)
 *     ?MapScancode@@YAHPEAUtagKE@@PEAEPEAUDEVICEINFO@@@Z @ 0x1C01AAD74 (-MapScancode@@YAHPEAUtagKE@@PEAEPEAUDEVICEINFO@@@Z.c)
 *     ?RemoteSyncToggleKeys@@YAXK@Z @ 0x1C01AAE54 (-RemoteSyncToggleKeys@@YAXK@Z.c)
 *     PtiKbdFromQ @ 0x1C01ABC08 (PtiKbdFromQ.c)
 *     xxxProcessKeyEvent @ 0x1C01ABC80 (xxxProcessKeyEvent.c)
 *     VKFromVSC @ 0x1C01AC1D0 (VKFromVSC.c)
 *     ApiSetEditionRawInputRequestedForKeyboard @ 0x1C01C7BEC (ApiSetEditionRawInputRequestedForKeyboard.c)
 *     ApiSetEditionUserBeep @ 0x1C01C87B4 (ApiSetEditionUserBeep.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01FA2AC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall ProcessKeyboardInputWorker(__int64 *a1, struct DEVICEINFO *a2, int a3, __int64 a4)
{
  __int64 v6; // rdx
  unsigned int v8; // r15d
  unsigned int v9; // r12d
  __int64 v10; // r8
  int v11; // eax
  unsigned __int8 v12; // cl
  __int64 v13; // rcx
  __int64 v14; // rcx
  LARGE_INTEGER *CurrentThreadWin32Thread; // rbx
  __int64 v16; // rax
  struct tagTHREADINFO *v17; // rbx
  struct tagTHREADINFO **v18; // rax
  __int64 v19; // rdx
  __int64 v20; // rcx
  PVOID CurrentProcess; // rax
  __int64 v22; // rdx
  __int64 v23; // rcx
  unsigned int v24; // r8d
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // rax
  int ProcessSessionId; // ebx
  __int64 CurrentThreadProcess; // rax
  struct _KTHREAD *CurrentThread; // rdi
  __int64 v31; // rbx
  __int64 v32; // rcx
  __int64 *ThreadWin32Thread; // rax
  __int64 CurrentProcessWin32Process; // rax
  __int64 v35; // rdx
  __int64 v36; // r8
  __int64 v37; // r9
  __int64 v38; // rdx
  __int64 v39; // rcx
  PERESOURCE *DomainLockRef; // rbx
  __int64 v41; // r8
  __int64 v42; // r9
  __int64 v43; // rdx
  __int64 v44; // rcx
  __int64 v45; // r8
  __int64 v46; // r9
  __int64 v47; // rdx
  __int64 v48; // rcx
  __int64 v49; // r8
  __int64 v50; // r9
  __int64 v51; // rax
  __int64 v52; // rdx
  __int64 v53; // rcx
  PERESOURCE *v54; // rdi
  __int64 v55; // r8
  __int64 v56; // r9
  __int64 *v57; // rsi
  unsigned __int8 v58; // di
  __int64 v59; // rax
  __int64 v60; // rcx
  __int64 v61; // rdx
  unsigned __int16 v62; // r8
  int v63; // eax
  __int64 v64; // rax
  __int64 v65; // r8
  unsigned __int16 v66; // ax
  __int64 v67; // rdx
  __int64 v68; // r9
  __int64 v69; // r8
  int v70; // ecx
  char v71[4]; // [rsp+30h] [rbp-D0h] BYREF
  int v72; // [rsp+34h] [rbp-CCh] BYREF
  int v73; // [rsp+38h] [rbp-C8h] BYREF
  int v74; // [rsp+3Ch] [rbp-C4h] BYREF
  _DWORD v75[2]; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v76; // [rsp+48h] [rbp-B8h]
  __int64 v77; // [rsp+50h] [rbp-B0h]
  int v78; // [rsp+58h] [rbp-A8h]
  int v79; // [rsp+5Ch] [rbp-A4h]
  __int64 v80; // [rsp+60h] [rbp-A0h]
  unsigned __int8 v81; // [rsp+68h] [rbp-98h]
  GUID ActivityId; // [rsp+6Ch] [rbp-94h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v83; // [rsp+80h] [rbp-80h] BYREF
  int *v84; // [rsp+A0h] [rbp-60h]
  __int64 v85; // [rsp+A8h] [rbp-58h]
  struct _EVENT_DATA_DESCRIPTOR v86; // [rsp+B0h] [rbp-50h] BYREF
  int *v87; // [rsp+D0h] [rbp-30h]
  __int64 v88; // [rsp+D8h] [rbp-28h]
  struct _EVENT_DATA_DESCRIPTOR v89; // [rsp+E0h] [rbp-20h] BYREF
  int *v90; // [rsp+100h] [rbp+0h]
  __int64 v91; // [rsp+108h] [rbp+8h]

  *(_WORD *)((char *)v75 + 1) = 0;
  v6 = *((unsigned __int16 *)a1 + 2);
  v10 = (unsigned __int16)v6;
  HIBYTE(v75[0]) = 0;
  v79 = 0;
  v8 = 0;
  v9 = 0;
  LOWORD(v10) = v6 & 0x10;
  if ( (v6 & 0x10) != 0 || a2 && (*((_DWORD *)a2 + 46) & 0x2000) != 0 || *(_WORD *)a1 == 0xFFFE )
    v9 = 1;
  if ( a2 )
    v76 = *(_QWORD *)a2;
  else
    v76 = 0LL;
  v11 = *((_DWORD *)a1 + 2);
  v77 = *a1;
  v78 = v11;
  v75[1] = 0;
  if ( (v6 & 0x28) == 0 )
  {
    if ( (gSetLedReceived & 0x8000) != 0 )
    {
      RemoteSyncToggleKeys(gSetLedReceived);
      v6 = *((unsigned __int16 *)a1 + 2);
    }
    if ( (v6 & 2) != 0 )
      v12 = -32;
    else
      v12 = (v6 & 4) != 0 ? 0xE1 : 0;
    v71[0] = v12;
    if ( *((_WORD *)a1 + 1) == 255 )
    {
      if ( (_DWORD)gdwInAtomicOperation && (gdwExtraInstrumentations & 1) != 0 )
        KeBugCheckEx(0x160u, (unsigned int)gdwInAtomicOperation, 0LL, 0LL, 0LL);
      UserSessionSwitchLeaveCrit((unsigned int)gdwInAtomicOperation, v6, v10, a4);
      ApiSetEditionUserBeep();
      CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(v13);
      if ( CurrentThreadWin32Thread )
        CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
      ActivityId = 0LL;
      if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
      {
        v81 = 1;
        v16 = PsGetCurrentThreadWin32Thread(v14);
        v80 = v16;
        if ( v16 && (*(int *)(v16 + 24) > 0 || *(_DWORD *)(v80 + 48)) )
        {
          EtwActivityIdControl(3u, &ActivityId);
          if ( (unsigned int)dword_1C0244A70 > 6 && tlgKeywordOn((__int64)&dword_1C0244A70, 0x2000LL) )
          {
            v72 = v81;
            v85 = 4LL;
            v84 = &v72;
            tlgWriteTransfer_EtwWriteTransfer(
              (__int64)&dword_1C0244A70,
              (unsigned __int8 *)dword_1C0211E87,
              &ActivityId,
              0LL,
              3u,
              &v83);
          }
        }
      }
      else
      {
        v80 = 0LL;
      }
      v17 = 0LL;
      while ( 1 )
      {
        v18 = (struct tagTHREADINFO **)ExEnterCriticalRegionAndAcquireResourceExclusive(gpresUser);
        if ( v18 )
          v17 = *v18;
        CurrentProcess = (PVOID)PsGetCurrentProcess(v20, v19);
        if ( CurrentProcess )
        {
          if ( CurrentProcess == g_pepDwm )
            break;
        }
        if ( (PVOID)PsGetCurrentProcess(v23, v22) == gpepCSRSS && v17 != (struct tagTHREADINFO *)gptiTSRequest
          || gbDITInHitTest != 1
          || v17 == gptiRit )
        {
          break;
        }
        ++gcDITHitTestWaiters;
        ExReleaseResourceAndLeaveCriticalRegion(gpresUser);
        KeWaitForSingleObject(gpsemDITHitTestWaiters, UserRequest, 0, 0, 0LL);
      }
      if ( InputTraceLogging::Perf::s_userCritLoggingEnabled && v80 && (*(_DWORD *)(v80 + 48) || *(int *)(v80 + 24) > 0) )
      {
        *(_DWORD *)(v80 + 44) = 1;
        *(GUID *)(v80 + 28) = ActivityId;
        if ( (unsigned int)dword_1C0244A70 > 6 )
        {
          if ( tlgKeywordOn((__int64)&dword_1C0244A70, 0x2000LL) )
          {
            v73 = v81;
            v88 = 4LL;
            v87 = &v73;
            tlgWriteTransfer_EtwWriteTransfer(
              (__int64)&dword_1C0244A70,
              (unsigned __int8 *)dword_1C0211E30,
              &ActivityId,
              0LL,
              3u,
              &v86);
            v24 = dword_1C0244A70;
          }
          if ( v24 > 6 && tlgKeywordOn((__int64)&dword_1C0244A70, 0x2000LL) )
          {
            v74 = v81;
            v91 = 4LL;
            v90 = &v74;
            tlgWriteTransfer_EtwWriteTransfer(
              (__int64)&dword_1C0244A70,
              (unsigned __int8 *)dword_1C0211E5D,
              &ActivityId,
              0LL,
              3u,
              &v89);
          }
        }
      }
      EtwTraceAcquiredExclusiveUserCrit();
      gptiCurrent = v17;
      gbValidateHandleForIL = 1;
      if ( !(unsigned __int8)KeIsAttachedProcess()
        || (v27 = PsGetCurrentProcess(v26, v25),
            ProcessSessionId = PsGetProcessSessionIdEx(v27),
            CurrentThreadProcess = PsGetCurrentThreadProcess(),
            ProcessSessionId == (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess)) )
      {
        CurrentThread = KeGetCurrentThread();
        v31 = 0LL;
        if ( !IsThreadCrossSessionAttached() )
        {
          ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
          if ( ThreadWin32Thread )
            v31 = *ThreadWin32Thread;
        }
        CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v32);
        if ( v31
          && CurrentProcessWin32Process
          && (*(_DWORD *)(v31 + 488) & 0x1000000) != 0
          && (*(_DWORD *)(v31 + 1232) & 0x80u) == 0
          && (*(_DWORD *)(CurrentProcessWin32Process + 12) & 0x8000) != 0 )
        {
          DomainLockRef = (PERESOURCE *)GetDomainLockRef(12LL, v35, v36, v37);
          if ( DomainLockRef == (PERESOURCE *)&gDomainDummyLock )
            MicrosoftTelemetryAssertTriggeredNoArgsKM(v39, v38, v41, v42);
          if ( ExIsResourceAcquiredExclusiveLite(*DomainLockRef) == 1 )
            MicrosoftTelemetryAssertTriggeredNoArgsKM(v44, v43, v45, v46);
          ExEnterCriticalRegionAndAcquireResourceExclusive(*DomainLockRef);
          while ( 1 )
          {
            v57 = (__int64 *)gpducstulHead;
            if ( !gpducstulHead )
              break;
            gpducstulHead = (struct tagKERNELHANDLETABLEENTRY *)*((_QWORD *)gpducstulHead + 2);
            v51 = *v57;
            v57[2] = 0LL;
            if ( !*(_DWORD *)(v51 + 8) )
              MicrosoftTelemetryAssertTriggeredNoArgsKM(v48, v47, v49, v50);
            v54 = (PERESOURCE *)GetDomainLockRef(12LL, v47, v49, v50);
            if ( v54 == (PERESOURCE *)&gDomainDummyLock )
              MicrosoftTelemetryAssertTriggeredNoArgsKM(v53, v52, v55, v56);
            ExReleaseResourceAndLeaveCriticalRegion(*v54);
            HMUnlockObject(*v57);
            tagDomLock::LockExclusive(v54);
          }
          ExReleaseResourceAndLeaveCriticalRegion(*DomainLockRef);
        }
      }
      goto LABEL_71;
    }
    LOBYTE(v75[0]) = *((_BYTE *)a1 + 2) & 0x7F;
    if ( a3 && (gpScancodeMap || gpFlexMap) )
    {
      HIWORD(v75[0]) = 0;
      if ( (v6 & 1) != 0 )
        HIWORD(v75[0]) = 0x8000;
      if ( !(unsigned int)MapScancode((struct tagKE *)v75, v71, a2) )
        goto LABEL_71;
      v12 = v71[0];
    }
    LOBYTE(v6) = v12;
    gbVKLastDown = VKFromVSC(v75, v6, v10);
    v58 = gbVKLastDown;
    if ( gbVKLastDown )
    {
      if ( (unsigned __int8)(gbVKLastDown - 91) <= 1u )
      {
        v60 = *((unsigned __int16 *)a1 + 2);
        v61 = (unsigned __int16)v60;
        if ( (v60 & 1) == 0 )
        {
          if ( gptiForeground && (v64 = *((_QWORD *)gptiForeground + 55)) != 0 )
            v65 = *(_QWORD *)(*(_QWORD *)(v64 + 48) + 32LL);
          else
            v65 = gpKbdTbl;
          if ( !LScanCode )
          {
            v66 = InternalMapVirtualKeyEx(0x4Cu, 0LL, v65);
            v60 = *((unsigned __int16 *)a1 + 2);
            LScanCode = v66;
          }
LABEL_94:
          if ( (v60 & 1) != 0 )
            HIWORD(v75[0]) |= 0x8000u;
          if ( qword_1C0250F50 )
            v63 = qword_1C0250F50(v60, v61);
          else
            v63 = 0;
          if ( v63 && (unsigned __int8)(BYTE2(v75[0]) - 91) <= 1u && !gfEnableWindowsKey )
            goto LABEL_71;
          if ( v58 == 91 )
          {
            LOBYTE(v61) = 64;
          }
          else
          {
            if ( v58 == 92 )
            {
              LOBYTE(v61) = 0x80;
              gCurrentModifierBit = 0x80;
LABEL_119:
              if ( (*((_BYTE *)a1 + 4) & 1) != 0 )
              {
                LOBYTE(v61) = ~(_BYTE)v61;
                gPhysModifierState &= v61;
              }
              else
              {
                gPhysModifierState |= v61;
              }
LABEL_122:
              if ( v58 == 13 && (*((_BYTE *)a1 + 4) & 1) == 0 )
                PoLatencySensitivityHint(1LL, v61);
              if ( (gdwPUDFlags & 0x100) != 0 )
              {
                AccessTimeOut();
                if ( !(unsigned int)AccessProceduresStream((struct tagKE *)v75, *((_DWORD *)a1 + 2), 0) )
                  return;
                v68 = v8;
                v67 = *((unsigned int *)a1 + 2);
                v69 = (*((unsigned __int16 *)a1 + 2) >> 4) & 1;
              }
              else
              {
                v67 = *((unsigned int *)a1 + 2);
                v68 = v8;
                v69 = v9;
              }
              goto LABEL_135;
            }
            if ( (unsigned __int8)(v58 + 96) > 5u )
            {
              LOBYTE(v61) = 0;
            }
            else
            {
              v61 = 1LL;
              LOBYTE(v61) = 1 << (v58 & 0xF);
            }
          }
          gCurrentModifierBit = v61;
          if ( !(_BYTE)v61 )
            goto LABEL_122;
          goto LABEL_119;
        }
LABEL_86:
        if ( LScanCode )
        {
          if ( *((_WORD *)a1 + 1) == LScanCode )
          {
            v58 = 76;
            gbVKLastDown = 76;
            HIWORD(v75[0]) = 76;
          }
          v62 = v60;
          if ( (gfsSASModifiersDown & 8) == 0
            || (v60 = (unsigned __int16)v61, (v61 & 1) != 0) && ((v62 = v61, v58 == 91) || v58 == 92) )
          {
            LScanCode = 0;
            v60 = v62;
          }
        }
        goto LABEL_94;
      }
    }
    else
    {
      if ( gpqForeground )
        v59 = PtiKbdFromQ(gpqForeground);
      else
        v59 = 0LL;
      if ( !(unsigned int)ApiSetEditionRawInputRequestedForKeyboard(v59) )
      {
LABEL_71:
        InputTraceLogging::Keyboard::DropInput();
        return;
      }
      v8 = 1;
    }
    v60 = *((unsigned __int16 *)a1 + 2);
    v61 = (unsigned __int16)v60;
    goto LABEL_86;
  }
  if ( (v6 & 8) != 0 )
  {
    v70 = v11;
    if ( (v6 & 0x10) != 0 )
    {
      v70 = v11 | 0x4000;
      *((_DWORD *)a1 + 2) = v11 | 0x4000;
    }
    RemoteSyncToggleKeys(v70);
    LOWORD(v6) = *((_WORD *)a1 + 2);
  }
  if ( (v6 & 0x20) != 0 )
  {
    LOWORD(v75[0]) = *((_WORD *)a1 + 1);
    v68 = 0LL;
    v69 = ((unsigned __int16)v6 >> 4) & 1;
    HIWORD(v75[0]) = ((_WORD)v6 << 15) | 0x10E7;
    v67 = 0LL;
LABEL_135:
    xxxProcessKeyEvent(v75, v67, v69, v68, a2, 0LL);
  }
}
