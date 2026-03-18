/*
 * XREFs of UsbhReleaseApiLock @ 0x1C0041094
 * Callers:
 *     UsbhIoctlCyclePort @ 0x1C003DF14 (UsbhIoctlCyclePort.c)
 *     UsbhIoctlGetDescriptorFromNodeConnection @ 0x1C003E6C4 (UsbhIoctlGetDescriptorFromNodeConnection.c)
 *     UsbhIoctlGetHubCaps @ 0x1C003E9F8 (UsbhIoctlGetHubCaps.c)
 *     UsbhIoctlGetHubCapsEx @ 0x1C003EC70 (UsbhIoctlGetHubCapsEx.c)
 *     UsbhIoctlGetHubInformationEx @ 0x1C003EF34 (UsbhIoctlGetHubInformationEx.c)
 *     UsbhIoctlGetNodeConnectionAttributes @ 0x1C003F208 (UsbhIoctlGetNodeConnectionAttributes.c)
 *     UsbhIoctlGetNodeConnectionDriverKeyName @ 0x1C003F498 (UsbhIoctlGetNodeConnectionDriverKeyName.c)
 *     UsbhIoctlGetNodeConnectionInfoExApi @ 0x1C003F948 (UsbhIoctlGetNodeConnectionInfoExApi.c)
 *     UsbhIoctlGetNodeConnectionInfoExV2 @ 0x1C003FC88 (UsbhIoctlGetNodeConnectionInfoExV2.c)
 *     UsbhIoctlGetNodeConnectionName @ 0x1C003FF9C (UsbhIoctlGetNodeConnectionName.c)
 *     UsbhIoctlGetNodeInformation @ 0x1C004028C (UsbhIoctlGetNodeInformation.c)
 *     UsbhIoctlGetPortConnectorProperties @ 0x1C0040574 (UsbhIoctlGetPortConnectorProperties.c)
 *     UsbhIoctlResetStuckHub @ 0x1C0040864 (UsbhIoctlResetStuckHub.c)
 * Callees:
 *     FdoExt @ 0x1C000F050 (FdoExt.c)
 *     Log @ 0x1C000FD80 (Log.c)
 *     UsbhReleaseFdoPnpLock @ 0x1C00317D8 (UsbhReleaseFdoPnpLock.c)
 */

LONG __fastcall UsbhReleaseApiLock(__int64 a1, unsigned int a2)
{
  _DWORD *v3; // rax
  struct _KEVENT *v4; // rax

  Log(a1, 32, 1095774509, 0LL, a2);
  v3 = FdoExt(a1);
  UsbhReleaseFdoPnpLock(a1, (__int64)(v3 + 434));
  v4 = (struct _KEVENT *)FdoExt(a1);
  return KeSetEvent(v4 + 205, 0, 0);
}
