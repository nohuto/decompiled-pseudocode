/*
 * XREFs of ExInitializeUtcTimeZoneBias @ 0x1407D4CB0
 * Callers:
 *     Phase1InitializationDiscard @ 0x140A3C6A4 (Phase1InitializationDiscard.c)
 * Callees:
 *     PsGetCurrentServerSiloGlobals @ 0x1402F6FB0 (PsGetCurrentServerSiloGlobals.c)
 *     RtlTimeToTimeFields @ 0x14036EB50 (RtlTimeToTimeFields.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     memset @ 0x140414300 (memset.c)
 *     ExpWriteTimeZoneBias @ 0x1405D1CC8 (ExpWriteTimeZoneBias.c)
 *     RtlQueryDynamicTimeZoneInformation @ 0x140622AD0 (RtlQueryDynamicTimeZoneInformation.c)
 *     RtlCutoverTimeToSystemTime @ 0x1407A9ED0 (RtlCutoverTimeToSystemTime.c)
 */

__int64 __fastcall ExInitializeUtcTimeZoneBias(PLARGE_INTEGER CurrentSystemTime)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 result; // rax
  _DWORD *v5; // rbx
  int v6; // r14d
  int v7; // edi
  BOOLEAN v8; // r9
  BOOLEAN v9; // r9
  LARGE_INTEGER v10; // r10
  LARGE_INTEGER v11; // r8
  int v12; // edx
  int v13; // eax
  LONGLONG QuadPart; // r9
  int v15; // ecx
  LONGLONG v16; // r10
  __int64 v17; // rdx
  LARGE_INTEGER v18; // [rsp+28h] [rbp-E0h] BYREF
  LARGE_INTEGER SystemTime; // [rsp+30h] [rbp-D8h] BYREF
  LARGE_INTEGER v20; // [rsp+38h] [rbp-D0h]
  int v21; // [rsp+40h] [rbp-C8h]
  int v22; // [rsp+44h] [rbp-C4h]
  LARGE_INTEGER v23; // [rsp+48h] [rbp-C0h]
  _QWORD TimeFields[3]; // [rsp+50h] [rbp-B8h] BYREF
  _QWORD v25[54]; // [rsp+68h] [rbp-A0h] BYREF

  v18.QuadPart = 0LL;
  SystemTime.QuadPart = 0LL;
  memset(v25, 0, sizeof(v25));
  *(_OWORD *)&TimeFields[1] = 0LL;
  if ( !ExpRealTimeIsUniversal )
    return 3221225659LL;
  v5 = (_DWORD *)*((_QWORD *)PsGetCurrentServerSiloGlobals(v3, v2) + 133);
  result = RtlQueryDynamicTimeZoneInformation(v25);
  if ( (int)result >= 0 )
  {
    v6 = LODWORD(v25[0]) + LODWORD(v25[21]);
    v7 = LODWORD(v25[0]) + HIDWORD(v25[10]);
    RtlTimeToTimeFields(CurrentSystemTime, (PTIME_FIELDS)&TimeFields[1]);
    if ( HIWORD(v25[8])
      && WORD1(v25[19])
      && RtlCutoverTimeToSystemTime((PTIME_FIELDS)((char *)&v25[8] + 4), &SystemTime, CurrentSystemTime, v8)
      && RtlCutoverTimeToSystemTime((PTIME_FIELDS)&v25[19], &v18, CurrentSystemTime, v9) )
    {
      v10.QuadPart = v18.QuadPart + 600000000LL * v7;
      v18 = v10;
      v11.QuadPart = SystemTime.QuadPart + 600000000LL * v6;
      SystemTime = v11;
      if ( v10.QuadPart >= v11.QuadPart )
      {
        v20 = v11;
        v12 = 1;
        v22 = 1;
        v13 = v7;
        LODWORD(TimeFields[0]) = v6;
        QuadPart = v11.QuadPart;
        v23 = v10;
        v7 = v6;
        v11 = v10;
        v15 = 2;
      }
      else
      {
        LODWORD(TimeFields[0]) = v7;
        v12 = 2;
        v22 = 2;
        v13 = v6;
        v20 = v10;
        QuadPart = v10.QuadPart;
        v23 = v11;
        v15 = 1;
      }
      v16 = CurrentSystemTime->QuadPart;
      HIDWORD(TimeFields[0]) = v15;
      v21 = v13;
      if ( v16 < QuadPart || v16 >= v11.QuadPart )
      {
        v5[108] = v15;
        v13 = v7;
        v5[109] = v7;
      }
      else
      {
        v5[108] = v12;
        v5[109] = v13;
      }
      v17 = 60 * v13;
      *((_QWORD *)v5 + 55) = 10000000 * v17;
      MEMORY[0xFFFFF7800000025C] = 0;
      ExpWriteTimeZoneBias(v5 + 110, v17);
      return 0LL;
    }
    else
    {
      return 3221225473LL;
    }
  }
  return result;
}
