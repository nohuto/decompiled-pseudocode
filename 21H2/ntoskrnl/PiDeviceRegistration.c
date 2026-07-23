/*
 * XREFs of PiDeviceRegistration @ 0x14074BFB0
 * Callers:
 *     PpDeviceRegistration @ 0x14074BF20 (PpDeviceRegistration.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x140253A90 (RtlInitUnicodeStringEx.c)
 *     PnpUnicodeStringToWstrFree @ 0x14062A5A4 (PnpUnicodeStringToWstrFree.c)
 *     PnpUnicodeStringToWstr @ 0x14062C36C (PnpUnicodeStringToWstr.c)
 *     _CmGetDeviceRegProp @ 0x14063627C (_CmGetDeviceRegProp.c)
 *     PnpConcatenateUnicodeStrings @ 0x1407491E4 (PnpConcatenateUnicodeStrings.c)
 *     PpForEachDeviceInstanceDriver @ 0x14074C164 (PpForEachDeviceInstanceDriver.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall PiDeviceRegistration(unsigned __int16 *a1, char a2, UNICODE_STRING *a3)
{
  WCHAR *PoolWithTag; // r14
  int DeviceRegProp; // ebx
  __int64 v8; // rdx
  __int64 v9; // rdx
  UNICODE_STRING DestinationString; // [rsp+40h] [rbp-10h] BYREF
  __int16 *v12; // [rsp+90h] [rbp+40h] BYREF
  unsigned int v13; // [rsp+A0h] [rbp+50h] BYREF
  int v14; // [rsp+A8h] [rbp+58h] BYREF

  v12 = 0LL;
  v14 = 0;
  v13 = 0;
  PoolWithTag = 0LL;
  DestinationString = 0LL;
  if ( a3 )
  {
    *(_DWORD *)&a3->Length = 0;
    a3->Buffer = 0LL;
  }
  if ( *a1 <= 2u )
  {
    DeviceRegProp = -1073741811;
    goto LABEL_23;
  }
  if ( *(_WORD *)(*((_QWORD *)a1 + 1) + 2 * ((unsigned __int64)*a1 >> 1) - 2) == 92 )
    *a1 -= 2;
  DeviceRegProp = PnpUnicodeStringToWstr(&v12, 0LL, a1);
  if ( DeviceRegProp < 0 )
    goto LABEL_23;
  v13 = 512;
  PoolWithTag = (WCHAR *)ExAllocatePoolWithTag(PagedPool, 0x200uLL, 0x20207050u);
  if ( !PoolWithTag )
  {
    DeviceRegProp = -1073741670;
    goto LABEL_23;
  }
  DeviceRegProp = CmGetDeviceRegProp(
                    *(__int64 *)&PiPnpRtlCtx,
                    (__int64)v12,
                    0LL,
                    5,
                    (__int64)&v14,
                    (__int64)PoolWithTag,
                    (__int64)&v13,
                    0);
  PnpUnicodeStringToWstrFree(v12, (__int64)a1);
  if ( DeviceRegProp < 0 )
  {
    if ( DeviceRegProp == -1073741275 )
      DeviceRegProp = 0;
LABEL_13:
    if ( DeviceRegProp < 0 )
      goto LABEL_23;
    goto LABEL_14;
  }
  DeviceRegProp = -1073741772;
  if ( v14 != 1 || v13 <= 2 )
    goto LABEL_23;
  RtlInitUnicodeStringEx(&DestinationString, PoolWithTag);
  if ( a3 )
  {
    DeviceRegProp = PnpConcatenateUnicodeStrings(a3, &DestinationString);
    goto LABEL_13;
  }
LABEL_14:
  LOBYTE(v12) = a2;
  DeviceRegProp = PpForEachDeviceInstanceDriver(a1, v8, &v12);
  if ( DeviceRegProp >= 0 )
    goto LABEL_15;
  if ( a2 )
  {
    LOBYTE(v12) = 0;
    PpForEachDeviceInstanceDriver(a1, v9, &v12);
  }
LABEL_23:
  if ( a3 && a3->Length )
  {
    ExFreePoolWithTag(a3->Buffer, 0);
    a3->Buffer = 0LL;
    *(_DWORD *)&a3->Length = 0;
  }
LABEL_15:
  if ( PoolWithTag )
    ExFreePoolWithTag(PoolWithTag, 0);
  return (unsigned int)DeviceRegProp;
}
