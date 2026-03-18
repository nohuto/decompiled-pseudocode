/*
 * XREFs of PipOpenServiceEnumKeys @ 0x1407289A8
 * Callers:
 *     PipCallDriverAddDeviceQueryRoutine @ 0x1407282D4 (PipCallDriverAddDeviceQueryRoutine.c)
 *     PiProcessDriverInstance @ 0x14072A040 (PiProcessDriverInstance.c)
 *     PipDmgGetDriverDmarCompatLevel @ 0x14075A6A4 (PipDmgGetDriverDmarCompatLevel.c)
 *     PipHardwareConfigActivateService @ 0x140769500 (PipHardwareConfigActivateService.c)
 *     PiDevCfgVerifyService @ 0x1407696C0 (PiDevCfgVerifyService.c)
 *     PipApplyFunctionToServiceInstances @ 0x1407AEBF0 (PipApplyFunctionToServiceInstances.c)
 *     IoOpenDriverRegistryKey @ 0x1407B2510 (IoOpenDriverRegistryKey.c)
 *     PnpDriverLoadingFailed @ 0x1407BFFD0 (PnpDriverLoadingFailed.c)
 *     PipGetDriverKsrGuid @ 0x140899694 (PipGetDriverKsrGuid.c)
 *     PipServiceInstanceToDeviceInstance @ 0x14089E6A0 (PipServiceInstanceToDeviceInstance.c)
 *     PiDevCfgMakeServiceBootStart @ 0x1408A3CF4 (PiDevCfgMakeServiceBootStart.c)
 *     PpDevCfgInit @ 0x140A5039C (PpDevCfgInit.c)
 * Callees:
 *     ZwClose @ 0x1403F37A0 (ZwClose.c)
 *     ZwOpenKey @ 0x1403F3800 (ZwOpenKey.c)
 *     _PnpCtxGetCachedContextBaseKey @ 0x1405E13D4 (_PnpCtxGetCachedContextBaseKey.c)
 *     _PnpCtxGetCachedNodeBaseKey @ 0x1405E1440 (_PnpCtxGetCachedNodeBaseKey.c)
 *     IopCreateRegistryKeyEx @ 0x14072A500 (IopCreateRegistryKeyEx.c)
 */

int __fastcall PipOpenServiceEnumKeys(UNICODE_STRING *a1, ACCESS_MASK a2, HANDLE *a3, HANDLE *a4, char a5)
{
  int result; // eax
  NTSTATUS v10; // eax
  NTSTATUS v11; // ebx
  _QWORD *v12; // rbx
  HANDLE KeyHandle; // [rsp+38h] [rbp-21h] BYREF
  void *v14; // [rsp+40h] [rbp-19h] BYREF
  HANDLE Handle; // [rsp+48h] [rbp-11h] BYREF
  __int128 v16; // [rsp+50h] [rbp-9h] BYREF
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
        LODWORD(v16) = 655368;
        *((_QWORD *)&v16 + 1) = L"Enum";
        if ( a5 )
        {
          v10 = IopCreateRegistryKeyEx(&Handle, KeyHandle, &v16, a2, 1, 0LL);
        }
        else
        {
          *(&ObjectAttributes.Length + 1) = 0;
          memset(&ObjectAttributes.Attributes + 1, 0, 20);
          ObjectAttributes.RootDirectory = KeyHandle;
          ObjectAttributes.ObjectName = (PUNICODE_STRING)&v16;
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
