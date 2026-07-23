/*
 * XREFs of HalSetRealTimeClock @ 0x1404B15A0
 * Callers:
 *     ExpRefreshSystemTime @ 0x14079014C (ExpRefreshSystemTime.c)
 *     NtSetSystemTime @ 0x140947400 (NtSetSystemTime.c)
 *     ExpSetSystemTime @ 0x140994638 (ExpSetSystemTime.c)
 *     GetBootSystemTime @ 0x140A6DA24 (GetBootSystemTime.c)
 * Callees:
 *     RtlpTimeFieldsToTimeNoLeapSeconds @ 0x140201A34 (RtlpTimeFieldsToTimeNoLeapSeconds.c)
 *     HalpSetVirtualRtc @ 0x1402021AC (HalpSetVirtualRtc.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     HalEfiSetTime @ 0x1404BE6DC (HalEfiSetTime.c)
 *     HalpWriteCmosTime @ 0x1404C6F8C (HalpWriteCmosTime.c)
 *     HalpSetAcpiRealTimeClock @ 0x14085F660 (HalpSetAcpiRealTimeClock.c)
 *     HalpUtcTimeToAcpiRealTime @ 0x14085F744 (HalpUtcTimeToAcpiRealTime.c)
 */

char __fastcall HalSetRealTimeClock(__int16 *a1)
{
  char *v2; // rbx
  unsigned int v3; // esi
  __int64 v4; // rdx
  LARGE_INTEGER v5; // rax
  __int64 v6; // r8
  __int64 *v7; // rbx
  unsigned int v9; // ebx
  int v10; // edi
  int v11; // ecx
  char v12; // al
  char v13; // cl
  signed __int32 v14[8]; // [rsp+0h] [rbp-50h] BYREF
  LARGE_INTEGER SystemTime; // [rsp+20h] [rbp-30h] BYREF
  LARGE_INTEGER v16; // [rsp+28h] [rbp-28h] BYREF
  __int128 InputBuffer; // [rsp+30h] [rbp-20h] BYREF

  SystemTime.QuadPart = 0LL;
  v16.QuadPart = 0LL;
  v2 = (char *)ExLeapSecondData;
  InputBuffer = 0LL;
  if ( ExLeapSecondData && *(_BYTE *)ExLeapSecondData )
  {
    v3 = *((_DWORD *)ExLeapSecondData + 1);
    _InterlockedOr(v14, 0);
    if ( !RtlpTimeFieldsToTimeNoLeapSeconds(a1, &v16) )
      return 0;
    v5 = v16;
    v6 = 0LL;
    if ( !v3 )
      goto LABEL_16;
    v7 = (__int64 *)(v2 + 8);
    while ( 1 )
    {
      v4 = *v7;
      if ( *v7 < 0 )
      {
        v4 &= ~0x8000000000000000uLL;
        if ( v5.QuadPart < v4 + 10000000 )
        {
          if ( v5.QuadPart < v4 )
          {
LABEL_16:
            SystemTime = v5;
            goto LABEL_20;
          }
          return 0;
        }
        v5.QuadPart -= 10000000LL;
      }
      else if ( v5.QuadPart < v4 + 10000000 )
      {
        if ( v5.QuadPart < v4 )
          goto LABEL_16;
        v5.QuadPart = 2 * v5.QuadPart - v4;
      }
      else
      {
        v5.QuadPart += 10000000LL;
      }
      v6 = (unsigned int)(v6 + 1);
      ++v7;
      if ( (unsigned int)v6 >= v3 )
        goto LABEL_16;
    }
  }
  if ( !RtlpTimeFieldsToTimeNoLeapSeconds(a1, &SystemTime) )
    return 0;
  v5 = SystemTime;
LABEL_20:
  if ( !ExpRealTimeIsUniversal )
    SystemTime.QuadPart = ExpTimeZoneBias + v5.QuadPart;
  v9 = ((unsigned int)HalpPlatformFlags >> 2) & 1;
  if ( v9 )
    HalpWriteCmosTime(a1, v4, v6);
  v10 = SystemPowerPhase;
  v11 = -1073741823;
  if ( KeGetCurrentIrql() >= 2u
    || SystemPowerPhase
    || (v11 = HalpUtcTimeToAcpiRealTime(&SystemTime, (PLARGE_INTEGER)&InputBuffer), v11 < 0)
    || (v11 = HalpSetAcpiRealTimeClock(&InputBuffer), v11 < 0) )
  {
    if ( (_BYTE)v9 != 1 && HalFirmwareTypeEfi && v10 && (HalpPlatformFlags & 8) == 0 )
      v11 = HalEfiSetTime(&SystemTime, v4, v6);
  }
  if ( v11 >= 0 )
    LOBYTE(v9) = 1;
  v12 = HalpSetVirtualRtc(&SystemTime, v4, v6);
  v13 = v9;
  if ( v12 )
    return 1;
  return v13;
}
