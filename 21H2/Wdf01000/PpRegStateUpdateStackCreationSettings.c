/*
 * XREFs of PpRegStateUpdateStackCreationSettings @ 0x1C00BF0E8
 * Callers:
 *     IoDevObjCreateDeviceSecure @ 0x1C00BDF30 (IoDevObjCreateDeviceSecure.c)
 * Callees:
 *     PiRegStateOpenClassKey @ 0x1C00BEBF4 (PiRegStateOpenClassKey.c)
 *     CmRegUtilCreateWstrKey @ 0x1C00BF3C0 (CmRegUtilCreateWstrKey.c)
 *     CmRegUtilWstrValueSetFullBuffer @ 0x1C00BF7F0 (CmRegUtilWstrValueSetFullBuffer.c)
 */

int __fastcall PpRegStateUpdateStackCreationSettings(
        const _GUID *DeviceClassGuid,
        STACK_CREATION_SETTINGS *StackCreationSettings)
{
  int result; // eax
  unsigned int v4; // r8d
  __int64 v5; // r9
  unsigned int *Handle; // rbx
  int v7; // ebx
  ULONG v8; // eax
  wchar_t *v9; // rdx
  unsigned int v10; // r8d
  void *classPropertyKey; // [rsp+40h] [rbp-18h] BYREF
  void *tempDescriptor; // [rsp+70h] [rbp+18h] BYREF
  void *classKey; // [rsp+78h] [rbp+20h] BYREF

  tempDescriptor = 0LL;
  classPropertyKey = 0LL;
  classKey = 0LL;
  result = PiRegStateOpenClassKey(DeviceClassGuid, (unsigned int)StackCreationSettings, 0, 0LL, &classKey);
  if ( result >= 0 )
  {
    Handle = PiRegStateSysAllInherittedSecurityDescriptor;
    if ( !HIDWORD(WPP_GLOBAL_WDF_Control.Dpc.DeferredRoutine) )
    {
      LOBYTE(v5) = 1;
      if ( (int)SeCaptureSecurityDescriptor(PiRegStateSysAllInherittedSecurityDescriptor, 0LL, 1LL, v5, &tempDescriptor) < 0 )
      {
        HIDWORD(WPP_GLOBAL_WDF_Control.Dpc.DeferredRoutine) = 2;
      }
      else
      {
        HIDWORD(WPP_GLOBAL_WDF_Control.Dpc.DeferredRoutine) = 1;
        ExFreePoolWithTag(tempDescriptor, 0);
      }
    }
    if ( HIDWORD(WPP_GLOBAL_WDF_Control.Dpc.DeferredRoutine) != 1 )
      Handle = 0LL;
    tempDescriptor = Handle;
    v7 = CmRegUtilCreateWstrKey(classKey, (wchar_t *)L"Properties", v4, v5, Handle, 0LL, &classPropertyKey);
    ZwClose(classKey);
    if ( v7 >= 0 )
    {
      v8 = RtlLengthSecurityDescriptor(StackCreationSettings->SecurityDescriptor);
      v7 = CmRegUtilWstrValueSetFullBuffer(classPropertyKey, v9, v10, StackCreationSettings->SecurityDescriptor, v8);
      ZwClose(classPropertyKey);
    }
    return v7;
  }
  return result;
}
