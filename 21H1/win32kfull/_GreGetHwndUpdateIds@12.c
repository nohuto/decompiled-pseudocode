/*
 * XREFs of _GreGetHwndUpdateIds@12 @ 0x1CE24A
 * Callers:
 *     _NtUserHwndQueryRedirectionInfo@16 @ 0xB96F4 (_NtUserHwndQueryRedirectionInfo@16.c)
 * Callees:
 *     ?bDeviceBitmap@SFMLOGICALSURFACE@@QAEHXZ @ 0x25308 (-bDeviceBitmap@SFMLOGICALSURFACE@@QAEHXZ.c)
 *     ?uiDxPresentFlags@SFMLOGICALSURFACE@@QAEIXZ @ 0xA53B8 (-uiDxPresentFlags@SFMLOGICALSURFACE@@QAEIXZ.c)
 *     ??0DWMALTSPRITEREF@@QAE@PAUHWND__@@PAX@Z @ 0x1CCCE8 (--0DWMALTSPRITEREF@@QAE@PAUHWND__@@PAX@Z.c)
 */

int __fastcall GreGetHwndUpdateIds(HWND a1, _DWORD *a2, _DWORD *a3)
{
  int v4; // ebx
  int v5; // esi
  SFMLOGICALSURFACE *v6; // ebx
  int v7; // edx
  SFMLOGICALSURFACE *v8; // ecx
  unsigned int v9; // eax
  int v10; // eax
  int v13; // [esp+10h] [ebp-4h] BYREF

  v4 = -1071775733;
  if ( g_pDwmState )
  {
    GreAcquireSemaphoreSharedInternal(_ghsemDwmState);
    EtwTraceGreLockAcquireSemaphoreShared(L"ghsemDwmState", _ghsemDwmState);
    DWMALTSPRITEREF::DWMALTSPRITEREF((DWMALTSPRITEREF *)&v13, a1, 0);
    v5 = v13;
    if ( v13 )
    {
      v6 = *(SFMLOGICALSURFACE **)(v13 + 136);
      if ( v13 != -60 )
      {
        KeEnterCriticalRegion();
        GreAcquirePushLockShared(v5 + 60);
      }
      if ( *((_DWORD *)v6 + 28) && SFMLOGICALSURFACE::bDeviceBitmap(v6) )
      {
        v13 = *(_DWORD *)(v7 + 40);
        if ( (SFMLOGICALSURFACE::uiDxPresentFlags(v8) & 2) != 0 )
          v9 = 0x80000000;
        else
          v9 = 0;
        *a2 = v13;
        a2[1] = v9;
        *a3 = *((_DWORD *)v6 + 46);
        v10 = *((_DWORD *)v6 + 47);
        v4 = 0;
        a3[1] = v10;
      }
      else
      {
        v4 = -1071775733;
      }
      if ( v5 != -60 )
      {
        GreReleasePushLockShared(v5 + 60);
        KeLeaveCriticalRegion();
      }
    }
    else
    {
      v4 = -1073741811;
    }
    if ( v5 )
      DEC_SHARE_REF_CNT(v5);
    EtwTraceGreLockReleaseSemaphore(L"ghsemDwmState", _ghsemDwmState);
    GreReleaseSemaphoreInternal(_ghsemDwmState);
  }
  return v4;
}
