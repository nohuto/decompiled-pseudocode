/*
 * XREFs of DrvIsNotUsingGraphicsDevice @ 0x1C005D9D0
 * Callers:
 *     ?Win32kPnpNotify@@YAJPEAU_VIDEO_WIN32K_CALLBACKS_PARAMS@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0120424 (-Win32kPnpNotify@@YAJPEAU_VIDEO_WIN32K_CALLBACKS_PARAMS@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 * Callees:
 *     UserIsUserCritSecIn @ 0x1C00A5D80 (UserIsUserCritSecIn.c)
 */

__int64 __fastcall DrvIsNotUsingGraphicsDevice(__int64 a1)
{
  int v2; // ebx
  unsigned int v3; // edx
  __int64 i; // rdi
  __int64 v6; // rax

  v2 = 0;
  if ( !(unsigned int)UserIsUserCritSecIn() )
  {
    v6 = WdLogNewEntry5_WdAssertion();
    WdLogEvent5_WdAssertion(v6);
  }
  if ( !a1 )
    return 1LL;
  v3 = *(_DWORD *)(a1 + 20);
  if ( !v3 )
    return 1LL;
  for ( i = a1 + 40;
        (*(_DWORD *)(*(_QWORD *)i + 40LL) & 0x20000) != 0
     || (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)i + 2576LL) + 160LL) & 0x2000000) != 0;
        i += 56LL )
  {
    if ( ++v2 >= v3 )
      return 1LL;
  }
  return 0LL;
}
