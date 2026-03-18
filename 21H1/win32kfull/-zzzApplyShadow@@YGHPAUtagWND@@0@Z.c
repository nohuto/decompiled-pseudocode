/*
 * XREFs of ?zzzApplyShadow@@YGHPAUtagWND@@0@Z @ 0x19D1DB
 * Callers:
 *     ?xxxSendChangedMsgs@@YGXPAUtagSMWP@@@Z @ 0x38532 (-xxxSendChangedMsgs@@YGXPAUtagSMWP@@@Z.c)
 *     _xxxAddShadow@4 @ 0x19D320 (_xxxAddShadow@4.c)
 * Callees:
 *     _zzzEndDeferWinEventNotify@0 @ 0x33948 (_zzzEndDeferWinEventNotify@0.c)
 *     _zzzUpdateLayeredWindow@40 @ 0xBABAE (_zzzUpdateLayeredWindow@40.c)
 *     __GetLayeredWindowAttributes@16 @ 0x153A92 (__GetLayeredWindowAttributes@16.c)
 *     ?GenerateWindowShadow@@YGPAUHBITMAP__@@PAUtagWND@@PAUHDC__@@@Z @ 0x19CF18 (-GenerateWindowShadow@@YGPAUHBITMAP__@@PAUtagWND@@PAUHDC__@@@Z.c)
 */

// write access to const memory has been detected, the output may be wrong!
BOOL __fastcall zzzApplyShadow(int a1, int a2)
{
  int v4; // esi
  HDC CompatibleDC; // eax
  int v6; // esi
  int v8; // ecx
  int v9; // edx
  BOOL v10; // ebx
  _DWORD v11[2]; // [esp+10h] [ebp-28h] BYREF
  _DWORD v12[2]; // [esp+18h] [ebp-20h] BYREF
  _DWORD v13[2]; // [esp+20h] [ebp-18h] BYREF
  struct HWND__ v14; // [esp+28h] [ebp-10h] BYREF
  int WindowShadow; // [esp+2Ch] [ebp-Ch]
  unsigned int v16; // [esp+30h] [ebp-8h] BYREF
  int v17; // [esp+34h] [ebp-4h] BYREF

  v12[0] = 0;
  v12[1] = 0;
  v4 = *(_DWORD *)(a2 + 20);
  v16 = 0;
  *(_DWORD *)(v4 + 184) = *(_DWORD *)(*(_DWORD *)(a1 + 20) + 184);
  CompatibleDC = (HDC)GreCreateCompatibleDC(*(_DWORD *)(_gpDispInfo + 28));
  v6 = (int)CompatibleDC;
  if ( !CompatibleDC )
    return 0;
  WindowShadow = GenerateWindowShadow(a1, CompatibleDC);
  if ( !WindowShadow )
  {
    GreDeleteDC(v6);
    return 0;
  }
  v8 = *(_DWORD *)(a1 + 20);
  v9 = *(_DWORD *)(v8 + 52);
  v13[0] = v9;
  v13[1] = *(_DWORD *)(v8 + 56);
  v11[0] = *(_DWORD *)(v8 + 60) - *(_DWORD *)(v8 + 52) + 5;
  v11[1] = *(_DWORD *)(v8 + 64) - *(_DWORD *)(v8 + 56) + 5;
  if ( (*(_BYTE *)(v8 + 18) & 0x40) != 0 )
    v13[0] = v9 - 5;
  v17 = 33488896;
  if ( !_GetLayeredWindowAttributes(a1, &v14, (_BYTE *)&v17 + 2, &v16) || (v16 & 2) == 0 )
    BYTE2(v17) = -1;
  ++_gdwDeferWinEvent;
  v10 = zzzUpdateLayeredWindow((struct tagEVENTHOOK *)a2, 0, (int)v13, (int)v11, v6, (int)v12, 0, (int)&v17, 2u, 0) >= 0;
  GreDeleteDC(v6);
  GreDeleteObject(WindowShadow);
  zzzEndDeferWinEventNotify();
  return v10;
}
