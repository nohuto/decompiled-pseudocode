/*
 * XREFs of RaidGetTelemetryLogPageIds @ 0x1C0013088
 * Callers:
 *     RaUnitScsiGetDumpPointersIoctl @ 0x1C001267C (RaUnitScsiGetDumpPointersIoctl.c)
 *     RaidUnitCreateDumpData @ 0x1C007A63C (RaidUnitCreateDumpData.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0019FC0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C001B1C0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C001B4C0 (memset.c)
 */

bool __fastcall RaidGetTelemetryLogPageIds(int a1, __int64 a2, _WORD *a3)
{
  const WCHAR *v5; // rdx
  NTSTATUS v6; // ebx
  void *v8; // rbx
  PVOID SystemRoutineAddress; // rax
  void *v10; // rcx
  int v11; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v12; // [rsp+38h] [rbp-C8h] BYREF
  void *KeyHandle; // [rsp+40h] [rbp-C0h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+48h] [rbp-B8h] BYREF
  struct _UNICODE_STRING SystemRoutineName; // [rsp+58h] [rbp-A8h] BYREF
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+68h] [rbp-98h] BYREF
  _QWORD v17[22]; // [rsp+A0h] [rbp-60h] BYREF

  *(&ObjectAttributes.Length + 1) = 0;
  *(&ObjectAttributes.Attributes + 1) = 0;
  KeyHandle = 0LL;
  v11 = 0;
  DestinationString = 0LL;
  if ( ((a1 - 3) & 0xFFFFFFF7) != 0 )
  {
    if ( a1 == 1 || a1 == 10 )
      v5 = L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\Storage\\StorageTelemetry\\SCSI";
    else
      v5 = L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\Storage\\StorageTelemetry\\Generic";
  }
  else
  {
    v5 = L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\Storage\\StorageTelemetry\\ATA";
  }
  RtlInitUnicodeString(&DestinationString, v5);
  ObjectAttributes.Length = 48;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v6 = ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes);
  if ( v6 >= 0 )
  {
    memset(v17, 0, 0xA8uLL);
    v8 = KeyHandle;
    v17[2] = L"PrivateLogAddress";
    LODWORD(v17[6]) = 4;
    v17[3] = &v11;
    LODWORD(v17[11]) = 4;
    v17[7] = RaidpTelemetryRegQueryRoutine;
    LODWORD(v17[8]) = 17;
    v12 = 17LL;
    v17[9] = L"PublicLogAddressList";
    LODWORD(v17[1]) = 304;
    LODWORD(v17[4]) = 67108868;
    v17[5] = 0LL;
    v17[10] = a2;
    v17[12] = 0LL;
    LODWORD(v17[13]) = 0;
    SystemRoutineName = 0LL;
    RtlInitUnicodeString(&SystemRoutineName, L"RtlQueryRegistryValuesEx");
    SystemRoutineAddress = MmGetSystemRoutineAddress(&SystemRoutineName);
    if ( !SystemRoutineAddress )
      SystemRoutineAddress = RtlQueryRegistryValues;
    v6 = ((__int64 (__fastcall *)(__int64, void *, _QWORD *, __int64 *, _QWORD))SystemRoutineAddress)(
           0x40000000LL,
           v8,
           v17,
           &v12,
           0LL);
    if ( HIDWORD(v12) && HIDWORD(v12) < (unsigned int)(v12 - 1) )
      *(_WORD *)(a2 + 2LL * (unsigned int)(HIDWORD(v12) + 1)) = 0;
    v10 = KeyHandle;
    *a3 = v11;
    ZwClose(v10);
  }
  return v6 >= 0;
}
