/*
 * XREFs of ?xxxMouseEventDirect@@YGHKKKK_K0KH@Z @ 0xAF5BA
 * Callers:
 *     _xxxSendInput@8 @ 0xAFB7E (_xxxSendInput@8.c)
 * Callees:
 *     _WPP_RECORDER_SF_@20 @ 0x1B668 (_WPP_RECORDER_SF_@20.c)
 *     _CheckGrantedAccess@8 @ 0x2A3D4 (_CheckGrantedAccess@8.c)
 *     _W32GetCurrentThreadDpiAwarenessContext@0 @ 0x68610 (_W32GetCurrentThreadDpiAwarenessContext@0.c)
 *     _UserSetLastError@4 @ 0x81122 (_UserSetLastError@4.c)
 *     ?IsGpqForegroundAccessibleCurrent@@YGHH@Z @ 0xAFF1C (-IsGpqForegroundAccessibleCurrent@@YGHH@Z.c)
 *     __tlgKeywordOn@12 @ 0xB223C (__tlgKeywordOn@12.c)
 *     ?MSGLUA_GPQFOREGROUND@@YGXXZ @ 0xC5904 (-MSGLUA_GPQFOREGROUND@@YGXXZ.c)
 *     _GetScreenRect@0 @ 0xCB540 (_GetScreenRect@0.c)
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 *     ??$Write@U?$_tlgWrapperByRef@$07@@U?$_tlgWrapSz@D@@@?$_tlgWriteTemplate@$$A6GJPBU_tlgProvider_t@@PBXPBU_GUID@@2IPAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YGJ0122I3@ZPBU2@PBU2@@@SGJPBU_tlgProvider_t@@PBXPBU_GUID@@2ABU?$_tlgWrapperByRef@$07@@ABU?$_tlgWrapSz@D@@@Z @ 0x146888 (--$Write@U-$_tlgWrapperByRef@$07@@U-$_tlgWrapSz@D@@@-$_tlgWriteTemplate@$$A6GJPBU_tlgProvider_t@.c)
 *     _WPP_RECORDER_SF_D@24 @ 0x147D5C (_WPP_RECORDER_SF_D@24.c)
 */

// write access to const memory has been detected, the output may be wrong!
int __userpurge xxxMouseEventDirect@<eax>(
        INT a1@<edx>,
        INT a2@<ecx>,
        signed int a3,
        unsigned int a4,
        __int64 a5,
        unsigned __int64 a6,
        unsigned __int64 a7,
        unsigned int a8,
        int a9)
{
  int v9; // edi
  unsigned int v11; // ecx
  int v12; // esi
  LARGE_INTEGER PerformanceCounter; // rax
  LARGE_INTEGER v14; // kr08_8
  char v15; // bl
  unsigned int v16; // esi
  unsigned int v17; // eax
  signed int v18; // edi
  unsigned int v19; // edx
  unsigned __int8 v20; // cl
  unsigned int v21; // edx
  BOOL v22; // esi
  int v23; // ebx
  int v24; // esi
  struct _NT_TIB *v26; // eax
  struct _NT_TIB *v27; // eax
  int v28; // ecx
  __int16 v29; // ax
  LARGE_INTEGER *ScreenRect; // eax
  INT v31; // eax
  INT v32; // eax
  int CurrentThreadDpiAwarenessContext; // eax
  int v34; // esi
  INT v35; // eax
  int v36; // [esp-4h] [ebp-8Ch]
  int v37; // [esp+0h] [ebp-88h]
  _DWORD v38[2]; // [esp+20h] [ebp-68h] BYREF
  int v39; // [esp+28h] [ebp-60h] BYREF
  int v40; // [esp+2Ch] [ebp-5Ch] BYREF
  int v41; // [esp+30h] [ebp-58h]
  int v42; // [esp+34h] [ebp-54h]
  DWORD LowPart; // [esp+38h] [ebp-50h]
  LONG HighPart; // [esp+3Ch] [ebp-4Ch]
  int v45; // [esp+40h] [ebp-48h]
  int v46; // [esp+44h] [ebp-44h]
  DWORD v47; // [esp+48h] [ebp-40h]
  LONG v48; // [esp+4Ch] [ebp-3Ch]
  LARGE_INTEGER v49; // [esp+50h] [ebp-38h] BYREF
  int v50; // [esp+58h] [ebp-30h]
  int v51; // [esp+5Ch] [ebp-2Ch] BYREF
  INT v52; // [esp+60h] [ebp-28h]
  INT a; // [esp+64h] [ebp-24h]
  int v54; // [esp+68h] [ebp-20h]
  __int16 v55; // [esp+6Ch] [ebp-1Ch] BYREF
  __int16 v56; // [esp+6Eh] [ebp-1Ah]
  unsigned int v57; // [esp+70h] [ebp-18h]
  int v58; // [esp+74h] [ebp-14h]
  INT v59; // [esp+78h] [ebp-10h]
  INT v60; // [esp+7Ch] [ebp-Ch]
  int v61; // [esp+80h] [ebp-8h]

  a = a2;
  v56 = 0;
  v9 = _gptiCurrent;
  v52 = a1;
  v45 = _gptiCurrent;
  if ( *(_DWORD *)(_gptiCurrent + 248) != _grpdeskRitInput )
  {
    v26 = (struct _NT_TIB *)RtlNtStatusToDosError(-1073741790);
    UserSetLastError(v26);
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_(20, 21, &WPP_630c8375e76c3e1e29d982db09ca2999_Traceguids);
    return 0;
  }
  if ( !CheckGrantedAccess(*(_DWORD *)(_gptiCurrent + 496), 0x20u) && PsGetCurrentProcess() != _gpepCSRSS )
  {
    v27 = (struct _NT_TIB *)RtlNtStatusToDosError(-1073741790);
    UserSetLastError(v27);
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_(20, 22, &WPP_630c8375e76c3e1e29d982db09ca2999_Traceguids);
    return 0;
  }
  if ( _gptiBlockInput && _gptiBlockInput != _gptiCurrent )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_(20, 23, &WPP_630c8375e76c3e1e29d982db09ca2999_Traceguids);
    return 1;
  }
  if ( !IsGpqForegroundAccessibleCurrent(v37) )
  {
    MSGLUA_GPQFOREGROUND();
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_(20, 24, &WPP_630c8375e76c3e1e29d982db09ca2999_Traceguids);
    return 1;
  }
  v50 = a5;
  EtwTraceBeginInjectMouse(a5, a, a1);
  v42 = HIDWORD(a5);
  if ( a5 )
  {
    v14.QuadPart = a6;
    LowPart = a6;
  }
  else
  {
    v50 = MEMORY[0xFFDF0004];
    v11 = MEMORY[0xFFDF0324];
    v54 = MEMORY[0xFFDF0320];
    if ( MEMORY[0xFFDF0324] != MEMORY[0xFFDF0328] )
    {
      do
      {
        _mm_pause();
        v11 = MEMORY[0xFFDF0324];
        v54 = MEMORY[0xFFDF0320];
      }
      while ( MEMORY[0xFFDF0324] != MEMORY[0xFFDF0328] );
      v9 = v45;
    }
    v12 = ((((unsigned int)v50 * (unsigned __int64)(unsigned int)v54) >> 24)
         + (((unsigned int)MEMORY[0xFFDF0004] * (unsigned __int64)v11) << 8)) >> 32;
    v50 = (((unsigned int)v50 * (unsigned __int64)(unsigned int)v54) >> 24) + ((MEMORY[0xFFDF0004] * v11) << 8);
    v42 = v12;
    PerformanceCounter = KeQueryPerformanceCounter(0);
    LowPart = PerformanceCounter.LowPart;
    v14 = PerformanceCounter;
  }
  HighPart = v14.HighPart;
  v46 = 64;
  if ( (unsigned int)dword_2689E8 > 4 && (unsigned __int8)_tlgKeywordOn(64, 0) )
  {
    v49 = v14;
    v39 = (int)&v49;
    v51 = (int)"SendInput";
    _tlgWriteTemplate<long __stdcall (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByRef<8>,_tlgWrapSz<char>>(
      (int)&dword_2689E8,
      (int)&unk_25406A,
      v28,
      v28,
      (int)&v39,
      (int)&v51);
  }
  v15 = a4;
  v16 = a4 & 0x40000;
  _gppiInputProvider = *(_DWORD *)(v9 + 232);
  v17 = (a4 & 0x40000) != 0;
  v51 = a4 & 0x10000;
  if ( (a4 & 0x10000) != 0 )
    ++v17;
  if ( v17 > 1 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_D(20, 25, &WPP_630c8375e76c3e1e29d982db09ca2999_Traceguids, a4);
    return 0;
  }
  v18 = 0;
  v54 = 2;
  v19 = a4 & 0x187E;
  if ( ((a4 & 0x800) != 0 || (a4 & 0x1000) != 0) && (a4 & 0x180) != 0 )
  {
    v19 = a4 & 0x7E;
  }
  else if ( (a4 & 0x1800) == 0x1800 )
  {
    v19 = a4 & 0x7E;
  }
  else if ( (a4 & 0x1800) != 0 )
  {
    if ( a3 < -32768 )
    {
      v18 = -32768;
    }
    else
    {
      v18 = 0x7FFF;
      if ( a3 < 0x7FFF )
        v18 = a3;
    }
  }
  else if ( (a3 & 0xFFFFFFFC) == 0 )
  {
    if ( (a4 & 0x80u) != 0 )
    {
      if ( (a3 & 1) != 0 )
        v19 |= 0x80u;
      v20 = v54;
      if ( ((unsigned __int8)a3 & (unsigned __int8)v54) != 0 )
        v19 |= 0x200u;
    }
    else
    {
      v20 = v54;
    }
    if ( (a4 & 0x100) != 0 )
    {
      if ( (a3 & 1) != 0 )
        v19 |= 0x100u;
      if ( ((unsigned __int8)a3 & v20) != 0 )
        v19 |= 0x400u;
    }
  }
  v21 = v19 >> 1;
  v55 = -2;
  v29 = (a4 & 0x8000) != 0;
  v56 = v29;
  if ( (a4 & 0x4000) != 0 )
  {
    v29 |= v54;
    v56 = v29;
  }
  if ( (a4 & 0x2000) != 0 )
  {
    v29 |= 8u;
    v56 = v29;
  }
  if ( ((unsigned int)&loc_20000 & a4) != 0 )
  {
    v29 |= 0x20u;
    v56 = v29;
  }
  if ( v51 )
  {
    v29 |= 0x10u;
    v56 = v29;
  }
  if ( v16 )
    v56 = v46 | v29;
  v57 = v21;
  v22 = v16 == 0 && v51 == 0;
  v46 = v22;
  if ( v18 )
    HIWORD(v57) = v18;
  if ( (a4 & 0xC001) == 0xC001
    && (W32GetCurrentThreadDpiAwarenessContext() & 0xF) != (_BYTE)v54
    && *(_DWORD *)*_gpDispInfo > 1u )
  {
    ScreenRect = (LARGE_INTEGER *)GetScreenRect();
    v47 = ScreenRect->LowPart;
    v48 = ScreenRect->HighPart;
    v49 = ScreenRect[1];
    v31 = EngMulDiv(a, v49.LowPart - v47, 0xFFFF);
    v38[0] = v47 + v31;
    v32 = EngMulDiv(v52, v49.HighPart - v48, 0xFFFF);
    v38[1] = v48 + v32;
    v40 = 0;
    v41 = 0;
    CurrentThreadDpiAwarenessContext = W32GetCurrentThreadDpiAwarenessContext();
    LogicalToPhysicalDPIPoint(&v40, v38, CurrentThreadDpiAwarenessContext, 0);
    v34 = *_gpDispInfo + 12;
    v47 = *(_DWORD *)v34;
    v34 += 4;
    v48 = *(_DWORD *)v34;
    v49 = *(LARGE_INTEGER *)(v34 + 4);
    a = EngMulDiv(v40 - v47, 0xFFFF, v49.LowPart - v47);
    v35 = EngMulDiv(v41 - v48, 0xFFFF, v49.HighPart - v48);
    v15 = a4;
    v22 = v46;
    v52 = v35;
  }
  v59 = a;
  v60 = v52;
  v61 = a7;
  v58 = 0;
  if ( _gdwInAtomicOperation && (_gdwExtraInstrumentations & 1) != 0 )
    KeBugCheckEx(0x160u, _gdwInAtomicOperation, 0, 0, 0);
  UserSessionSwitchLeaveCrit();
  if ( (v15 & 1) != 0 )
  {
    if ( v22 )
      v36 = 16;
    else
      v36 = 18;
  }
  else
  {
    v59 = 0;
    v56 &= ~1u;
    v60 = 0;
    v36 = 24;
  }
  v23 = v36;
  if ( (unsigned __int8)Enforced() && *(int *)(*(_DWORD *)(v45 + 232) + 8) < 0 )
    v23 = v36 | 0x40;
  if ( !HIDWORD(a7) )
    v23 |= 0x100u;
  v24 = v50;
  SynthesizeMouseInput(0, &v55, v50, v42, LowPart, HighPart, v23, 0);
  if ( HIDWORD(a7) )
    ProcessMouseEvent();
  EnterCrit(0, 1);
  if ( (_gdwPUDFlags & 0x100) != 0 )
    ResetAccessibilityCountersOnMouseInput();
  EtwTraceEndInjectMouse(v24, a, v52);
  return 1;
}
