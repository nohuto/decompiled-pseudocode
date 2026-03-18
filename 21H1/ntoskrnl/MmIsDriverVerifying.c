/*
 * XREFs of MmIsDriverVerifying @ 0x14037B190
 * Callers:
 *     ViDifCheckCallbackInterception @ 0x14037B158 (ViDifCheckCallbackInterception.c)
 *     VfIsVerificationEnabled @ 0x1403A3DD0 (VfIsVerificationEnabled.c)
 *     VfGetPristineDispatchRoutine @ 0x1409CDCAC (VfGetPristineDispatchRoutine.c)
 *     VfGetPristineDriverInit @ 0x1409CDCFC (VfGetPristineDriverInit.c)
 *     VfDevObjPostAddDevice @ 0x1409D3034 (VfDevObjPostAddDevice.c)
 *     VfDevObjPreAddDevice @ 0x1409D3088 (VfDevObjPreAddDevice.c)
 *     IovUtilIsVerifiedDeviceStack @ 0x1409D3A98 (IovUtilIsVerifiedDeviceStack.c)
 * Callees:
 *     <none>
 */

LOGICAL __stdcall MmIsDriverVerifying(struct _DRIVER_OBJECT *DriverObject)
{
  _DWORD *DriverSection; // rax

  DriverSection = DriverObject->DriverSection;
  return DriverSection && (DriverSection[26] & 0x2000000) != 0;
}
