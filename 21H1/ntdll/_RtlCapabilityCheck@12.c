/*
 * XREFs of _RtlCapabilityCheck@12 @ 0x4B2EF210
 * Callers:
 *     _RtlCapabilityCheckForSingleSessionSku@12 @ 0x4B346050 (_RtlCapabilityCheckForSingleSessionSku@12.c)
 * Callees:
 *     _RtlIsMultiSessionSku@0 @ 0x4B2AD7C0 (_RtlIsMultiSessionSku@0.c)
 *     _RtlCheckTokenMembershipEx@16 @ 0x4B2D5F50 (_RtlCheckTokenMembershipEx@16.c)
 *     _RtlInitializeSid@12 @ 0x4B2D82C0 (_RtlInitializeSid@12.c)
 *     _RtlQueryPerformanceCounter@4 @ 0x4B2DBC20 (_RtlQueryPerformanceCounter@4.c)
 *     _RtlDeriveCapabilitySidsFromName@12 @ 0x4B2EE4F0 (_RtlDeriveCapabilitySidsFromName@12.c)
 *     _RtlpLogCapabilityCheckLatency@24 @ 0x4B2EF4F3 (_RtlpLogCapabilityCheckLatency@24.c)
 *     _RtlpCapabilityCheckSystemCapability@12 @ 0x4B2EF5A6 (_RtlpCapabilityCheckSystemCapability@12.c)
 *     _RtlCheckTokenCapability@12 @ 0x4B2EF6F0 (_RtlCheckTokenCapability@12.c)
 *     _NtClose@4 @ 0x4B2F2A50 (_NtClose@4.c)
 *     _ZwOpenKey@12 @ 0x4B2F2A80 (_ZwOpenKey@12.c)
 *     _ZwQueryValueKey@24 @ 0x4B2F2AD0 (_ZwQueryValueKey@24.c)
 *     @__security_check_cookie@4 @ 0x4B2F4B20 (@__security_check_cookie@4.c)
 *     _RtlInitUnicodeString@8 @ 0x4B2F5020 (_RtlInitUnicodeString@8.c)
 */

NTSTATUS __cdecl RtlCapabilityCheck(HANDLE TokenHandle, PUNICODE_STRING CapabilityName, PBOOLEAN HasCapability)
{
  BOOLEAN v3; // bl
  int v4; // esi
  bool v5; // zf
  BOOLEAN v6; // bl
  BOOLEAN v8; // [esp+11h] [ebp-DFh] BYREF
  BOOLEAN IsMember; // [esp+12h] [ebp-DEh] BYREF
  BOOLEAN v10; // [esp+13h] [ebp-DDh] BYREF
  HANDLE v11; // [esp+14h] [ebp-DCh]
  _SID_IDENTIFIER_AUTHORITY IdentifierAuthority; // [esp+18h] [ebp-D8h] BYREF
  BOOLEAN v13[4]; // [esp+20h] [ebp-D0h] BYREF
  HANDLE KeyHandle; // [esp+24h] [ebp-CCh] BYREF
  BOOLEAN v15[4]; // [esp+28h] [ebp-C8h] BYREF
  PUNICODE_STRING ValueName; // [esp+2Ch] [ebp-C4h]
  int v17; // [esp+30h] [ebp-C0h]
  int v18; // [esp+34h] [ebp-BCh]
  _UNICODE_STRING DestinationString; // [esp+38h] [ebp-B8h] BYREF
  LARGE_INTEGER v20; // [esp+40h] [ebp-B0h] BYREF
  LARGE_INTEGER PerformanceCounter; // [esp+48h] [ebp-A8h] BYREF
  _OBJECT_ATTRIBUTES ObjectAttributes; // [esp+54h] [ebp-9Ch] BYREF
  ULONG ResultLength; // [esp+6Ch] [ebp-84h] BYREF
  _BYTE KeyValueInformation[16]; // [esp+70h] [ebp-80h] BYREF
  _BYTE Sid[8]; // [esp+80h] [ebp-70h] BYREF
  int v26; // [esp+88h] [ebp-68h]
  int v27; // [esp+8Ch] [ebp-64h]
  _BYTE CapabilityGroupSid[44]; // [esp+90h] [ebp-60h] BYREF
  _BYTE CapabilitySid[48]; // [esp+BCh] [ebp-34h] BYREF

  v11 = TokenHandle;
  v3 = 0;
  v17 = (int)HasCapability;
  ValueName = CapabilityName;
  memset(KeyValueInformation, 0, sizeof(KeyValueInformation));
  *(_DWORD *)&DestinationString.Length = 0;
  DestinationString.Buffer = 0;
  KeyHandle = 0;
  LOBYTE(v18) = 0;
  *(_DWORD *)IdentifierAuthority.Value = 0;
  *(_WORD *)&IdentifierAuthority.Value[4] = 1280;
  v10 = 0;
  v13[0] = 0;
  v8 = 0;
  v15[0] = 0;
  IsMember = 0;
  PerformanceCounter.QuadPart = 0LL;
  v20.QuadPart = 0LL;
  RtlQueryPerformanceCounter(&PerformanceCounter);
  if ( !CapabilityName || !v17 )
  {
    v4 = -1073741811;
    goto LABEL_26;
  }
  *(_BYTE *)v17 = 0;
  v4 = RtlDeriveCapabilitySidsFromName(CapabilityName, CapabilityGroupSid, CapabilitySid);
  if ( v4 < 0 )
    goto LABEL_26;
  if ( !RtlIsMultiSessionSku()
    || (RtlInitUnicodeString(
          &DestinationString,
          L"\\Registry\\Machine\\Software\\Microsoft\\SecurityManager\\AdminCapabilities"),
        ObjectAttributes.Length = 24,
        ObjectAttributes.ObjectName = &DestinationString,
        ObjectAttributes.RootDirectory = 0,
        ObjectAttributes.Attributes = 64,
        ObjectAttributes.SecurityDescriptor = 0,
        ObjectAttributes.SecurityQualityOfService = 0,
        ZwOpenKey(&KeyHandle, 0x80000000, &ObjectAttributes) < 0)
    || ZwQueryValueKey(KeyHandle, ValueName, KeyValuePartialInformation, KeyValueInformation, 0x10u, &ResultLength) < 0 )
  {
    v4 = RtlCheckTokenMembershipEx(v11, CapabilityGroupSid, 2u, &IsMember);
    if ( v4 < 0 )
      goto LABEL_26;
    if ( !IsMember )
    {
      RtlInitializeSid(Sid, &IdentifierAuthority, 1u);
      v26 = 18;
      v4 = RtlCheckTokenMembershipEx(v11, Sid, 0, &v8);
      if ( v4 < 0 )
        goto LABEL_26;
      if ( !v8 )
      {
        RtlInitializeSid(Sid, &IdentifierAuthority, 2u);
        v26 = 32;
        v27 = 544;
        v4 = RtlCheckTokenMembershipEx(v11, Sid, 0, v13);
        if ( v4 < 0 )
          goto LABEL_26;
        v3 = v13[0];
        if ( !v13[0] )
        {
          RtlInitializeSid(Sid, &IdentifierAuthority, 1u);
          v26 = 4;
          v4 = RtlCheckTokenMembershipEx(v11, Sid, 2u, v15);
          if ( v4 < 0 )
            goto LABEL_26;
          if ( !v15[0] )
            goto LABEL_17;
        }
      }
    }
    goto LABEL_15;
  }
  LOBYTE(v18) = 1;
  RtlInitializeSid(Sid, &IdentifierAuthority, 1u);
  v26 = 18;
  v4 = RtlCheckTokenMembershipEx(v11, Sid, 0, &v8);
  if ( v4 < 0 )
    goto LABEL_26;
  if ( v8 )
    goto LABEL_15;
  RtlInitializeSid(Sid, &IdentifierAuthority, 2u);
  v26 = 32;
  v27 = 544;
  v4 = RtlCheckTokenMembershipEx(v11, Sid, 0, v13);
  if ( v4 < 0 )
    goto LABEL_26;
  v3 = v13[0];
  if ( v13[0] )
  {
LABEL_15:
    v4 = RtlCheckTokenCapability(v11, CapabilitySid, &v10);
    if ( v4 >= 0 )
    {
      *HasCapability = v10;
      goto LABEL_17;
    }
LABEL_26:
    v6 = v8;
    goto LABEL_21;
  }
LABEL_17:
  if ( !*HasCapability )
    goto LABEL_26;
  v5 = v3 == 0;
  v6 = v8;
  if ( v5 && !v8 )
    v4 = RtlpCapabilityCheckSystemCapability(v11, (int)HasCapability);
LABEL_21:
  if ( KeyHandle )
    NtClose(KeyHandle);
  RtlQueryPerformanceCounter(&v20);
  if ( !v6 )
    RtlpLogCapabilityCheckLatency(v13[0], v15[0], v18, *HasCapability);
  return v4;
}
