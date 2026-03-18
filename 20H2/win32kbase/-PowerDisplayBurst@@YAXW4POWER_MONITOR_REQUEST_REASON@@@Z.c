/*
 * XREFs of ?PowerDisplayBurst@@YAXW4POWER_MONITOR_REQUEST_REASON@@@Z @ 0x1C011D120
 * Callers:
 *     UserPowerInfoCallout @ 0x1C002A474 (UserPowerInfoCallout.c)
 *     ?xxxUserPowerEventCalloutWorker@@YAJPEAU_WIN32_POWEREVENT_PARAMETERS@@@Z @ 0x1C0070400 (-xxxUserPowerEventCalloutWorker@@YAJPEAU_WIN32_POWEREVENT_PARAMETERS@@@Z.c)
 * Callees:
 *     QueuePowerRequest @ 0x1C006FFD0 (QueuePowerRequest.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01FA2AC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall PowerDisplayBurst(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rbx
  __int128 v5; // [rsp+20h] [rbp-18h] BYREF

  DWORD1(v5) = 0;
  v4 = (int)a1;
  switch ( (_DWORD)a1 )
  {
    case 6:
      qword_1C024B130 = (((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
                       * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64;
      break;
    case 5:
    case 0x10:
      qword_1C024B138 = (((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
                       * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64;
      break;
    case 0x19:
      qword_1C024B140 = (((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
                       * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64;
      break;
    default:
      MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2, a3, a4);
      break;
  }
  if ( !dword_1C024B19C )
  {
    LODWORD(v5) = 4;
    *((_QWORD *)&v5 + 1) = v4;
    QueuePowerRequest(&v5, 0);
  }
}
