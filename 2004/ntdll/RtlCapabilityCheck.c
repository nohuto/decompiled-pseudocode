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

__int64 __fastcall RtlCapabilityCheck(void *a1, unsigned __int16 *a2, char *a3)
{
  char v4; // si
  char v5; // di
  char v6; // r12
  int v9; // ebx
  __int64 v10; // r8
  __int64 v11; // r8
  int v12; // eax
  __int64 v13; // r8
  int v14; // eax
  __int64 v15; // r8
  int v16; // eax
  int v17; // r8d
  int v18; // r9d
  int v20; // eax
  __int64 v21; // r8
  int v22; // eax
  char v23; // [rsp+30h] [rbp-D0h] BYREF
  char v24; // [rsp+31h] [rbp-CFh] BYREF
  char v25; // [rsp+32h] [rbp-CEh] BYREF
  char v26; // [rsp+33h] [rbp-CDh] BYREF
  char v27; // [rsp+34h] [rbp-CCh] BYREF
  char v28; // [rsp+35h] [rbp-CBh]
  int v29; // [rsp+38h] [rbp-C8h] BYREF
  __int16 v30; // [rsp+3Ch] [rbp-C4h]
  HANDLE Handle; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v32; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v33; // [rsp+50h] [rbp-B0h] BYREF
  _BYTE v34[8]; // [rsp+58h] [rbp-A8h] BYREF
  UNICODE_STRING DestinationString; // [rsp+60h] [rbp-A0h] BYREF
  int v36; // [rsp+70h] [rbp-90h] BYREF
  __int64 v37; // [rsp+78h] [rbp-88h]
  UNICODE_STRING *p_DestinationString; // [rsp+80h] [rbp-80h]
  int v39; // [rsp+88h] [rbp-78h]
  __int128 v40; // [rsp+90h] [rbp-70h]
  __int128 v41; // [rsp+A0h] [rbp-60h] BYREF
  _BYTE v42[8]; // [rsp+B0h] [rbp-50h] BYREF
  int v43; // [rsp+B8h] [rbp-48h]
  int v44; // [rsp+BCh] [rbp-44h]
  _BYTE v45[48]; // [rsp+C0h] [rbp-40h] BYREF
  unsigned __int8 v46[48]; // [rsp+F0h] [rbp-10h] BYREF

  v30 = 1280;
  Handle = 0LL;
  v28 = 0;
  v29 = 0;
  DestinationString = 0LL;
  v27 = 0;
  v4 = 0;
  v41 = 0LL;
  v23 = 0;
  v5 = 0;
  v24 = 0;
  v6 = 0;
  v25 = 0;
  v26 = 0;
  v33 = 0LL;
  v32 = 0LL;
  RtlQueryPerformanceCounter(&v33);
  if ( !a2 || !a3 )
  {
    v9 = -1073741811;
    goto LABEL_21;
  }
  *a3 = 0;
  v9 = RtlDeriveCapabilitySidsFromName(a2, (__int64)v45, (__int64)v46);
  if ( v9 < 0 )
    goto LABEL_21;
  if ( (unsigned __int8)RtlIsMultiSessionSku() )
  {
    RtlInitUnicodeString(
      &DestinationString,
      L"\\Registry\\Machine\\Software\\Microsoft\\SecurityManager\\AdminCapabilities");
    v37 = 0LL;
    p_DestinationString = &DestinationString;
    v36 = 48;
    v39 = 64;
    v40 = 0LL;
    if ( (int)NtOpenKey(&Handle, 0x80000000LL, &v36) >= 0 && (int)NtQueryValueKey(Handle, a2, 2LL, &v41, 16, v34) >= 0 )
    {
      LOBYTE(v10) = 1;
      v28 = 1;
      RtlInitializeSid(v42, &v29, v10);
      v43 = 18;
      v20 = RtlCheckTokenMembershipEx(a1, v42, 0, &v24);
      v5 = v24;
      v9 = v20;
      if ( v20 < 0 )
        goto LABEL_21;
      if ( !v24 )
      {
        LOBYTE(v21) = 2;
        RtlInitializeSid(v42, &v29, v21);
        v43 = 32;
        v44 = 544;
        v22 = RtlCheckTokenMembershipEx(a1, v42, 0, &v23);
        v4 = v23;
        v9 = v22;
        if ( v22 < 0 )
          goto LABEL_21;
        if ( !v23 )
          goto LABEL_17;
      }
      goto LABEL_15;
    }
  }
  v9 = RtlCheckTokenMembershipEx(a1, v45, 2, &v26);
  if ( v9 < 0 )
    goto LABEL_21;
  if ( v26 )
    goto LABEL_15;
  LOBYTE(v11) = 1;
  RtlInitializeSid(v42, &v29, v11);
  v43 = 18;
  v12 = RtlCheckTokenMembershipEx(a1, v42, 0, &v24);
  v5 = v24;
  v9 = v12;
  if ( v12 < 0 )
    goto LABEL_21;
  if ( v24 )
    goto LABEL_15;
  LOBYTE(v13) = 2;
  RtlInitializeSid(v42, &v29, v13);
  v43 = 32;
  v44 = 544;
  v14 = RtlCheckTokenMembershipEx(a1, v42, 0, &v23);
  v4 = v23;
  v9 = v14;
  if ( v14 < 0 )
    goto LABEL_21;
  if ( v23 )
    goto LABEL_15;
  LOBYTE(v15) = 1;
  RtlInitializeSid(v42, &v29, v15);
  v43 = 4;
  v16 = RtlCheckTokenMembershipEx(a1, v42, 2, &v25);
  v6 = v25;
  v9 = v16;
  if ( v16 < 0 )
    goto LABEL_21;
  if ( v25 )
  {
LABEL_15:
    v9 = RtlCheckTokenCapability(a1, v46, &v27);
    if ( v9 < 0 )
      goto LABEL_21;
    *a3 = v27;
  }
LABEL_17:
  if ( *a3 && !v4 && !v5 )
    v9 = RtlpCapabilityCheckSystemCapability(a1, a2, a3);
LABEL_21:
  if ( Handle )
    NtClose(Handle);
  RtlQueryPerformanceCounter(&v32);
  if ( !v5 )
  {
    LOBYTE(v18) = v6;
    LOBYTE(v17) = v4;
    RtlpLogCapabilityCheckLatency((unsigned int)&v33, (unsigned int)&v32, v17, v18, v28, *a3);
  }
  return (unsigned int)v9;
}
