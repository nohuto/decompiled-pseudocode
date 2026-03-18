/*
 * XREFs of PiAuDoesClientHaveAccess @ 0x14078A600
 * Callers:
 *     PiCMDeviceAction @ 0x14065F3BC (PiCMDeviceAction.c)
 *     PiCMQueryRemove @ 0x14065F7D4 (PiCMQueryRemove.c)
 *     PiCMOpenDeviceKey @ 0x1406BA720 (PiCMOpenDeviceKey.c)
 *     PiCMOpenObjectKey @ 0x1406BA8F4 (PiCMOpenObjectKey.c)
 *     PiCMGetDeviceIdList @ 0x1406CFE50 (PiCMGetDeviceIdList.c)
 *     PiCMSetObjectProperty @ 0x1406DC724 (PiCMSetObjectProperty.c)
 *     PiSwDispatch @ 0x140764DB0 (PiSwDispatch.c)
 *     PiDqIrpPropertySet @ 0x14076DD0C (PiDqIrpPropertySet.c)
 *     PiCMValidateDeviceInstance @ 0x140789AEC (PiCMValidateDeviceInstance.c)
 *     PiCMOpenDeviceInterfaceKey @ 0x140806A24 (PiCMOpenDeviceInterfaceKey.c)
 *     PiCMOpenClassKey @ 0x14081C354 (PiCMOpenClassKey.c)
 *     PiCMCreateDevice @ 0x140954434 (PiCMCreateDevice.c)
 *     PiCMCreateObject @ 0x140954BA8 (PiCMCreateObject.c)
 *     PiCMDeleteClassKey @ 0x140954D10 (PiCMDeleteClassKey.c)
 *     PiCMDeleteDevice @ 0x140954E2C (PiCMDeleteDevice.c)
 *     PiCMDeleteDeviceInterfaceKey @ 0x140955184 (PiCMDeleteDeviceInterfaceKey.c)
 *     PiCMDeleteDeviceKey @ 0x140955274 (PiCMDeleteDeviceKey.c)
 *     PiCMDeleteObject @ 0x1409554B0 (PiCMDeleteObject.c)
 *     PiCMRegisterDeviceInterface @ 0x140955EF8 (PiCMRegisterDeviceInterface.c)
 *     PiCMSetDeviceProblem @ 0x14095618C (PiCMSetDeviceProblem.c)
 *     PiCMSetRegistryProperty @ 0x140956298 (PiCMSetRegistryProperty.c)
 *     PiCMUnregisterDeviceInterface @ 0x14095644C (PiCMUnregisterDeviceInterface.c)
 * Callees:
 *     PiAuVerifyAccessToObject @ 0x14078A644 (PiAuVerifyAccessToObject.c)
 */

char __fastcall PiAuDoesClientHaveAccess(ACCESS_MASK a1)
{
  char v1; // bl
  __int64 v3; // [rsp+48h] [rbp+10h] BYREF

  v1 = 0;
  LOBYTE(v3) = 0;
  if ( (int)PiAuVerifyAccessToObject(
              a1,
              PiAuSecurityObject,
              (PGENERIC_MAPPING)&PiAuSecurityObjectMapping,
              0LL,
              (__int64)&v3) >= 0 )
    return v3;
  return v1;
}
