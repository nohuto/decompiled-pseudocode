/*
 * XREFs of EtwpGetCurrentSiloMaxLoggers @ 0x1403DD97C
 * Callers:
 *     EtwInitializeSiloState @ 0x1409DEF5C (EtwInitializeSiloState.c)
 *     EtwpInitialize @ 0x140B0433C (EtwpInitialize.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140347630 (RtlInitUnicodeString.c)
 *     ZwClose @ 0x14041B940 (ZwClose.c)
 *     ZwOpenKey @ 0x14041B9A0 (ZwOpenKey.c)
 *     memset @ 0x140435E00 (memset.c)
 *     RtlQueryRegistryValuesEx @ 0x1406DEF50 (RtlQueryRegistryValuesEx.c)
 */

__int64 EtwpGetCurrentSiloMaxLoggers()
{
  UNICODE_STRING DestinationString; // [rsp+30h] [rbp-79h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+40h] [rbp-69h] BYREF
  int v3; // [rsp+70h] [rbp-39h] BYREF
  unsigned int *v4; // [rsp+78h] [rbp-31h]
  _QWORD v5[14]; // [rsp+90h] [rbp-19h] BYREF
  unsigned int v6; // [rsp+110h] [rbp+67h] BYREF
  HANDLE KeyHandle; // [rsp+118h] [rbp+6Fh] BYREF

  KeyHandle = 0LL;
  *(&ObjectAttributes.Attributes + 1) = 0;
  *(_QWORD *)&ObjectAttributes.Length = 48LL;
  DestinationString = 0LL;
  v6 = 80;
  RtlInitUnicodeString(&DestinationString, L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\WMI");
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  if ( ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes) >= 0 )
  {
    memset(v5, 0, sizeof(v5));
    v5[0] = &EtwpQueryRegistryCallback;
    v5[3] = &v3;
    v5[2] = L"EtwMaxLoggers";
    LODWORD(v5[4]) = 4;
    v3 = 4;
    v4 = &v6;
    RtlQueryRegistryValuesEx(0x40000000LL, KeyHandle, v5, 0LL, 0LL);
  }
  if ( KeyHandle )
    ZwClose(KeyHandle);
  return v6;
}
