/*
 * XREFs of ExInitializeUtcTimeZoneBias @ 0x1407D0710
 * Callers:
 *     Phase1InitializationDiscard @ 0x140A3DB24 (Phase1InitializationDiscard.c)
 * Callees:
 *     PsGetCurrentServerSiloGlobals @ 0x14023CD40 (PsGetCurrentServerSiloGlobals.c)
 *     RtlTimeToTimeFields @ 0x14036E6A0 (RtlTimeToTimeFields.c)
 *     __security_check_cookie @ 0x1403CFAF0 (__security_check_cookie.c)
 *     memset @ 0x140411300 (memset.c)
 *     ExpWriteTimeZoneBias @ 0x1405CF98C (ExpWriteTimeZoneBias.c)
 *     RtlQueryDynamicTimeZoneInformation @ 0x1406E4230 (RtlQueryDynamicTimeZoneInformation.c)
 *     RtlCutoverTimeToSystemTime @ 0x14079FC10 (RtlCutoverTimeToSystemTime.c)
 */

__int64 __fastcall ExInitializeUtcTimeZoneBias(PLARGE_INTEGER CurrentSystemTime)
{
  __int64 result; // rax
  _DWORD *v3; // rbx
  int v4; // r14d
  int v5; // edi
  BOOLEAN v6; // r9
  BOOLEAN v7; // r9
  LARGE_INTEGER v8; // r10
  LARGE_INTEGER v9; // r8
  int v10; // edx
  int v11; // eax
  LARGE_INTEGER v12; // r9
  int v13; // ecx
  LONGLONG QuadPart; // r10
  LARGE_INTEGER v15; // [rsp+28h] [rbp-E0h] BYREF
  LARGE_INTEGER SystemTime; // [rsp+30h] [rbp-D8h] BYREF
  LARGE_INTEGER v17; // [rsp+38h] [rbp-D0h]
  int v18; // [rsp+40h] [rbp-C8h]
  int v19; // [rsp+44h] [rbp-C4h]
  LARGE_INTEGER v20; // [rsp+48h] [rbp-C0h]
  _QWORD TimeFields[3]; // [rsp+50h] [rbp-B8h] BYREF
  _QWORD v22[54]; // [rsp+68h] [rbp-A0h] BYREF

  v15.QuadPart = 0LL;
  SystemTime.QuadPart = 0LL;
  memset(v22, 0, sizeof(v22));
  *(_OWORD *)&TimeFields[1] = 0LL;
  if ( !ExpRealTimeIsUniversal )
    return 3221225659LL;
  v3 = (_DWORD *)*((_QWORD *)PsGetCurrentServerSiloGlobals() + 133);
  result = RtlQueryDynamicTimeZoneInformation(v22);
  if ( (int)result >= 0 )
  {
    v4 = LODWORD(v22[0]) + LODWORD(v22[21]);
    v5 = LODWORD(v22[0]) + HIDWORD(v22[10]);
    RtlTimeToTimeFields(CurrentSystemTime, (PTIME_FIELDS)&TimeFields[1]);
    if ( HIWORD(v22[8])
      && WORD1(v22[19])
      && RtlCutoverTimeToSystemTime((PTIME_FIELDS)((char *)&v22[8] + 4), &SystemTime, CurrentSystemTime, v6)
      && RtlCutoverTimeToSystemTime((PTIME_FIELDS)&v22[19], &v15, CurrentSystemTime, v7) )
    {
      v8.QuadPart = v15.QuadPart + 600000000LL * v5;
      v15 = v8;
      v9.QuadPart = SystemTime.QuadPart + 600000000LL * v4;
      SystemTime = v9;
      if ( v8.QuadPart >= v9.QuadPart )
      {
        v17 = v9;
        v10 = 1;
        v19 = 1;
        v11 = v5;
        LODWORD(TimeFields[0]) = v4;
        v12 = v9;
        v20 = v8;
        v5 = v4;
        v9 = v8;
        v13 = 2;
      }
      else
      {
        LODWORD(TimeFields[0]) = v5;
        v10 = 2;
        v19 = 2;
        v11 = v4;
        v17 = v8;
        v12 = v8;
        v20 = v9;
        v13 = 1;
      }
      QuadPart = CurrentSystemTime->QuadPart;
      HIDWORD(TimeFields[0]) = v13;
      v18 = v11;
      if ( QuadPart < v12.QuadPart || QuadPart >= v9.QuadPart )
      {
        v3[108] = v13;
        v11 = v5;
        v3[109] = v5;
      }
      else
      {
        v3[108] = v10;
        v3[109] = v11;
      }
      *((_QWORD *)v3 + 55) = 600000000LL * v11;
      MEMORY[0xFFFFF7800000025C] = 0;
      ExpWriteTimeZoneBias(v3 + 110);
      return 0LL;
    }
    else
    {
      return 3221225473LL;
    }
  }
  return result;
}
