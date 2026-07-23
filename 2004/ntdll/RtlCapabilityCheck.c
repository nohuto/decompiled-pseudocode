/*
 * XREFs of RtlCapabilityCheck @ 0x18003FC80
 * Callers:
 *     RtlCapabilityCheckForSingleSessionSku @ 0x180088540 (RtlCapabilityCheckForSingleSessionSku.c)
 * Callees:
 *     RtlDeriveCapabilitySidsFromName @ 0x18001FD40 (RtlDeriveCapabilitySidsFromName.c)
 *     RtlCheckTokenMembershipEx @ 0x180036520 (RtlCheckTokenMembershipEx.c)
 *     RtlInitUnicodeString @ 0x18003BA40 (RtlInitUnicodeString.c)
 *     RtlCheckTokenCapability @ 0x18003C650 (RtlCheckTokenCapability.c)
 *     RtlInitializeSid @ 0x180040060 (RtlInitializeSid.c)
 *     RtlQueryPerformanceCounter @ 0x180040150 (RtlQueryPerformanceCounter.c)
 *     RtlIsMultiSessionSku @ 0x180040200 (RtlIsMultiSessionSku.c)
 *     RtlpLogCapabilityCheckLatency @ 0x180042354 (RtlpLogCapabilityCheckLatency.c)
 *     RtlpCapabilityCheckSystemCapability @ 0x180079270 (RtlpCapabilityCheckSystemCapability.c)
 *     __security_check_cookie @ 0x18008C240 (__security_check_cookie.c)
 *     NtClose @ 0x18009CFF0 (NtClose.c)
 *     NtOpenKey @ 0x18009D050 (NtOpenKey.c)
 *     NtQueryValueKey @ 0x18009D0F0 (NtQueryValueKey.c)
 */

NTSTATUS __cdecl RtlCapabilityCheck(HANDLE TokenHandle, PUNICODE_STRING CapabilityName, PBOOLEAN HasCapability)
{
  BOOLEAN v4; // si
  BOOLEAN v5; // di
  BOOLEAN v6; // r12
  int v9; // ebx
  NTSTATUS v10; // eax
  NTSTATUS v11; // eax
  NTSTATUS v12; // eax
  int v13; // r8d
  int v14; // r9d
  NTSTATUS v16; // eax
  NTSTATUS v17; // eax
  BOOLEAN v18; // [rsp+30h] [rbp-D0h] BYREF
  BOOLEAN v19; // [rsp+31h] [rbp-CFh] BYREF
  BOOLEAN v20; // [rsp+32h] [rbp-CEh] BYREF
  BOOLEAN IsMember; // [rsp+33h] [rbp-CDh] BYREF
  BOOLEAN HasCapabilitya; // [rsp+34h] [rbp-CCh] BYREF
  char v23; // [rsp+35h] [rbp-CBh]
  _SID_IDENTIFIER_AUTHORITY IdentifierAuthority; // [rsp+38h] [rbp-C8h] BYREF
  HANDLE KeyHandle; // [rsp+40h] [rbp-C0h] BYREF
  LARGE_INTEGER v26; // [rsp+48h] [rbp-B8h] BYREF
  LARGE_INTEGER PerformanceCounter; // [rsp+50h] [rbp-B0h] BYREF
  ULONG ResultLength; // [rsp+58h] [rbp-A8h] BYREF
  _UNICODE_STRING DestinationString; // [rsp+60h] [rbp-A0h] BYREF
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+70h] [rbp-90h] BYREF
  __int128 KeyValueInformation; // [rsp+A0h] [rbp-60h] BYREF
  _BYTE Sid[8]; // [rsp+B0h] [rbp-50h] BYREF
  int v33; // [rsp+B8h] [rbp-48h]
  int v34; // [rsp+BCh] [rbp-44h]
  _BYTE CapabilityGroupSid[48]; // [rsp+C0h] [rbp-40h] BYREF
  _BYTE CapabilitySid[48]; // [rsp+F0h] [rbp-10h] BYREF

  *(_WORD *)&IdentifierAuthority.Value[4] = 1280;
  KeyHandle = 0LL;
  v23 = 0;
  *(_DWORD *)IdentifierAuthority.Value = 0;
  DestinationString = 0LL;
  HasCapabilitya = 0;
  v4 = 0;
  KeyValueInformation = 0LL;
  v18 = 0;
  v5 = 0;
  v19 = 0;
  v6 = 0;
  v20 = 0;
  IsMember = 0;
  PerformanceCounter.QuadPart = 0LL;
  v26.QuadPart = 0LL;
  RtlQueryPerformanceCounter(&PerformanceCounter);
  if ( !CapabilityName || !HasCapability )
  {
    v9 = -1073741811;
    goto LABEL_21;
  }
  *HasCapability = 0;
  v9 = RtlDeriveCapabilitySidsFromName(CapabilityName, CapabilityGroupSid, CapabilitySid);
  if ( v9 < 0 )
    goto LABEL_21;
  if ( RtlIsMultiSessionSku() )
  {
    RtlInitUnicodeString(
      &DestinationString,
      L"\\Registry\\Machine\\Software\\Microsoft\\SecurityManager\\AdminCapabilities");
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.ObjectName = &DestinationString;
    ObjectAttributes.Length = 48;
    ObjectAttributes.Attributes = 64;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    if ( NtOpenKey(&KeyHandle, 0x80000000, &ObjectAttributes) >= 0
      && NtQueryValueKey(
           KeyHandle,
           CapabilityName,
           KeyValuePartialInformation,
           &KeyValueInformation,
           0x10u,
           &ResultLength) >= 0 )
    {
      v23 = 1;
      RtlInitializeSid(Sid, &IdentifierAuthority, 1u);
      v33 = 18;
      v16 = RtlCheckTokenMembershipEx(TokenHandle, Sid, 0, &v19);
      v5 = v19;
      v9 = v16;
      if ( v16 < 0 )
        goto LABEL_21;
      if ( !v19 )
      {
        RtlInitializeSid(Sid, &IdentifierAuthority, 2u);
        v33 = 32;
        v34 = 544;
        v17 = RtlCheckTokenMembershipEx(TokenHandle, Sid, 0, &v18);
        v4 = v18;
        v9 = v17;
        if ( v17 < 0 )
          goto LABEL_21;
        if ( !v18 )
          goto LABEL_17;
      }
      goto LABEL_15;
    }
  }
  v9 = RtlCheckTokenMembershipEx(TokenHandle, CapabilityGroupSid, 2u, &IsMember);
  if ( v9 < 0 )
    goto LABEL_21;
  if ( IsMember )
    goto LABEL_15;
  RtlInitializeSid(Sid, &IdentifierAuthority, 1u);
  v33 = 18;
  v10 = RtlCheckTokenMembershipEx(TokenHandle, Sid, 0, &v19);
  v5 = v19;
  v9 = v10;
  if ( v10 < 0 )
    goto LABEL_21;
  if ( v19 )
    goto LABEL_15;
  RtlInitializeSid(Sid, &IdentifierAuthority, 2u);
  v33 = 32;
  v34 = 544;
  v11 = RtlCheckTokenMembershipEx(TokenHandle, Sid, 0, &v18);
  v4 = v18;
  v9 = v11;
  if ( v11 < 0 )
    goto LABEL_21;
  if ( v18 )
    goto LABEL_15;
  RtlInitializeSid(Sid, &IdentifierAuthority, 1u);
  v33 = 4;
  v12 = RtlCheckTokenMembershipEx(TokenHandle, Sid, 2u, &v20);
  v6 = v20;
  v9 = v12;
  if ( v12 < 0 )
    goto LABEL_21;
  if ( v20 )
  {
LABEL_15:
    v9 = RtlCheckTokenCapability(TokenHandle, CapabilitySid, &HasCapabilitya);
    if ( v9 < 0 )
      goto LABEL_21;
    *HasCapability = HasCapabilitya;
  }
LABEL_17:
  if ( *HasCapability && !v4 && !v5 )
    v9 = RtlpCapabilityCheckSystemCapability(TokenHandle, CapabilityName);
LABEL_21:
  if ( KeyHandle )
    NtClose(KeyHandle);
  RtlQueryPerformanceCounter(&v26);
  if ( !v5 )
  {
    LOBYTE(v14) = v6;
    LOBYTE(v13) = v4;
    RtlpLogCapabilityCheckLatency((unsigned int)&PerformanceCounter, (unsigned int)&v26, v13, v14, v23, *HasCapability);
  }
  return v9;
}
