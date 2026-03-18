/*
 * XREFs of zzzDwmStartRedirection @ 0x1C000DF88
 * Callers:
 *     NtUserDwmKernelStartup @ 0x1C012AA40 (NtUserDwmKernelStartup.c)
 * Callees:
 *     DwmAsyncDesktopCreate @ 0x1C000DEE0 (DwmAsyncDesktopCreate.c)
 *     DwmAsyncDesktopFree @ 0x1C000E3C4 (DwmAsyncDesktopFree.c)
 *     DwmNotifyChildrenAddRemove @ 0x1C000E464 (DwmNotifyChildrenAddRemove.c)
 *     zzzDecomposeDesktop @ 0x1C000EF2C (zzzDecomposeDesktop.c)
 *     CreateOrGetRedirectionBitmap @ 0x1C002366C (CreateOrGetRedirectionBitmap.c)
 *     zzzComposeDesktop @ 0x1C004AD48 (zzzComposeDesktop.c)
 *     bSetDevDragRect @ 0x1C004BF00 (bSetDevDragRect.c)
 *     zzzEnableDwmPointerSupport @ 0x1C004CCD0 (zzzEnableDwmPointerSupport.c)
 *     DeleteOrSetRedirectionBitmap @ 0x1C004F130 (DeleteOrSetRedirectionBitmap.c)
 *     GreDwmStartup @ 0x1C00C22CC (GreDwmStartup.c)
 *     _GetProcessWindowStation @ 0x1C00C40D0 (_GetProcessWindowStation.c)
 *     GreDwmShutdown @ 0x1C0128CB0 (GreDwmShutdown.c)
 *     StopFade @ 0x1C01E84B0 (StopFade.c)
 */

__int64 zzzDwmStartRedirection()
{
  __int64 ProcessWindowStation; // rdi
  int RedirectionBitmap; // r14d
  __int64 i; // rsi
  __int64 v3; // rbx
  void *v4; // rax
  __int64 j; // rbx
  void *v6; // rbx
  __int64 k; // rsi
  void *v9; // rax
  __int64 v10; // rdx
  __int64 m; // rbx
  __int64 v12; // rdx
  _OWORD v13[2]; // [rsp+20h] [rbp-30h] BYREF
  __int64 v14; // [rsp+40h] [rbp-10h]
  int v15; // [rsp+48h] [rbp-8h]
  __int64 v16; // [rsp+80h] [rbp+30h] BYREF

  v16 = 0LL;
  ProcessWindowStation = GetProcessWindowStation(0LL);
  if ( !(unsigned int)IsDwmApiPortRegistered() || (*(_DWORD *)(ProcessWindowStation + 64) & 4) != 0 )
  {
    return (unsigned int)-1073741790;
  }
  else
  {
    RedirectionBitmap = CreateOrGetRedirectionBitmap(
                          *(_QWORD *)(*(_QWORD *)(grpdeskRitInput + 8LL) + 24LL),
                          1LL,
                          0LL,
                          &v16);
    if ( RedirectionBitmap >= 0 )
    {
      *(_QWORD *)(ProcessWindowStation + 120) = v16;
      if ( grpdeskRitInput )
      {
        for ( i = *(_QWORD *)(*(_QWORD *)(grpdeskRitInput + 40LL) + 16LL); i; i = *(_QWORD *)(i + 32) )
        {
          v3 = ***(_QWORD ***)(i + 8);
          v4 = (void *)ReferenceDwmApiPort();
          DwmAsyncDesktopCreate(v4, v3);
          DwmNotifyChildrenAddRemove((struct tagDESKTOP *)i);
        }
      }
      if ( gfade[2] )
        StopFade();
      bSetDevDragRect(*(HDEV *)(gpDispInfo + 40LL));
      if ( (unsigned int)GreDwmStartup(*(_QWORD *)(gpDispInfo + 40LL)) )
      {
        zzzEnableDwmPointerSupport(1LL, 0LL);
        if ( grpdeskRitInput )
        {
          for ( j = *(_QWORD *)(*(_QWORD *)(grpdeskRitInput + 40LL) + 16LL); j; j = *(_QWORD *)(j + 32) )
          {
            RedirectionBitmap = zzzComposeDesktop((struct tagDESKTOP *)j);
            if ( RedirectionBitmap < 0 )
            {
              UnlockUpdatesForDwm();
              for ( k = *(_QWORD *)(*(_QWORD *)(grpdeskRitInput + 40LL) + 16LL); k; k = *(_QWORD *)(k + 32) )
              {
                zzzDecomposeDesktop((struct tagDESKTOP *)k);
                DwmNotifyChildrenAddRemove((struct tagDESKTOP *)k);
                v9 = (void *)ReferenceDwmApiPort();
                DwmAsyncDesktopFree(v9);
              }
              v10 = *(_QWORD *)(ProcessWindowStation + 120);
              if ( v10 )
                DeleteOrSetRedirectionBitmap(*(_QWORD *)(*(_QWORD *)(grpdeskRitInput + 8LL) + 24LL), v10, 1LL);
              GreDwmShutdown(*(_QWORD *)(gpDispInfo + 40LL));
              bSetDevDragRect(*(HDEV *)(gpDispInfo + 40LL));
              break;
            }
          }
        }
        v6 = (void *)ReferenceDwmApiPort();
        if ( v6 )
        {
          v15 = 1073741894;
          v14 = 0LL;
          memset(v13, 0, sizeof(v13));
          LODWORD(v13[0]) = 2883588;
          WORD2(v13[0]) = 0x8000;
          LpcRequestPort(v6, v13);
          ObfDereferenceObject(v6);
        }
        UnlockUpdatesForDwm();
        *(_DWORD *)(ProcessWindowStation + 64) |= 0x200u;
      }
      else
      {
        bSetDevDragRect(*(HDEV *)(gpDispInfo + 40LL));
        if ( grpdeskRitInput )
        {
          for ( m = *(_QWORD *)(*(_QWORD *)(grpdeskRitInput + 40LL) + 16LL); m; m = *(_QWORD *)(m + 32) )
            DwmNotifyChildrenAddRemove((struct tagDESKTOP *)m);
        }
        v12 = *(_QWORD *)(ProcessWindowStation + 120);
        if ( v12 )
          DeleteOrSetRedirectionBitmap(*(_QWORD *)(*(_QWORD *)(grpdeskRitInput + 8LL) + 24LL), v12, 1LL);
      }
    }
  }
  return (unsigned int)RedirectionBitmap;
}
