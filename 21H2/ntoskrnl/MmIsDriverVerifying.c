/*
 * XREFs of MmIsDriverVerifying @ 0x1402D87B0
 * Callers:
 *     IopCompleteUnloadOrDelete @ 0x1402D5CA8 (IopCompleteUnloadOrDelete.c)
 *     ViDifCheckCallbackInterception @ 0x1402D8764 (ViDifCheckCallbackInterception.c)
 *     VfIsVerificationEnabled @ 0x1403B64C0 (VfIsVerificationEnabled.c)
 *     IopWriteFile @ 0x140658DCC (IopWriteFile.c)
 *     IopGetBasicInformationFile @ 0x1406C7B5C (IopGetBasicInformationFile.c)
 *     NtUnlockFile @ 0x14071CD90 (NtUnlockFile.c)
 *     NtLockFile @ 0x14071D220 (NtLockFile.c)
 *     NtWriteFile @ 0x14071D850 (NtWriteFile.c)
 *     IopQueryInformation @ 0x14072A9B0 (IopQueryInformation.c)
 *     IopParseDevice @ 0x14072B8B0 (IopParseDevice.c)
 *     IopCloseFile @ 0x14072E9E0 (IopCloseFile.c)
 *     IopXxxControlFile @ 0x1407308F0 (IopXxxControlFile.c)
 *     IopReadFile @ 0x14073A450 (IopReadFile.c)
 *     NtQueryInformationFile @ 0x1407AFEF0 (NtQueryInformationFile.c)
 *     VfGetPristineDispatchRoutine @ 0x140A8C89C (VfGetPristineDispatchRoutine.c)
 *     VfGetPristineDriverInit @ 0x140A8C8EC (VfGetPristineDriverInit.c)
 *     VfDevObjPostAddDevice @ 0x140A91784 (VfDevObjPostAddDevice.c)
 *     VfDevObjPreAddDevice @ 0x140A917D8 (VfDevObjPreAddDevice.c)
 *     IovUtilIsVerifiedDeviceStack @ 0x140A921E0 (IovUtilIsVerifiedDeviceStack.c)
 * Callees:
 *     VfDriverIsKernelImageAddress @ 0x140A89D2C (VfDriverIsKernelImageAddress.c)
 */

LOGICAL __stdcall MmIsDriverVerifying(struct _DRIVER_OBJECT *DriverObject)
{
  struct _DRIVER_OBJECT *v1; // rdx
  _DWORD *DriverSection; // rax
  LOGICAL result; // eax
  void *retaddr; // [rsp+28h] [rbp+0h]

  v1 = DriverObject;
  result = 0;
  if ( (VfRuleClasses & 0x400000) == 0 || (unsigned int)VfDriverIsKernelImageAddress(retaddr, DriverObject) )
  {
    DriverSection = v1->DriverSection;
    if ( DriverSection )
    {
      if ( (DriverSection[26] & 0x2000000) != 0 )
        return 1;
    }
  }
  return result;
}
