/*
 * XREFs of xxxDeferredDesktopRotation @ 0x1C021E270
 * Callers:
 *     xxxFreeWindow @ 0x1C00D094C (xxxFreeWindow.c)
 * Callees:
 *     PopAndFreeAlwaysW32ThreadLock @ 0x1C00B9A60 (PopAndFreeAlwaysW32ThreadLock.c)
 *     PushW32ThreadLock @ 0x1C00B9AE0 (PushW32ThreadLock.c)
 *     PopAndFreeW32ThreadLock @ 0x1C00D8200 (PopAndFreeW32ThreadLock.c)
 *     xxxDesktopsRecalcAndBroadcastDisplayChange @ 0x1C0106440 (xxxDesktopsRecalcAndBroadcastDisplayChange.c)
 */

__int64 xxxDeferredDesktopRotation()
{
  _QWORD *v0; // rbx
  __int64 v1; // rdx
  __int64 v2; // rdi
  __int128 v4; // [rsp+20h] [rbp-38h] BYREF
  __int64 v5; // [rsp+30h] [rbp-28h]
  __int128 v6; // [rsp+38h] [rbp-20h] BYREF
  __int64 v7; // [rsp+48h] [rbp-10h]

  v0 = *(_QWORD **)(gptiCurrent + 456LL);
  v1 = v0[1];
  if ( v1 && (*(_DWORD *)(*(_QWORD *)v1 + 64LL) & 2) != 0 )
  {
    v2 = v0[33];
    v0[33] = 0LL;
    v6 = 0LL;
    v7 = 0LL;
    v4 = 0LL;
    v5 = 0LL;
    *(_DWORD *)(*(_QWORD *)v1 + 64LL) &= ~2u;
    if ( v2 )
      PushW32ThreadLock(v2, &v6, (__int64)Win32FreePool);
    PushW32ThreadLock((__int64)v0, &v4, UserDereferenceObject);
    ObfReferenceObject(v0);
    xxxDesktopsRecalcAndBroadcastDisplayChange((__int64)v0, v2, *(_WORD *)(gpsi + 6996LL), 1u);
    PopAndFreeW32ThreadLock((__int64)&v4);
    if ( v2 )
      PopAndFreeAlwaysW32ThreadLock((__int64)&v6);
  }
  return 0LL;
}
