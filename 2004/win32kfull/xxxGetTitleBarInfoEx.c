/*
 * XREFs of xxxGetTitleBarInfoEx @ 0x1C01124B4
 * Callers:
 *     xxxRealDefWindowProc @ 0x1C00ACEC8 (xxxRealDefWindowProc.c)
 * Callees:
 *     UserSetLastError @ 0x1C0090F00 (UserSetLastError.c)
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C0099F30 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     ?xxxCommonGetTitleBarInfo@@YAXPEAUtagWND@@PEAUtagTITLEBARINFO@@@Z @ 0x1C009FBB0 (-xxxCommonGetTitleBarInfo@@YAXPEAUtagWND@@PEAUtagTITLEBARINFO@@@Z.c)
 *     IsToplevelWindowDesktopComposed @ 0x1C00B2CA8 (IsToplevelWindowDesktopComposed.c)
 *     DwmSyncGetTitleBarInfo @ 0x1C01125E0 (DwmSyncGetTitleBarInfo.c)
 *     memset @ 0x1C015C000 (memset.c)
 *     xxxCalcCaptionButton @ 0x1C0248758 (xxxCalcCaptionButton.c)
 */

__int64 __fastcall xxxGetTitleBarInfoEx(struct tagWND *a1, struct tagTITLEBARINFO *a2)
{
  unsigned int v3; // ebx
  __int64 v5; // rcx
  __int64 v6; // rcx
  void *v7; // rsi
  __int64 v8; // r8
  NTSTATUS TitleBarInfo; // esi
  __int64 v10; // rcx
  unsigned int CurrentThreadDpiAwarenessContext; // r15d
  char *v12; // rsi
  __int64 v13; // rbp
  int v14; // eax
  ULONG v16; // eax
  __int64 v17; // rdx
  __int64 v18; // r8
  _DWORD *v19; // rsi
  int v20; // ebx
  int v21; // edi
  int v22; // [rsp+70h] [rbp+18h] BYREF
  __int64 v23; // [rsp+78h] [rbp+20h] BYREF

  v3 = 0;
  v22 = 0;
  if ( !(unsigned int)IsToplevelWindowDesktopComposed((__int64)a1) )
    goto LABEL_12;
  v7 = (void *)ReferenceDwmApiPort(v5);
  if ( gdwInAtomicOperation )
  {
    v6 = gdwExtraInstrumentations;
    if ( (gdwExtraInstrumentations & 1) != 0 )
      KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
  }
  UserSessionSwitchLeaveCrit(v6, gdwInAtomicOperation, v8);
  TitleBarInfo = DwmSyncGetTitleBarInfo(v7);
  EnterCrit(0LL, 1LL);
  if ( TitleBarInfo < 0 )
  {
    v16 = RtlNtStatusToDosError(TitleBarInfo);
    UserSetLastError(v16, v17, v18);
    v14 = 1;
  }
  else
  {
    v3 = 1;
    v23 = ValidateHmonitorNoRip(*(_QWORD *)(*((_QWORD *)a1 + 5) + 256LL));
    CurrentThreadDpiAwarenessContext = W32GetCurrentThreadDpiAwarenessContext(v10);
    PhysicalToLogicalDPIRect((char *)a2 + 4, (char *)a2 + 4, CurrentThreadDpiAwarenessContext, &v23);
    v12 = (char *)a2 + 44;
    v13 = 6LL;
    do
    {
      PhysicalToLogicalDPIRect(v12, v12, CurrentThreadDpiAwarenessContext, &v23);
      v12 += 16;
      --v13;
    }
    while ( v13 );
    v14 = v22;
  }
  if ( !v14 )
  {
LABEL_12:
    memset((char *)a2 + 20, 0, 0x78uLL);
    xxxCommonGetTitleBarInfo(a1, a2);
    v19 = (_DWORD *)((char *)a2 + 28);
    v20 = 2;
    v21 = (_DWORD)a2 + 76;
    do
    {
      if ( (*v19 & 0x8000) == 0 )
      {
        LOWORD(v22) = 0;
        LODWORD(v23) = 0;
        xxxCalcCaptionButton((_DWORD)a1, v20, (unsigned int)&v22, v21, (__int64)&v23, 1);
      }
      ++v20;
      v21 += 16;
      ++v19;
    }
    while ( v20 <= 5 );
    return 1;
  }
  return v3;
}
