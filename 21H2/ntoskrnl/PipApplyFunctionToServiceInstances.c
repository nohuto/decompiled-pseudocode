/*
 * XREFs of PipApplyFunctionToServiceInstances @ 0x1407C1450
 * Callers:
 *     PipInitializeCoreDriversByGroup @ 0x140A5E42C (PipInitializeCoreDriversByGroup.c)
 *     IopInitializeBootDrivers @ 0x140A5EB88 (IopInitializeBootDrivers.c)
 * Callees:
 *     ZwClose @ 0x1403FA760 (ZwClose.c)
 *     ZwEnumerateValueKey @ 0x1403FA7E0 (ZwEnumerateValueKey.c)
 *     PnpUnicodeStringToWstrFree @ 0x14062A5A4 (PnpUnicodeStringToWstrFree.c)
 *     PnpUnicodeStringToWstr @ 0x14062C36C (PnpUnicodeStringToWstr.c)
 *     _CmOpenDeviceRegKey @ 0x140636980 (_CmOpenDeviceRegKey.c)
 *     PnpRegSzToString @ 0x1407401EC (PnpRegSzToString.c)
 *     IopGetRegistryValue @ 0x140742C58 (IopGetRegistryValue.c)
 *     PipOpenServiceEnumKeys @ 0x140742DAC (PipOpenServiceEnumKeys.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
 *     PipAddDevicesToBootDriverWorker @ 0x140A6D2D0 (PipAddDevicesToBootDriverWorker.c)
 */

int __fastcall PipApplyFunctionToServiceInstances(
        __int64 a1,
        UNICODE_STRING *a2,
        __int64 a3,
        char a4,
        void *a5,
        __int64 a6,
        HANDLE Handle)
{
  int result; // eax
  int v8; // ebx
  NTSTATUS RegistryValue; // eax
  int v10; // edi
  _DWORD *PoolWithTag; // rsi
  ULONG i; // r14d
  NTSTATUS v13; // eax
  unsigned int v14; // edx
  _WORD *v15; // rcx
  int v16; // ebx
  PVOID P; // [rsp+40h] [rbp-20h] BYREF
  __int128 v18; // [rsp+48h] [rbp-18h] BYREF
  HANDLE KeyHandle; // [rsp+90h] [rbp+30h] BYREF
  ULONG ResultLength; // [rsp+A0h] [rbp+40h] BYREF
  int v21; // [rsp+A8h] [rbp+48h] BYREF

  LOBYTE(v21) = a4;
  KeyHandle = 0LL;
  ResultLength = 0;
  P = 0LL;
  a5 = 0LL;
  v18 = 0LL;
  result = PipOpenServiceEnumKeys(a2, 0x20019u, 0LL, &KeyHandle, 0);
  if ( result < 0 )
    return result;
  v8 = 0;
  RegistryValue = IopGetRegistryValue(KeyHandle, L"Count", 0, &P);
  v10 = RegistryValue;
  if ( RegistryValue < 0 )
  {
    if ( RegistryValue != -1073741772 )
      goto LABEL_21;
    v10 = 0;
  }
  else
  {
    if ( *((_DWORD *)P + 1) == 4 && *((_DWORD *)P + 3) >= 4u )
      v8 = *(_DWORD *)((char *)P + *((unsigned int *)P + 2));
    ExFreePoolWithTag(P, 0);
  }
  if ( !v8 )
    goto LABEL_21;
  Handle = 0LL;
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x200uLL, 0x20207050u);
  if ( !PoolWithTag )
  {
    v10 = -1073741670;
    goto LABEL_21;
  }
  for ( i = 0; ; ++i )
  {
    v13 = ZwEnumerateValueKey(KeyHandle, i, KeyValueFullInformation, PoolWithTag, 0x200u, &ResultLength);
    if ( v13 < 0 )
      break;
    if ( PoolWithTag[1] == 1 )
    {
      LOWORD(v18) = 0;
      v14 = PoolWithTag[3];
      v15 = (_WORD *)((char *)PoolWithTag + (unsigned int)PoolWithTag[2]);
      v21 = 0;
      PnpRegSzToString(v15, v14, &v21);
      LOWORD(v18) = v21;
      WORD1(v18) = *((_WORD *)PoolWithTag + 6);
      *((_QWORD *)&v18 + 1) = (char *)PoolWithTag + (unsigned int)PoolWithTag[2];
      if ( (_WORD)v21 )
      {
        if ( (int)PnpUnicodeStringToWstr((__int16 **)&a5, 0LL, (unsigned __int16 *)&v18) >= 0 )
        {
          v10 = CmOpenDeviceRegKey(*(__int64 *)&PiPnpRtlCtx, (__int64)a5, 16, 0, 983103, 0, (__int64)&Handle, 0LL);
          PnpUnicodeStringToWstrFree(a5, (__int64)&v18);
          if ( v10 >= 0 )
          {
            v16 = PipAddDevicesToBootDriverWorker(Handle, &v18, a6);
            ZwClose(Handle);
            if ( !v16 )
              goto LABEL_20;
          }
        }
      }
    }
LABEL_12:
    ;
  }
  if ( v13 != -2147483622 )
    goto LABEL_12;
  v10 = 0;
LABEL_20:
  ExFreePoolWithTag(PoolWithTag, 0);
LABEL_21:
  ZwClose(KeyHandle);
  return v10;
}
