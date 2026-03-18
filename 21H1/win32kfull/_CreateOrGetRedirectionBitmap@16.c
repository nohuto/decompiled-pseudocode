/*
 * XREFs of _CreateOrGetRedirectionBitmap@16 @ 0x20722
 * Callers:
 *     _SetRedirectedWindow@8 @ 0x1FBFA (_SetRedirectedWindow@8.c)
 *     _RecreateRedirectionBitmap@24 @ 0x23D22 (_RecreateRedirectionBitmap@24.c)
 *     _zzzDwmStartRedirection@0 @ 0xE08D6 (_zzzDwmStartRedirection@0.c)
 * Callees:
 *     _GreGetSpriteAttributes@28 @ 0x20186 (_GreGetSpriteAttributes@28.c)
 *     _GetWindowMonitorAdapterLuid@8 @ 0x202DA (_GetWindowMonitorAdapterLuid@8.c)
 *     _GreDereferenceObject@8 @ 0x206B0 (_GreDereferenceObject@8.c)
 *     _GreSetRedirectionBitmapOwner@12 @ 0x20A60 (_GreSetRedirectionBitmapOwner@12.c)
 *     _GreSetRedirection@8 @ 0x20B6C (_GreSetRedirection@8.c)
 *     _IsWindowContentProtected@4 @ 0x20BBA (_IsWindowContentProtected@4.c)
 *     _GreReferenceObject@4 @ 0x20BD0 (_GreReferenceObject@4.c)
 *     _GreCreateCompatibleBitmapInternal@24 @ 0x21480 (_GreCreateCompatibleBitmapInternal@24.c)
 *     __GetTopLevelWindow@4 @ 0x313A0 (__GetTopLevelWindow@4.c)
 *     _GreGetDxSharedSurface@24 @ 0x38958 (_GreGetDxSharedSurface@24.c)
 *     _W32GetThreadWin32Thread@4 @ 0x3FA3E (_W32GetThreadWin32Thread@4.c)
 *     _IsDesktopWindow@4 @ 0x72F74 (_IsDesktopWindow@4.c)
 *     _DesktopFromDesktopWindow@4 @ 0xAD7D0 (_DesktopFromDesktopWindow@4.c)
 *     _MicrosoftTelemetryAssertTriggeredNoArgsKM@0 @ 0x24B8D4 (_MicrosoftTelemetryAssertTriggeredNoArgsKM@0.c)
 */

int __fastcall CreateOrGetRedirectionBitmap(HWND *a1, int a2, unsigned int ScaledLogPixels, HSURF *a4)
{
  int v5; // ebx
  HWND v6; // esi
  int v8; // eax
  int v9; // ecx
  HWND v10; // edx
  HSURF v11; // esi
  PKTHREAD CurrentThread; // eax
  PKTHREAD v13; // eax
  PKTHREAD v14; // eax
  HWND v15; // ecx
  int v16; // eax
  int v17; // eax
  int v18; // esi
  HWND v19; // eax
  unsigned int v20; // eax
  char v21[12]; // [esp+10h] [ebp-28h] BYREF
  struct _LUID v22; // [esp+1Ch] [ebp-1Ch] BYREF
  int v23; // [esp+24h] [ebp-14h] BYREF
  int v24; // [esp+28h] [ebp-10h] BYREF
  int TopLevelWindow; // [esp+2Ch] [ebp-Ch] BYREF
  struct HWND__ v26; // [esp+30h] [ebp-8h] BYREF
  int v27; // [esp+34h] [ebp-4h]

  v23 = a2;
  v22.LowPart = 0;
  v5 = 0;
  v22.HighPart = 0;
  v6 = a1[5];
  v24 = 0;
  if ( (*((_BYTE *)v6 + 18) & 0x20) != 0 )
  {
    *a4 = 0;
    return 0;
  }
  v27 = 0x4000000;
  v8 = *((_DWORD *)v6 + 36);
  if ( (v8 & (unsigned int)&loc_80000) != 0 )
    goto LABEL_6;
  if ( ScaledLogPixels )
  {
    *((_DWORD *)v6 + 36) = (unsigned int)&loc_80000 | v8;
    v6 = a1[5];
LABEL_6:
    v27 = 201326592;
  }
  if ( (*((_BYTE *)v6 + 18) & 8) == 0 || IsDesktopWindow(a1) )
  {
    v27 |= 0x1000000u;
  }
  else
  {
    v10 = *a1;
    TopLevelWindow = 0;
    ScaledLogPixels = 0;
    if ( GreGetSpriteAttributes(
           *(struct PDEVOBJ **)(_gpDispInfo + 20),
           v10,
           v9,
           &v26,
           &TopLevelWindow,
           &ScaledLogPixels,
           (struct HWND__ *)1)
      && (ScaledLogPixels & 1) != 0 )
    {
      v27 |= 0x1000000u;
    }
    v6 = a1[5];
  }
  TopLevelWindow = *((_DWORD *)v6 + 15) - *((_DWORD *)v6 + 13);
  if ( TopLevelWindow <= 1 )
    TopLevelWindow = 1;
  v26.unused = *((_DWORD *)v6 + 16) - *((_DWORD *)v6 + 14);
  if ( v26.unused <= 1 )
    v26.unused = 1;
  if ( !v23 )
  {
    if ( IsDesktopWindow(a1) )
    {
      v11 = *(HSURF *)(*((_DWORD *)a1[3] + 5) + 60);
      goto LABEL_35;
    }
    if ( (*((_WORD *)v6 + 15) & 0x3FFF) == 0x29D )
      MicrosoftTelemetryAssertTriggeredNoArgsKM();
  }
  ScaledLogPixels = 96;
  CurrentThread = KeGetCurrentThread();
  if ( W32GetThreadWin32Thread(CurrentThread) )
  {
    v13 = KeGetCurrentThread();
    if ( *(_DWORD *)(W32GetThreadWin32Thread(v13) + 248) )
    {
      v14 = KeGetCurrentThread();
      if ( (*(_BYTE *)(**(_DWORD **)(*(_DWORD *)(W32GetThreadWin32Thread(v14) + 248) + 4) + 32) & 1) != 0 )
      {
        v15 = a1[5];
        v16 = *((_DWORD *)v15 + 46);
        if ( (v16 & 0xF) == 0 && (v16 & 0x40000000) != 0 )
        {
          v17 = *((unsigned __int16 *)v15 + 90);
          if ( (_WORD)v17 != 96 )
            ScaledLogPixels = (unsigned __int16)GreGetScaledLogPixels(v17);
        }
      }
    }
  }
  v18 = v27;
  if ( (v27 & 0x1000000) == 0 )
  {
    v19 = a1[5];
    v23 = 0;
    if ( ((unsigned int)&loc_80000 & (_DWORD)v19[36]) == 0 || (int)GreGetDxSharedSurface(&v22, &v24, &v23, v21) < 0 )
      GetWindowMonitorAdapterLuid((int)a1, (int)&v22);
  }
  v11 = (HSURF)GreCreateCompatibleBitmapInternal(v26.unused, v18, &v22, (int)&ScaledLogPixels);
  v24 = 1;
LABEL_35:
  if ( !v11 )
  {
    v5 = -2143354872;
    goto LABEL_58;
  }
  v20 = (unsigned int)a1[2];
  v23 = 0;
  v27 = 0;
  ScaledLogPixels = v20;
  TopLevelWindow = _GetTopLevelWindow(a1);
  if ( IsWindowContentProtected(a1) )
  {
    v27 = *(_DWORD *)(*(_DWORD *)(ScaledLogPixels + 232) + 32);
    goto LABEL_44;
  }
  if ( !TopLevelWindow || a1 == (HWND *)TopLevelWindow || !IsWindowContentProtected(TopLevelWindow) )
  {
LABEL_44:
    if ( (*((_WORD *)a1[5] + 15) & 0x3FFF) == 0x29D )
      DesktopFromDesktopWindow(a1);
    GreLockVisRgn(*(_DWORD *)(_gpDispInfo + 20));
    if ( v24 )
    {
      v5 = GreReferenceObject(v11);
      if ( v5 < 0 )
        goto LABEL_55;
    }
    if ( GreMarkUndeletableBitmap(v11) )
    {
      if ( GreSetRedirection(v11, 1) && GreSetRedirectionBitmapOwner(v27) )
      {
LABEL_53:
        if ( v5 < 0 )
          GreDereferenceObject(v11, 0);
LABEL_55:
        GreUnlockVisRgn(*(_DWORD *)(_gpDispInfo + 20));
        if ( v5 < 0 )
        {
          GreDeleteObject(v11);
          v11 = 0;
        }
        goto LABEL_58;
      }
      GreMarkDeletableBitmap(v11);
    }
    v5 = -2143354871;
    goto LABEL_53;
  }
  if ( *(_DWORD *)(*(_DWORD *)(TopLevelWindow + 8) + 232) == *((_DWORD *)a1[2] + 58) )
  {
    v27 = *(_DWORD *)(*(_DWORD *)(ScaledLogPixels + 232) + 32);
    goto LABEL_44;
  }
  GreDeleteObject(v11);
  v11 = 0;
  v5 = -1073741790;
LABEL_58:
  *a4 = v11;
  return v5;
}
