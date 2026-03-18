/*
 * XREFs of PiDevCfgVerifyDeviceAllowed @ 0x140767988
 * Callers:
 *     PiDevCfgConfigureDevice @ 0x1407284B0 (PiDevCfgConfigureDevice.c)
 * Callees:
 *     PnpValidateRegistryDword @ 0x1403974C8 (PnpValidateRegistryDword.c)
 *     ZwClose @ 0x1403F2510 (ZwClose.c)
 *     ZwOpenKey @ 0x1403F2570 (ZwOpenKey.c)
 *     PiDevCfgQueryResolveValue @ 0x1405089F4 (PiDevCfgQueryResolveValue.c)
 *     PiDevCfgFreeResolveContext @ 0x140750EBC (PiDevCfgFreeResolveContext.c)
 *     PiDevCfgInitResolveContext @ 0x14075144C (PiDevCfgInitResolveContext.c)
 *     ExFreePoolWithTag @ 0x1409B1010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PiDevCfgVerifyDeviceAllowed(__int64 a1, void *a2)
{
  int inited; // ebx
  int v5; // edi
  unsigned int *v7; // rcx
  _DWORD v8[2]; // [rsp+20h] [rbp-60h] BYREF
  const WCHAR *v9; // [rsp+28h] [rbp-58h]
  _OWORD v10[2]; // [rsp+30h] [rbp-50h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+50h] [rbp-30h] BYREF
  HANDLE KeyHandle; // [rsp+A8h] [rbp+28h] BYREF
  __int64 v13; // [rsp+B0h] [rbp+30h] BYREF

  inited = 0;
  ObjectAttributes.RootDirectory = a2;
  v8[1] = 0;
  v13 = 0LL;
  *(&ObjectAttributes.Length + 1) = 0;
  memset(&ObjectAttributes.Attributes + 1, 0, 20);
  KeyHandle = 0LL;
  v9 = L"Status";
  v8[0] = 917516;
  ObjectAttributes.ObjectName = (PUNICODE_STRING)v8;
  memset(v10, 0, sizeof(v10));
  v5 = 0;
  ObjectAttributes.Length = 48;
  ObjectAttributes.Attributes = 576;
  if ( ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes) >= 0 )
  {
    inited = PiDevCfgInitResolveContext(a1, a2, (__int64)v10);
    if ( inited >= 0 && (int)PiDevCfgQueryResolveValue((__int64)v10, KeyHandle, (__int64)L"Blocked", &v13) >= 0 )
    {
      if ( PnpValidateRegistryDword(v13) )
        v5 = *(unsigned int *)((char *)v7 + v7[2]);
      ExFreePoolWithTag(v7, 0);
      if ( v5 )
        inited = -1073740948;
    }
  }
  PiDevCfgFreeResolveContext((__int64)v10);
  if ( KeyHandle )
    ZwClose(KeyHandle);
  return (unsigned int)inited;
}
