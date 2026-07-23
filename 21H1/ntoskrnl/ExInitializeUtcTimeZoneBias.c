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

__int64 __fastcall ExInitializeUtcTimeZoneBias(PLARGE_INTEGER CurrentSystemTime)
{
  __int64 result; // rax
  __int64 v3; // r8
  int v4; // esi
  int v5; // ebx
  BOOLEAN v6; // r9
  BOOLEAN v7; // r9
  LARGE_INTEGER v8; // r10
  LARGE_INTEGER v9; // r8
  int v10; // edx
  int v11; // ecx
  LARGE_INTEGER v12; // r9
  int v13; // eax
  LONGLONG QuadPart; // r10
  int v15; // eax
  LARGE_INTEGER v16; // [rsp+20h] [rbp-E0h] BYREF
  LARGE_INTEGER SystemTime; // [rsp+28h] [rbp-D8h] BYREF
  LARGE_INTEGER v18; // [rsp+30h] [rbp-D0h]
  int v19; // [rsp+38h] [rbp-C8h]
  int v20; // [rsp+3Ch] [rbp-C4h]
  LARGE_INTEGER v21; // [rsp+40h] [rbp-C0h]
  int v22; // [rsp+48h] [rbp-B8h]
  int v23; // [rsp+4Ch] [rbp-B4h]
  __int128 v24; // [rsp+50h] [rbp-B0h] BYREF
  _QWORD v25[54]; // [rsp+60h] [rbp-A0h] BYREF

  v16.QuadPart = 0LL;
  SystemTime.QuadPart = 0LL;
  memset(v25, 0, sizeof(v25));
  v24 = 0LL;
  if ( !ExpRealTimeIsUniversal )
    return 3221225659LL;
  result = RtlQueryDynamicTimeZoneInformation((char *)v25);
  if ( (int)result >= 0 )
  {
    v4 = LODWORD(v25[0]) + LODWORD(v25[21]);
    v5 = LODWORD(v25[0]) + HIDWORD(v25[10]);
    RtlpTimeToTimeFields((__int64 *)CurrentSystemTime, &v24, v3);
    if ( HIWORD(v25[8])
      && WORD1(v25[19])
      && RtlCutoverTimeToSystemTime((PTIME_FIELDS)((char *)&v25[8] + 4), &SystemTime, CurrentSystemTime, v6)
      && RtlCutoverTimeToSystemTime((PTIME_FIELDS)&v25[19], &v16, CurrentSystemTime, v7) )
    {
      v8.QuadPart = v16.QuadPart + 600000000LL * v5;
      v16 = v8;
      v9.QuadPart = SystemTime.QuadPart + 600000000LL * v4;
      SystemTime = v9;
      if ( v8.QuadPart >= v9.QuadPart )
      {
        v19 = v5;
        v10 = 1;
        v20 = 1;
        v11 = v5;
        v18 = v9;
        v12 = v9;
        v21 = v8;
        v5 = v4;
        v9 = v8;
        v13 = 2;
      }
      else
      {
        v18 = v8;
        v10 = 2;
        v20 = 2;
        v11 = v4;
        v21 = v9;
        v19 = v4;
        v12 = v8;
        v13 = 1;
      }
      QuadPart = CurrentSystemTime->QuadPart;
      v23 = v13;
      v22 = v5;
      if ( QuadPart < v12.QuadPart || QuadPart >= v9.QuadPart )
      {
        ExpCurrentTimeZoneId = v13;
        v15 = 60 * v5;
        ExpLastTimeZoneBias = v5;
      }
      else
      {
        ExpCurrentTimeZoneId = v10;
        ExpLastTimeZoneBias = v11;
        v15 = 60 * v11;
      }
      ExpTimeZoneBias = 10000000LL * v15;
      MEMORY[0xFFFFF7800000025C] = 0;
      MEMORY[0xFFFFF78000000028] = (unsigned __int64)(10000000LL * v15) >> 32;
      MEMORY[0xFFFFF78000000020] = 10000000LL * v15;
      return 0LL;
    }
    else
    {
      return 3221225473LL;
    }
  }
  return result;
}
