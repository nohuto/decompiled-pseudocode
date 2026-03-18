/*
 * XREFs of DrvIsNotUsingGraphicsDevice @ 0x1C00BE030
 * Callers:
 *     ?Win32kPnpNotify@@YAJPEAU_VIDEO_WIN32K_CALLBACKS_PARAMS@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C011E0D4 (-Win32kPnpNotify@@YAJPEAU_VIDEO_WIN32K_CALLBACKS_PARAMS@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 * Callees:
 *     UserIsUserCritSecIn @ 0x1C0060D80 (UserIsUserCritSecIn.c)
 */

__int64 __fastcall DrvIsNotUsingGraphicsDevice(__int64 a1)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  int v4; // ebx
  unsigned int v5; // edx
  __int64 i; // rdi
  __int64 v8; // rax

  v4 = 0;
  if ( !(unsigned int)UserIsUserCritSecIn() )
  {
    v8 = WdLogNewEntry5_WdAssertion(v3, v2);
    WdLogEvent5_WdAssertion(v8);
  }
  if ( !a1 )
    return 1LL;
  v5 = *(_DWORD *)(a1 + 20);
  if ( !v5 )
    return 1LL;
  for ( i = a1 + 40;
        (*(_DWORD *)(*(_QWORD *)i + 40LL) & 0x20000) != 0
     || (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)i + 2576LL) + 160LL) & 0x2000000) != 0;
        i += 56LL )
  {
    if ( ++v4 >= v5 )
      return 1LL;
  }
  return 0LL;
}
