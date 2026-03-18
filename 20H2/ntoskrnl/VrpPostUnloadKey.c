/*
 * XREFs of VrpPostUnloadKey @ 0x140885C78
 * Callers:
 *     VrpRegistryCallback @ 0x1405D15D0 (VrpRegistryCallback.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x14021EB00 (KeLeaveCriticalRegionThread.c)
 *     KeAbPostRelease @ 0x14021ED30 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x140242B40 (ExfTryToWakePushLock.c)
 *     EtwActivityIdControl @ 0x1403640E0 (EtwActivityIdControl.c)
 *     __security_check_cookie @ 0x1403CFAF0 (__security_check_cookie.c)
 *     VrpDestroyNamespaceNode @ 0x1405D0860 (VrpDestroyNamespaceNode.c)
 */

__int64 __fastcall VrpPostUnloadKey(__int64 a1, __int64 a2)
{
  __int64 v4; // rdx
  GUID ActivityId; // [rsp+20h] [rbp-28h] BYREF

  ActivityId = 0LL;
  EtwActivityIdControl(3u, &ActivityId);
  v4 = *(_QWORD *)(a1 + 32);
  if ( v4 )
  {
    if ( *(int *)(a1 + 8) >= 0 )
      VrpDestroyNamespaceNode((_QWORD *)a2, v4);
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a2 + 16), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)(a2 + 16));
    KeAbPostRelease(a2 + 16);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  }
  return 0LL;
}
