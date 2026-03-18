/*
 * XREFs of _xxxGetTitleBarInfoEx@8 @ 0x1A70D8
 * Callers:
 *     _xxxRealDefWindowProc@16 @ 0x3D3F2 (_xxxRealDefWindowProc@16.c)
 * Callees:
 *     ?xxxCommonGetTitleBarInfo@@YGXPAUtagWND@@PAUtagTITLEBARINFO@@@Z @ 0x31656 (-xxxCommonGetTitleBarInfo@@YGXPAUtagWND@@PAUtagTITLEBARINFO@@@Z.c)
 *     _IsToplevelWindowDesktopComposed@4 @ 0x35ADA (_IsToplevelWindowDesktopComposed@4.c)
 *     _W32GetCurrentThreadDpiAwarenessContext@0 @ 0x68610 (_W32GetCurrentThreadDpiAwarenessContext@0.c)
 *     _UserSetLastError@4 @ 0x81122 (_UserSetLastError@4.c)
 *     _memset @ 0xF92A7 (_memset.c)
 *     _xxxCalcCaptionButton@24 @ 0x1A52FE (_xxxCalcCaptionButton@24.c)
 *     _DwmSyncGetTitleBarInfo@16 @ 0x1D2C74 (_DwmSyncGetTitleBarInfo@16.c)
 */

int __fastcall xxxGetTitleBarInfoEx(_DWORD *a1, _DWORD *a2)
{
  _DWORD *v2; // edi
  _DWORD *v3; // ebx
  int v4; // esi
  int v5; // eax
  _DWORD *v6; // ebx
  int v7; // edi
  int v8; // eax
  struct _NT_TIB *v9; // eax
  int *v10; // ebx
  _DWORD *v11; // edi
  int i; // esi
  int v14; // [esp+10h] [ebp-18h] BYREF
  _DWORD *v15; // [esp+14h] [ebp-14h] BYREF
  int CurrentThreadDpiAwarenessContext; // [esp+18h] [ebp-10h]
  _DWORD *v17; // [esp+1Ch] [ebp-Ch]
  int v18; // [esp+20h] [ebp-8h] BYREF
  NTSTATUS Status; // [esp+24h] [ebp-4h] BYREF

  v2 = a2;
  v3 = a1;
  v4 = 0;
  v15 = a2;
  v18 = 0;
  v17 = a1;
  if ( !IsToplevelWindowDesktopComposed(a1) )
    goto LABEL_11;
  Status = ReferenceDwmApiPort();
  if ( _gdwInAtomicOperation && (_gdwExtraInstrumentations & 1) != 0 )
    KeBugCheckEx(0x160u, _gdwInAtomicOperation, 0, 0, 0);
  UserSessionSwitchLeaveCrit();
  Status = DwmSyncGetTitleBarInfo(Status, *v3, v2, &v18);
  EnterCrit(0, 1);
  if ( Status < 0 )
  {
    v9 = (struct _NT_TIB *)RtlNtStatusToDosError(Status);
    UserSetLastError(v9);
    v8 = 1;
  }
  else
  {
    v5 = v3[5];
    v14 = 1;
    Status = ValidateHmonitorNoRip(*(_DWORD *)(v5 + 164));
    CurrentThreadDpiAwarenessContext = W32GetCurrentThreadDpiAwarenessContext();
    PhysicalToLogicalDPIRect(v2 + 1, v2 + 1, CurrentThreadDpiAwarenessContext, &Status);
    v6 = v2 + 11;
    v7 = 6;
    do
    {
      PhysicalToLogicalDPIRect(v6, v6, CurrentThreadDpiAwarenessContext, &Status);
      v6 += 4;
      --v7;
    }
    while ( v7 );
    v8 = v18;
    v2 = v15;
    v4 = v14;
    v3 = v17;
  }
  if ( !v8 )
  {
LABEL_11:
    memset(v2 + 5, 0, 0x78u);
    xxxCommonGetTitleBarInfo((int)v3, v2);
    v10 = v2 + 19;
    v11 = v2 + 7;
    for ( i = 2; i <= 5; ++i )
    {
      if ( (*v11 & 0x8000) == 0 )
      {
        v15 = 0;
        v14 = 0;
        xxxCalcCaptionButton(v17, i, (__int16 *)&v15, v10, &v14, 1);
      }
      ++v11;
      v10 += 4;
    }
    return 1;
  }
  return v4;
}
