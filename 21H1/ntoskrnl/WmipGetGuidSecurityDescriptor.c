/*
 * XREFs of WmipGetGuidSecurityDescriptor @ 0x140682228
 * Callers:
 *     WmipCreateGuidObject @ 0x140682008 (WmipCreateGuidObject.c)
 * Callees:
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     memset @ 0x140408F80 (memset.c)
 *     RtlLengthSecurityDescriptor @ 0x140614750 (RtlLengthSecurityDescriptor.c)
 *     RtlpQueryRegistryValues @ 0x1406823A0 (RtlpQueryRegistryValues.c)
 *     RtlGetPersistedStateLocation @ 0x140682B80 (RtlGetPersistedStateLocation.c)
 *     ExFreePoolWithTag @ 0x1409B1010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B1030 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall WmipGetGuidSecurityDescriptor(__int64 a1, PVOID *a2)
{
  ULONG BufferLengthIn; // esi
  WCHAR *TargetPath; // rdi
  int RegistryValues; // eax
  NTSTATUS PersistedStateLocation; // eax
  PVOID v8; // rcx
  ULONG BufferLengthOut; // [rsp+40h] [rbp-C0h] BYREF
  PVOID P; // [rsp+48h] [rbp-B8h] BYREF
  PSECURITY_DESCRIPTOR SecurityDescriptor[2]; // [rsp+50h] [rbp-B0h] BYREF
  _QWORD v13[22]; // [rsp+60h] [rbp-A0h] BYREF

  SecurityDescriptor[0] = 0LL;
  P = 0LL;
  BufferLengthIn = 0;
  BufferLengthOut = 0;
  TargetPath = 0LL;
  memset(v13, 0, 0xA8uLL);
  LODWORD(v13[8]) = 0;
  v13[0] = &WmipSDRegistryQueryRoutine;
  LODWORD(v13[4]) = 3;
  v13[3] = SecurityDescriptor;
  v13[2] = *(_QWORD *)(a1 + 8);
  v13[10] = &P;
  v13[7] = &WmipSDRegistryQueryRoutine;
  LODWORD(v13[11]) = 3;
  v13[9] = L"00000000-0000-0000-0000-000000000000";
  RegistryValues = RtlpQueryRegistryValues(2LL, L"WMI\\Security", v13, 0LL);
  *a2 = 0LL;
  if ( RegistryValues < 0 )
    goto LABEL_14;
  while ( 1 )
  {
    if ( BufferLengthIn )
    {
      TargetPath = (WCHAR *)ExAllocatePoolWithTag(PagedPool, BufferLengthIn, 0x70696D57u);
      if ( !TargetPath )
        return 3221225626LL;
    }
    PersistedStateLocation = RtlGetPersistedStateLocation(
                               L"ETWSecurityPath",
                               0LL,
                               0LL,
                               LocationTypeRegistry,
                               TargetPath,
                               BufferLengthIn,
                               &BufferLengthOut);
    if ( PersistedStateLocation != -2147483643 )
      break;
    if ( TargetPath )
    {
      ExFreePoolWithTag(TargetPath, 0);
      TargetPath = 0LL;
    }
    BufferLengthIn = BufferLengthOut;
  }
  if ( !PersistedStateLocation )
  {
    if ( SecurityDescriptor[0] )
    {
      v13[5] = SecurityDescriptor;
      LODWORD(v13[6]) = RtlLengthSecurityDescriptor(SecurityDescriptor[0]);
    }
    if ( P )
    {
      v13[12] = &P;
      LODWORD(v13[13]) = RtlLengthSecurityDescriptor(P);
    }
    RtlpQueryRegistryValues(0LL, TargetPath, v13, 0LL);
  }
  if ( SecurityDescriptor[0] )
  {
    v8 = P;
    *a2 = SecurityDescriptor[0];
    if ( v8 )
      ExFreePoolWithTag(v8, 0);
  }
  else if ( P )
  {
    *a2 = P;
  }
  if ( !*a2 )
LABEL_14:
    *a2 = (PVOID)WmipDefaultAccessSd;
  if ( TargetPath )
    ExFreePoolWithTag(TargetPath, 0);
  return 0LL;
}
