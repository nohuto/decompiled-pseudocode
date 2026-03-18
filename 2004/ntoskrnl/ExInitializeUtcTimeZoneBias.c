/*
 * XREFs of ExInitializeUtcTimeZoneBias @ 0x1407C1F10
 * Callers:
 *     Phase1InitializationDiscard @ 0x140A37B24 (Phase1InitializationDiscard.c)
 * Callees:
 *     PsGetCurrentServerSiloGlobals @ 0x14027B290 (PsGetCurrentServerSiloGlobals.c)
 *     RtlTimeToTimeFields @ 0x14036C6C0 (RtlTimeToTimeFields.c)
 *     __security_check_cookie @ 0x1403CCE60 (__security_check_cookie.c)
 *     memset @ 0x14040A280 (memset.c)
 *     ExpWriteTimeZoneBias @ 0x1405C9990 (ExpWriteTimeZoneBias.c)
 *     RtlQueryDynamicTimeZoneInformation @ 0x1406C62C0 (RtlQueryDynamicTimeZoneInformation.c)
 *     RtlCutoverTimeToSystemTime @ 0x140793484 (RtlCutoverTimeToSystemTime.c)
 */

__int64 __fastcall ExInitializeUtcTimeZoneBias(PLARGE_INTEGER a1)
{
  __int64 result; // rax
  _DWORD *v3; // rbx
  int v4; // r14d
  int v5; // edi
  LARGE_INTEGER v6; // r10
  LARGE_INTEGER v7; // r8
  int v8; // edx
  int v9; // eax
  LARGE_INTEGER v10; // r9
  int v11; // ecx
  LONGLONG QuadPart; // r10
  LARGE_INTEGER v13; // [rsp+28h] [rbp-E0h] BYREF
  LARGE_INTEGER Time; // [rsp+30h] [rbp-D8h] BYREF
  LARGE_INTEGER v15; // [rsp+38h] [rbp-D0h]
  int v16; // [rsp+40h] [rbp-C8h]
  int v17; // [rsp+44h] [rbp-C4h]
  LARGE_INTEGER v18; // [rsp+48h] [rbp-C0h]
  _QWORD TimeFields[3]; // [rsp+50h] [rbp-B8h] BYREF
  _QWORD v20[54]; // [rsp+68h] [rbp-A0h] BYREF

  v13.QuadPart = 0LL;
  Time.QuadPart = 0LL;
  memset(v20, 0, sizeof(v20));
  *(_OWORD *)&TimeFields[1] = 0LL;
  if ( !ExpRealTimeIsUniversal )
    return 3221225659LL;
  v3 = (_DWORD *)*((_QWORD *)PsGetCurrentServerSiloGlobals() + 132);
  result = RtlQueryDynamicTimeZoneInformation(v20);
  if ( (int)result >= 0 )
  {
    v4 = LODWORD(v20[0]) + LODWORD(v20[21]);
    v5 = LODWORD(v20[0]) + HIDWORD(v20[10]);
    RtlTimeToTimeFields(a1, (PTIME_FIELDS)&TimeFields[1]);
    if ( HIWORD(v20[8])
      && WORD1(v20[19])
      && RtlCutoverTimeToSystemTime((PTIME_FIELDS)((char *)&v20[8] + 4), &Time, a1)
      && RtlCutoverTimeToSystemTime((PTIME_FIELDS)&v20[19], &v13, a1) )
    {
      v6.QuadPart = v13.QuadPart + 600000000LL * v5;
      v13 = v6;
      v7.QuadPart = Time.QuadPart + 600000000LL * v4;
      Time = v7;
      if ( v6.QuadPart >= v7.QuadPart )
      {
        v15 = v7;
        v8 = 1;
        v17 = 1;
        v9 = v5;
        LODWORD(TimeFields[0]) = v4;
        v10 = v7;
        v18 = v6;
        v5 = v4;
        v7 = v6;
        v11 = 2;
      }
      else
      {
        LODWORD(TimeFields[0]) = v5;
        v8 = 2;
        v17 = 2;
        v9 = v4;
        v15 = v6;
        v10 = v6;
        v18 = v7;
        v11 = 1;
      }
      QuadPart = a1->QuadPart;
      HIDWORD(TimeFields[0]) = v11;
      v16 = v9;
      if ( QuadPart < v10.QuadPart || QuadPart >= v7.QuadPart )
      {
        v3[108] = v11;
        v9 = v5;
        v3[109] = v5;
      }
      else
      {
        v3[108] = v8;
        v3[109] = v9;
      }
      *((_QWORD *)v3 + 55) = 600000000LL * v9;
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
