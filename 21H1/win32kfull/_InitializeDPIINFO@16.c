/*
 * XREFs of _InitializeDPIINFO@16 @ 0x24784
 * Callers:
 *     _UpdateWindowSpriteDPI@8 @ 0x23C14 (_UpdateWindowSpriteDPI@8.c)
 *     ?CreateFadeInternal@@YGPAUHDC__@@PAUtagWND@@PAUtagRECT@@KKK@Z @ 0x152DDB (-CreateFadeInternal@@YGPAUHDC__@@PAUtagWND@@PAUtagRECT@@KKK@Z.c)
 * Callees:
 *     _GetMonitorRectForDpiContext@8 @ 0x3356A (_GetMonitorRectForDpiContext@8.c)
 *     __IsTopLevelWindow@4 @ 0x38178 (__IsTopLevelWindow@4.c)
 *     _IsChildWindowDpiBoundary@4 @ 0x38846 (_IsChildWindowDpiBoundary@4.c)
 *     _W32GetThreadWin32Thread@4 @ 0x3FA3E (_W32GetThreadWin32Thread@4.c)
 *     _EnterFloatingPointRegion@0 @ 0xAD89E (_EnterFloatingPointRegion@0.c)
 */

char __fastcall InitializeDPIINFO(int a1, unsigned int a2, int a3, int a4)
{
  int v6; // eax
  int *MonitorRectForDpiContext; // eax
  int v8; // ecx
  int *v9; // eax
  int v10; // esi
  bool v11; // zf
  int v12; // ecx
  int v13; // eax
  PKTHREAD CurrentThread; // eax
  PKTHREAD v15; // eax
  PKTHREAD v16; // eax
  INT ScaledLogPixels; // edi
  INT v18; // eax
  INT v19; // eax
  int v20; // eax
  int v21; // esi
  double v22; // st7
  int v23; // ecx
  int v24; // ecx
  INT v26; // [esp-Ch] [ebp-4Ch]
  INT v27; // [esp-Ch] [ebp-4Ch]
  _BYTE v28[16]; // [esp+10h] [ebp-30h] BYREF
  _BYTE v29[16]; // [esp+20h] [ebp-20h] BYREF
  double v30; // [esp+30h] [ebp-10h]
  double v31; // [esp+38h] [ebp-8h]
  int v32; // [esp+48h] [ebp+8h]

  v6 = *(unsigned __int16 *)(*(_DWORD *)(a3 + 20) + 52);
  HIDWORD(v30) = v6;
  HIDWORD(v31) = v6;
  *(_DWORD *)(a1 + 8) = v6;
  *(_DWORD *)(a1 + 12) = v6;
  MonitorRectForDpiContext = (int *)GetMonitorRectForDpiContext(v29);
  v8 = *MonitorRectForDpiContext;
  *(_DWORD *)(a1 + 20) = MonitorRectForDpiContext[1];
  *(_DWORD *)(a1 + 16) = v8;
  v9 = (int *)GetMonitorRectForDpiContext(v28);
  *(_DWORD *)(a1 + 36) = 0;
  v10 = (a2 >> 8) & 0x1FF;
  v11 = HIDWORD(v31) == 96;
  v12 = *v9;
  v13 = v9[1];
  *(_DWORD *)(a1 + 24) = v12;
  *(_DWORD *)(a1 + 28) = v13;
  if ( !v11 )
  {
    CurrentThread = KeGetCurrentThread();
    if ( W32GetThreadWin32Thread(CurrentThread) )
    {
      v15 = KeGetCurrentThread();
      if ( *(_DWORD *)(W32GetThreadWin32Thread(v15) + 248) )
      {
        v16 = KeGetCurrentThread();
        if ( (*(_BYTE *)(**(_DWORD **)(*(_DWORD *)(W32GetThreadWin32Thread(v16) + 248) + 4) + 32) & 1) != 0
          && (a2 & 0x4000000F) == 0x40000000 )
        {
          ScaledLogPixels = (unsigned __int16)GreGetScaledLogPixels(HIDWORD(v30));
          v26 = *(_DWORD *)(a1 + 16);
          HIDWORD(v30) = ScaledLogPixels;
          v18 = EngMulDiv(v26, ScaledLogPixels, 96);
          v27 = *(_DWORD *)(a1 + 20);
          *(_DWORD *)(a1 + 16) = v18;
          v19 = EngMulDiv(v27, ScaledLogPixels, 96);
          LOWORD(v10) = WORD2(v30);
          *(_DWORD *)(a1 + 20) = v19;
        }
      }
    }
  }
  LOBYTE(v20) = v10;
  HIDWORD(v30) = (unsigned __int16)v10;
  *(_DWORD *)(a1 + 32) = (unsigned __int16)v10;
  if ( (_WORD)v10 && (v20 = EnterFloatingPointRegion()) != 0 )
  {
    v21 = a4;
    if ( DrvIsUniformSpaceMapping(*(_DWORD *)(_gpDispInfo + 8)) && a4 && _IsTopLevelWindow(a4) )
    {
      *(_DWORD *)(a1 + 36) |= 1u;
      v32 = *(unsigned __int16 *)(*(_DWORD *)(a3 + 20) + 56);
      *(_DWORD *)(a1 + 12) = v32;
      v31 = (double)v32;
      v30 = (double)SHIDWORD(v30);
      v22 = v31 / v30;
    }
    else
    {
      v31 = (double)HIDWORD(v31);
      v30 = (double)SHIDWORD(v30);
      v22 = v31 / v30;
    }
    *(double *)a1 = v22;
    LOBYTE(v20) = KeRestoreFloatingPointState(_gfsSave);
  }
  else
  {
    v21 = a4;
    if ( a4 )
    {
      v23 = *(_DWORD *)(a4 + 20);
      if ( (*(_DWORD *)(v23 + 144) & 0x10000000) == 0 )
        *(_DWORD *)(a1 + 12) = *(unsigned __int16 *)(*(_DWORD *)(*(_DWORD *)(a4 + 8) + 232) + 160);
      v24 = *(_DWORD *)(v23 + 184);
      LOBYTE(v20) = v24 & 0xF;
      if ( (v24 & 0xF) == 2 && (v24 & 0x20000000) != 0 )
      {
        *(_DWORD *)(a1 + 36) |= 2u;
        *(_DWORD *)(a1 + 12) = *(unsigned __int16 *)(*(_DWORD *)(a3 + 20) + 56);
        LOBYTE(v20) = BYTE4(v31);
        *(_DWORD *)(a1 + 32) = HIDWORD(v31);
      }
    }
    *(double *)a1 = 1.0;
  }
  if ( v21 )
  {
    v20 = IsChildWindowDpiBoundary(v21);
    if ( v20 )
      *(_DWORD *)(a1 + 36) |= 4u;
  }
  return v20;
}
