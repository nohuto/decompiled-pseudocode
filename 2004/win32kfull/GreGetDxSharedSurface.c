/*
 * XREFs of GreGetDxSharedSurface @ 0x1C0054578
 * Callers:
 *     CreateOrGetRedirectionBitmap @ 0x1C002366C (CreateOrGetRedirectionBitmap.c)
 *     WindowRedirectionBitmapMatchesMonitorAdapter @ 0x1C0054488 (WindowRedirectionBitmapMatchesMonitorAdapter.c)
 *     NtUserHwndQueryRedirectionInfo @ 0x1C01FDCB0 (NtUserHwndQueryRedirectionInfo.c)
 *     DxgkEngGetRedirBitmapSharedHandle @ 0x1C0278600 (DxgkEngGetRedirBitmapSharedHandle.c)
 * Callees:
 *     ?bDeviceBitmap@SFMLOGICALSURFACE@@QEAAHXZ @ 0x1C002D7BC (-bDeviceBitmap@SFMLOGICALSURFACE@@QEAAHXZ.c)
 *     ?uiDxPresentFlags@SFMLOGICALSURFACE@@QEAAIXZ @ 0x1C00547CC (-uiDxPresentFlags@SFMLOGICALSURFACE@@QEAAIXZ.c)
 *     ??0DWMALTSPRITEREF@@QEAA@PEAUHWND__@@PEAX@Z @ 0x1C00547F8 (--0DWMALTSPRITEREF@@QEAA@PEAUHWND__@@PEAX@Z.c)
 *     UserIsWindowWithNoRedirectionBitmap @ 0x1C0054838 (UserIsWindowWithNoRedirectionBitmap.c)
 *     ?AdapterLuid@SFMLOGICALSURFACE@@QEAA?AU_LUID@@XZ @ 0x1C0151AE8 (-AdapterLuid@SFMLOGICALSURFACE@@QEAA-AU_LUID@@XZ.c)
 */

__int64 __fastcall GreGetDxSharedSurface(HWND a1, _QWORD *a2, _DWORD *a3, _DWORD *a4, _DWORD *a5, _QWORD *a6)
{
  unsigned int v10; // esi
  __int64 v11; // rbx
  __int64 v12; // rsi
  __int64 v13; // r8
  unsigned int v14; // eax
  unsigned int *v15; // r9
  __int64 v16; // r8
  __int64 v17; // rcx
  __int64 v18; // r8
  SFMLOGICALSURFACE *v20; // rcx
  __int64 v21; // r9
  unsigned int v22; // eax
  unsigned int *v23; // r10
  SFMLOGICALSURFACE *v24; // rcx
  _QWORD v25[5]; // [rsp+20h] [rbp-28h] BYREF

  v10 = -1071775733;
  if ( g_pDwmState )
  {
    GreAcquireSemaphoreSharedInternal(ghsemDwmState, a2, a3, a4);
    EtwTraceGreLockAcquireSemaphoreShared(L"ghsemDwmState", ghsemDwmState);
    if ( (unsigned int)UserIsWindowWithNoRedirectionBitmap(a1) )
    {
LABEL_19:
      EtwTraceGreLockReleaseSemaphore(L"ghsemDwmState", ghsemDwmState);
      GreReleaseSemaphoreInternal(ghsemDwmState);
      return v10;
    }
    DWMALTSPRITEREF::DWMALTSPRITEREF((DWMALTSPRITEREF *)v25, a1, 0LL);
    v11 = v25[0];
    if ( !v25[0] )
    {
      v10 = -1073741811;
LABEL_17:
      if ( v11 )
        DEC_SHARE_REF_CNT(v11);
      goto LABEL_19;
    }
    v12 = *(_QWORD *)(v25[0] + 168LL);
    if ( v25[0] != -88LL )
    {
      KeEnterCriticalRegion();
      GreAcquirePushLockShared(v11 + 88);
    }
    if ( !*(_QWORD *)(v12 + 184)
      || !(unsigned int)SFMLOGICALSURFACE::bDeviceBitmap((SFMLOGICALSURFACE *)v12)
      || (unsigned int)UserIsRemoteConnection() && !(unsigned int)UserIsRemoteAndNotDisconnectConnection() )
    {
      *a2 = 0LL;
      v10 = -1073741822;
      *a4 = 87;
      *a5 = 1;
      *a6 = 0LL;
      *a3 = 0;
      a3[1] = 0;
      goto LABEL_15;
    }
    if ( *(_QWORD *)(v12 + 192) )
    {
      SFMLOGICALSURFACE::AdapterLuid((SFMLOGICALSURFACE *)v12);
      if ( (*a5 & 4) == 0 || (*(_DWORD *)(v12 + 244) & 0x100) != 0 || v25[0] == *(_QWORD *)a3 )
      {
        *a2 = v21;
        *a4 = *(_DWORD *)(v12 + 208);
        v22 = SFMLOGICALSURFACE::uiDxPresentFlags(v20);
        *v23 = v22;
        v17 = **(_QWORD **)&SFMLOGICALSURFACE::AdapterLuid(v24);
        goto LABEL_12;
      }
    }
    else
    {
      v13 = *(_QWORD *)(v12 + 184);
      if ( (*a5 & 4) == 0 || (*(_DWORD *)(v13 + 92) & 0x400) != 0 || *(_QWORD *)(v13 + 552) == *(_QWORD *)a3 )
      {
        *a2 = *(_QWORD *)(v13 + 544);
        *a4 = 87;
        v14 = SFMLOGICALSURFACE::uiDxPresentFlags((SFMLOGICALSURFACE *)v12);
        *v15 = v14;
        v17 = *(_QWORD *)(v16 + 552);
LABEL_12:
        *(_QWORD *)a3 = v17;
        if ( (SFMLOGICALSURFACE::uiDxPresentFlags((SFMLOGICALSURFACE *)v12) & 2) != 0 )
          v18 |= 0x8000000000000000uLL;
        v10 = 0;
        *a6 = v18;
        goto LABEL_15;
      }
    }
    v10 = -1071775484;
LABEL_15:
    if ( v11 != -88 )
    {
      GreReleasePushLockShared(v11 + 88);
      KeLeaveCriticalRegion();
    }
    goto LABEL_17;
  }
  return v10;
}
