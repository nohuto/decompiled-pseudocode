/*
 * XREFs of ?xxxMoveEventAbsolute@@YA?AW4_CommitMousePosAndMoveResult@@JJ_KPEAXPEAU_MOUSE_INPUT_DATA@@00HHHPEAU_MousePacketPerf@@@Z @ 0x1C0039F7C
 * Callers:
 *     EditionCommitMousePosAndMove @ 0x1C00398C0 (EditionCommitMousePosAndMove.c)
 * Callees:
 *     GreMovePointer @ 0x1C002B390 (GreMovePointer.c)
 *     EditionPostRawMouseInputMessage @ 0x1C0039980 (EditionPostRawMouseInputMessage.c)
 *     RawInputRequestedForMouse @ 0x1C0039F54 (RawInputRequestedForMouse.c)
 *     ?UpdateGlobalCursorSize@CCursorSizes@@QEAAXPEBUtagPOINT@@_N@Z @ 0x1C003B570 (-UpdateGlobalCursorSize@CCursorSizes@@QEAAXPEBUtagPOINT@@_N@Z.c)
 *     UsingPenCursors @ 0x1C003DD80 (UsingPenCursors.c)
 *     PhkFirstValid @ 0x1C0045FAC (PhkFirstValid.c)
 *     TransitionCursorSuppressionState @ 0x1C004A770 (TransitionCursorSuppressionState.c)
 *     SetWakeBit @ 0x1C008FD50 (SetWakeBit.c)
 *     ?xxxCallHook2@@YA_JPEAUtagHOOK@@H_K_JPEAH_N@Z @ 0x1C009A2E0 (-xxxCallHook2@@YA_JPEAUtagHOOK@@H_K_JPEAH_N@Z.c)
 *     ??1ThreadLockedPerfRegion@InputTraceLogging@@QEAA@XZ @ 0x1C00B2DE4 (--1ThreadLockedPerfRegion@InputTraceLogging@@QEAA@XZ.c)
 *     ??0ThreadLockedPerfRegion@InputTraceLogging@@QEAA@PEBDPEBU01@@Z @ 0x1C00B2E10 (--0ThreadLockedPerfRegion@InputTraceLogging@@QEAA@PEBDPEBU01@@Z.c)
 *     __security_check_cookie @ 0x1C0157760 (__security_check_cookie.c)
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
  int v16; // ebx
  __int64 v17; // xmm1_8
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r8
  int v22; // eax
  __int64 v23; // rcx
  unsigned int v24; // edx
  LARGE_INTEGER v25; // rax
  LARGE_INTEGER *v26; // rdi
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8
  int v31; // r14d
  __int64 Valid; // rbx
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // r8
  struct tagHOOK *v36; // rax
  __int64 v37; // rbx
  bool v38; // zf
  __int64 v39; // rax
  int v40; // edx
  LARGE_INTEGER PerformanceCounter; // rax
  LARGE_INTEGER *v42; // rcx
  __int64 v43; // rdx
  __int64 v44; // r8
  int v45; // [rsp+30h] [rbp-81h] BYREF
  LARGE_INTEGER *v46; // [rsp+38h] [rbp-79h]
  _BYTE v47[8]; // [rsp+40h] [rbp-71h] BYREF
  __int128 v48; // [rsp+48h] [rbp-69h] BYREF
  __int64 v49; // [rsp+58h] [rbp-59h]
  _BYTE v50[8]; // [rsp+60h] [rbp-51h] BYREF
  _WORD v51[2]; // [rsp+68h] [rbp-49h] BYREF
  int v52; // [rsp+6Ch] [rbp-45h]
  int v53; // [rsp+70h] [rbp-41h]
  int v54; // [rsp+74h] [rbp-3Dh]
  int v55; // [rsp+78h] [rbp-39h]
  int v56; // [rsp+7Ch] [rbp-35h]
  _DWORD v57[6]; // [rsp+80h] [rbp-31h] BYREF
  __int64 v58; // [rsp+98h] [rbp-19h]

  v46 = a11;
  if ( ((*(_DWORD *)(**(_QWORD **)(gptiRit + 456LL) + 16LL) | *(_DWORD *)(gptiRit + 672LL)) & 0x8000) != 0 )
  {
    InputTraceLogging::ThreadLockedPerfRegion::ThreadLockedPerfRegion(
      (InputTraceLogging::ThreadLockedPerfRegion *)v47,
      "LowLevelMouseMoveHook",
      0LL);
    v31 = 0;
    v57[3] = a8;
    v57[4] = a6;
    v57[5] = 0;
    v45 = 0;
    v57[0] = a1;
    v57[1] = a2;
    v57[2] = 0;
    if ( a5 && a3 == *(_DWORD *)(a5 + 20) && (*(_BYTE *)(a5 + 2) & 0x50) != 0 )
      a3 = (unsigned __int8)a3 | 0xFF515700LL;
    v58 = a3;
    EnterSharedCrit(0LL, 1LL);
    Valid = PhkFirstValid(gptiRit, 14LL);
    UserSessionSwitchLeaveCrit(v34, v33, v35);
    if ( Valid )
    {
      v46[4] = KeQueryPerformanceCounter(0LL);
      EnterCrit(0LL, 1LL);
      v36 = (struct tagHOOK *)PhkFirstValid(gptiRit, 14LL);
      if ( v36 )
      {
        v37 = *(_QWORD *)(gptiCurrent + 1368LL);
        *(_QWORD *)(gptiCurrent + 1368LL) = v57;
        v38 = xxxCallHook2(v36, 0, 0x200uLL, (__int64)v57, &v45, 0) == 0;
        *(_QWORD *)(gptiCurrent + 1368LL) = v37;
        v39 = *(_QWORD *)(gptiCurrent + 440LL);
        LOBYTE(v31) = !v38;
        v40 = *(unsigned __int16 *)(v39 + 4);
        if ( ((unsigned __int16)v40 & *(_WORD *)(v39 + 10) & 0xFDFF) != 0 )
          SetWakeBit(gptiCurrent, v40 & 0xFFFFFDFF);
      }
      PerformanceCounter = KeQueryPerformanceCounter(0LL);
      v42 = v46;
      v46[5] = PerformanceCounter;
      UserSessionSwitchLeaveCrit(v42, v43, v44);
      if ( v31 )
      {
        InputTraceLogging::ThreadLockedPerfRegion::~ThreadLockedPerfRegion((InputTraceLogging::ThreadLockedPerfRegion *)v47);
        return 0LL;
      }
    }
    InputTraceLogging::ThreadLockedPerfRegion::~ThreadLockedPerfRegion((InputTraceLogging::ThreadLockedPerfRegion *)v47);
  }
  v15 = 1;
  v16 = 2;
  if ( a5 )
  {
    EnterCrit(0LL, 1LL);
    v17 = *((_QWORD *)&gObjDummyLock + 2);
    v48 = gObjDummyLock;
    v49 = v17;
    if ( (unsigned int)RawInputRequestedForMouse() )
    {
      v51[0] = *(_WORD *)(a5 + 2) & 0xFE7F;
      v52 = *(_DWORD *)(a5 + 4);
      v53 = *(_DWORD *)(a5 + 8);
      v54 = *(_DWORD *)(a5 + 12);
      v55 = *(_DWORD *)(a5 + 16);
      v56 = *(_DWORD *)(a5 + 20);
      v51[1] = 0;
      *((_QWORD *)&v48 + 1) = a4;
      v49 = 0LL;
      *(_QWORD *)&v48 = a4 != 0 ? 2uLL : 0;
      if ( (unsigned int)EditionPostRawMouseInputMessage(0LL, a7, a6, (__int64)&v48, (__int64)v51) )
      {
        v15 = 9;
        *(_WORD *)a5 = -1;
      }
    }
    UserSessionSwitchLeaveCrit(v19, v18, v20);
  }
  if ( (*(_DWORD *)(**(_QWORD **)(gptiRit + 456LL) + 16LL) & 4) != 0 )
    return 0LL;
  if ( a9 && gCursorSuppressionState == 2 )
  {
    EnterCrit(0LL, 1LL);
    if ( gCursorSuppressionState == 2 )
      TransitionCursorSuppressionState(8LL);
    UserSessionSwitchLeaveCrit(v29, v28, v30);
  }
  LODWORD(gptCursorAsync) = a1;
  gptCursorAsync->y = a2;
  if ( a10 )
  {
    if ( !a5 || (v21 = 1LL, (*(_BYTE *)(a5 + 2) & 1) != 0) )
      v21 = 0LL;
  }
  else
  {
    v21 = 2LL;
  }
  v22 = CCursorClip::BoundPoint(gpCursorClip, gptCursorAsync, v21, 0LL, gptCursorAsync);
  if ( v22 == 2 )
  {
    v15 |= 2u;
  }
  else if ( v22 == 1 )
  {
    v15 |= 4u;
  }
  if ( !a5 || (v23 = 256LL, (*(_WORD *)(a5 + 2) & 0x100) == 0) )
    v16 = a8 != 0;
  if ( a9 )
  {
    if ( (unsigned int)UsingPenCursors(v23, 1LL) )
    {
      _InterlockedOr((volatile signed __int32 *)&Feedback::gdwPointerCursorOps, v24);
      KeSetEvent(Feedback::gpevtPointerCursorOperation, v24, 0);
    }
    InputTraceLogging::ThreadLockedPerfRegion::ThreadLockedPerfRegion(
      (InputTraceLogging::ThreadLockedPerfRegion *)v50,
      "MoveCursor",
      0LL);
    EtwTraceGreMovePointerBegin(a6, (unsigned int)gptCursorAsync, (unsigned int)gptCursorAsync->y);
    v25 = KeQueryPerformanceCounter(0LL);
    v26 = v46;
    v46[2] = v25;
    GreMovePointer(*(HDEV *)(gpDispInfo + 40LL), (int)gptCursorAsync, gptCursorAsync->y, v16);
    v26[3] = KeQueryPerformanceCounter(0LL);
    EtwTraceGreMovePointerEnd(a6, (unsigned int)gptCursorAsync, (unsigned int)gptCursorAsync->y);
    InputTraceLogging::ThreadLockedPerfRegion::~ThreadLockedPerfRegion((InputTraceLogging::ThreadLockedPerfRegion *)v50);
    CCursorSizes::UpdateGlobalCursorSize(gpCursorSizes, gptCursorAsync, 0);
  }
  if ( !gProtocolType )
  {
    if ( LODWORD(WPP_MAIN_CB.Dpc.ProcessorHistory) )
      _InterlockedExchange(&gMouseTrailsToHide, LODWORD(WPP_MAIN_CB.Dpc.ProcessorHistory) + 1);
  }
  return v15;
}
