/*
 * XREFs of GreSetHwndPresentFlags @ 0x1C0270DD0
 * Callers:
 *     NtUserHwndSetRedirectionInfo @ 0x1C01FE200 (NtUserHwndSetRedirectionInfo.c)
 * Callees:
 *     ??0DWMALTSPRITEREF@@QEAA@PEAUHWND__@@PEAX@Z @ 0x1C00547F8 (--0DWMALTSPRITEREF@@QEAA@PEAUHWND__@@PEAX@Z.c)
 */

__int64 __fastcall GreSetHwndPresentFlags(HWND a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v4; // ebp
  unsigned int v6; // esi
  __int64 v7; // rbx
  __int64 v9; // [rsp+40h] [rbp+18h] BYREF

  v4 = a2;
  v6 = -1071775733;
  if ( g_pDwmState )
  {
    GreAcquireSemaphoreSharedInternal(ghsemDwmState, a2, a3, a4);
    EtwTraceGreLockAcquireSemaphoreShared(L"ghsemDwmState", ghsemDwmState);
    DWMALTSPRITEREF::DWMALTSPRITEREF((DWMALTSPRITEREF *)&v9, a1, 0LL);
    v7 = v9;
    if ( v9 )
    {
      if ( v9 != -88 )
      {
        KeEnterCriticalRegion();
        GreAcquirePushLockShared(v7 + 88);
      }
      v6 = 0;
      *(_DWORD *)(*(_QWORD *)(v7 + 168) + 212LL) = v4;
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
