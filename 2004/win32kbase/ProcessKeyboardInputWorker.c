/*
 * XREFs of ProcessKeyboardInputWorker @ 0x1C01AD720
 * Callers:
 *     ?ProcessInputNoLock@CKeyboardProcessor@@QEAA?AW4InputProcessingResult@@PEAUDEVICEINFO@@PEAU_KEYBOARD_INPUT_DATA@@K_NPEAU_KEYBOARD_VIRTUAL_DEVICE_INFO@@@Z @ 0x1C019F8DC (-ProcessInputNoLock@CKeyboardProcessor@@QEAA-AW4InputProcessingResult@@PEAUDEVICEINFO@@PEAU_KEYB.c)
 *     ?MapFlexibleKeys@@YAHPEAUtagKE@@EPEAUDEVICEINFO@@@Z @ 0x1C01ACE10 (-MapFlexibleKeys@@YAHPEAUtagKE@@EPEAUDEVICEINFO@@@Z.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C0038CF8 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     _tlgKeywordOn @ 0x1C006DE40 (_tlgKeywordOn.c)
 *     InternalMapVirtualKeyEx @ 0x1C0077600 (InternalMapVirtualKeyEx.c)
 *     HMUnlockObject @ 0x1C0087E70 (HMUnlockObject.c)
 *     EtwTraceAcquiredExclusiveUserCrit @ 0x1C008B5C0 (EtwTraceAcquiredExclusiveUserCrit.c)
 *     IsThreadCrossSessionAttached @ 0x1C008B950 (IsThreadCrossSessionAttached.c)
 *     ?GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z @ 0x1C008BA00 (-GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C0091530 (UserSessionSwitchLeaveCrit.c)
 *     ?LockExclusive@tagDomLock@@QEBAXXZ @ 0x1C0093F20 (-LockExclusive@tagDomLock@@QEBAXXZ.c)
 *     __security_check_cookie @ 0x1C00CCA30 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D3820 (_guard_dispatch_icall_nop.c)
 *     ?AccessProceduresStream@@YAHPEAUtagKE@@KH@Z @ 0x1C0183750 (-AccessProceduresStream@@YAHPEAUtagKE@@KH@Z.c)
 *     ?AccessTimeOut@@YAXXZ @ 0x1C01837D0 (-AccessTimeOut@@YAXXZ.c)
 *     ?DropInput@Keyboard@InputTraceLogging@@SAXW4DropReason@12@@Z @ 0x1C019F1A4 (-DropInput@Keyboard@InputTraceLogging@@SAXW4DropReason@12@@Z.c)
 *     ?MapScancode@@YAHPEAUtagKE@@PEAEPEAUDEVICEINFO@@@Z @ 0x1C01AD0F4 (-MapScancode@@YAHPEAUtagKE@@PEAEPEAUDEVICEINFO@@@Z.c)
 *     ?RemoteSyncToggleKeys@@YAXK@Z @ 0x1C01AD1D4 (-RemoteSyncToggleKeys@@YAXK@Z.c)
 *     PtiKbdFromQ @ 0x1C01ADF88 (PtiKbdFromQ.c)
 *     xxxProcessKeyEvent @ 0x1C01AE000 (xxxProcessKeyEvent.c)
 *     VKFromVSC @ 0x1C01AE550 (VKFromVSC.c)
 *     ApiSetEditionRawInputRequestedForKeyboard @ 0x1C01C9F6C (ApiSetEditionRawInputRequestedForKeyboard.c)
 *     ApiSetEditionUserBeep @ 0x1C01CAB34 (ApiSetEditionUserBeep.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01FBBDC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
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
  __int64 v25; // rcx
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // rax
  int ProcessSessionId; // ebx
  __int64 v30; // rcx
  __int64 CurrentThreadProcess; // rax
  struct _KTHREAD *CurrentThread; // rdi
  __int64 v33; // rbx
  __int64 v34; // rcx
  __int64 *ThreadWin32Thread; // rax
  __int64 CurrentProcessWin32Process; // rax
  __int64 v37; // rdx
  __int64 v38; // r8
  __int64 v39; // r9
  __int64 v40; // rdx
  __int64 v41; // rcx
  PERESOURCE *DomainLockRef; // rbx
  __int64 v43; // r8
  __int64 v44; // r9
  __int64 v45; // rdx
  __int64 v46; // rcx
  __int64 v47; // r8
  __int64 v48; // r9
  __int64 v49; // rdx
  __int64 v50; // rcx
  __int64 v51; // r8
  __int64 v52; // r9
  __int64 v53; // rax
  __int64 v54; // rdx
  __int64 v55; // rcx
  PERESOURCE *v56; // rdi
  __int64 v57; // r8
  __int64 v58; // r9
  __int64 *v59; // rsi
  unsigned __int8 v60; // di
  __int64 v61; // rax
  __int64 v62; // rcx
  __int64 v63; // rdx
  unsigned __int16 v64; // r8
  int v65; // eax
  __int64 v66; // rax
  __int64 v67; // r8
  unsigned __int16 v68; // ax
  __int64 v69; // rdx
  __int64 v70; // r9
  __int64 v71; // r8
  int v72; // ecx
  char v73[4]; // [rsp+30h] [rbp-D0h] BYREF
  int v74; // [rsp+34h] [rbp-CCh] BYREF
  int v75; // [rsp+38h] [rbp-C8h] BYREF
  int v76; // [rsp+3Ch] [rbp-C4h] BYREF
  _DWORD v77[2]; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v78; // [rsp+48h] [rbp-B8h]
  __int64 v79; // [rsp+50h] [rbp-B0h]
  int v80; // [rsp+58h] [rbp-A8h]
  int v81; // [rsp+5Ch] [rbp-A4h]
  __int64 v82; // [rsp+60h] [rbp-A0h]
  unsigned __int8 v83; // [rsp+68h] [rbp-98h]
  GUID ActivityId; // [rsp+6Ch] [rbp-94h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v85; // [rsp+80h] [rbp-80h] BYREF
  int *v86; // [rsp+A0h] [rbp-60h]
  __int64 v87; // [rsp+A8h] [rbp-58h]
  struct _EVENT_DATA_DESCRIPTOR v88; // [rsp+B0h] [rbp-50h] BYREF
  int *v89; // [rsp+D0h] [rbp-30h]
  __int64 v90; // [rsp+D8h] [rbp-28h]
  struct _EVENT_DATA_DESCRIPTOR v91; // [rsp+E0h] [rbp-20h] BYREF
  int *v92; // [rsp+100h] [rbp+0h]
  __int64 v93; // [rsp+108h] [rbp+8h]

  *(_WORD *)((char *)v77 + 1) = 0;
  v6 = *((unsigned __int16 *)a1 + 2);
  v10 = (unsigned __int16)v6;
  HIBYTE(v77[0]) = 0;
  v81 = 0;
  v8 = 0;
  v9 = 0;
  LOWORD(v10) = v6 & 0x10;
  if ( (v6 & 0x10) != 0 || a2 && (*((_DWORD *)a2 + 46) & 0x2000) != 0 || *(_WORD *)a1 == 0xFFFE )
    v9 = 1;
  if ( a2 )
    v78 = *(_QWORD *)a2;
  else
    v78 = 0LL;
  v11 = *((_DWORD *)a1 + 2);
  v79 = *a1;
  v80 = v11;
  v77[1] = 0;
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
    v73[0] = v12;
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
        v83 = 1;
        v16 = PsGetCurrentThreadWin32Thread(v14);
        v82 = v16;
        if ( v16 && (*(int *)(v16 + 24) > 0 || *(_DWORD *)(v82 + 48)) )
        {
          EtwActivityIdControl(3u, &ActivityId);
          if ( (unsigned int)dword_1C0246A70 > 6 && tlgKeywordOn((__int64)&dword_1C0246A70, 0x2000LL) )
          {
            v74 = v83;
            v87 = 4LL;
            v86 = &v74;
            tlgWriteTransfer_EtwWriteTransfer(
              (__int64)&dword_1C0246A70,
              (unsigned __int8 *)dword_1C0213E87,
              &ActivityId,
              0LL,
              3u,
              &v85);
          }
        }
      }
      else
      {
        v82 = 0LL;
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
      if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
      {
        if ( v82 )
        {
          v23 = *(unsigned int *)(v82 + 24);
          if ( *(_DWORD *)(v82 + 48) || (int)v23 > 0 )
          {
            *(_DWORD *)(v82 + 44) = 1;
            *(GUID *)(v82 + 28) = ActivityId;
            if ( (unsigned int)dword_1C0246A70 > 6 )
            {
              if ( tlgKeywordOn((__int64)&dword_1C0246A70, 0x2000LL) )
              {
                v75 = v83;
                v90 = 4LL;
                v89 = &v75;
                tlgWriteTransfer_EtwWriteTransfer(
                  (__int64)&dword_1C0246A70,
                  (unsigned __int8 *)dword_1C0213E30,
                  &ActivityId,
                  0LL,
                  3u,
                  &v88);
                v24 = dword_1C0246A70;
              }
              if ( v24 > 6 && tlgKeywordOn((__int64)&dword_1C0246A70, 0x2000LL) )
              {
                v76 = v83;
                v93 = 4LL;
                v92 = &v76;
                tlgWriteTransfer_EtwWriteTransfer(
                  (__int64)&dword_1C0246A70,
                  (unsigned __int8 *)dword_1C0213E5D,
                  &ActivityId,
                  0LL,
                  3u,
                  &v91);
              }
            }
          }
        }
      }
      EtwTraceAcquiredExclusiveUserCrit(v23);
      gptiCurrent = v17;
      gbValidateHandleForIL = 1;
      if ( !(unsigned __int8)KeIsAttachedProcess(v25)
        || (v28 = PsGetCurrentProcess(v27, v26),
            ProcessSessionId = PsGetProcessSessionIdEx(v28),
            CurrentThreadProcess = PsGetCurrentThreadProcess(v30),
            ProcessSessionId == (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess)) )
      {
        CurrentThread = KeGetCurrentThread();
        v33 = 0LL;
        if ( !IsThreadCrossSessionAttached(v27) )
        {
          ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
          if ( ThreadWin32Thread )
            v33 = *ThreadWin32Thread;
        }
        CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v34);
        if ( v33
          && CurrentProcessWin32Process
          && (*(_DWORD *)(v33 + 480) & 0x1000000) != 0
          && (*(_DWORD *)(v33 + 1224) & 0x80u) == 0
          && (*(_DWORD *)(CurrentProcessWin32Process + 12) & 0x8000) != 0 )
        {
          DomainLockRef = (PERESOURCE *)GetDomainLockRef(12LL, v37, v38, v39);
          if ( DomainLockRef == (PERESOURCE *)&gDomainDummyLock )
            MicrosoftTelemetryAssertTriggeredNoArgsKM(v41, v40, v43, v44);
          if ( ExIsResourceAcquiredExclusiveLite(*DomainLockRef) == 1 )
            MicrosoftTelemetryAssertTriggeredNoArgsKM(v46, v45, v47, v48);
          ExEnterCriticalRegionAndAcquireResourceExclusive(*DomainLockRef);
          while ( 1 )
          {
            v59 = (__int64 *)gpducstulHead;
            if ( !gpducstulHead )
              break;
            gpducstulHead = (struct tagKERNELHANDLETABLEENTRY *)*((_QWORD *)gpducstulHead + 2);
            v53 = *v59;
            v59[2] = 0LL;
            if ( !*(_DWORD *)(v53 + 8) )
              MicrosoftTelemetryAssertTriggeredNoArgsKM(v50, v49, v51, v52);
            v56 = (PERESOURCE *)GetDomainLockRef(12LL, v49, v51, v52);
            if ( v56 == (PERESOURCE *)&gDomainDummyLock )
              MicrosoftTelemetryAssertTriggeredNoArgsKM(v55, v54, v57, v58);
            ExReleaseResourceAndLeaveCriticalRegion(*v56);
            HMUnlockObject(*v59);
            tagDomLock::LockExclusive(v56);
          }
          ExReleaseResourceAndLeaveCriticalRegion(*DomainLockRef);
        }
      }
      goto LABEL_71;
    }
    LOBYTE(v77[0]) = *((_BYTE *)a1 + 2) & 0x7F;
    if ( a3 && (gpScancodeMap || gpFlexMap) )
    {
      HIWORD(v77[0]) = 0;
      if ( (v6 & 1) != 0 )
        HIWORD(v77[0]) = 0x8000;
      if ( !(unsigned int)MapScancode((struct tagKE *)v77, v73, a2) )
        goto LABEL_71;
      v12 = v73[0];
    }
    LOBYTE(v6) = v12;
    gbVKLastDown = VKFromVSC(v77, v6, v10);
    v60 = gbVKLastDown;
    if ( gbVKLastDown )
    {
      if ( (unsigned __int8)(gbVKLastDown - 91) <= 1u )
      {
        v62 = *((unsigned __int16 *)a1 + 2);
        v63 = (unsigned __int16)v62;
        if ( (v62 & 1) == 0 )
        {
          if ( gptiForeground && (v66 = *((_QWORD *)gptiForeground + 54)) != 0 )
            v67 = *(_QWORD *)(*(_QWORD *)(v66 + 48) + 32LL);
          else
            v67 = gpKbdTbl;
          if ( !LScanCode )
          {
            v68 = InternalMapVirtualKeyEx(0x4Cu, 0, v67);
            v62 = *((unsigned __int16 *)a1 + 2);
            LScanCode = v68;
          }
LABEL_94:
          if ( (v62 & 1) != 0 )
            HIWORD(v77[0]) |= 0x8000u;
          if ( qword_1C0252F50 )
            v65 = qword_1C0252F50(v62, v63);
          else
            v65 = 0;
          if ( v65 && (unsigned __int8)(BYTE2(v77[0]) - 91) <= 1u && !gfEnableWindowsKey )
            goto LABEL_71;
          if ( v60 == 91 )
          {
            LOBYTE(v63) = 64;
          }
          else
          {
            if ( v60 == 92 )
            {
              LOBYTE(v63) = 0x80;
              gCurrentModifierBit = 0x80;
LABEL_119:
              if ( (*((_BYTE *)a1 + 4) & 1) != 0 )
              {
                LOBYTE(v63) = ~(_BYTE)v63;
                gPhysModifierState &= v63;
              }
              else
              {
                gPhysModifierState |= v63;
              }
LABEL_122:
              if ( v60 == 13 && (*((_BYTE *)a1 + 4) & 1) == 0 )
                PoLatencySensitivityHint(1LL, v63);
              if ( (gdwPUDFlags & 0x100) != 0 )
              {
                AccessTimeOut();
                if ( !(unsigned int)AccessProceduresStream((struct tagKE *)v77, *((_DWORD *)a1 + 2), 0) )
                  return;
                v70 = v8;
                v69 = *((unsigned int *)a1 + 2);
                v71 = (*((unsigned __int16 *)a1 + 2) >> 4) & 1;
              }
              else
              {
                v69 = *((unsigned int *)a1 + 2);
                v70 = v8;
                v71 = v9;
              }
              goto LABEL_135;
            }
            if ( (unsigned __int8)(v60 + 96) > 5u )
            {
              LOBYTE(v63) = 0;
            }
            else
            {
              v63 = 1LL;
              LOBYTE(v63) = 1 << (v60 & 0xF);
            }
          }
          gCurrentModifierBit = v63;
          if ( !(_BYTE)v63 )
            goto LABEL_122;
          goto LABEL_119;
        }
LABEL_86:
        if ( LScanCode )
        {
          if ( *((_WORD *)a1 + 1) == LScanCode )
          {
            v60 = 76;
            gbVKLastDown = 76;
            HIWORD(v77[0]) = 76;
          }
          v64 = v62;
          if ( (gfsSASModifiersDown & 8) == 0
            || (v62 = (unsigned __int16)v63, (v63 & 1) != 0) && ((v64 = v63, v60 == 91) || v60 == 92) )
          {
            LScanCode = 0;
            v62 = v64;
          }
        }
        goto LABEL_94;
      }
    }
    else
    {
      if ( gpqForeground )
        v61 = PtiKbdFromQ(gpqForeground);
      else
        v61 = 0LL;
      if ( !(unsigned int)ApiSetEditionRawInputRequestedForKeyboard(v61) )
      {
LABEL_71:
        InputTraceLogging::Keyboard::DropInput();
        return;
      }
      v8 = 1;
    }
    v62 = *((unsigned __int16 *)a1 + 2);
    v63 = (unsigned __int16)v62;
    goto LABEL_86;
  }
  if ( (v6 & 8) != 0 )
  {
    v72 = v11;
    if ( (v6 & 0x10) != 0 )
    {
      v72 = v11 | 0x4000;
      *((_DWORD *)a1 + 2) = v11 | 0x4000;
    }
    RemoteSyncToggleKeys(v72);
    LOWORD(v6) = *((_WORD *)a1 + 2);
  }
  if ( (v6 & 0x20) != 0 )
  {
    LOWORD(v77[0]) = *((_WORD *)a1 + 1);
    v70 = 0LL;
    v71 = ((unsigned __int16)v6 >> 4) & 1;
    HIWORD(v77[0]) = ((_WORD)v6 << 15) | 0x10E7;
    v69 = 0LL;
LABEL_135:
    xxxProcessKeyEvent(v77, v69, v71, v70, a2, 0LL);
  }
}
