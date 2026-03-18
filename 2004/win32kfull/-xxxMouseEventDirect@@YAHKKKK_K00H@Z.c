/*
 * XREFs of ?xxxMouseEventDirect@@YAHKKKK_K00H@Z @ 0x1C003A428
 * Callers:
 *     xxxSendInput @ 0x1C003A9BC (xxxSendInput.c)
 * Callees:
 *     ?IsGpqForegroundAccessibleCurrent@@YAHH@Z @ 0x1C003AEFC (-IsGpqForegroundAccessibleCurrent@@YAHH@Z.c)
 *     CheckGrantedAccess @ 0x1C003B114 (CheckGrantedAccess.c)
 *     UserSetLastError @ 0x1C0090F00 (UserSetLastError.c)
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C0099F30 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     WPP_RECORDER_SF_ @ 0x1C00B1838 (WPP_RECORDER_SF_.c)
 *     ?MSGLUA_GPQFOREGROUND@@YAXXZ @ 0x1C00EB62C (-MSGLUA_GPQFOREGROUND@@YAXXZ.c)
 *     GetScreenRect @ 0x1C0118904 (GetScreenRect.c)
 *     __security_check_cookie @ 0x1C0157760 (__security_check_cookie.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapSz@D@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapSz@D@@@Z @ 0x1C01D8B1C (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapSz@D@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t.c)
 *     WPP_RECORDER_SF_D @ 0x1C01DA100 (WPP_RECORDER_SF_D.c)
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
  int v13; // edx
  int v14; // ecx
  unsigned __int64 v15; // r14
  LARGE_INTEGER PerformanceCounter; // rdx
  int v17; // r10d
  BOOL v18; // ecx
  int v19; // r9d
  unsigned int v20; // eax
  __int64 v21; // r8
  unsigned int v22; // edx
  unsigned int v23; // edx
  __int16 v24; // ax
  int v25; // esi
  int v26; // ecx
  __int16 v27; // ax
  __int64 v28; // rcx
  INT v29; // eax
  int v30; // eax
  ULONG v32; // eax
  int v33; // edx
  int v34; // ecx
  int v35; // r9d
  ULONG v36; // eax
  int v37; // r9d
  int v38; // ecx
  int v39; // ecx
  __m128i v40; // xmm6
  int v41; // ebx
  int v42; // eax
  int v43; // ebx
  __int64 v44; // rcx
  unsigned int CurrentThreadDpiAwarenessContext; // eax
  __m128i v46; // xmm6
  int v47; // eax
  int v48; // eax
  unsigned int aa; // [rsp+38h] [rbp-71h]
  __int64 v50; // [rsp+40h] [rbp-69h] BYREF
  _DWORD v51[2]; // [rsp+48h] [rbp-61h] BYREF
  LARGE_INTEGER v52; // [rsp+50h] [rbp-59h]
  __int64 v53; // [rsp+58h] [rbp-51h] BYREF
  __int64 QuadPart; // [rsp+60h] [rbp-49h] BYREF
  char v55[16]; // [rsp+68h] [rbp-41h] BYREF
  __int16 v56; // [rsp+78h] [rbp-31h] BYREF
  __int16 v57; // [rsp+7Ah] [rbp-2Fh]
  unsigned int v58; // [rsp+7Ch] [rbp-2Dh]
  int v59; // [rsp+80h] [rbp-29h]
  unsigned __int64 v60; // [rsp+84h] [rbp-25h]
  int v61; // [rsp+8Ch] [rbp-1Dh]

  v8 = 0;
  v57 = 0;
  aa = a2;
  if ( *(_QWORD *)(gptiCurrent + 448LL) != grpdeskRitInput )
  {
    v32 = RtlNtStatusToDosError(-1073741790);
    UserSetLastError(v32);
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v35 = 21;
LABEL_57:
      LOBYTE(v33) = 2;
      WPP_RECORDER_SF_(v34, v33, 20, v35, (__int64)&WPP_630c8375e76c3e1e29d982db09ca2999_Traceguids);
    }
    return 0LL;
  }
  if ( !(unsigned int)CheckGrantedAccess(*(unsigned int *)(gptiCurrent + 880LL), 32LL)
    && PsGetCurrentProcess() != gpepCSRSS )
  {
    v36 = RtlNtStatusToDosError(-1073741790);
    UserSetLastError(v36);
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v35 = 22;
      goto LABEL_57;
    }
    return 0LL;
  }
  v14 = gptiBlockInput;
  if ( gptiBlockInput && gptiBlockInput != gptiCurrent )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v37 = 23;
LABEL_63:
      LOBYTE(v13) = 2;
      WPP_RECORDER_SF_(v14, v13, 20, v37, (__int64)&WPP_630c8375e76c3e1e29d982db09ca2999_Traceguids);
      return 1LL;
    }
    return 1LL;
  }
  if ( !(unsigned int)IsGpqForegroundAccessibleCurrent(1) )
  {
    MSGLUA_GPQFOREGROUND();
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v37 = 24;
      goto LABEL_63;
    }
    return 1LL;
  }
  v15 = a5;
  EtwTraceBeginInjectMouse((unsigned int)a5, a, a2);
  if ( a5 )
  {
    PerformanceCounter.QuadPart = a6;
  }
  else
  {
    v15 = (((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
         * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64;
    PerformanceCounter = KeQueryPerformanceCounter(0LL);
  }
  v52 = PerformanceCounter;
  if ( (unsigned int)dword_1C0330B30 > 4 && (qword_1C0330B40 & 0x40) != 0 && (qword_1C0330B48 & 0x40) == qword_1C0330B48 )
  {
    QuadPart = PerformanceCounter.QuadPart;
    v53 = (__int64)"SendInput";
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapSz<char>>(
      (int)&dword_1C0330B30,
      (__int64)&QuadPart,
      (__int64)&v53);
  }
  v17 = a4 & 0x40000;
  gppiInputProvider = *(_QWORD *)(gptiCurrent + 416LL);
  v18 = (a4 & 0x40000) != 0;
  v19 = a4 & 0x10000;
  v20 = v18 + 1;
  if ( (a4 & 0x10000) == 0 )
    v20 = (a4 & 0x40000) != 0;
  if ( v20 > 1 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(PerformanceCounter.LowPart) = 2;
      WPP_RECORDER_SF_D(
        v18,
        PerformanceCounter.LowPart,
        20,
        25,
        (__int64)&WPP_630c8375e76c3e1e29d982db09ca2999_Traceguids,
        a4);
    }
    return 0LL;
  }
  v21 = 0LL;
  v22 = a4 & 0x187E;
  if ( ((a4 & 0x800) != 0 || (a4 & 0x1000) != 0) && (a4 & 0x180) != 0 )
  {
    v22 = a4 & 0x7E;
  }
  else if ( (a4 & 0x1800) == 0x1800 )
  {
    v22 = a4 & 0x7E;
  }
  else if ( (a4 & 0x1800) != 0 )
  {
    if ( a3 > 32766 )
    {
      v21 = 0x7FFFLL;
    }
    else
    {
      v21 = (unsigned int)a3;
      if ( a3 < -32768 )
        v21 = 4294934528LL;
    }
  }
  else if ( (a3 & 0xFFFFFFFC) == 0 )
  {
    if ( (a4 & 0x80u) != 0 )
    {
      v38 = v22 | 0x80;
      if ( (a3 & 1) == 0 )
        v38 = a4 & 0x187E;
      v22 = v38;
      if ( (a3 & 2) != 0 )
        v22 = v38 | 0x200;
    }
    if ( (a4 & 0x100) != 0 )
    {
      v39 = v22 | 0x100;
      if ( (a3 & 1) == 0 )
        v39 = v22;
      v22 = v39;
      if ( (a3 & 2) != 0 )
        v22 = v39 | 0x400;
    }
  }
  v23 = v22 >> 1;
  v56 = -2;
  v24 = (a4 & 0x8000) != 0;
  v57 = v24;
  if ( (a4 & 0x4000) != 0 )
  {
    v24 |= 2u;
    v57 = v24;
  }
  if ( (a4 & 0x2000) != 0 )
  {
    v24 |= 8u;
    v57 = v24;
  }
  if ( (a4 & 0x20000) != 0 )
  {
    v24 |= 0x20u;
    v57 = v24;
  }
  v25 = 16;
  if ( v19 )
  {
    v24 |= 0x10u;
    v57 = v24;
  }
  v26 = 0;
  if ( v17 )
    v57 = v24 | 0x40;
  v58 = v23;
  v27 = HIWORD(v23);
  if ( !v17 )
  {
    LOBYTE(v26) = v19 == 0;
    v8 = v26;
  }
  v28 = 49153LL;
  if ( (_DWORD)v21 )
    v27 = v21;
  HIWORD(v58) = v27;
  if ( (a4 & 0xC001) != 0xC001
    || (W32GetCurrentThreadDpiAwarenessContext(49153LL) & 0xF) == 2
    || (v28 = gpDispInfo, *(_DWORD *)*gpDispInfo <= 1u) )
  {
    v29 = aa;
  }
  else
  {
    v40 = *(__m128i *)GetScreenRect(v55);
    v41 = _mm_cvtsi128_si32(v40);
    v42 = v41 + EngMulDiv(a, _mm_cvtsi128_si32(_mm_srli_si128(v40, 8)) - v41, 0xFFFF);
    v43 = _mm_cvtsi128_si32(_mm_srli_si128(v40, 4));
    v51[0] = v42;
    v50 = 0LL;
    v51[1] = v43 + EngMulDiv(aa, _mm_cvtsi128_si32(_mm_srli_si128(v40, 12)) - v43, 0xFFFF);
    CurrentThreadDpiAwarenessContext = W32GetCurrentThreadDpiAwarenessContext(v44);
    LogicalToPhysicalDPIPoint(&v50, v51, CurrentThreadDpiAwarenessContext, 0LL);
    v46 = *(__m128i *)(*gpDispInfo + 24LL);
    v47 = _mm_cvtsi128_si32(v46);
    a = EngMulDiv(v50 - v47, 0xFFFF, _mm_cvtsi128_si32(_mm_srli_si128(v46, 8)) - v47);
    v48 = _mm_cvtsi128_si32(_mm_srli_si128(v46, 4));
    v29 = EngMulDiv(HIDWORD(v50) - v48, 0xFFFF, _mm_cvtsi128_si32(_mm_srli_si128(v46, 12)) - v48);
    aa = v29;
  }
  v61 = a7;
  v59 = 0;
  v60 = __PAIR64__(v29, a);
  if ( gdwInAtomicOperation )
  {
    v28 = gdwExtraInstrumentations;
    if ( (gdwExtraInstrumentations & 1) != 0 )
      KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
  }
  UserSessionSwitchLeaveCrit(v28, gdwInAtomicOperation, v21);
  if ( (a4 & 1) != 0 )
  {
    if ( !v8 )
      v25 = 18;
  }
  else
  {
    v60 = 0LL;
    v57 &= ~1u;
    v25 = 24;
  }
  if ( (unsigned __int8)Enforced() && *(int *)(*(_QWORD *)(gptiCurrent + 416LL) + 12LL) < 0 )
    v25 |= 0x40u;
  v30 = v25 | 0x100;
  if ( a8 )
    v30 = v25;
  ((void (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _DWORD, _QWORD))SynthesizeMouseInput)(
    0LL,
    &v56,
    v15,
    (LARGE_INTEGER)v52.QuadPart,
    v30,
    0LL);
  if ( a8 )
    ProcessMouseEvent();
  EnterCrit(0LL, 1LL);
  if ( (gdwPUDFlags & 0x100) != 0 )
    ResetAccessibilityCountersOnMouseInput();
  EtwTraceEndInjectMouse((unsigned int)v15, a, aa);
  return 1LL;
}
