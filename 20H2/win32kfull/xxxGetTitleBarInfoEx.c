/*
 * XREFs of xxxGetTitleBarInfoEx @ 0x1C0014CC0
 * Callers:
 *     xxxRealDefWindowProc @ 0x1C004B5F8 (xxxRealDefWindowProc.c)
 * Callees:
 *     DwmSyncGetTitleBarInfo @ 0x1C0014DEC (DwmSyncGetTitleBarInfo.c)
 *     IsToplevelWindowDesktopComposed @ 0x1C004ACA8 (IsToplevelWindowDesktopComposed.c)
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C0055C10 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     ?xxxCommonGetTitleBarInfo@@YAXPEAUtagWND@@PEAUtagTITLEBARINFO@@@Z @ 0x1C005B890 (-xxxCommonGetTitleBarInfo@@YAXPEAUtagWND@@PEAUtagTITLEBARINFO@@@Z.c)
 *     UserSetLastError @ 0x1C00D60E0 (UserSetLastError.c)
 *     memset @ 0x1C015F880 (memset.c)
 *     xxxCalcCaptionButton @ 0x1C02471A8 (xxxCalcCaptionButton.c)
 */

__int64 __fastcall xxxGetTitleBarInfoEx(struct tagWND *a1, struct tagTITLEBARINFO *a2)
{
  unsigned int v3; // ebx
  __int64 v5; // rcx
  void *v6; // rsi
  NTSTATUS TitleBarInfo; // esi
  unsigned int CurrentThreadDpiAwarenessContext; // r15d
  char *v9; // rsi
  __int64 v10; // rbp
  int v11; // eax
  ULONG v13; // eax
  _DWORD *v14; // rsi
  int v15; // ebx
  int v16; // edi
  int v17; // [rsp+70h] [rbp+18h] BYREF
  __int64 v18; // [rsp+78h] [rbp+20h] BYREF

  v3 = 0;
  v17 = 0;
  if ( !(unsigned int)IsToplevelWindowDesktopComposed() )
    goto LABEL_12;
  v6 = (void *)ReferenceDwmApiPort();
  if ( gdwInAtomicOperation )
  {
    v5 = gdwExtraInstrumentations;
    if ( (gdwExtraInstrumentations & 1) != 0 )
      KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
  }
  UserSessionSwitchLeaveCrit(v5);
  TitleBarInfo = DwmSyncGetTitleBarInfo(v6);
  EnterCrit(0LL, 1LL);
  if ( TitleBarInfo < 0 )
  {
    v13 = RtlNtStatusToDosError(TitleBarInfo);
    UserSetLastError(v13);
    v11 = 1;
  }
  else
  {
    v3 = 1;
    v18 = ValidateHmonitorNoRip(*(_QWORD *)(*((_QWORD *)a1 + 5) + 256LL));
    CurrentThreadDpiAwarenessContext = W32GetCurrentThreadDpiAwarenessContext();
    PhysicalToLogicalDPIRect((char *)a2 + 4, (char *)a2 + 4, CurrentThreadDpiAwarenessContext, &v18);
    v9 = (char *)a2 + 44;
    v10 = 6LL;
    do
    {
      PhysicalToLogicalDPIRect(v9, v9, CurrentThreadDpiAwarenessContext, &v18);
      v9 += 16;
      --v10;
    }
    while ( v10 );
    v11 = v17;
  }
  if ( !v11 )
  {
LABEL_12:
    memset((char *)a2 + 20, 0, 0x78uLL);
    xxxCommonGetTitleBarInfo(a1, a2);
    v14 = (_DWORD *)((char *)a2 + 28);
    v15 = 2;
    v16 = (_DWORD)a2 + 76;
    do
    {
      if ( (*v14 & 0x8000) == 0 )
      {
        LOWORD(v17) = 0;
        LODWORD(v18) = 0;
        xxxCalcCaptionButton((_DWORD)a1, v15, (unsigned int)&v17, v16, (__int64)&v18, 1);
      }
      ++v15;
      v16 += 16;
      ++v14;
    }
    while ( v15 <= 5 );
    return 1;
  }
  return v3;
}
