/*
 * XREFs of ExInitializeUtcTimeZoneBias @ 0x140A70080
 * Callers:
 *     Phase1InitializationDiscard @ 0x140A382A8 (Phase1InitializationDiscard.c)
 * Callees:
 *     RtlpTimeToTimeFields @ 0x140201C48 (RtlpTimeToTimeFields.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     memset @ 0x140408F80 (memset.c)
 *     RtlCutoverTimeToSystemTime @ 0x140790AB0 (RtlCutoverTimeToSystemTime.c)
 *     RtlQueryDynamicTimeZoneInformation @ 0x140910A20 (RtlQueryDynamicTimeZoneInformation.c)
 */

__int64 __fastcall ExInitializeUtcTimeZoneBias(PLARGE_INTEGER a1)
{
  __int64 result; // rax
  __int64 v3; // r8
  int v4; // esi
  int v5; // ebx
  LARGE_INTEGER v6; // r10
  LARGE_INTEGER v7; // r8
  int v8; // edx
  int v9; // ecx
  LARGE_INTEGER v10; // r9
  int v11; // eax
  LONGLONG QuadPart; // r10
  int v13; // eax
  LARGE_INTEGER v14; // [rsp+20h] [rbp-E0h] BYREF
  LARGE_INTEGER Time; // [rsp+28h] [rbp-D8h] BYREF
  LARGE_INTEGER v16; // [rsp+30h] [rbp-D0h]
  int v17; // [rsp+38h] [rbp-C8h]
  int v18; // [rsp+3Ch] [rbp-C4h]
  LARGE_INTEGER v19; // [rsp+40h] [rbp-C0h]
  int v20; // [rsp+48h] [rbp-B8h]
  int v21; // [rsp+4Ch] [rbp-B4h]
  __int128 v22; // [rsp+50h] [rbp-B0h] BYREF
  _QWORD v23[54]; // [rsp+60h] [rbp-A0h] BYREF

  v14.QuadPart = 0LL;
  Time.QuadPart = 0LL;
  memset(v23, 0, sizeof(v23));
  v22 = 0LL;
  if ( !ExpRealTimeIsUniversal )
    return 3221225659LL;
  result = RtlQueryDynamicTimeZoneInformation((char *)v23);
  if ( (int)result >= 0 )
  {
    v4 = LODWORD(v23[0]) + LODWORD(v23[21]);
    v5 = LODWORD(v23[0]) + HIDWORD(v23[10]);
    RtlpTimeToTimeFields((__int64 *)a1, &v22, v3);
    if ( HIWORD(v23[8])
      && WORD1(v23[19])
      && RtlCutoverTimeToSystemTime((PTIME_FIELDS)((char *)&v23[8] + 4), &Time, a1)
      && RtlCutoverTimeToSystemTime((PTIME_FIELDS)&v23[19], &v14, a1) )
    {
      v6.QuadPart = v14.QuadPart + 600000000LL * v5;
      v14 = v6;
      v7.QuadPart = Time.QuadPart + 600000000LL * v4;
      Time = v7;
      if ( v6.QuadPart >= v7.QuadPart )
      {
        v17 = v5;
        v8 = 1;
        v18 = 1;
        v9 = v5;
        v16 = v7;
        v10 = v7;
        v19 = v6;
        v5 = v4;
        v7 = v6;
        v11 = 2;
      }
      else
      {
        v16 = v6;
        v8 = 2;
        v18 = 2;
        v9 = v4;
        v19 = v7;
        v17 = v4;
        v10 = v6;
        v11 = 1;
      }
      QuadPart = a1->QuadPart;
      v21 = v11;
      v20 = v5;
      if ( QuadPart < v10.QuadPart || QuadPart >= v7.QuadPart )
      {
        ExpCurrentTimeZoneId = v11;
        v13 = 60 * v5;
        ExpLastTimeZoneBias = v5;
      }
      else
      {
        ExpCurrentTimeZoneId = v8;
        ExpLastTimeZoneBias = v9;
        v13 = 60 * v9;
      }
      ExpTimeZoneBias = 10000000LL * v13;
      MEMORY[0xFFFFF7800000025C] = 0;
      MEMORY[0xFFFFF78000000028] = (unsigned __int64)(10000000LL * v13) >> 32;
      MEMORY[0xFFFFF78000000020] = 10000000LL * v13;
      return 0LL;
    }
    else
    {
      return 3221225473LL;
    }
  }
  return result;
}
