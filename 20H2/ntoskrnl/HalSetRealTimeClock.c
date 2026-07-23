/*
 * XREFs of HalSetRealTimeClock @ 0x1404B5180
 * Callers:
 *     ExpRefreshSystemTime @ 0x14079EFDC (ExpRefreshSystemTime.c)
 *     NtSetSystemTime @ 0x14094E540 (NtSetSystemTime.c)
 *     ExpSetSystemTime @ 0x14099BDD8 (ExpSetSystemTime.c)
 *     GetBootSystemTime @ 0x140A748AC (GetBootSystemTime.c)
 * Callees:
 *     PsGetCurrentServerSiloGlobals @ 0x14023CD40 (PsGetCurrentServerSiloGlobals.c)
 *     RtlpTimeFieldsToTimeNoLeapSeconds @ 0x1403125F4 (RtlpTimeFieldsToTimeNoLeapSeconds.c)
 *     HalpSetVirtualRtc @ 0x140312D6C (HalpSetVirtualRtc.c)
 *     __security_check_cookie @ 0x1403CFAF0 (__security_check_cookie.c)
 *     HalEfiSetTime @ 0x1404C22F0 (HalEfiSetTime.c)
 *     HalpWriteCmosTime @ 0x1404CA99C (HalpWriteCmosTime.c)
 *     HalpSetAcpiRealTimeClock @ 0x1408663D0 (HalpSetAcpiRealTimeClock.c)
 *     HalpUtcTimeToAcpiRealTime @ 0x1408664B4 (HalpUtcTimeToAcpiRealTime.c)
 */

char __fastcall HalSetRealTimeClock(__int16 *a1)
{
  char *v2; // rbx
  unsigned int v3; // esi
  __int64 *v4; // rdx
  __int64 v5; // r8
  LARGE_INTEGER v6; // rbx
  __int64 v7; // rcx
  __int64 v8; // rcx
  unsigned int v10; // ebx
  int v11; // edi
  int v12; // ecx
  char v13; // al
  char v14; // cl
  signed __int32 v15[8]; // [rsp+0h] [rbp-50h] BYREF
  LARGE_INTEGER SystemTime; // [rsp+20h] [rbp-30h] BYREF
  LARGE_INTEGER v17; // [rsp+28h] [rbp-28h] BYREF
  __int128 InputBuffer; // [rsp+30h] [rbp-20h] BYREF

  SystemTime.QuadPart = 0LL;
  v17.QuadPart = 0LL;
  v2 = (char *)ExLeapSecondData;
  InputBuffer = 0LL;
  if ( ExLeapSecondData && *(_BYTE *)ExLeapSecondData )
  {
    v3 = *((_DWORD *)ExLeapSecondData + 1);
    _InterlockedOr(v15, 0);
    if ( !RtlpTimeFieldsToTimeNoLeapSeconds(a1, &v17) )
      return 0;
    v5 = 0LL;
    if ( !v3 )
    {
      v6 = v17;
      goto LABEL_18;
    }
    v4 = (__int64 *)(v2 + 8);
    v6 = v17;
    while ( 1 )
    {
      v7 = *v4;
      if ( *v4 < 0 )
      {
        v8 = v7 & 0x7FFFFFFFFFFFFFFFLL;
        if ( v6.QuadPart < v8 + 10000000 )
        {
          if ( v6.QuadPart < v8 )
          {
LABEL_18:
            SystemTime = v6;
            goto LABEL_22;
          }
          return 0;
        }
        v6.QuadPart -= 10000000LL;
      }
      else if ( v6.QuadPart < v7 + 10000000 )
      {
        if ( v6.QuadPart < v7 )
          goto LABEL_18;
        v6.QuadPart = 2 * v6.QuadPart - v7;
      }
      else
      {
        v6.QuadPart += 10000000LL;
      }
      v5 = (unsigned int)(v5 + 1);
      ++v4;
      if ( (unsigned int)v5 >= v3 )
        goto LABEL_18;
    }
  }
  if ( !RtlpTimeFieldsToTimeNoLeapSeconds(a1, &SystemTime) )
    return 0;
  v6 = SystemTime;
LABEL_22:
  if ( !ExpRealTimeIsUniversal )
  {
    v4 = (__int64 *)*((_QWORD *)PsGetCurrentServerSiloGlobals() + 133);
    SystemTime.QuadPart = v4[55] + v6.QuadPart;
  }
  v10 = ((unsigned int)HalpPlatformFlags >> 2) & 1;
  if ( v10 )
    HalpWriteCmosTime(a1, v4, v5);
  v11 = SystemPowerPhase;
  v12 = -1073741823;
  if ( KeGetCurrentIrql() >= 2u
    || SystemPowerPhase
    || (v12 = HalpUtcTimeToAcpiRealTime(&SystemTime, (PLARGE_INTEGER)&InputBuffer), v12 < 0)
    || (v12 = HalpSetAcpiRealTimeClock(&InputBuffer), v12 < 0) )
  {
    if ( (_BYTE)v10 != 1 && HalFirmwareTypeEfi && v11 && (HalpPlatformFlags & 8) == 0 )
      v12 = HalEfiSetTime(&SystemTime, v4, v5);
  }
  if ( v12 >= 0 )
    LOBYTE(v10) = 1;
  v13 = HalpSetVirtualRtc(&SystemTime, (__int64)v4, v5);
  v14 = v10;
  if ( v13 )
    return 1;
  return v14;
}
