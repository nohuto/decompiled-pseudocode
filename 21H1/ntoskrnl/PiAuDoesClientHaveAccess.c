/*
 * XREFs of PiAuDoesClientHaveAccess @ 0x1406B2B20
 * Callers:
 *     PiCMOpenClassKey @ 0x14069F5F4 (PiCMOpenClassKey.c)
 *     PiCMOpenDeviceKey @ 0x1406A19FC (PiCMOpenDeviceKey.c)
 *     PiCMOpenObjectKey @ 0x1406A5898 (PiCMOpenObjectKey.c)
 *     PiCMValidateDeviceInstance @ 0x1406B1A38 (PiCMValidateDeviceInstance.c)
 *     PiDqIrpPropertySet @ 0x140712180 (PiDqIrpPropertySet.c)
 *     PiCMDeleteDevice @ 0x1407179FC (PiCMDeleteDevice.c)
 *     PiCMSetDeviceProblem @ 0x14071ADDC (PiCMSetDeviceProblem.c)
 *     PiCMQueryRemove @ 0x14071AEE8 (PiCMQueryRemove.c)
 *     PiCMDeviceAction @ 0x14071B140 (PiCMDeviceAction.c)
 *     PiCMSetObjectProperty @ 0x14072CA48 (PiCMSetObjectProperty.c)
 *     PiSwDispatch @ 0x140753730 (PiSwDispatch.c)
 *     PiCMCreateDevice @ 0x1408AB020 (PiCMCreateDevice.c)
 *     PiCMCreateObject @ 0x1408AB784 (PiCMCreateObject.c)
 *     PiCMDeleteClassKey @ 0x1408AB93C (PiCMDeleteClassKey.c)
 *     PiCMDeleteDeviceInterfaceKey @ 0x1408ABA58 (PiCMDeleteDeviceInterfaceKey.c)
 *     PiCMDeleteDeviceKey @ 0x1408ABB48 (PiCMDeleteDeviceKey.c)
 *     PiCMDeleteObject @ 0x1408ABD84 (PiCMDeleteObject.c)
 *     PiCMOpenDeviceInterfaceKey @ 0x1408AC734 (PiCMOpenDeviceInterfaceKey.c)
 *     PiCMRegisterDeviceInterface @ 0x1408AC8FC (PiCMRegisterDeviceInterface.c)
 *     PiCMSetRegistryProperty @ 0x1408ACB20 (PiCMSetRegistryProperty.c)
 *     PiCMUnregisterDeviceInterface @ 0x1408ACCD8 (PiCMUnregisterDeviceInterface.c)
 * Callees:
 *     PiAuVerifyAccessToObject @ 0x1406B2B64 (PiAuVerifyAccessToObject.c)
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
