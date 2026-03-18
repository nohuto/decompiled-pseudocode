/*
 * XREFs of VrpPostUnloadKey @ 0x14087EE38
 * Callers:
 *     VrpRegistryCallback @ 0x1405C9BA0 (VrpRegistryCallback.c)
 * Callees:
 *     EtwActivityIdControl @ 0x140241B50 (EtwActivityIdControl.c)
 *     KeLeaveCriticalRegionThread @ 0x1402486B0 (KeLeaveCriticalRegionThread.c)
 *     KeAbPostRelease @ 0x140263C10 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x14035A680 (ExfTryToWakePushLock.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     VrpDestroyNamespaceNode @ 0x1405C92D0 (VrpDestroyNamespaceNode.c)
 */

__int64 __fastcall VrpPostUnloadKey(__int64 a1, __int64 a2)
{
  __int64 v4; // rdx
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // r9
  GUID ActivityId; // [rsp+20h] [rbp-28h] BYREF

  ActivityId = 0LL;
  EtwActivityIdControl(3u, &ActivityId);
  v4 = *(_QWORD *)(a1 + 32);
  if ( v4 )
  {
    if ( *(int *)(a1 + 8) >= 0 )
      VrpDestroyNamespaceNode((_QWORD *)a2, v4);
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a2 + 16), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(a2 + 16);
    KeAbPostRelease(a2 + 16);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v5, v6, v7);
  }
  return 0LL;
}
