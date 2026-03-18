/*
 * XREFs of DeleteOrSetRedirectionBitmap @ 0x1C00C135C
 * Callers:
 *     zzzUpdateLayeredWindow @ 0x1C003C778 (zzzUpdateLayeredWindow.c)
 *     zzzDwmStartRedirection @ 0x1C007FCE0 (zzzDwmStartRedirection.c)
 *     xxxDwmStopRedirection @ 0x1C0081030 (xxxDwmStopRedirection.c)
 *     SetRedirectedWindow @ 0x1C009100C (SetRedirectedWindow.c)
 *     UnsetRedirectedWindow @ 0x1C00C11EC (UnsetRedirectedWindow.c)
 *     DeleteOldRedirectionBitmap @ 0x1C00C12CC (DeleteOldRedirectionBitmap.c)
 *     ?zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z @ 0x1C00CA04C (-zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z.c)
 *     zzzUpdateWindowsAfterModeChange @ 0x1C00F9728 (zzzUpdateWindowsAfterModeChange.c)
 *     RecreateRedirectionBitmap @ 0x1C00F9CD8 (RecreateRedirectionBitmap.c)
 *     UserRecreateRedirectionBitmap @ 0x1C01E7990 (UserRecreateRedirectionBitmap.c)
 * Callees:
 *     GreDereferenceObject @ 0x1C00936F4 (GreDereferenceObject.c)
 *     GreSetRedirection @ 0x1C00C140C (GreSetRedirection.c)
 */

__int64 __fastcall DeleteOrSetRedirectionBitmap(__int64 a1, HSURF a2, int a3)
{
  __int64 v3; // rdi
  __int64 result; // rax

  v3 = *(_QWORD *)(a1 + 24);
  if ( !a3 && (*(_WORD *)(*(_QWORD *)(a1 + 40) + 42LL) & 0x2FFF) == 0x29D )
  {
    result = *(_QWORD *)(v3 + 40);
    *(_QWORD *)(result + 120) = a2;
  }
  else
  {
    GreSetRedirection(a2, 0LL);
    GreMarkDeletableBitmap(a2);
    GreLockVisRgn(*(_QWORD *)(gpDispInfo + 40LL));
    GreDereferenceObject(a2, 0);
    GreUnlockVisRgn(*(_QWORD *)(gpDispInfo + 40LL));
    result = *(_QWORD *)(v3 + 40);
    if ( a2 == *(HSURF *)(result + 120) )
      *(_QWORD *)(result + 120) = 0LL;
  }
  return result;
}
