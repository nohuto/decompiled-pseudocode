/*
 * XREFs of _GreSetHwndPresentFlags@8 @ 0x1CE820
 * Callers:
 *     _NtUserHwndSetRedirectionInfo@16 @ 0x1651A3 (_NtUserHwndSetRedirectionInfo@16.c)
 * Callees:
 *     ??0DWMALTSPRITEREF@@QAE@PAUHWND__@@PAX@Z @ 0x1CCCE8 (--0DWMALTSPRITEREF@@QAE@PAUHWND__@@PAX@Z.c)
 */

int __fastcall GreSetHwndPresentFlags(HWND a1, int a2)
{
  int v3; // ebx
  int v4; // esi
  int v7; // [esp+10h] [ebp-4h] BYREF

  v3 = -1071775733;
  if ( g_pDwmState )
  {
    GreAcquireSemaphoreSharedInternal(_ghsemDwmState);
    EtwTraceGreLockAcquireSemaphoreShared(L"ghsemDwmState", _ghsemDwmState);
    DWMALTSPRITEREF::DWMALTSPRITEREF((DWMALTSPRITEREF *)&v7, a1, 0);
    v4 = v7;
    if ( v7 )
    {
      if ( v7 != -60 )
      {
        KeEnterCriticalRegion();
        GreAcquirePushLockShared(v4 + 60);
      }
      v3 = 0;
      *(_DWORD *)(*(_DWORD *)(v4 + 136) + 132) = a2;
      if ( v4 != -60 )
      {
        GreReleasePushLockShared(v4 + 60);
        KeLeaveCriticalRegion();
      }
    }
    else
    {
      v3 = -1073741811;
    }
    if ( v4 )
      DEC_SHARE_REF_CNT(v4);
    EtwTraceGreLockReleaseSemaphore(L"ghsemDwmState", _ghsemDwmState);
    GreReleaseSemaphoreInternal(_ghsemDwmState);
  }
  return v3;
}
