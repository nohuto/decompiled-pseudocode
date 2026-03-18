/*
 * XREFs of GreGetHwndUpdateIds @ 0x1C026EEE0
 * Callers:
 *     NtUserHwndQueryRedirectionInfo @ 0x1C01FCE40 (NtUserHwndQueryRedirectionInfo.c)
 * Callees:
 *     ?bDeviceBitmap@SFMLOGICALSURFACE@@QEAAHXZ @ 0x1C008C9E4 (-bDeviceBitmap@SFMLOGICALSURFACE@@QEAAHXZ.c)
 *     ?uiDxPresentFlags@SFMLOGICALSURFACE@@QEAAIXZ @ 0x1C0110964 (-uiDxPresentFlags@SFMLOGICALSURFACE@@QEAAIXZ.c)
 *     ??0DWMALTSPRITEREF@@QEAA@PEAUHWND__@@PEAX@Z @ 0x1C0110990 (--0DWMALTSPRITEREF@@QEAA@PEAUHWND__@@PEAX@Z.c)
 */

__int64 __fastcall GreGetHwndUpdateIds(HWND a1, _QWORD *a2, _QWORD *a3)
{
  unsigned int v6; // esi
  __int64 v7; // rbx
  SFMLOGICALSURFACE *v8; // rbp
  __int64 v9; // r8
  __int64 v11; // [rsp+58h] [rbp+20h] BYREF

  v6 = -1071775733;
  if ( g_pDwmState )
  {
    GreAcquireSemaphoreSharedInternal(ghsemDwmState);
    EtwTraceGreLockAcquireSemaphoreShared(L"ghsemDwmState", ghsemDwmState);
    DWMALTSPRITEREF::DWMALTSPRITEREF((DWMALTSPRITEREF *)&v11, a1, 0LL);
    v7 = v11;
    if ( v11 )
    {
      v8 = *(SFMLOGICALSURFACE **)(v11 + 168);
      if ( v11 != -88 )
      {
        KeEnterCriticalRegion();
        GreAcquirePushLockShared(v7 + 88);
      }
      if ( *((_QWORD *)v8 + 23) && (unsigned int)SFMLOGICALSURFACE::bDeviceBitmap(v8) )
      {
        if ( (SFMLOGICALSURFACE::uiDxPresentFlags(v8) & 2) != 0 )
          v9 |= 0x8000000000000000uLL;
        *a2 = v9;
        v6 = 0;
        *a3 = *((_QWORD *)v8 + 35);
      }
      if ( v7 != -88 )
      {
        GreReleasePushLockShared(v7 + 88);
        KeLeaveCriticalRegion();
      }
    }
    else
    {
      v6 = -1073741811;
    }
    if ( v7 )
      DEC_SHARE_REF_CNT(v7);
    EtwTraceGreLockReleaseSemaphore(L"ghsemDwmState", ghsemDwmState);
    GreReleaseSemaphoreInternal(ghsemDwmState);
  }
  return v6;
}
