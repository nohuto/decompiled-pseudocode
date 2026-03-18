/*
 * XREFs of ?xxxMoveEventAbsolute@@YG?AW4_CommitMousePosAndMoveResult@@JJKPAXPAU_MOUSE_INPUT_DATA@@_K2HHHPAU_MousePacketPerf@@@Z @ 0xF0598
 * Callers:
 *     _EditionCommitMousePosAndMove@48 @ 0xACEC2 (_EditionCommitMousePosAndMove@48.c)
 * Callees:
 *     _PhkFirstValid@8 @ 0x12974 (_PhkFirstValid@8.c)
 *     _SetWakeBit@8 @ 0x44776 (_SetWakeBit@8.c)
 *     ?xxxCallHook2@@YGJPAUtagHOOK@@HIJPAH_N@Z @ 0x6A7C0 (-xxxCallHook2@@YGJPAUtagHOOK@@HIJPAH_N@Z.c)
 *     ?UpdateGlobalCursorSize@CCursorSizes@@QAEXPBUtagPOINT@@_N@Z @ 0x7B9CE (-UpdateGlobalCursorSize@CCursorSizes@@QAEXPBUtagPOINT@@_N@Z.c)
 *     _GreMovePointer@16 @ 0x7BA8A (_GreMovePointer@16.c)
 *     _UsingPenCursors@0 @ 0x7F404 (_UsingPenCursors@0.c)
 *     _EditionPostRawMouseInputMessage@24 @ 0xACE78 (_EditionPostRawMouseInputMessage@24.c)
 *     _RawInputRequestedForMouse@0 @ 0xACEA0 (_RawInputRequestedForMouse@0.c)
 *     ??1ThreadLockedPerfRegion@InputTraceLogging@@QAE@XZ @ 0xAFB6A (--1ThreadLockedPerfRegion@InputTraceLogging@@QAE@XZ.c)
 *     _TransitionCursorSuppressionState@8 @ 0xB0178 (_TransitionCursorSuppressionState@8.c)
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 *     ??0ThreadLockedPerfRegion@InputTraceLogging@@QAE@PBDPBU01@@Z @ 0xF0204 (--0ThreadLockedPerfRegion@InputTraceLogging@@QAE@PBDPBU01@@Z.c)
 *     ?RestoreMouseCursors@@YGXXZ @ 0x148B8D (-RestoreMouseCursors@@YGXXZ.c)
 */

// write access to const memory has been detected, the output may be wrong!
int __fastcall xxxMoveEventAbsolute(
        struct tagPOINT *a1,
        int a2,
        unsigned int a3,
        int a4,
        int a5,
        unsigned int a6,
        int a7,
        unsigned __int64 a8,
        int a9,
        int a10,
        int a11,
        LARGE_INTEGER *a12)
{
  int v13; // ecx
  int v14; // eax
  unsigned int v15; // eax
  int Valid; // esi
  unsigned int v17; // ecx
  int v18; // esi
  int v19; // ecx
  int v20; // edx
  int v22; // ebx
  int v23; // esi
  int i; // ecx
  int v25; // ecx
  int v26; // ecx
  int v27; // eax
  int v28; // edi
  LARGE_INTEGER PerformanceCounter; // rax
  LARGE_INTEGER *v30; // esi
  int *v31; // [esp+8h] [ebp-70h]
  bool v32; // [esp+Ch] [ebp-6Ch]
  int *v33; // [esp+14h] [ebp-64h] BYREF
  int v34; // [esp+18h] [ebp-60h]
  BOOL v35; // [esp+1Ch] [ebp-5Ch]
  int *v36; // [esp+20h] [ebp-58h] BYREF
  struct tagPOINT *v37; // [esp+24h] [ebp-54h]
  unsigned int v38; // [esp+28h] [ebp-50h] BYREF
  int v39; // [esp+2Ch] [ebp-4Ch]
  LONG v40; // [esp+30h] [ebp-48h]
  LARGE_INTEGER *v41; // [esp+34h] [ebp-44h]
  _DWORD v42[3]; // [esp+38h] [ebp-40h] BYREF
  int v43[6]; // [esp+44h] [ebp-34h] BYREF
  int v44[6]; // [esp+5Ch] [ebp-1Ch] BYREF

  v39 = a4;
  v37 = a1;
  v41 = a12;
  v40 = a2;
  v13 = *(_DWORD *)(_gptiRit + 372);
  v14 = **(_DWORD **)(_gptiRit + 252);
  v33 = 0;
  if ( ((*(_DWORD *)(v14 + 8) | v13) & 0x8000) != 0 )
  {
    InputTraceLogging::ThreadLockedPerfRegion::ThreadLockedPerfRegion(&v36, "LowLevelMouseMoveHook", 0);
    v43[0] = (int)v37;
    v43[3] = a9;
    v43[4] = a6;
    v15 = a3;
    v35 = 0;
    v38 = 0;
    v43[1] = a2;
    v43[2] = 0;
    if ( a5 && a3 == *(_DWORD *)(a5 + 20) && (*(_BYTE *)(a5 + 2) & 0x50) != 0 )
      v15 = (unsigned __int8)a3 | 0xFF515700;
    v43[5] = v15;
    EnterSharedCrit(0, 1);
    Valid = PhkFirstValid(_gptiRit, 14);
    UserSessionSwitchLeaveCrit();
    if ( Valid )
    {
      a12[4] = KeQueryPerformanceCounter(0);
      EnterCrit(0, 1);
      v17 = PhkFirstValid(_gptiRit, 14);
      if ( v17 )
      {
        v34 = _gptiCurrent;
        v18 = *(_DWORD *)(_gptiCurrent + 788);
        *(_DWORD *)(_gptiCurrent + 788) = v43;
        v35 = xxxCallHook2(0, v17, (struct tagHOOK *)0x200, v43, (int *)&v38, 0, v31, v32) != 0;
        v19 = *(_DWORD *)(v34 + 244);
        *(_DWORD *)(v34 + 788) = v18;
        v20 = *(unsigned __int16 *)(v19 + 4);
        if ( ((unsigned __int16)v20 & *(_WORD *)(v19 + 10) & 0xFDFF) != 0 )
          SetWakeBit(v34, v20 & 0xFFFFFDFF);
      }
      a12[5] = KeQueryPerformanceCounter(0);
      UserSessionSwitchLeaveCrit();
      if ( v35 )
      {
        InputTraceLogging::ThreadLockedPerfRegion::~ThreadLockedPerfRegion((InputTraceLogging::ThreadLockedPerfRegion *)&v36);
        return 0;
      }
    }
    InputTraceLogging::ThreadLockedPerfRegion::~ThreadLockedPerfRegion((InputTraceLogging::ThreadLockedPerfRegion *)&v36);
  }
  v22 = 1;
  if ( a5 )
  {
    EnterCrit(0, 1);
    v23 = gObjDummyLock;
    for ( i = 3; i; --i )
      v23 += 4;
    if ( RawInputRequestedForMouse() )
    {
      HIWORD(v44[0]) = 0;
      LOWORD(v44[0]) = *(_WORD *)(a5 + 2) & 0xFE7F;
      v44[1] = *(_DWORD *)(a5 + 4);
      v44[2] = *(_DWORD *)(a5 + 8);
      v44[3] = *(_DWORD *)(a5 + 12);
      v44[4] = *(_DWORD *)(a5 + 16);
      v44[5] = *(_DWORD *)(a5 + 20);
      v42[1] = v39;
      v42[2] = 0;
      v42[0] = v39 != 0 ? 2 : 0;
      if ( EditionPostRawMouseInputMessage(0, a8, a6, v42, v44) )
      {
        v22 = 9;
        *(_WORD *)a5 = -1;
      }
    }
    UserSessionSwitchLeaveCrit();
  }
  if ( (*(_BYTE *)(**(_DWORD **)(_gptiRit + 252) + 8) & 4) != 0 )
    return 0;
  if ( a10 && gCursorSuppressionState == 2 )
  {
    EnterCrit(0, 1);
    if ( gCursorSuppressionState == 2 )
      TransitionCursorSuppressionState(v25, 8, 1);
    UserSessionSwitchLeaveCrit();
  }
  _gptCursorAsync = v37;
  _gptCursorAsync->y = v40;
  if ( a11 )
    v26 = a5 && (*(_BYTE *)(a5 + 2) & 1) == 0;
  else
    v26 = 2;
  v27 = CCursorClip::BoundPoint(_gpCursorClip, _gptCursorAsync, _gptCursorAsync->y, v26, 0, _gptCursorAsync);
  if ( v27 == 2 )
  {
    v22 |= 2u;
  }
  else if ( v27 == 1 )
  {
    v22 |= 4u;
  }
  if ( a5 && (*(_WORD *)(a5 + 2) & 0x100) != 0 )
  {
    v28 = 2;
  }
  else if ( a9 )
  {
    v28 = 1;
  }
  else
  {
    v28 = (int)v33;
  }
  if ( a10 )
  {
    if ( UsingPenCursors() )
      RestoreMouseCursors();
    InputTraceLogging::ThreadLockedPerfRegion::ThreadLockedPerfRegion(&v33, "MoveCursor", 0);
    EtwTraceGreMovePointerBegin(a6, _gptCursorAsync, _gptCursorAsync->y);
    PerformanceCounter = KeQueryPerformanceCounter(0);
    v30 = v41;
    v41[2] = PerformanceCounter;
    GreMovePointer(*(_DWORD **)(_gpDispInfo + 20), (int)_gptCursorAsync, (HDEV)_gptCursorAsync->y, v28);
    v30[3] = KeQueryPerformanceCounter(0);
    EtwTraceGreMovePointerEnd(a6, _gptCursorAsync, _gptCursorAsync->y);
    InputTraceLogging::ThreadLockedPerfRegion::~ThreadLockedPerfRegion((InputTraceLogging::ThreadLockedPerfRegion *)&v33);
    CCursorSizes::UpdateGlobalCursorSize(gpCursorSizes, _gptCursorAsync, 0);
  }
  if ( !_gProtocolType )
  {
    if ( WPP_MAIN_CB.DeviceQueue.Lock )
      _InterlockedExchange(&gMouseTrailsToHide, WPP_MAIN_CB.DeviceQueue.Lock + 1);
  }
  return v22;
}
