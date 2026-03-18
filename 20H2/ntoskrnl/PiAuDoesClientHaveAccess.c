/*
 * XREFs of PiAuDoesClientHaveAccess @ 0x1406CB08C
 * Callers:
 *     PiCMOpenObjectKey @ 0x140641670 (PiCMOpenObjectKey.c)
 *     PiCMOpenDeviceKey @ 0x140645930 (PiCMOpenDeviceKey.c)
 *     PiCMOpenClassKey @ 0x1406DEBF0 (PiCMOpenClassKey.c)
 *     PiCMValidateDeviceInstance @ 0x1406EC1AC (PiCMValidateDeviceInstance.c)
 *     PiCMDeleteDevice @ 0x140727D7C (PiCMDeleteDevice.c)
 *     PiDqIrpPropertySet @ 0x14072A3CC (PiDqIrpPropertySet.c)
 *     PiCMSetDeviceProblem @ 0x14072ABF8 (PiCMSetDeviceProblem.c)
 *     PiCMQueryRemove @ 0x14072AD04 (PiCMQueryRemove.c)
 *     PiCMDeviceAction @ 0x14072AF5C (PiCMDeviceAction.c)
 *     PiSwDispatch @ 0x140746A60 (PiSwDispatch.c)
 *     PiCMSetObjectProperty @ 0x140765D28 (PiCMSetObjectProperty.c)
 *     PiCMCreateDevice @ 0x1408B1E70 (PiCMCreateDevice.c)
 *     PiCMCreateObject @ 0x1408B25D4 (PiCMCreateObject.c)
 *     PiCMDeleteClassKey @ 0x1408B278C (PiCMDeleteClassKey.c)
 *     PiCMDeleteDeviceInterfaceKey @ 0x1408B28A8 (PiCMDeleteDeviceInterfaceKey.c)
 *     PiCMDeleteDeviceKey @ 0x1408B2998 (PiCMDeleteDeviceKey.c)
 *     PiCMDeleteObject @ 0x1408B2BD4 (PiCMDeleteObject.c)
 *     PiCMOpenDeviceInterfaceKey @ 0x1408B3584 (PiCMOpenDeviceInterfaceKey.c)
 *     PiCMRegisterDeviceInterface @ 0x1408B374C (PiCMRegisterDeviceInterface.c)
 *     PiCMSetRegistryProperty @ 0x1408B3970 (PiCMSetRegistryProperty.c)
 *     PiCMUnregisterDeviceInterface @ 0x1408B3B28 (PiCMUnregisterDeviceInterface.c)
 * Callees:
 *     PiAuVerifyAccessToObject @ 0x1406CB0D0 (PiAuVerifyAccessToObject.c)
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
