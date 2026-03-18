/*
 * XREFs of ProcessKeyboardInputWorker @ 0x1C01B3480
 * Callers:
 *     ?ProcessInputNoLock@CKeyboardProcessor@@QEAA?AW4InputProcessingResult@@PEAUDEVICEINFO@@PEAU_KEYBOARD_INPUT_DATA@@K_NPEAU_KEYBOARD_VIRTUAL_DEVICE_INFO@@@Z @ 0x1C01A563C (-ProcessInputNoLock@CKeyboardProcessor@@QEAA-AW4InputProcessingResult@@PEAUDEVICEINFO@@PEAU_KEYB.c)
 *     ?MapFlexibleKeys@@YAHPEAUtagKE@@EPEAUDEVICEINFO@@@Z @ 0x1C01B2B70 (-MapFlexibleKeys@@YAHPEAUtagKE@@EPEAUDEVICEINFO@@@Z.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C002874C (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     ?LockExclusive@tagDomLock@@QEBAXXZ @ 0x1C0067ED0 (-LockExclusive@tagDomLock@@QEBAXXZ.c)
 *     _tlgKeywordOn @ 0x1C0069BE0 (_tlgKeywordOn.c)
 *     InternalMapVirtualKeyEx @ 0x1C006F8A0 (InternalMapVirtualKeyEx.c)
 *     HMUnlockObject @ 0x1C0080DA0 (HMUnlockObject.c)
 *     EtwTraceAcquiredExclusiveUserCrit @ 0x1C00844F0 (EtwTraceAcquiredExclusiveUserCrit.c)
 *     IsThreadCrossSessionAttached @ 0x1C0084880 (IsThreadCrossSessionAttached.c)
 *     ?GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z @ 0x1C0084930 (-GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C008A4E0 (UserSessionSwitchLeaveCrit.c)
 *     __security_check_cookie @ 0x1C00CC180 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D2DC0 (_guard_dispatch_icall_nop.c)
 *     ?AccessProceduresStream@@YAHPEAUtagKE@@KH@Z @ 0x1C0189450 (-AccessProceduresStream@@YAHPEAUtagKE@@KH@Z.c)
 *     ?AccessTimeOut@@YAXXZ @ 0x1C01894D0 (-AccessTimeOut@@YAXXZ.c)
 *     ?DropInput@Keyboard@InputTraceLogging@@SAXW4DropReason@12@@Z @ 0x1C01A4F04 (-DropInput@Keyboard@InputTraceLogging@@SAXW4DropReason@12@@Z.c)
 *     ?MapScancode@@YAHPEAUtagKE@@PEAEPEAUDEVICEINFO@@@Z @ 0x1C01B2E54 (-MapScancode@@YAHPEAUtagKE@@PEAEPEAUDEVICEINFO@@@Z.c)
 *     ?RemoteSyncToggleKeys@@YAXK@Z @ 0x1C01B2F34 (-RemoteSyncToggleKeys@@YAXK@Z.c)
 *     PtiKbdFromQ @ 0x1C01B3CE8 (PtiKbdFromQ.c)
 *     xxxProcessKeyEvent @ 0x1C01B3D60 (xxxProcessKeyEvent.c)
 *     VKFromVSC @ 0x1C01B42B0 (VKFromVSC.c)
 *     ApiSetEditionRawInputRequestedForKeyboard @ 0x1C01CFEEC (ApiSetEditionRawInputRequestedForKeyboard.c)
 *     ApiSetEditionUserBeep @ 0x1C01D0AB4 (ApiSetEditionUserBeep.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02015EC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall ProcessKeyboardInputWorker(__int64 *a1, struct DEVICEINFO *a2, int a3)
{
  __int64 v5; // rdx
  unsigned int v7; // r15d
  unsigned int v8; // r12d
  __int64 v9; // r8
  int v10; // eax
  unsigned __int8 v11; // cl
  __int64 v12; // rcx
  __int64 v13; // rcx
  LARGE_INTEGER *CurrentThreadWin32Thread; // rbx
  __int64 v15; // rax
  struct tagTHREADINFO *v16; // rbx
  struct tagTHREADINFO **v17; // rax
  __int64 v18; // rdx
  __int64 v19; // rcx
  PVOID CurrentProcess; // rax
  __int64 v21; // rdx
  __int64 v22; // rcx
  unsigned int v23; // r8d
  __int64 v24; // rcx
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // rax
  int ProcessSessionId; // ebx
  __int64 v29; // rcx
  __int64 CurrentThreadProcess; // rax
  struct _KTHREAD *CurrentThread; // rdi
  __int64 v32; // rbx
  __int64 v33; // rcx
  __int64 *ThreadWin32Thread; // rax
  __int64 CurrentProcessWin32Process; // rax
  __int64 v36; // rcx
  PERESOURCE *DomainLockRef; // rbx
  __int64 v38; // rcx
  __int64 v39; // rcx
  __int64 v40; // rax
  __int64 v41; // rcx
  PERESOURCE *v42; // rdi
  __int64 *v43; // rsi
  unsigned __int8 v44; // di
  __int64 v45; // rax
  __int64 v46; // rcx
  __int64 v47; // rdx
  unsigned __int16 v48; // r8
  int v49; // eax
  __int64 v50; // rax
  __int64 v51; // r8
  unsigned __int16 v52; // ax
  __int64 v53; // rdx
  __int64 v54; // r9
  __int64 v55; // r8
  int v56; // ecx
  char v57[4]; // [rsp+30h] [rbp-D0h] BYREF
  int v58; // [rsp+34h] [rbp-CCh] BYREF
  int v59; // [rsp+38h] [rbp-C8h] BYREF
  int v60; // [rsp+3Ch] [rbp-C4h] BYREF
  _DWORD v61[2]; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v62; // [rsp+48h] [rbp-B8h]
  __int64 v63; // [rsp+50h] [rbp-B0h]
  int v64; // [rsp+58h] [rbp-A8h]
  int v65; // [rsp+5Ch] [rbp-A4h]
  __int64 v66; // [rsp+60h] [rbp-A0h]
  unsigned __int8 v67; // [rsp+68h] [rbp-98h]
  GUID ActivityId; // [rsp+6Ch] [rbp-94h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v69; // [rsp+80h] [rbp-80h] BYREF
  int *v70; // [rsp+A0h] [rbp-60h]
  __int64 v71; // [rsp+A8h] [rbp-58h]
  struct _EVENT_DATA_DESCRIPTOR v72; // [rsp+B0h] [rbp-50h] BYREF
  int *v73; // [rsp+D0h] [rbp-30h]
  __int64 v74; // [rsp+D8h] [rbp-28h]
  struct _EVENT_DATA_DESCRIPTOR v75; // [rsp+E0h] [rbp-20h] BYREF
  int *v76; // [rsp+100h] [rbp+0h]
  __int64 v77; // [rsp+108h] [rbp+8h]

  *(_WORD *)((char *)v61 + 1) = 0;
  v5 = *((unsigned __int16 *)a1 + 2);
  v9 = (unsigned __int16)v5;
  HIBYTE(v61[0]) = 0;
  v65 = 0;
  v7 = 0;
  v8 = 0;
  LOWORD(v9) = v5 & 0x10;
  if ( (v5 & 0x10) != 0 || a2 && (*((_DWORD *)a2 + 46) & 0x2000) != 0 || *(_WORD *)a1 == 0xFFFE )
    v8 = 1;
  if ( a2 )
    v62 = *(_QWORD *)a2;
  else
    v62 = 0LL;
  v10 = *((_DWORD *)a1 + 2);
  v63 = *a1;
  v64 = v10;
  v61[1] = 0;
  if ( (v5 & 0x28) == 0 )
  {
    if ( (gSetLedReceived & 0x8000) != 0 )
    {
      RemoteSyncToggleKeys(gSetLedReceived);
      v5 = *((unsigned __int16 *)a1 + 2);
    }
    if ( (v5 & 2) != 0 )
      v11 = -32;
    else
      v11 = (v5 & 4) != 0 ? 0xE1 : 0;
    v57[0] = v11;
    if ( *((_WORD *)a1 + 1) == 255 )
    {
      if ( (_DWORD)gdwInAtomicOperation && (gdwExtraInstrumentations & 1) != 0 )
        KeBugCheckEx(0x160u, (unsigned int)gdwInAtomicOperation, 0LL, 0LL, 0LL);
      UserSessionSwitchLeaveCrit((unsigned int)gdwInAtomicOperation);
      ApiSetEditionUserBeep();
      CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(v12);
      if ( CurrentThreadWin32Thread )
        CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
      ActivityId = 0LL;
      if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
      {
        v67 = 1;
        v15 = PsGetCurrentThreadWin32Thread(v13);
        v66 = v15;
        if ( v15 && (*(int *)(v15 + 24) > 0 || *(_DWORD *)(v66 + 48)) )
        {
          EtwActivityIdControl(3u, &ActivityId);
          if ( (unsigned int)dword_1C024C960 > 6 && tlgKeywordOn((__int64)&dword_1C024C960, 0x2000LL) )
          {
            v58 = v67;
            v71 = 4LL;
            v70 = &v58;
            tlgWriteTransfer_EtwWriteTransfer(
              (__int64)&dword_1C024C960,
              (unsigned __int8 *)dword_1C02199F7,
              &ActivityId,
              0LL,
              3u,
              &v69);
          }
        }
      }
      else
      {
        v66 = 0LL;
      }
      v16 = 0LL;
      while ( 1 )
      {
        v17 = (struct tagTHREADINFO **)ExEnterCriticalRegionAndAcquireResourceExclusive(gpresUser);
        if ( v17 )
          v16 = *v17;
        CurrentProcess = (PVOID)PsGetCurrentProcess(v19, v18);
        if ( CurrentProcess )
        {
          if ( CurrentProcess == g_pepDwm )
            break;
        }
        if ( (PVOID)PsGetCurrentProcess(v22, v21) == gpepCSRSS && v16 != (struct tagTHREADINFO *)gptiTSRequest
          || gbDITInHitTest != 1
          || v16 == gptiRit )
        {
          break;
        }
        ++gcDITHitTestWaiters;
        ExReleaseResourceAndLeaveCriticalRegion(gpresUser);
        KeWaitForSingleObject(gpsemDITHitTestWaiters, UserRequest, 0, 0, 0LL);
      }
      if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
      {
        if ( v66 )
        {
          v22 = *(unsigned int *)(v66 + 24);
          if ( *(_DWORD *)(v66 + 48) || (int)v22 > 0 )
          {
            *(_DWORD *)(v66 + 44) = 1;
            *(GUID *)(v66 + 28) = ActivityId;
            if ( (unsigned int)dword_1C024C960 > 6 )
            {
              if ( tlgKeywordOn((__int64)&dword_1C024C960, 0x2000LL) )
              {
                v59 = v67;
                v74 = 4LL;
                v73 = &v59;
                tlgWriteTransfer_EtwWriteTransfer(
                  (__int64)&dword_1C024C960,
                  (unsigned __int8 *)dword_1C02199A0,
                  &ActivityId,
                  0LL,
                  3u,
                  &v72);
                v23 = dword_1C024C960;
              }
              if ( v23 > 6 && tlgKeywordOn((__int64)&dword_1C024C960, 0x2000LL) )
              {
                v60 = v67;
                v77 = 4LL;
                v76 = &v60;
                tlgWriteTransfer_EtwWriteTransfer(
                  (__int64)&dword_1C024C960,
                  (unsigned __int8 *)dword_1C02199CD,
                  &ActivityId,
                  0LL,
                  3u,
                  &v75);
              }
            }
          }
        }
      }
      EtwTraceAcquiredExclusiveUserCrit(v22);
      gptiCurrent = v16;
      gbValidateHandleForIL = 1;
      if ( !(unsigned __int8)KeIsAttachedProcess(v24)
        || (v27 = PsGetCurrentProcess(v26, v25),
            ProcessSessionId = PsGetProcessSessionIdEx(v27),
            CurrentThreadProcess = PsGetCurrentThreadProcess(v29),
            ProcessSessionId == (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess)) )
      {
        CurrentThread = KeGetCurrentThread();
        v32 = 0LL;
        if ( !IsThreadCrossSessionAttached(v26) )
        {
          ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
          if ( ThreadWin32Thread )
            v32 = *ThreadWin32Thread;
        }
        CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v33);
        if ( v32
          && CurrentProcessWin32Process
          && (*(_DWORD *)(v32 + 480) & 0x1000000) != 0
          && (*(_DWORD *)(v32 + 1216) & 0x80u) == 0
          && (*(_DWORD *)(CurrentProcessWin32Process + 12) & 0x8000) != 0 )
        {
          DomainLockRef = (PERESOURCE *)GetDomainLockRef(12LL);
          if ( DomainLockRef == (PERESOURCE *)&gDomainDummyLock )
            MicrosoftTelemetryAssertTriggeredNoArgsKM(v36);
          if ( ExIsResourceAcquiredExclusiveLite(*DomainLockRef) == 1 )
            MicrosoftTelemetryAssertTriggeredNoArgsKM(v38);
          ExEnterCriticalRegionAndAcquireResourceExclusive(*DomainLockRef);
          while ( 1 )
          {
            v43 = (__int64 *)gpducstulHead;
            if ( !gpducstulHead )
              break;
            gpducstulHead = (struct tagKERNELHANDLETABLEENTRY *)*((_QWORD *)gpducstulHead + 2);
            v40 = *v43;
            v43[2] = 0LL;
            if ( !*(_DWORD *)(v40 + 8) )
              MicrosoftTelemetryAssertTriggeredNoArgsKM(v39);
            v42 = (PERESOURCE *)GetDomainLockRef(12LL);
            if ( v42 == (PERESOURCE *)&gDomainDummyLock )
              MicrosoftTelemetryAssertTriggeredNoArgsKM(v41);
            ExReleaseResourceAndLeaveCriticalRegion(*v42);
            HMUnlockObject(*v43);
            tagDomLock::LockExclusive(v42);
          }
          ExReleaseResourceAndLeaveCriticalRegion(*DomainLockRef);
        }
      }
      goto LABEL_71;
    }
    LOBYTE(v61[0]) = *((_BYTE *)a1 + 2) & 0x7F;
    if ( a3 && (gpScancodeMap || gpFlexMap) )
    {
      HIWORD(v61[0]) = 0;
      if ( (v5 & 1) != 0 )
        HIWORD(v61[0]) = 0x8000;
      if ( !(unsigned int)MapScancode((struct tagKE *)v61, v57, a2) )
        goto LABEL_71;
      v11 = v57[0];
    }
    LOBYTE(v5) = v11;
    gbVKLastDown = VKFromVSC(v61, v5, v9);
    v44 = gbVKLastDown;
    if ( gbVKLastDown )
    {
      if ( (unsigned __int8)(gbVKLastDown - 91) <= 1u )
      {
        v46 = *((unsigned __int16 *)a1 + 2);
        v47 = (unsigned __int16)v46;
        if ( (v46 & 1) == 0 )
        {
          if ( gptiForeground && (v50 = *((_QWORD *)gptiForeground + 54)) != 0 )
            v51 = *(_QWORD *)(*(_QWORD *)(v50 + 48) + 32LL);
          else
            v51 = gpKbdTbl;
          if ( !LScanCode )
          {
            v52 = InternalMapVirtualKeyEx(0x4Cu, 0, v51);
            v46 = *((unsigned __int16 *)a1 + 2);
            LScanCode = v52;
          }
LABEL_94:
          if ( (v46 & 1) != 0 )
            HIWORD(v61[0]) |= 0x8000u;
          if ( qword_1C0258F10 )
            v49 = qword_1C0258F10(v46, v47);
          else
            v49 = 0;
          if ( v49 && (unsigned __int8)(BYTE2(v61[0]) - 91) <= 1u && !gfEnableWindowsKey )
            goto LABEL_71;
          if ( v44 == 91 )
          {
            LOBYTE(v47) = 64;
          }
          else
          {
            if ( v44 == 92 )
            {
              LOBYTE(v47) = 0x80;
              gCurrentModifierBit = 0x80;
LABEL_119:
              if ( (*((_BYTE *)a1 + 4) & 1) != 0 )
              {
                LOBYTE(v47) = ~(_BYTE)v47;
                gPhysModifierState &= v47;
              }
              else
              {
                gPhysModifierState |= v47;
              }
LABEL_122:
              if ( v44 == 13 && (*((_BYTE *)a1 + 4) & 1) == 0 )
                PoLatencySensitivityHint(1LL, v47);
              if ( (gdwPUDFlags & 0x100) != 0 )
              {
                AccessTimeOut();
                if ( !(unsigned int)AccessProceduresStream((struct tagKE *)v61, *((_DWORD *)a1 + 2), 0) )
                  return;
                v54 = v7;
                v53 = *((unsigned int *)a1 + 2);
                v55 = (*((unsigned __int16 *)a1 + 2) >> 4) & 1;
              }
              else
              {
                v53 = *((unsigned int *)a1 + 2);
                v54 = v7;
                v55 = v8;
              }
              goto LABEL_135;
            }
            if ( (unsigned __int8)(v44 + 96) > 5u )
            {
              LOBYTE(v47) = 0;
            }
            else
            {
              v47 = 1LL;
              LOBYTE(v47) = 1 << (v44 & 0xF);
            }
          }
          gCurrentModifierBit = v47;
          if ( !(_BYTE)v47 )
            goto LABEL_122;
          goto LABEL_119;
        }
LABEL_86:
        if ( LScanCode )
        {
          if ( *((_WORD *)a1 + 1) == LScanCode )
          {
            v44 = 76;
            gbVKLastDown = 76;
            HIWORD(v61[0]) = 76;
          }
          v48 = v46;
          if ( (gfsSASModifiersDown & 8) == 0
            || (v46 = (unsigned __int16)v47, (v47 & 1) != 0) && ((v48 = v47, v44 == 91) || v44 == 92) )
          {
            LScanCode = 0;
            v46 = v48;
          }
        }
        goto LABEL_94;
      }
    }
    else
    {
      if ( gpqForeground )
        v45 = PtiKbdFromQ(gpqForeground);
      else
        v45 = 0LL;
      if ( !(unsigned int)ApiSetEditionRawInputRequestedForKeyboard(v45) )
      {
LABEL_71:
        InputTraceLogging::Keyboard::DropInput();
        return;
      }
      v7 = 1;
    }
    v46 = *((unsigned __int16 *)a1 + 2);
    v47 = (unsigned __int16)v46;
    goto LABEL_86;
  }
  if ( (v5 & 8) != 0 )
  {
    v56 = v10;
    if ( (v5 & 0x10) != 0 )
    {
      v56 = v10 | 0x4000;
      *((_DWORD *)a1 + 2) = v10 | 0x4000;
    }
    RemoteSyncToggleKeys(v56);
    LOWORD(v5) = *((_WORD *)a1 + 2);
  }
  if ( (v5 & 0x20) != 0 )
  {
    LOWORD(v61[0]) = *((_WORD *)a1 + 1);
    v54 = 0LL;
    v55 = ((unsigned __int16)v5 >> 4) & 1;
    HIWORD(v61[0]) = ((_WORD)v5 << 15) | 0x10E7;
    v53 = 0LL;
LABEL_135:
    xxxProcessKeyEvent(v61, v53, v55, v54, a2, 0LL);
  }
}
