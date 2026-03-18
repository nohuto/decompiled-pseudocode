/*
 * XREFs of AcpiDiagTraceThermalZoneRundown @ 0x1C0048B0C
 * Callers:
 *     AcpiDiagTraceControlCallback @ 0x1C00481C0 (AcpiDiagTraceControlCallback.c)
 * Callees:
 *     ACPIAmliBuildObjectPathnameUnicode @ 0x1C0021FCC (ACPIAmliBuildObjectPathnameUnicode.c)
 *     __security_check_cookie @ 0x1C002F140 (__security_check_cookie.c)
 *     AcpiDiagEnumCoolingDevices @ 0x1C0047794 (AcpiDiagEnumCoolingDevices.c)
 *     AcpiDiagTraceActiveCoolingConstraint @ 0x1C0047A40 (AcpiDiagTraceActiveCoolingConstraint.c)
 *     AcpiDiagTracePassiveCoolingConstraint @ 0x1C004899C (AcpiDiagTracePassiveCoolingConstraint.c)
 */

void __fastcall AcpiDiagTraceThermalZoneRundown(__int64 a1)
{
  __int64 v1; // rsi
  _QWORD **v3; // rdi
  _QWORD *i; // rbx
  __int64 v5; // rdx
  __int64 v6; // rcx
  struct _EVENT_DATA_DESCRIPTOR *UserData; // rbx
  _QWORD *v8; // rax
  ULONG v9; // r14d
  __int64 Pool2; // rax
  int v11; // ecx
  unsigned int v12; // kr00_4
  __int64 v13; // rax
  __int64 v14; // r9
  unsigned int v15; // edi
  _DWORD *v16; // r15
  _BYTE *v17; // r12
  struct _EVENT_DATA_DESCRIPTOR *v18; // rax
  __int64 v19; // rcx
  unsigned int v20; // edx
  __int64 v21; // rcx
  __int64 v22; // rax
  __int64 v23; // rcx
  __int64 v24; // rax
  __int64 v25; // r8
  unsigned __int64 v26; // rax
  __int64 v27; // rcx
  unsigned int v28; // [rsp+38h] [rbp-29h] BYREF
  unsigned __int16 v29; // [rsp+3Ch] [rbp-25h] BYREF
  __int16 v30; // [rsp+40h] [rbp-21h] BYREF
  unsigned int v31; // [rsp+44h] [rbp-1Dh] BYREF
  int v32; // [rsp+48h] [rbp-19h] BYREF
  int v33; // [rsp+4Ch] [rbp-15h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+50h] [rbp-11h] BYREF
  _BYTE v35[40]; // [rsp+60h] [rbp-1h] BYREF

  v1 = *(_QWORD *)(a1 + 200);
  v30 = 0;
  DestinationString = 0LL;
  v29 = 0;
  v3 = (_QWORD **)(v1 + 176);
  v32 = 0;
  v31 = 0;
  v33 = 0;
  for ( i = *(_QWORD **)(v1 + 176); i != v3; i = (_QWORD *)*i )
  {
    v5 = i[5];
    if ( v5 )
    {
      v6 = i[4];
      if ( *((_BYTE *)i + 52) )
        AcpiDiagTracePassiveCoolingConstraint(v6, v5, 1, *((_BYTE *)i + 53));
      else
        AcpiDiagTraceActiveCoolingConstraint(v6, v5, 1, *((_BYTE *)i + 55));
    }
  }
  RtlInitUnicodeString(&DestinationString, 0LL);
  UserData = 0LL;
  if ( AcpiDiagHandle )
  {
    if ( EtwEventEnabled(AcpiDiagHandle, &ACPI_ETW_EVENT_THERMAL_ZONE_RUNDOWN) )
    {
      if ( (int)ACPIAmliBuildObjectPathnameUnicode(*(_QWORD *)(a1 + 760), (__int64)&DestinationString, 1) >= 0 )
      {
        v8 = *v3;
        v9 = 30;
        while ( v8 != v3 )
        {
          v8 = (_QWORD *)*v8;
          ++v9;
        }
        Pool2 = ExAllocatePool2(64LL, 16LL * v9, 1416651585LL);
        UserData = (struct _EVENT_DATA_DESCRIPTOR *)Pool2;
        if ( Pool2 )
        {
          v29 = DestinationString.Length >> 1;
          *(_QWORD *)Pool2 = &v29;
          *(_QWORD *)(Pool2 + 8) = 2LL;
          v11 = 2 * v29;
          *(_QWORD *)(Pool2 + 16) = DestinationString.Buffer;
          *(_QWORD *)(Pool2 + 32) = v1 + 16;
          *(_QWORD *)(Pool2 + 48) = v1 + 20;
          *(_QWORD *)(Pool2 + 64) = v1 + 4;
          *(_QWORD *)(Pool2 + 80) = v1 + 8;
          *(_DWORD *)(Pool2 + 24) = v11;
          *(_DWORD *)(Pool2 + 28) = 0;
          *(_QWORD *)(Pool2 + 40) = 4LL;
          *(_QWORD *)(Pool2 + 56) = 4LL;
          *(_QWORD *)(Pool2 + 72) = 4LL;
          *(_QWORD *)(Pool2 + 88) = 4LL;
          v12 = *(_DWORD *)(v1 + 12);
          v28 = 12;
          v31 = v12 / 0x64;
          *(_QWORD *)(Pool2 + 96) = &v31;
          *(_QWORD *)(Pool2 + 112) = v1 + 36;
          *(_QWORD *)(Pool2 + 128) = v1 + 76;
          *(_QWORD *)(Pool2 + 144) = v1 + 28;
          *(_QWORD *)(Pool2 + 160) = v1 + 104;
          *(_QWORD *)(Pool2 + 104) = 4LL;
          *(_QWORD *)(Pool2 + 120) = 40LL;
          *(_QWORD *)(Pool2 + 136) = 4LL;
          *(_QWORD *)(Pool2 + 152) = 4LL;
          *(_QWORD *)(Pool2 + 168) = 4LL;
          *(_QWORD *)(Pool2 + 176) = &v32;
          *(_QWORD *)(Pool2 + 184) = 4LL;
          v32 = AcpiDiagEnumCoolingDevices(v1, 1, 1, Pool2, &v28);
          v13 = v28++;
          UserData[v13].Ptr = (unsigned __int64)&v33;
          *(_QWORD *)&UserData[v13].Size = 4LL;
          v15 = 0;
          v33 = AcpiDiagEnumCoolingDevices(v1, 1, 0, v14, &v28);
          v16 = v35;
          v17 = v35;
          do
          {
            v18 = &UserData[v28++];
            *(_QWORD *)&v18->Size = 4LL;
            v18->Ptr = (unsigned __int64)v17;
            *v16 = AcpiDiagEnumCoolingDevices(v1, 0, v15, (__int64)UserData, &v28);
            v17 += 4;
            ++v16;
            ++v15;
          }
          while ( v15 < 0xA );
          v19 = v28;
          v20 = v28 + 1;
          UserData[v19].Ptr = v1 + 80;
          *(_QWORD *)&UserData[v19].Size = 4LL;
          v21 = 2LL * v20;
          *(&UserData->Ptr + v21) = v1 + 24;
          *((_QWORD *)&UserData->Size + v21) = 4LL;
          LODWORD(v21) = v20 + 1;
          v20 += 2;
          v22 = (unsigned int)v21;
          v23 = v20;
          *(_QWORD *)&UserData[v22].Size = 4LL;
          UserData[v22].Ptr = v1 + 12;
          UserData[v23].Ptr = v1 + 84;
          *(_QWORD *)&UserData[v23].Size = 4LL;
          v30 = *(_WORD *)(v1 + 304) >> 1;
          v24 = v20 + 1;
          v25 = v20 + 2;
          UserData[v24].Ptr = (unsigned __int64)&v30;
          *(_QWORD *)&UserData[v24].Size = 2LL;
          v26 = *(_QWORD *)(v1 + 312);
          UserData[v25].Size = *(unsigned __int16 *)(v1 + 304);
          UserData[v25].Ptr = v26;
          v27 = v20 + 3;
          UserData[v25].Reserved = 0;
          *(_QWORD *)&UserData[v27].Size = 4LL;
          UserData[v27].Ptr = v1 + 88;
          EtwWrite(AcpiDiagHandle, &ACPI_ETW_EVENT_THERMAL_ZONE_RUNDOWN, 0LL, v9, UserData);
        }
      }
    }
  }
  if ( DestinationString.Buffer )
    ExFreePoolWithTag(DestinationString.Buffer, 0);
  if ( UserData )
    ExFreePoolWithTag(UserData, 0x54706341u);
}
