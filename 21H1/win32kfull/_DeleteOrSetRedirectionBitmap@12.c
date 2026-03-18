/*
 * XREFs of _DeleteOrSetRedirectionBitmap@12 @ 0x20636
 * Callers:
 *     _UnsetRedirectedWindow@8 @ 0x1BE12 (_UnsetRedirectedWindow@8.c)
 *     _SetRedirectedWindow@8 @ 0x1FBFA (_SetRedirectedWindow@8.c)
 *     _RecreateRedirectionBitmap@24 @ 0x23D22 (_RecreateRedirectionBitmap@24.c)
 *     ?zzzChangeStates@@YGJPAUtagWND@@PAUtagSMWP@@@Z @ 0x2B94A (-zzzChangeStates@@YGJPAUtagWND@@PAUtagSMWP@@@Z.c)
 *     _DeleteOldRedirectionBitmap@4 @ 0x6E4D2 (_DeleteOldRedirectionBitmap@4.c)
 *     _zzzUpdateWindowsAfterModeChange@8 @ 0x9B978 (_zzzUpdateWindowsAfterModeChange@8.c)
 *     _zzzUpdateLayeredWindow@40 @ 0xBABAE (_zzzUpdateLayeredWindow@40.c)
 *     _xxxDwmStopRedirection@4 @ 0xCEE26 (_xxxDwmStopRedirection@4.c)
 *     _zzzDwmStartRedirection@0 @ 0xE08D6 (_zzzDwmStartRedirection@0.c)
 *     _UserRecreateRedirectionBitmap@4 @ 0x1539FA (_UserRecreateRedirectionBitmap@4.c)
 * Callees:
 *     _GreDereferenceObject@8 @ 0x206B0 (_GreDereferenceObject@8.c)
 *     _GreSetRedirection@8 @ 0x20B6C (_GreSetRedirection@8.c)
 */

int __fastcall DeleteOrSetRedirectionBitmap(int a1, HSURF a2, int a3)
{
  int v3; // edi
  int result; // eax

  v3 = *(_DWORD *)(a1 + 12);
  if ( a3 || (*(_WORD *)(*(_DWORD *)(a1 + 20) + 30) & 0x3FFF) != 0x29D )
  {
    GreSetRedirection(a2, 0);
    GreMarkDeletableBitmap(a2);
    GreLockVisRgn(*(_DWORD *)(_gpDispInfo + 20));
    GreDereferenceObject(a2);
    GreUnlockVisRgn(*(_DWORD *)(_gpDispInfo + 20));
    result = *(_DWORD *)(v3 + 20);
    if ( a2 == *(HSURF *)(result + 60) )
      *(_DWORD *)(result + 60) = 0;
  }
  else
  {
    result = *(_DWORD *)(v3 + 20);
    *(_DWORD *)(result + 60) = a2;
  }
  return result;
}
