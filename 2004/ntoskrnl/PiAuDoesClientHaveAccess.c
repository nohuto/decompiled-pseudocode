/*
 * XREFs of PiAuDoesClientHaveAccess @ 0x1406F7F9C
 * Callers:
 *     PiCMOpenClassKey @ 0x1405D01E4 (PiCMOpenClassKey.c)
 *     PiCMOpenDeviceKey @ 0x1405D3300 (PiCMOpenDeviceKey.c)
 *     PiCMOpenObjectKey @ 0x1405D719C (PiCMOpenObjectKey.c)
 *     PiCMValidateDeviceInstance @ 0x1406C1CD8 (PiCMValidateDeviceInstance.c)
 *     PiDqIrpPropertySet @ 0x140714030 (PiDqIrpPropertySet.c)
 *     PiCMDeleteDevice @ 0x140719D8C (PiCMDeleteDevice.c)
 *     PiCMSetDeviceProblem @ 0x14071CD5C (PiCMSetDeviceProblem.c)
 *     PiCMQueryRemove @ 0x14071CE68 (PiCMQueryRemove.c)
 *     PiCMDeviceAction @ 0x14071D0C0 (PiCMDeviceAction.c)
 *     PiSwDispatch @ 0x1407375D0 (PiSwDispatch.c)
 *     PiCMSetObjectProperty @ 0x1407570E8 (PiCMSetObjectProperty.c)
 *     PiCMCreateDevice @ 0x1408AC340 (PiCMCreateDevice.c)
 *     PiCMCreateObject @ 0x1408ACAA4 (PiCMCreateObject.c)
 *     PiCMDeleteClassKey @ 0x1408ACC5C (PiCMDeleteClassKey.c)
 *     PiCMDeleteDeviceInterfaceKey @ 0x1408ACD78 (PiCMDeleteDeviceInterfaceKey.c)
 *     PiCMDeleteDeviceKey @ 0x1408ACE68 (PiCMDeleteDeviceKey.c)
 *     PiCMDeleteObject @ 0x1408AD0A4 (PiCMDeleteObject.c)
 *     PiCMOpenDeviceInterfaceKey @ 0x1408ADA54 (PiCMOpenDeviceInterfaceKey.c)
 *     PiCMRegisterDeviceInterface @ 0x1408ADC1C (PiCMRegisterDeviceInterface.c)
 *     PiCMSetRegistryProperty @ 0x1408ADE40 (PiCMSetRegistryProperty.c)
 *     PiCMUnregisterDeviceInterface @ 0x1408ADFF8 (PiCMUnregisterDeviceInterface.c)
 * Callees:
 *     PiAuVerifyAccessToObject @ 0x1406F7FE0 (PiAuVerifyAccessToObject.c)
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
