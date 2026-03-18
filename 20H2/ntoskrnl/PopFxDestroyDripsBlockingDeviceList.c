/*
 * XREFs of PopFxDestroyDripsBlockingDeviceList @ 0x1408E6E84
 * Callers:
 *     PopFxBuildDripsBlockingDeviceList @ 0x140567BB4 (PopFxBuildDripsBlockingDeviceList.c)
 *     PopDripsWatchdogCallbackHandler @ 0x1408F15D8 (PopDripsWatchdogCallbackHandler.c)
 *     PopDripsWatchdogTakeAction @ 0x1408FCEF0 (PopDripsWatchdogTakeAction.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x14021EB00 (KeLeaveCriticalRegionThread.c)
 *     ExReleasePushLockEx @ 0x140220F40 (ExReleasePushLockEx.c)
 *     PopFxReleaseDevice @ 0x14056A950 (PopFxReleaseDevice.c)
 *     IoLockUnlockPnpDeviceTree @ 0x1408A0E4C (IoLockUnlockPnpDeviceTree.c)
 *     ExFreePoolWithTag @ 0x1409B70B0 (ExFreePoolWithTag.c)
 */

void __fastcall PopFxDestroyDripsBlockingDeviceList(_QWORD *a1)
{
  _QWORD *v2; // rbx
  __int64 v3; // rax
  void *v4; // rcx

  while ( 1 )
  {
    v2 = (_QWORD *)*a1;
    if ( (_QWORD *)*a1 == a1 )
      break;
    if ( (_QWORD *)v2[1] != a1 || (v3 = *v2, *(_QWORD **)(*v2 + 8LL) != v2) )
      __fastfail(3u);
    *a1 = v3;
    *(_QWORD *)(v3 + 8) = a1;
    v4 = (void *)v2[3];
    if ( v4 )
    {
      ExFreePoolWithTag(v4, 0x4D584650u);
      v2[3] = 0LL;
      *((_DWORD *)v2 + 8) = 0;
    }
    PopFxReleaseDevice((__int64)(v2 - 109));
  }
  ExReleasePushLockEx((ULONG_PTR)&PopFxBlockingDeviceListLock, 0LL);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  IoLockUnlockPnpDeviceTree(0);
}
