/*
 * XREFs of RtlCapabilityCheck @ 0x140910060
 * Callers:
 *     PopCapabilityCheck @ 0x1405637B8 (PopCapabilityCheck.c)
 *     RtlCapabilityCheckForSingleSessionSku @ 0x140910440 (RtlCapabilityCheckForSingleSessionSku.c)
 *     NtSetSystemTime @ 0x140948780 (NtSetSystemTime.c)
 *     ExpCapabilityCheck @ 0x14094BFA4 (ExpCapabilityCheck.c)
 * Callees:
 *     PsIsCurrentThreadInServerSilo @ 0x140205DF0 (PsIsCurrentThreadInServerSilo.c)
 *     RtlInitUnicodeString @ 0x140298F60 (RtlInitUnicodeString.c)
 *     KeQueryPerformanceCounter @ 0x1402F3FA0 (KeQueryPerformanceCounter.c)
 *     RtlSubAuthoritySid @ 0x1402FE9C0 (RtlSubAuthoritySid.c)
 *     RtlCheckTokenMembership @ 0x1402FE9E0 (RtlCheckTokenMembership.c)
 *     RtlCheckTokenMembershipEx @ 0x1402FEA00 (RtlCheckTokenMembershipEx.c)
 *     RtlDeriveCapabilitySidsFromName @ 0x14034A710 (RtlDeriveCapabilitySidsFromName.c)
 *     __security_check_cookie @ 0x1403CCE60 (__security_check_cookie.c)
 *     ZwClose @ 0x1403F37A0 (ZwClose.c)
 *     ZwOpenKey @ 0x1403F3800 (ZwOpenKey.c)
 *     ZwQueryValueKey @ 0x1403F38A0 (ZwQueryValueKey.c)
 *     RtlCheckTokenCapability @ 0x1405813C0 (RtlCheckTokenCapability.c)
 *     RtlIsMultiSessionSku @ 0x1406EDD90 (RtlIsMultiSessionSku.c)
 *     RtlInitializeSid @ 0x1406F4200 (RtlInitializeSid.c)
 *     RtlpCapabilityCheckSystemCapability @ 0x14091097C (RtlpCapabilityCheckSystemCapability.c)
 *     RtlpLogCapabilityCheckLatency @ 0x140918264 (RtlpLogCapabilityCheckLatency.c)
 */

__int64 __fastcall RtlCapabilityCheck(HANDLE ExistingTokenHandle, UNICODE_STRING *SourceString, char *a3)
{
  char v4; // r12
  int v7; // ebx
  int v8; // eax
  int v9; // r8d
  int v10; // r9d
  char v12; // [rsp+32h] [rbp-CEh] BYREF
  char v13; // [rsp+33h] [rbp-CDh] BYREF
  char v14; // [rsp+34h] [rbp-CCh] BYREF
  char v15; // [rsp+35h] [rbp-CBh]
  struct _SID_IDENTIFIER_AUTHORITY IdentifierAuthority; // [rsp+38h] [rbp-C8h] BYREF
  PULONG QuadPart; // [rsp+40h] [rbp-C0h] BYREF
  ULONG ResultLength; // [rsp+48h] [rbp-B8h] BYREF
  HANDLE KeyHandle; // [rsp+50h] [rbp-B0h] BYREF
  LARGE_INTEGER PerformanceCounter; // [rsp+58h] [rbp-A8h] BYREF
  UNICODE_STRING DestinationString; // [rsp+60h] [rbp-A0h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+70h] [rbp-90h] BYREF
  __int128 KeyValueInformation; // [rsp+A0h] [rbp-60h] BYREF
  _BYTE Sid[16]; // [rsp+B0h] [rbp-50h] BYREF
  _OWORD Owner[3]; // [rsp+C0h] [rbp-40h] BYREF
  _OWORD v26[3]; // [rsp+F0h] [rbp-10h] BYREF

  *(_WORD *)&IdentifierAuthority.Value[4] = 1280;
  ResultLength = 0;
  KeyHandle = 0LL;
  v15 = 0;
  *(_DWORD *)IdentifierAuthority.Value = 0;
  DestinationString = 0LL;
  v14 = 0;
  memset(&ObjectAttributes, 0, sizeof(ObjectAttributes));
  v4 = 0;
  v12 = 0;
  KeyValueInformation = 0LL;
  v13 = 0;
  PerformanceCounter = KeQueryPerformanceCounter(0LL);
  if ( !SourceString || !a3 )
  {
    v7 = -1073741811;
    goto LABEL_21;
  }
  *a3 = 0;
  v7 = RtlDeriveCapabilitySidsFromName(SourceString, Owner, v26);
  if ( v7 < 0 )
    goto LABEL_21;
  if ( RtlIsMultiSessionSku()
    && (RtlInitUnicodeString(
          &DestinationString,
          L"\\Registry\\Machine\\Software\\Microsoft\\SecurityManager\\AdminCapabilities"),
        ObjectAttributes.RootDirectory = 0LL,
        ObjectAttributes.ObjectName = &DestinationString,
        ObjectAttributes.Length = 48,
        ObjectAttributes.Attributes = 576,
        *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL,
        ZwOpenKey(&KeyHandle, 0x80000000, &ObjectAttributes) >= 0)
    && ZwQueryValueKey(KeyHandle, SourceString, KeyValuePartialInformation, &KeyValueInformation, 0x10u, &ResultLength) >= 0 )
  {
    v15 = 1;
    RtlInitializeSid(Sid, &IdentifierAuthority, 1u);
    QuadPart = RtlSubAuthoritySid(Sid, 0);
    *QuadPart = 18;
    v7 = RtlCheckTokenMembership(ExistingTokenHandle, Sid);
    if ( v7 < 0 )
      goto LABEL_21;
    RtlInitializeSid(Sid, &IdentifierAuthority, 2u);
    *QuadPart = 32;
    *RtlSubAuthoritySid(Sid, 1u) = 544;
    v7 = RtlCheckTokenMembership(ExistingTokenHandle, Sid);
    if ( v7 < 0 )
      goto LABEL_21;
  }
  else
  {
    v7 = RtlCheckTokenMembershipEx(ExistingTokenHandle, Owner, 2, &v13);
    if ( v7 < 0 )
      goto LABEL_21;
    if ( v13 )
      goto LABEL_16;
    RtlInitializeSid(Sid, &IdentifierAuthority, 1u);
    QuadPart = RtlSubAuthoritySid(Sid, 0);
    *QuadPart = 18;
    v7 = RtlCheckTokenMembership(ExistingTokenHandle, Sid);
    if ( v7 < 0 )
      goto LABEL_21;
    RtlInitializeSid(Sid, &IdentifierAuthority, 2u);
    *QuadPart = 32;
    *RtlSubAuthoritySid(Sid, 1u) = 544;
    v7 = RtlCheckTokenMembership(ExistingTokenHandle, Sid);
    if ( v7 < 0 )
      goto LABEL_21;
    RtlInitializeSid(Sid, &IdentifierAuthority, 1u);
    *QuadPart = 4;
    v8 = RtlCheckTokenMembershipEx(ExistingTokenHandle, Sid, 2, &v12);
    v4 = v12;
    v7 = v8;
    if ( v8 < 0 )
      goto LABEL_21;
    if ( v12 )
    {
LABEL_16:
      v7 = RtlCheckTokenCapability(ExistingTokenHandle, v26, &v14);
      if ( v7 < 0 )
        goto LABEL_21;
      *a3 = v14;
    }
  }
  if ( *a3 )
    v7 = RtlpCapabilityCheckSystemCapability(ExistingTokenHandle, SourceString);
LABEL_21:
  if ( KeyHandle )
    ZwClose(KeyHandle);
  QuadPart = (PULONG)KeQueryPerformanceCounter(0LL).QuadPart;
  if ( !PsIsCurrentThreadInServerSilo() )
  {
    LOBYTE(v10) = v4;
    LOBYTE(v9) = 0;
    RtlpLogCapabilityCheckLatency((unsigned int)&PerformanceCounter, (unsigned int)&QuadPart, v9, v10, v15, *a3);
  }
  return (unsigned int)v7;
}
