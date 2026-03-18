/*
 * XREFs of PopOpenKey @ 0x1403A4870
 * Callers:
 *     PopOpenPowerKey @ 0x1403A484C (PopOpenPowerKey.c)
 *     PpmInitIllegalThrottleLogging @ 0x1403C33B8 (PpmInitIllegalThrottleLogging.c)
 *     PopLoadResumeContext @ 0x140762DD4 (PopLoadResumeContext.c)
 *     PopSaveHibernateEnabled @ 0x1408DCCB4 (PopSaveHibernateEnabled.c)
 *     PopSetHiberFileSize @ 0x1408E2C0C (PopSetHiberFileSize.c)
 *     PopSetHiberFileType @ 0x1408E2D1C (PopSetHiberFileType.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140206450 (RtlInitUnicodeString.c)
 *     ZwClose @ 0x1403F2510 (ZwClose.c)
 *     ZwOpenKey @ 0x1403F2570 (ZwOpenKey.c)
 *     ZwCreateKey @ 0x1403F26D0 (ZwCreateKey.c)
 */

__int64 __fastcall PopOpenKey(HANDLE *a1, const WCHAR *a2, ACCESS_MASK a3)
{
  NTSTATUS v6; // ebx
  HANDLE KeyHandle; // [rsp+40h] [rbp-9h] BYREF
  UNICODE_STRING DestinationString; // [rsp+48h] [rbp-1h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+58h] [rbp+Fh] BYREF
  HANDLE v11; // [rsp+C8h] [rbp+7Fh] BYREF

  *(&ObjectAttributes.Length + 1) = 0;
  memset(&ObjectAttributes.Attributes + 1, 0, 20);
  KeyHandle = 0LL;
  v11 = 0LL;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = &CmRegistryMachineSystemCurrentControlSet;
  ObjectAttributes.Length = 48;
  ObjectAttributes.Attributes = 576;
  DestinationString = 0LL;
  v6 = ZwOpenKey(&KeyHandle, 0x2001Fu, &ObjectAttributes);
  if ( v6 >= 0 )
  {
    RtlInitUnicodeString(&DestinationString, a2);
    ObjectAttributes.RootDirectory = KeyHandle;
    ObjectAttributes.Length = 48;
    ObjectAttributes.ObjectName = &DestinationString;
    ObjectAttributes.Attributes = 576;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    v6 = ZwCreateKey(&v11, a3, &ObjectAttributes, 0, 0LL, 0, 0LL);
    if ( v6 < 0 )
      v11 = 0LL;
    else
      *a1 = v11;
    if ( KeyHandle )
      ZwClose(KeyHandle);
  }
  return (unsigned int)v6;
}
