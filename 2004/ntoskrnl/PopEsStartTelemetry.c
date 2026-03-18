/*
 * XREFs of PopEsStartTelemetry @ 0x14077C3A4
 * Callers:
 *     PopEsExitSleep @ 0x1407675C8 (PopEsExitSleep.c)
 *     PopEsWorker @ 0x14076E9E0 (PopEsWorker.c)
 * Callees:
 *     PopCurrentPowerState @ 0x14064B18C (PopCurrentPowerState.c)
 */

char PopEsStartTelemetry()
{
  __int64 v0; // rbx
  int v1; // ecx
  char result; // al
  __int128 v3; // [rsp+20h] [rbp-28h] BYREF

  v3 = 0LL;
  v0 = (((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
      * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64;
  PopCurrentPowerState(&v3);
  v1 = 0;
  PopEsAcOnline = v3;
  if ( BYTE1(v3) )
    v1 = HIDWORD(v3);
  PopEsLastBatteryThreshold = dword_140C238F0;
  result = byte_140C238F5;
  PopEsLastBatteryCharge = v1;
  PopEsLastUserAwaySetting = byte_140C238F5;
  PopEsLastStateChangeTimeStamp = v0;
  return result;
}
