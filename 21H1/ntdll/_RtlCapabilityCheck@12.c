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

int __stdcall RtlCapabilityCheck(int a1, unsigned __int16 *a2, char *a3)
{
  char v3; // bl
  int v4; // esi
  bool v5; // zf
  char v6; // bl
  _BYTE v8[7]; // [esp+11h] [ebp-DFh] BYREF
  int v9; // [esp+18h] [ebp-D8h] BYREF
  __int16 v10; // [esp+1Ch] [ebp-D4h]
  int v11; // [esp+20h] [ebp-D0h] BYREF
  HANDLE Handle; // [esp+24h] [ebp-CCh] BYREF
  int v13; // [esp+28h] [ebp-C8h] BYREF
  unsigned __int16 *v14; // [esp+2Ch] [ebp-C4h]
  int v15; // [esp+30h] [ebp-C0h]
  int v16; // [esp+34h] [ebp-BCh]
  UNICODE_STRING DestinationString; // [esp+38h] [ebp-B8h] BYREF
  _DWORD v18[2]; // [esp+40h] [ebp-B0h] BYREF
  _DWORD v19[3]; // [esp+48h] [ebp-A8h] BYREF
  _DWORD v20[6]; // [esp+54h] [ebp-9Ch] BYREF
  _BYTE v21[4]; // [esp+6Ch] [ebp-84h] BYREF
  _BYTE v22[16]; // [esp+70h] [ebp-80h] BYREF
  unsigned __int8 v23[8]; // [esp+80h] [ebp-70h] BYREF
  int v24; // [esp+88h] [ebp-68h]
  int v25; // [esp+8Ch] [ebp-64h]
  unsigned __int8 Src[44]; // [esp+90h] [ebp-60h] BYREF
  char v27[48]; // [esp+BCh] [ebp-34h] BYREF

  *(_DWORD *)&v8[3] = a1;
  v3 = 0;
  v15 = (int)a3;
  v14 = a2;
  memset(v22, 0, sizeof(v22));
  *(_DWORD *)&DestinationString.Length = 0;
  DestinationString.Buffer = 0;
  Handle = 0;
  LOBYTE(v16) = 0;
  v9 = 0;
  v10 = 1280;
  LOBYTE(v11) = 0;
  v8[0] = 0;
  LOBYTE(v13) = 0;
  *(_WORD *)&v8[1] = 0;
  v19[0] = 0;
  v19[1] = 0;
  v18[0] = 0;
  v18[1] = 0;
  RtlQueryPerformanceCounter(v19);
  if ( !a2 || !v15 )
  {
    v4 = -1073741811;
    goto LABEL_26;
  }
  *(_BYTE *)v15 = 0;
  v4 = RtlDeriveCapabilitySidsFromName(a2, (char *)Src, v27);
  if ( v4 < 0 )
    goto LABEL_26;
  if ( !RtlIsMultiSessionSku()
    || (RtlInitUnicodeString(
          &DestinationString,
          L"\\Registry\\Machine\\Software\\Microsoft\\SecurityManager\\AdminCapabilities"),
        v20[0] = 24,
        v20[2] = &DestinationString,
        v20[1] = 0,
        v20[3] = 64,
        v20[4] = 0,
        v20[5] = 0,
        (int)ZwOpenKey(&Handle, 0x80000000, v20) < 0)
    || (int)ZwQueryValueKey(Handle, v14, 2, v22, 16, v21) < 0 )
  {
    v4 = RtlCheckTokenMembershipEx(*(void **)&v8[3], Src, 2, &v8[1]);
    if ( v4 < 0 )
      goto LABEL_26;
    if ( !v8[1] )
    {
      RtlInitializeSid((int)v23, (int)&v9, 1u);
      v24 = 18;
      v4 = RtlCheckTokenMembershipEx(*(void **)&v8[3], v23, 0, v8);
      if ( v4 < 0 )
        goto LABEL_26;
      if ( !v8[0] )
      {
        RtlInitializeSid((int)v23, (int)&v9, 2u);
        v24 = 32;
        v25 = 544;
        v4 = RtlCheckTokenMembershipEx(*(void **)&v8[3], v23, 0, &v11);
        if ( v4 < 0 )
          goto LABEL_26;
        v3 = v11;
        if ( !(_BYTE)v11 )
        {
          RtlInitializeSid((int)v23, (int)&v9, 1u);
          v24 = 4;
          v4 = RtlCheckTokenMembershipEx(*(void **)&v8[3], v23, 2, &v13);
          if ( v4 < 0 )
            goto LABEL_26;
          if ( !(_BYTE)v13 )
            goto LABEL_17;
        }
      }
    }
    goto LABEL_15;
  }
  LOBYTE(v16) = 1;
  RtlInitializeSid((int)v23, (int)&v9, 1u);
  v24 = 18;
  v4 = RtlCheckTokenMembershipEx(*(void **)&v8[3], v23, 0, v8);
  if ( v4 < 0 )
    goto LABEL_26;
  if ( v8[0] )
    goto LABEL_15;
  RtlInitializeSid((int)v23, (int)&v9, 2u);
  v24 = 32;
  v25 = 544;
  v4 = RtlCheckTokenMembershipEx(*(void **)&v8[3], v23, 0, &v11);
  if ( v4 < 0 )
    goto LABEL_26;
  v3 = v11;
  if ( (_BYTE)v11 )
  {
LABEL_15:
    v4 = RtlCheckTokenCapability(*(_DWORD *)&v8[3], v27, &v8[2]);
    if ( v4 >= 0 )
    {
      *a3 = v8[2];
      goto LABEL_17;
    }
LABEL_26:
    v6 = v8[0];
    goto LABEL_21;
  }
LABEL_17:
  if ( !*a3 )
    goto LABEL_26;
  v5 = v3 == 0;
  v6 = v8[0];
  if ( v5 && !v8[0] )
    v4 = RtlpCapabilityCheckSystemCapability(*(int *)&v8[3], (int)a3);
LABEL_21:
  if ( Handle )
    NtClose(Handle);
  RtlQueryPerformanceCounter(v18);
  if ( !v6 )
    RtlpLogCapabilityCheckLatency(v11, v13, v16, *a3);
  return v4;
}
