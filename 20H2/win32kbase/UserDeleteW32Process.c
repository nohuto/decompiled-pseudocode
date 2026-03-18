/*
 * XREFs of UserDeleteW32Process @ 0x1C009BD60
 * Callers:
 *     <none>
 * Callees:
 *     UserSessionSwitchLeaveCrit @ 0x1C004B4E0 (UserSessionSwitchLeaveCrit.c)
 *     ??0ReEnterLeaveCrit@@QEAA@XZ @ 0x1C004CB60 (--0ReEnterLeaveCrit@@QEAA@XZ.c)
 *     Win32FreePool @ 0x1C0057A50 (Win32FreePool.c)
 */

void __fastcall UserDeleteW32Process(__int64 a1)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // r8
  __int64 v5; // r9
  __int64 v6; // rcx
  __int64 v7; // rcx
  _QWORD *v8; // rdx
  int v9; // [rsp+30h] [rbp+8h] BYREF

  ReEnterLeaveCrit::ReEnterLeaveCrit((ReEnterLeaveCrit *)&v9);
  if ( !*(_DWORD *)(a1 + 8) )
  {
    if ( *(_DWORD *)(a1 + 1044) )
    {
      v7 = *(_QWORD *)(a1 + 1056);
      if ( *(_QWORD *)(v7 + 8) != a1 + 1056 || (v8 = *(_QWORD **)(a1 + 1064), *v8 != a1 + 1056) )
        __fastfail(3u);
      *v8 = v7;
      *(_QWORD *)(v7 + 8) = v8;
    }
    ExEnterCriticalRegionAndAcquireFastMutexUnsafe(gpHandleFlagsMutex);
    v6 = *(_QWORD *)(a1 + 728);
    if ( v6 )
    {
      Win32FreePool(v6);
      RtlInitializeBitMap((PRTL_BITMAP)(a1 + 720), 0LL, 0);
    }
    PsSetProcessWin32Process(*(_QWORD *)a1, 0LL, a1);
    Win32FreePool(a1);
    ExReleaseFastMutexUnsafeAndLeaveCriticalRegion(gpHandleFlagsMutex);
  }
  if ( !v9 )
    UserSessionSwitchLeaveCrit(v3, v2, v4, v5);
}
