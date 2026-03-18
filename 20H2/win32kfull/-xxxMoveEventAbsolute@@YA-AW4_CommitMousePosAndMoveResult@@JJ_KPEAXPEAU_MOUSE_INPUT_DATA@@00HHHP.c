/*
 * XREFs of ?xxxMoveEventAbsolute@@YA?AW4_CommitMousePosAndMoveResult@@JJ_KPEAXPEAU_MOUSE_INPUT_DATA@@00HHHPEAU_MousePacketPerf@@@Z @ 0x1C002DCDC
 * Callers:
 *     EditionCommitMousePosAndMove @ 0x1C002D620 (EditionCommitMousePosAndMove.c)
 * Callees:
 *     TransitionCursorSuppressionState @ 0x1C002A050 (TransitionCursorSuppressionState.c)
 *     EditionPostRawMouseInputMessage @ 0x1C002D6E0 (EditionPostRawMouseInputMessage.c)
 *     RawInputRequestedForMouse @ 0x1C002DCB4 (RawInputRequestedForMouse.c)
 *     UsingPenCursors @ 0x1C002F570 (UsingPenCursors.c)
 *     ?xxxCallHook2@@YA_JPEAUtagHOOK@@H_K_JPEAH_N@Z @ 0x1C0055FC0 (-xxxCallHook2@@YA_JPEAUtagHOOK@@H_K_JPEAH_N@Z.c)
 *     PhkFirstValid @ 0x1C0074E6C (PhkFirstValid.c)
 *     ?UpdateGlobalCursorSize@CCursorSizes@@QEAAXPEBUtagPOINT@@_N@Z @ 0x1C00C0A48 (-UpdateGlobalCursorSize@CCursorSizes@@QEAAXPEBUtagPOINT@@_N@Z.c)
 *     GreMovePointer @ 0x1C00C4410 (GreMovePointer.c)
 *     SetWakeBit @ 0x1C00D4F30 (SetWakeBit.c)
 *     ??1ThreadLockedPerfRegion@InputTraceLogging@@QEAA@XZ @ 0x1C00D7374 (--1ThreadLockedPerfRegion@InputTraceLogging@@QEAA@XZ.c)
 *     ??0ThreadLockedPerfRegion@InputTraceLogging@@QEAA@PEBDPEBU01@@Z @ 0x1C00D73A0 (--0ThreadLockedPerfRegion@InputTraceLogging@@QEAA@PEBDPEBU01@@Z.c)
 *     __security_check_cookie @ 0x1C015A0C0 (__security_check_cookie.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall xxxMoveEventAbsolute(
        int a1,
        LONG a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        unsigned int a6,
        struct tagWND *a7,
        int a8,
        int a9,
        int a10,
        LARGE_INTEGER *a11)
{
  unsigned int v15; // esi
  __int64 v16; // xmm1_8
  __int64 v17; // rcx
  __int64 v18; // r8
  int v19; // eax
  __int64 v20; // rcx
  unsigned int v21; // edx
  LARGE_INTEGER v22; // rax
  LARGE_INTEGER *v23; // rdi
  __int64 v25; // rcx
  int v26; // r14d
  __int64 Valid; // rbx
  __int64 v28; // rcx
  struct tagHOOK *v29; // rax
  __int64 v30; // rbx
  bool v31; // zf
  __int64 v32; // rax
  int v33; // edx
  LARGE_INTEGER PerformanceCounter; // rax
  LARGE_INTEGER *v35; // rcx
  int v36; // [rsp+30h] [rbp-81h] BYREF
  LARGE_INTEGER *v37; // [rsp+38h] [rbp-79h]
  _BYTE v38[8]; // [rsp+40h] [rbp-71h] BYREF
  __int128 v39; // [rsp+48h] [rbp-69h] BYREF
  __int64 v40; // [rsp+58h] [rbp-59h]
  _BYTE v41[8]; // [rsp+60h] [rbp-51h] BYREF
  _WORD v42[2]; // [rsp+68h] [rbp-49h] BYREF
  int v43; // [rsp+6Ch] [rbp-45h]
  int v44; // [rsp+70h] [rbp-41h]
  int v45; // [rsp+74h] [rbp-3Dh]
  int v46; // [rsp+78h] [rbp-39h]
  int v47; // [rsp+7Ch] [rbp-35h]
  _DWORD v48[6]; // [rsp+80h] [rbp-31h] BYREF
  __int64 v49; // [rsp+98h] [rbp-19h]

  v37 = a11;
  if ( ((*(_DWORD *)(**(_QWORD **)(gptiRit + 464LL) + 16LL) | *(_DWORD *)(gptiRit + 680LL)) & 0x8000) != 0 )
  {
    InputTraceLogging::ThreadLockedPerfRegion::ThreadLockedPerfRegion(
      (InputTraceLogging::ThreadLockedPerfRegion *)v38,
      "LowLevelMouseMoveHook",
      0LL);
    v26 = 0;
    v48[3] = a8;
    v48[4] = a6;
    v48[5] = 0;
    v36 = 0;
    v48[0] = a1;
    v48[1] = a2;
    v48[2] = 0;
    if ( a5 && a3 == *(_DWORD *)(a5 + 20) && (*(_BYTE *)(a5 + 2) & 0x50) != 0 )
      a3 = (unsigned __int8)a3 | 0xFF515700LL;
    v49 = a3;
    EnterSharedCrit(0LL, 1LL);
    Valid = PhkFirstValid(gptiRit, 14LL);
    UserSessionSwitchLeaveCrit(v28);
    if ( Valid )
    {
      v37[4] = KeQueryPerformanceCounter(0LL);
      EnterCrit(0LL, 1LL);
      v29 = (struct tagHOOK *)PhkFirstValid(gptiRit, 14LL);
      if ( v29 )
      {
        v30 = *(_QWORD *)(gptiCurrent + 1376LL);
        *(_QWORD *)(gptiCurrent + 1376LL) = v48;
        v31 = xxxCallHook2(v29, 0, 0x200uLL, (__int64)v48, &v36, 0) == 0;
        *(_QWORD *)(gptiCurrent + 1376LL) = v30;
        v32 = *(_QWORD *)(gptiCurrent + 448LL);
        LOBYTE(v26) = !v31;
        v33 = *(unsigned __int16 *)(v32 + 4);
        if ( ((unsigned __int16)v33 & *(_WORD *)(v32 + 10) & 0xFDFF) != 0 )
          SetWakeBit(gptiCurrent, v33 & 0xFFFFFDFF);
      }
      PerformanceCounter = KeQueryPerformanceCounter(0LL);
      v35 = v37;
      v37[5] = PerformanceCounter;
      UserSessionSwitchLeaveCrit(v35);
      if ( v26 )
      {
        InputTraceLogging::ThreadLockedPerfRegion::~ThreadLockedPerfRegion((InputTraceLogging::ThreadLockedPerfRegion *)v38);
        return 0LL;
      }
    }
    InputTraceLogging::ThreadLockedPerfRegion::~ThreadLockedPerfRegion((InputTraceLogging::ThreadLockedPerfRegion *)v38);
  }
  v15 = 1;
  if ( a5 )
  {
    EnterCrit(0LL, 1LL);
    v16 = *((_QWORD *)&gObjDummyLock + 2);
    v39 = gObjDummyLock;
    v40 = v16;
    if ( (unsigned int)RawInputRequestedForMouse() )
    {
      v42[0] = *(_WORD *)(a5 + 2) & 0xFE7F;
      v43 = *(_DWORD *)(a5 + 4);
      v44 = *(_DWORD *)(a5 + 8);
      v45 = *(_DWORD *)(a5 + 12);
      v46 = *(_DWORD *)(a5 + 16);
      v47 = *(_DWORD *)(a5 + 20);
      v42[1] = 0;
      *((_QWORD *)&v39 + 1) = a4;
      v40 = 0LL;
      *(_QWORD *)&v39 = a4 != 0 ? 2uLL : 0;
      if ( (unsigned int)EditionPostRawMouseInputMessage(0LL, a7, a6, (__int64)&v39, (__int64)v42) )
      {
        v15 = 9;
        *(_WORD *)a5 = -1;
      }
    }
    UserSessionSwitchLeaveCrit(v17);
  }
  if ( (*(_DWORD *)(**(_QWORD **)(gptiRit + 464LL) + 16LL) & 4) != 0 )
    return 0LL;
  if ( a9 && gCursorSuppressionState == 2 )
  {
    EnterCrit(0LL, 1LL);
    if ( gCursorSuppressionState == 2 )
      TransitionCursorSuppressionState(8u, 1);
    UserSessionSwitchLeaveCrit(v25);
  }
  LODWORD(gptCursorAsync) = a1;
  gptCursorAsync->y = a2;
  if ( a10 )
  {
    if ( !a5 || (v18 = 1LL, (*(_BYTE *)(a5 + 2) & 1) != 0) )
      v18 = 0LL;
  }
  else
  {
    v18 = 2LL;
  }
  v19 = CCursorClip::BoundPoint(gpCursorClip, gptCursorAsync, v18, 0LL, gptCursorAsync);
  if ( v19 == 2 )
  {
    v15 |= 2u;
  }
  else if ( v19 == 1 )
  {
    v15 |= 4u;
  }
  if ( a5 )
    v20 = 256LL;
  if ( a9 )
  {
    if ( (unsigned int)UsingPenCursors(v20, 1LL) )
    {
      _InterlockedOr((volatile signed __int32 *)&Feedback::gdwPointerCursorOps, v21);
      KeSetEvent(Feedback::gpevtPointerCursorOperation, v21, 0);
    }
    InputTraceLogging::ThreadLockedPerfRegion::ThreadLockedPerfRegion(
      (InputTraceLogging::ThreadLockedPerfRegion *)v41,
      "MoveCursor",
      0LL);
    EtwTraceGreMovePointerBegin(a6, (unsigned int)gptCursorAsync, (unsigned int)gptCursorAsync->y);
    v22 = KeQueryPerformanceCounter(0LL);
    v23 = v37;
    v37[2] = v22;
    GreMovePointer(*(HDEV *)(gpDispInfo + 40LL));
    v23[3] = KeQueryPerformanceCounter(0LL);
    EtwTraceGreMovePointerEnd(a6, (unsigned int)gptCursorAsync, (unsigned int)gptCursorAsync->y);
    InputTraceLogging::ThreadLockedPerfRegion::~ThreadLockedPerfRegion((InputTraceLogging::ThreadLockedPerfRegion *)v41);
    CCursorSizes::UpdateGlobalCursorSize(gpCursorSizes, gptCursorAsync, 0);
  }
  if ( !gProtocolType )
  {
    if ( LODWORD(WPP_MAIN_CB.Dpc.DeferredRoutine) )
      _InterlockedExchange(&gMouseTrailsToHide, LODWORD(WPP_MAIN_CB.Dpc.DeferredRoutine) + 1);
  }
  return v15;
}
