/*
 * XREFs of PpProfileCancelTransitioningDock @ 0x1408A7010
 * Callers:
 *     PiProcessNewDeviceNode @ 0x140729B20 (PiProcessNewDeviceNode.c)
 *     PipProcessEnumeratedChildDevice @ 0x14072ABEC (PipProcessEnumeratedChildDevice.c)
 * Callees:
 *     ExAcquireFastMutex @ 0x1402600D0 (ExAcquireFastMutex.c)
 *     KeReleaseGuardedMutex @ 0x140263BB0 (KeReleaseGuardedMutex.c)
 *     KeReleaseSemaphore @ 0x1402EE560 (KeReleaseSemaphore.c)
 *     PnpRequestHwProfileChangeNotification @ 0x14089B978 (PnpRequestHwProfileChangeNotification.c)
 *     PiProfileUpdateDeviceTree @ 0x1408A6C10 (PiProfileUpdateDeviceTree.c)
 *     PnpProfileUpdateHardwareProfile @ 0x1408A6D5C (PnpProfileUpdateHardwareProfile.c)
 */

void __fastcall PpProfileCancelTransitioningDock(__int64 a1, int a2)
{
  int v3; // [rsp+38h] [rbp+10h] BYREF

  v3 = a2;
  LOBYTE(v3) = 0;
  ExAcquireFastMutex(&PiProfileDeviceListLock);
  *(_DWORD *)(a1 + 568) = 1;
  LODWORD(a1) = _InterlockedExchangeAdd(&PiProfileDevicesInTransition, 0xFFFFFFFF);
  KeReleaseGuardedMutex(&PiProfileDeviceListLock);
  if ( (_DWORD)a1 == 1 )
  {
    if ( (int)PnpProfileUpdateHardwareProfile((__int64)&v3) >= 0 && (_BYTE)v3 )
    {
      PnpRequestHwProfileChangeNotification(&GUID_HWPROFILE_CHANGE_COMPLETE, 2, 0LL, 0LL);
      PiProfileUpdateDeviceTree();
    }
    else
    {
      PnpRequestHwProfileChangeNotification(&GUID_HWPROFILE_CHANGE_CANCELLED, 2, 0LL, 0LL);
    }
    KeReleaseSemaphore(&PiProfileChangeSemaphore, 0, 1, 0);
  }
}
