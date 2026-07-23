/*
 * XREFs of PiAuDoesClientHaveAccess @ 0x1405FF814
 * Callers:
 *     PiCMValidateDeviceInstance @ 0x1405FF280 (PiCMValidateDeviceInstance.c)
 *     PiCMGetDeviceIdList @ 0x140604994 (PiCMGetDeviceIdList.c)
 *     PiCMOpenClassKey @ 0x140622BDC (PiCMOpenClassKey.c)
 *     PiCMOpenDeviceKey @ 0x140624D98 (PiCMOpenDeviceKey.c)
 *     PiCMOpenObjectKey @ 0x140628AA8 (PiCMOpenObjectKey.c)
 *     PiDqIrpPropertySet @ 0x14072682C (PiDqIrpPropertySet.c)
 *     PiCMDeleteDevice @ 0x14072BB1C (PiCMDeleteDevice.c)
 *     PiCMSetDeviceProblem @ 0x14072EDDC (PiCMSetDeviceProblem.c)
 *     PiCMQueryRemove @ 0x14072EEE8 (PiCMQueryRemove.c)
 *     PiCMDeviceAction @ 0x14072F140 (PiCMDeviceAction.c)
 *     PiCMSetObjectProperty @ 0x140747578 (PiCMSetObjectProperty.c)
 *     PiSwDispatch @ 0x14074DB50 (PiSwDispatch.c)
 *     PiCMCreateDevice @ 0x1408AF5A0 (PiCMCreateDevice.c)
 *     PiCMCreateObject @ 0x1408AFD04 (PiCMCreateObject.c)
 *     PiCMDeleteClassKey @ 0x1408AFEBC (PiCMDeleteClassKey.c)
 *     PiCMDeleteDeviceInterfaceKey @ 0x1408AFFD8 (PiCMDeleteDeviceInterfaceKey.c)
 *     PiCMDeleteDeviceKey @ 0x1408B00C8 (PiCMDeleteDeviceKey.c)
 *     PiCMDeleteObject @ 0x1408B0304 (PiCMDeleteObject.c)
 *     PiCMOpenDeviceInterfaceKey @ 0x1408B0CB4 (PiCMOpenDeviceInterfaceKey.c)
 *     PiCMRegisterDeviceInterface @ 0x1408B0E7C (PiCMRegisterDeviceInterface.c)
 *     PiCMSetRegistryProperty @ 0x1408B10A0 (PiCMSetRegistryProperty.c)
 *     PiCMUnregisterDeviceInterface @ 0x1408B1258 (PiCMUnregisterDeviceInterface.c)
 * Callees:
 *     PiAuVerifyAccessToObject @ 0x1405FF858 (PiAuVerifyAccessToObject.c)
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
