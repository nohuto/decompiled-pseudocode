/*
 * XREFs of _zzzDwmStartRedirection@0 @ 0xE08D6
 * Callers:
 *     _NtUserDwmKernelStartup@0 @ 0xE086E (_NtUserDwmKernelStartup@0.c)
 * Callees:
 *     _DeleteOrSetRedirectionBitmap@12 @ 0x20636 (_DeleteOrSetRedirectionBitmap@12.c)
 *     _CreateOrGetRedirectionBitmap@16 @ 0x20722 (_CreateOrGetRedirectionBitmap@16.c)
 *     _bSetDevDragRect@16 @ 0xB08E8 (_bSetDevDragRect@16.c)
 *     _zzzEnableDwmPointerSupport@8 @ 0xB0B78 (_zzzEnableDwmPointerSupport@8.c)
 *     _DwmAsyncDesktopFree@8 @ 0xCEFDE (_DwmAsyncDesktopFree@8.c)
 *     _zzzDecomposeDesktop@8 @ 0xCF042 (_zzzDecomposeDesktop@8.c)
 *     _GreDwmShutdown@4 @ 0xCF60A (_GreDwmShutdown@4.c)
 *     _zzzComposeDesktop@4 @ 0xE0A14 (_zzzComposeDesktop@4.c)
 *     _DwmNotifyChildrenAddRemove@8 @ 0xE1756 (_DwmNotifyChildrenAddRemove@8.c)
 *     _DwmAsyncDesktopCreate@8 @ 0xE1AE8 (_DwmAsyncDesktopCreate@8.c)
 *     _DwmAsyncSignalRedirectionStartComplete@4 @ 0xE1B8A (_DwmAsyncSignalRedirectionStartComplete@4.c)
 *     _GreDwmStartup@4 @ 0xE1BEA (_GreDwmStartup@4.c)
 *     _StopFade@0 @ 0x1538B2 (_StopFade@0.c)
 */

int __stdcall zzzDwmStartRedirection(int a1, HSURF a2)
{
  HSURF v2; // edi
  HSURF RedirectionBitmap; // ebx
  int i; // ebx
  int v5; // esi
  int v6; // eax
  int j; // esi
  void *v8; // eax
  int v10; // edi
  int v11; // esi
  void *v12; // eax
  HSURF v13; // edx
  int k; // esi
  HSURF v15; // edx
  int v16; // [esp+0h] [ebp-18h]
  int v17; // [esp+4h] [ebp-14h]
  int v18; // [esp+8h] [ebp-10h]
  HSURF varC[4]; // [esp+Ch] [ebp-Ch] BYREF

  varC[0] = 0;
  v2 = *(HSURF *)(PsGetCurrentProcessWin32Process() + 356);
  varC[2] = v2;
  if ( !IsDwmApiPortRegistered() || ((_BYTE)v2[8] & 4) != 0 )
    return -1073741790;
  RedirectionBitmap = (HSURF)CreateOrGetRedirectionBitmap(
                               *(HWND **)(*(_DWORD *)(_grpdeskRitInput + 4) + 12),
                               1,
                               0,
                               varC);
  varC[1] = RedirectionBitmap;
  if ( (int)RedirectionBitmap >= 0 )
  {
    *(_DWORD *)(v2 + 15) = varC[0];
    if ( _grpdeskRitInput )
    {
      for ( i = *(_DWORD *)(*(_DWORD *)(_grpdeskRitInput + 20) + 8); i; i = *(_DWORD *)(i + 16) )
      {
        v5 = ***(_DWORD ***)(i + 4);
        v6 = ReferenceDwmApiPort();
        DwmAsyncDesktopCreate(v6, v5);
        DwmNotifyChildrenAddRemove(i, 1, v16, v17);
      }
      RedirectionBitmap = varC[3];
    }
    if ( *(_DWORD *)&_gfade[8] )
      StopFade();
    bSetDevDragRect(*(_DWORD **)(_gpDispInfo + 20), 0, 0, 0);
    if ( GreDwmStartup(*(_DWORD *)(_gpDispInfo + 20)) )
    {
      zzzEnableDwmPointerSupport(1, 0);
      if ( _grpdeskRitInput )
      {
        for ( j = *(_DWORD *)(*(_DWORD *)(_grpdeskRitInput + 20) + 8); j; j = *(_DWORD *)(j + 16) )
        {
          RedirectionBitmap = (HSURF)zzzComposeDesktop(j);
          if ( (int)RedirectionBitmap < 0 )
          {
            UnlockUpdatesForDwm();
            if ( *(_DWORD *)(*(_DWORD *)(_grpdeskRitInput + 20) + 8) )
            {
              v10 = *(_DWORD *)(*(_DWORD *)(_grpdeskRitInput + 20) + 8);
              do
              {
                zzzDecomposeDesktop(v10, 0);
                DwmNotifyChildrenAddRemove(v10, 0, v18, varC[0]);
                v11 = ***(_DWORD ***)(v10 + 4);
                v12 = (void *)ReferenceDwmApiPort();
                DwmAsyncDesktopFree(v12, v11);
                v10 = *(_DWORD *)(v10 + 16);
              }
              while ( v10 );
              v2 = a2;
            }
            v13 = (HSURF)*((_DWORD *)v2 + 15);
            if ( v13 )
              DeleteOrSetRedirectionBitmap(*(_DWORD *)(*(_DWORD *)(_grpdeskRitInput + 4) + 12), v13, 1);
            GreDwmShutdown(*(_DWORD *)(_gpDispInfo + 20));
            bSetDevDragRect(*(_DWORD **)(_gpDispInfo + 20), 0, 0, 0);
            break;
          }
        }
      }
      v8 = (void *)ReferenceDwmApiPort();
      DwmAsyncSignalRedirectionStartComplete(v8);
      UnlockUpdatesForDwm();
      *((_DWORD *)v2 + 8) |= 0x200u;
    }
    else
    {
      bSetDevDragRect(*(_DWORD **)(_gpDispInfo + 20), 0, 0, 0);
      if ( _grpdeskRitInput )
      {
        for ( k = *(_DWORD *)(*(_DWORD *)(_grpdeskRitInput + 20) + 8); k; k = *(_DWORD *)(k + 16) )
          DwmNotifyChildrenAddRemove(k, 0, v18, varC[0]);
      }
      v15 = (HSURF)*((_DWORD *)v2 + 15);
      if ( v15 )
        DeleteOrSetRedirectionBitmap(*(_DWORD *)(*(_DWORD *)(_grpdeskRitInput + 4) + 12), v15, 1);
    }
  }
  return (int)RedirectionBitmap;
}
