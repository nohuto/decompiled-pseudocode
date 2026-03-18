/*
 * XREFs of ?xxxMouseEventDirect@@YAHKKKK_K00H@Z @ 0x1C00BD284
 * Callers:
 *     xxxSendInput @ 0x1C00BA53C (xxxSendInput.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0040298 (WPP_RECORDER_SF_.c)
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C0055C10 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     ?IsGpqForegroundAccessibleCurrent@@YAHH@Z @ 0x1C00BAA7C (-IsGpqForegroundAccessibleCurrent@@YAHH@Z.c)
 *     CheckGrantedAccess @ 0x1C00BD804 (CheckGrantedAccess.c)
 *     UserSetLastError @ 0x1C00D60E0 (UserSetLastError.c)
 *     ?MSGLUA_GPQFOREGROUND@@YAXXZ @ 0x1C00E7C7C (-MSGLUA_GPQFOREGROUND@@YAXXZ.c)
 *     GetScreenRect @ 0x1C0119754 (GetScreenRect.c)
 *     __security_check_cookie @ 0x1C015A0C0 (__security_check_cookie.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapSz@D@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapSz@D@@@Z @ 0x1C01D7E5C (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapSz@D@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t.c)
 *     WPP_RECORDER_SF_D @ 0x1C01D9440 (WPP_RECORDER_SF_D.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall xxxMouseEventDirect(
        unsigned int a,
        unsigned int a2,
        int a3,
        int a4,
        unsigned __int64 a5,
        unsigned __int64 a6,
        unsigned __int64 a7,
        int a8)
{
  int v8; // r12d
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  int v16; // ecx
  unsigned __int64 v17; // r14
  LARGE_INTEGER PerformanceCounter; // rdx
  int v19; // r10d
  BOOL v20; // ecx
  int v21; // r9d
  unsigned int v22; // eax
  int v23; // r8d
  unsigned int v24; // edx
  unsigned int v25; // edx
  __int16 v26; // ax
  int v27; // esi
  int v28; // ecx
  __int16 v29; // ax
  __int64 v30; // rcx
  INT v31; // eax
  __int64 v32; // rcx
  int v33; // eax
  ULONG v35; // eax
  int v36; // edx
  int v37; // ecx
  int v38; // r9d
  ULONG v39; // eax
  int v40; // r9d
  int v41; // ecx
  int v42; // ecx
  __m128i v43; // xmm6
  int v44; // ebx
  int v45; // eax
  int v46; // ebx
  __int64 v47; // rcx
  unsigned int CurrentThreadDpiAwarenessContext; // eax
  __m128i v49; // xmm6
  int v50; // eax
  int v51; // eax
  unsigned int aa; // [rsp+38h] [rbp-71h]
  __int64 v53; // [rsp+40h] [rbp-69h] BYREF
  _DWORD v54[2]; // [rsp+48h] [rbp-61h] BYREF
  LARGE_INTEGER v55; // [rsp+50h] [rbp-59h]
  __int64 v56; // [rsp+58h] [rbp-51h] BYREF
  __int64 QuadPart; // [rsp+60h] [rbp-49h] BYREF
  char v58[16]; // [rsp+68h] [rbp-41h] BYREF
  __int16 v59; // [rsp+78h] [rbp-31h] BYREF
  __int16 v60; // [rsp+7Ah] [rbp-2Fh]
  unsigned int v61; // [rsp+7Ch] [rbp-2Dh]
  int v62; // [rsp+80h] [rbp-29h]
  unsigned __int64 v63; // [rsp+84h] [rbp-25h]
  int v64; // [rsp+8Ch] [rbp-1Dh]

  v8 = 0;
  v60 = 0;
  aa = a2;
  if ( *(_QWORD *)(gptiCurrent + 456LL) != grpdeskRitInput )
  {
    v35 = RtlNtStatusToDosError(-1073741790);
    UserSetLastError(v35);
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v38 = 21;
LABEL_57:
      LOBYTE(v36) = 2;
      WPP_RECORDER_SF_(v37, v36, 20, v38, (__int64)&WPP_630c8375e76c3e1e29d982db09ca2999_Traceguids);
    }
    return 0LL;
  }
  if ( !(unsigned int)CheckGrantedAccess(*(unsigned int *)(gptiCurrent + 888LL), 32LL)
    && PsGetCurrentProcess(v14, v13, v15) != gpepCSRSS )
  {
    v39 = RtlNtStatusToDosError(-1073741790);
    UserSetLastError(v39);
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v38 = 22;
      goto LABEL_57;
    }
    return 0LL;
  }
  v16 = gptiBlockInput;
  if ( gptiBlockInput && gptiBlockInput != gptiCurrent )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v40 = 23;
LABEL_63:
      LOBYTE(v13) = 2;
      WPP_RECORDER_SF_(v16, v13, 20, v40, (__int64)&WPP_630c8375e76c3e1e29d982db09ca2999_Traceguids);
      return 1LL;
    }
    return 1LL;
  }
  if ( !(unsigned int)IsGpqForegroundAccessibleCurrent(1u) )
  {
    MSGLUA_GPQFOREGROUND();
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v40 = 24;
      goto LABEL_63;
    }
    return 1LL;
  }
  v17 = a5;
  EtwTraceBeginInjectMouse((unsigned int)a5, a, a2);
  if ( a5 )
  {
    PerformanceCounter.QuadPart = a6;
  }
  else
  {
    v17 = (((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
         * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64;
    PerformanceCounter = KeQueryPerformanceCounter(0LL);
  }
  v55 = PerformanceCounter;
  if ( (unsigned int)dword_1C032FB30 > 4 && (qword_1C032FB40 & 0x40) != 0 && (qword_1C032FB48 & 0x40) == qword_1C032FB48 )
  {
    QuadPart = PerformanceCounter.QuadPart;
    v56 = (__int64)"SendInput";
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapSz<char>>(
      (int)&dword_1C032FB30,
      (__int64)&QuadPart,
      (__int64)&v56);
  }
  v19 = a4 & 0x40000;
  gppiInputProvider = *(_QWORD *)(gptiCurrent + 424LL);
  v20 = (a4 & 0x40000) != 0;
  v21 = a4 & 0x10000;
  v22 = v20 + 1;
  if ( (a4 & 0x10000) == 0 )
    v22 = (a4 & 0x40000) != 0;
  if ( v22 > 1 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(PerformanceCounter.LowPart) = 2;
      WPP_RECORDER_SF_D(
        v20,
        PerformanceCounter.LowPart,
        20,
        25,
        (__int64)&WPP_630c8375e76c3e1e29d982db09ca2999_Traceguids,
        a4);
    }
    return 0LL;
  }
  v23 = 0;
  v24 = a4 & 0x187E;
  if ( ((a4 & 0x800) != 0 || (a4 & 0x1000) != 0) && (a4 & 0x180) != 0 )
  {
    v24 = a4 & 0x7E;
  }
  else if ( (a4 & 0x1800) == 0x1800 )
  {
    v24 = a4 & 0x7E;
  }
  else if ( (a4 & 0x1800) != 0 )
  {
    if ( a3 > 32766 )
    {
      v23 = 0x7FFF;
    }
    else
    {
      v23 = a3;
      if ( a3 < -32768 )
        v23 = -32768;
    }
  }
  else if ( (a3 & 0xFFFFFFFC) == 0 )
  {
    if ( (a4 & 0x80u) != 0 )
    {
      v41 = v24 | 0x80;
      if ( (a3 & 1) == 0 )
        v41 = a4 & 0x187E;
      v24 = v41;
      if ( (a3 & 2) != 0 )
        v24 = v41 | 0x200;
    }
    if ( (a4 & 0x100) != 0 )
    {
      v42 = v24 | 0x100;
      if ( (a3 & 1) == 0 )
        v42 = v24;
      v24 = v42;
      if ( (a3 & 2) != 0 )
        v24 = v42 | 0x400;
    }
  }
  v25 = v24 >> 1;
  v59 = -2;
  v26 = (a4 & 0x8000) != 0;
  v60 = v26;
  if ( (a4 & 0x4000) != 0 )
  {
    v26 |= 2u;
    v60 = v26;
  }
  if ( (a4 & 0x2000) != 0 )
  {
    v26 |= 8u;
    v60 = v26;
  }
  if ( (a4 & 0x20000) != 0 )
  {
    v26 |= 0x20u;
    v60 = v26;
  }
  v27 = 16;
  if ( v21 )
  {
    v26 |= 0x10u;
    v60 = v26;
  }
  v28 = 0;
  if ( v19 )
    v60 = v26 | 0x40;
  v61 = v25;
  v29 = HIWORD(v25);
  if ( !v19 )
  {
    LOBYTE(v28) = v21 == 0;
    v8 = v28;
  }
  v30 = 49153LL;
  if ( v23 )
    v29 = v23;
  HIWORD(v61) = v29;
  if ( (a4 & 0xC001) != 0xC001
    || (W32GetCurrentThreadDpiAwarenessContext(49153LL) & 0xF) == 2
    || (v30 = gpDispInfo, *(_DWORD *)*gpDispInfo <= 1u) )
  {
    v31 = aa;
  }
  else
  {
    v43 = *(__m128i *)GetScreenRect(v58);
    v44 = _mm_cvtsi128_si32(v43);
    v45 = v44 + EngMulDiv(a, _mm_cvtsi128_si32(_mm_srli_si128(v43, 8)) - v44, 0xFFFF);
    v46 = _mm_cvtsi128_si32(_mm_srli_si128(v43, 4));
    v54[0] = v45;
    v53 = 0LL;
    v54[1] = v46 + EngMulDiv(aa, _mm_cvtsi128_si32(_mm_srli_si128(v43, 12)) - v46, 0xFFFF);
    CurrentThreadDpiAwarenessContext = W32GetCurrentThreadDpiAwarenessContext(v47);
    LogicalToPhysicalDPIPoint(&v53, v54, CurrentThreadDpiAwarenessContext, 0LL);
    v49 = *(__m128i *)(*gpDispInfo + 24LL);
    v50 = _mm_cvtsi128_si32(v49);
    a = EngMulDiv(v53 - v50, 0xFFFF, _mm_cvtsi128_si32(_mm_srli_si128(v49, 8)) - v50);
    v51 = _mm_cvtsi128_si32(_mm_srli_si128(v49, 4));
    v31 = EngMulDiv(HIDWORD(v53) - v51, 0xFFFF, _mm_cvtsi128_si32(_mm_srli_si128(v49, 12)) - v51);
    aa = v31;
  }
  v64 = a7;
  v62 = 0;
  v63 = __PAIR64__(v31, a);
  if ( gdwInAtomicOperation )
  {
    v30 = gdwExtraInstrumentations;
    if ( (gdwExtraInstrumentations & 1) != 0 )
      KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
  }
  UserSessionSwitchLeaveCrit(v30);
  if ( (a4 & 1) != 0 )
  {
    if ( !v8 )
      v27 = 18;
  }
  else
  {
    v63 = 0LL;
    v60 &= ~1u;
    v27 = 24;
  }
  if ( (unsigned __int8)Enforced(v32) && *(int *)(*(_QWORD *)(gptiCurrent + 424LL) + 12LL) < 0 )
    v27 |= 0x40u;
  v33 = v27 | 0x100;
  if ( a8 )
    v33 = v27;
  ((void (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _DWORD, _QWORD))SynthesizeMouseInput)(
    0LL,
    &v59,
    v17,
    (LARGE_INTEGER)v55.QuadPart,
    v33,
    0LL);
  if ( a8 )
    ProcessMouseEvent();
  EnterCrit(0LL, 1LL);
  if ( (gdwPUDFlags & 0x100) != 0 )
    ResetAccessibilityCountersOnMouseInput();
  EtwTraceEndInjectMouse((unsigned int)v17, a, aa);
  return 1LL;
}
