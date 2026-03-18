/*
 * XREFs of UserDeleteW32Process @ 0x1C006A5C0
 * Callers:
 *     <none>
 * Callees:
 *     ??0ReEnterLeaveCrit@@QEAA@XZ @ 0x1C0067980 (--0ReEnterLeaveCrit@@QEAA@XZ.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C008A4E0 (UserSessionSwitchLeaveCrit.c)
 *     Win32FreePool @ 0x1C008C9A0 (Win32FreePool.c)
 */

ReEnterLeaveCrit *__fastcall UserDeleteW32Process(__int64 a1)
{
  ReEnterLeaveCrit *result; // rax
  __int64 v3; // rcx
  __int64 v4; // rcx
  __int64 v5; // rcx
  _QWORD *v6; // rdx
  int v7; // [rsp+30h] [rbp+8h] BYREF

  result = ReEnterLeaveCrit::ReEnterLeaveCrit((ReEnterLeaveCrit *)&v7);
  if ( !*(_DWORD *)(a1 + 8) )
  {
    if ( *(_DWORD *)(a1 + 1044) )
    {
      v5 = *(_QWORD *)(a1 + 1056);
      if ( *(_QWORD *)(v5 + 8) != a1 + 1056 || (v6 = *(_QWORD **)(a1 + 1064), *v6 != a1 + 1056) )
        __fastfail(3u);
      *v6 = v5;
      *(_QWORD *)(v5 + 8) = v6;
    }
    ExEnterCriticalRegionAndAcquireFastMutexUnsafe(gpHandleFlagsMutex);
    v4 = *(_QWORD *)(a1 + 728);
    if ( v4 )
    {
      Win32FreePool(v4);
      RtlInitializeBitMap((PRTL_BITMAP)(a1 + 720), 0LL, 0);
    }
    PsSetProcessWin32Process(*(_QWORD *)a1, 0LL, a1);
    Win32FreePool(a1);
    result = (ReEnterLeaveCrit *)ExReleaseFastMutexUnsafeAndLeaveCriticalRegion(gpHandleFlagsMutex);
  }
  if ( !v7 )
    return (ReEnterLeaveCrit *)UserSessionSwitchLeaveCrit(v3);
  return result;
}
