/*
 * XREFs of PopEsStartTelemetry @ 0x140779F94
 * Callers:
 *     PopEsExitSleep @ 0x140765C08 (PopEsExitSleep.c)
 *     PopEsWorker @ 0x14076C240 (PopEsWorker.c)
 * Callees:
 *     PopCurrentPowerState @ 0x14070C77C (PopCurrentPowerState.c)
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
  PopEsLastBatteryThreshold = dword_140C23F10;
  result = byte_140C23F15;
  PopEsLastBatteryCharge = v1;
  PopEsLastUserAwaySetting = byte_140C23F15;
  PopEsLastStateChangeTimeStamp = v0;
  return result;
}
