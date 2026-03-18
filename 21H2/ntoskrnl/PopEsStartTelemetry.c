/*
 * XREFs of PopEsStartTelemetry @ 0x14081CC60
 * Callers:
 *     PopEsWorker @ 0x1406D1E90 (PopEsWorker.c)
 *     PopEsExitSleep @ 0x140808C14 (PopEsExitSleep.c)
 * Callees:
 *     PopCurrentPowerState @ 0x140750EC4 (PopCurrentPowerState.c)
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
  PopEsLastBatteryThreshold = dword_140C23310;
  result = byte_140C23315;
  PopEsLastBatteryCharge = v1;
  PopEsLastUserAwaySetting = byte_140C23315;
  PopEsLastStateChangeTimeStamp = v0;
  return result;
}
