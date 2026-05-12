/*
 * XREFs of StorAdapterDeviceRegistryKeyProxy @ 0x1C0037178
 * Callers:
 *     StorPortExtendedFunction @ 0x1C000DE00 (StorPortExtendedFunction.c)
 * Callees:
 *     RaidNtStatusToStorStatus @ 0x1C001B06C (RaidNtStatusToStorStatus.c)
 *     PortRegistryReadDeviceKey @ 0x1C0072804 (PortRegistryReadDeviceKey.c)
 *     PortRegistryWriteDeviceKey @ 0x1C00728C4 (PortRegistryWriteDeviceKey.c)
 */

__int64 __fastcall StorAdapterDeviceRegistryKeyProxy(__int64 a1, char a2, __int64 a3)
{
  __int64 v3; // rsi
  const char *v4; // rbx
  __int64 v5; // r14
  __int64 v6; // r15
  int v7; // r12d
  __int64 v10; // rdi
  NTSTATUS v11; // eax
  int v12; // ecx
  __int64 v13; // rcx
  int DeviceKey; // eax
  int v15; // ebx
  struct _UNICODE_STRING UnicodeString; // [rsp+30h] [rbp-30h] BYREF
  struct _UNICODE_STRING v17; // [rsp+40h] [rbp-20h] BYREF
  struct _STRING DestinationString; // [rsp+50h] [rbp-10h] BYREF
  int v19; // [rsp+A8h] [rbp+48h]
  const char *SourceString; // [rsp+B0h] [rbp+50h]

  v3 = 0LL;
  v4 = *(const char **)a3;
  v5 = 0LL;
  v6 = 0LL;
  SourceString = *(const char **)(a3 + 8);
  v7 = 0;
  v19 = *(_DWORD *)(a3 + 16);
  v17 = 0LL;
  UnicodeString = 0LL;
  if ( a2 )
  {
    v3 = *(_QWORD *)(a3 + 24);
    v5 = *(_QWORD *)(a3 + 32);
  }
  else
  {
    v6 = *(_QWORD *)(a3 + 24);
    v7 = *(_DWORD *)(a3 + 32);
  }
  if ( KeGetCurrentIrql() )
    return 3238002696LL;
  v10 = **(_QWORD **)(a1 - 16);
  if ( !v10 )
    return 3238002694LL;
  if ( v4
    && (DestinationString = 0LL,
        RtlInitAnsiString(&DestinationString, v4),
        v11 = RtlAnsiStringToUnicodeString(&UnicodeString, &DestinationString, 1u),
        v11 < 0)
    || (DestinationString = 0LL,
        RtlInitAnsiString(&DestinationString, SourceString),
        v11 = RtlAnsiStringToUnicodeString(&v17, &DestinationString, 1u),
        v11 < 0) )
  {
    v12 = v11;
  }
  else
  {
    v13 = *(_QWORD *)(v10 + 32);
    if ( a2 )
      DeviceKey = PortRegistryReadDeviceKey(
                    v13,
                    (unsigned __int64)&UnicodeString & -(__int64)(v4 != 0LL),
                    (unsigned int)&v17,
                    v19,
                    v3,
                    v5);
    else
      DeviceKey = PortRegistryWriteDeviceKey(
                    v13,
                    (unsigned __int64)&UnicodeString & -(__int64)(v4 != 0LL),
                    (unsigned int)&v17,
                    v19,
                    v6,
                    v7);
    v15 = DeviceKey;
    if ( UnicodeString.Buffer )
      RtlFreeUnicodeString(&UnicodeString);
    if ( v17.Buffer )
      RtlFreeUnicodeString(&v17);
    v12 = v15;
  }
  return RaidNtStatusToStorStatus(v12);
}
