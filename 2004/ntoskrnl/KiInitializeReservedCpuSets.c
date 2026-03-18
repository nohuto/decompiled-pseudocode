/*
 * XREFs of KiInitializeReservedCpuSets @ 0x140A4555C
 * Callers:
 *     Phase1InitializationIoReady @ 0x140A447A8 (Phase1InitializationIoReady.c)
 *     KeInitSystem @ 0x140A4495C (KeInitSystem.c)
 * Callees:
 *     KeSetSystemAllowedCpuSets @ 0x14032B394 (KeSetSystemAllowedCpuSets.c)
 *     KiValidateCpuSetMasks @ 0x14032B988 (KiValidateCpuSetMasks.c)
 *     __security_check_cookie @ 0x1403CCE60 (__security_check_cookie.c)
 *     ZwClose @ 0x1403F37A0 (ZwClose.c)
 *     ZwOpenKey @ 0x1403F3800 (ZwOpenKey.c)
 *     ZwQueryValueKey @ 0x1403F38A0 (ZwQueryValueKey.c)
 *     memmove @ 0x140409FC0 (memmove.c)
 *     memset @ 0x14040A280 (memset.c)
 */

NTSTATUS KiInitializeReservedCpuSets()
{
  NTSTATUS result; // eax
  unsigned int v1; // edx
  int i; // ebx
  ULONG ResultLength; // [rsp+30h] [rbp-D0h] BYREF
  HANDLE KeyHandle; // [rsp+38h] [rbp-C8h] BYREF
  _QWORD v5[2]; // [rsp+40h] [rbp-C0h] BYREF
  UNICODE_STRING ValueName; // [rsp+50h] [rbp-B0h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+60h] [rbp-A0h] BYREF
  _DWORD KeyValueInformation[44]; // [rsp+90h] [rbp-70h] BYREF

  memset(KeyValueInformation, 0, sizeof(KeyValueInformation));
  *(&ObjectAttributes.Length + 1) = 0;
  memset(&ObjectAttributes.Attributes + 1, 0, 20);
  ResultLength = 0;
  KeyHandle = 0LL;
  v5[1] = L"\\Registry\\Machine\\SYSTEM\\CurrentControlSet\\Control\\Session Manager\\kernel";
  ValueName.Buffer = L"ReservedCpuSets";
  v5[0] = 9699474LL;
  *(_QWORD *)&ValueName.Length = 2097182LL;
  memset(&KiReservedCpuSets, 0, 0xA0uLL);
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = (PUNICODE_STRING)v5;
  ObjectAttributes.Length = 48;
  ObjectAttributes.Attributes = 576;
  result = ZwOpenKey(&KeyHandle, 1u, &ObjectAttributes);
  if ( result >= 0 )
  {
    result = ZwQueryValueKey(
               KeyHandle,
               &ValueName,
               KeyValuePartialInformation,
               KeyValueInformation,
               0xB0u,
               &ResultLength);
    if ( result >= 0 && KeyValueInformation[1] == 3 && (KeyValueInformation[2] & 7) == 0 )
    {
      result = KiValidateCpuSetMasks((char *)&KeyValueInformation[3], KeyValueInformation[2] >> 3);
      if ( result >= 0 )
      {
        if ( v1 >= 0x14 )
          v1 = 20;
        if ( v1 )
          memmove(&KiReservedCpuSets, &KeyValueInformation[3], 8LL * v1);
        for ( i = 0; i < 2; ++i )
          result = KeSetSystemAllowedCpuSets(0, 0LL, i);
      }
    }
  }
  if ( KeyHandle )
    return ZwClose(KeyHandle);
  return result;
}
