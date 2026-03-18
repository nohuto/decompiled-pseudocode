/*
 * XREFs of PipOpenServiceEnumKeys @ 0x14072827C
 * Callers:
 *     PiProcessDriverInstance @ 0x140725700 (PiProcessDriverInstance.c)
 *     PipCallDriverAddDeviceQueryRoutine @ 0x140727BA8 (PipCallDriverAddDeviceQueryRoutine.c)
 *     PipDmgGetDriverDmarCompatLevel @ 0x140759C2C (PipDmgGetDriverDmarCompatLevel.c)
 *     PipHardwareConfigActivateService @ 0x140767120 (PipHardwareConfigActivateService.c)
 *     PiDevCfgVerifyService @ 0x1407672E0 (PiDevCfgVerifyService.c)
 *     PipApplyFunctionToServiceInstances @ 0x1407ABA90 (PipApplyFunctionToServiceInstances.c)
 *     IoOpenDriverRegistryKey @ 0x1407AF440 (IoOpenDriverRegistryKey.c)
 *     PnpDriverLoadingFailed @ 0x1407BCE60 (PnpDriverLoadingFailed.c)
 *     PipGetDriverKsrGuid @ 0x140898374 (PipGetDriverKsrGuid.c)
 *     PipServiceInstanceToDeviceInstance @ 0x14089D380 (PipServiceInstanceToDeviceInstance.c)
 *     PiDevCfgMakeServiceBootStart @ 0x1408A29D4 (PiDevCfgMakeServiceBootStart.c)
 *     PpDevCfgInit @ 0x140A4A920 (PpDevCfgInit.c)
 * Callees:
 *     ZwClose @ 0x1403F2510 (ZwClose.c)
 *     ZwOpenKey @ 0x1403F2570 (ZwOpenKey.c)
 *     _PnpCtxGetCachedContextBaseKey @ 0x14061750C (_PnpCtxGetCachedContextBaseKey.c)
 *     _PnpCtxGetCachedNodeBaseKey @ 0x140617578 (_PnpCtxGetCachedNodeBaseKey.c)
 *     IopCreateRegistryKeyEx @ 0x1407253D4 (IopCreateRegistryKeyEx.c)
 */

int __fastcall PipOpenServiceEnumKeys(UNICODE_STRING *a1, ACCESS_MASK a2, HANDLE *a3, HANDLE *a4, char a5)
{
  int result; // eax
  int v10; // eax
  int v11; // ebx
  _QWORD *v12; // rbx
  HANDLE KeyHandle; // [rsp+38h] [rbp-21h] BYREF
  void *v14; // [rsp+40h] [rbp-19h] BYREF
  HANDLE Handle; // [rsp+48h] [rbp-11h] BYREF
  UNICODE_STRING v16; // [rsp+50h] [rbp-9h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+60h] [rbp+7h] BYREF

  Handle = 0LL;
  v14 = 0LL;
  v16 = 0LL;
  result = PnpCtxGetCachedContextBaseKey(*(__int64 *)&PiPnpRtlCtx, 6, (__int64)&v14);
  if ( result >= 0 )
  {
    *(&ObjectAttributes.Length + 1) = 0;
    memset(&ObjectAttributes.Attributes + 1, 0, 20);
    KeyHandle = 0LL;
    ObjectAttributes.RootDirectory = v14;
    ObjectAttributes.Length = 48;
    ObjectAttributes.Attributes = 576;
    ObjectAttributes.ObjectName = a1;
    result = ZwOpenKey(&KeyHandle, a2, &ObjectAttributes);
    if ( result == -1073741772 )
    {
      v12 = 0LL;
      while ( 1 )
      {
        if ( !v12 )
          v12 = (_QWORD *)(*(_QWORD *)&PiPnpRtlCtx + 8LL);
        v12 = (_QWORD *)*v12;
        if ( v12 == (_QWORD *)(*(_QWORD *)&PiPnpRtlCtx + 8LL) || !v12 )
          break;
        result = PnpCtxGetCachedNodeBaseKey(*(__int64 *)&PiPnpRtlCtx, v12, 6, &v14);
        if ( result < 0 )
        {
          if ( result != -2147483622 )
            goto LABEL_3;
          break;
        }
        *(&ObjectAttributes.Length + 1) = 0;
        memset(&ObjectAttributes.Attributes + 1, 0, 20);
        KeyHandle = 0LL;
        ObjectAttributes.RootDirectory = v14;
        ObjectAttributes.Length = 48;
        ObjectAttributes.Attributes = 576;
        ObjectAttributes.ObjectName = a1;
        result = ZwOpenKey(&KeyHandle, a2, &ObjectAttributes);
        if ( result != -1073741772 )
          goto LABEL_3;
      }
      result = -1073741772;
    }
LABEL_3:
    if ( result >= 0 )
    {
      if ( a4 || a5 )
      {
        *(_DWORD *)&v16.Length = 655368;
        v16.Buffer = L"Enum";
        if ( a5 )
        {
          v10 = IopCreateRegistryKeyEx(&Handle, KeyHandle, &v16, a2, 1u, 0LL);
        }
        else
        {
          *(&ObjectAttributes.Length + 1) = 0;
          memset(&ObjectAttributes.Attributes + 1, 0, 20);
          ObjectAttributes.RootDirectory = KeyHandle;
          ObjectAttributes.ObjectName = &v16;
          ObjectAttributes.Length = 48;
          ObjectAttributes.Attributes = 576;
          v10 = ZwOpenKey(&Handle, a2, &ObjectAttributes);
        }
        v11 = v10;
        if ( v10 < 0 )
        {
          ZwClose(KeyHandle);
          return v11;
        }
        if ( a4 )
          *a4 = Handle;
        else
          ZwClose(Handle);
      }
      if ( a3 )
        *a3 = KeyHandle;
      else
        ZwClose(KeyHandle);
      return 0;
    }
  }
  return result;
}
