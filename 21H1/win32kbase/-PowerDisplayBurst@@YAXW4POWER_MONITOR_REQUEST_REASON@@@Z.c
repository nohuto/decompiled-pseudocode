/*
 * XREFs of ?PowerDisplayBurst@@YAXW4POWER_MONITOR_REQUEST_REASON@@@Z @ 0x1C0125400
 * Callers:
 *     ?xxxUserPowerEventCalloutWorker@@YAJPEAU_WIN32_POWEREVENT_PARAMETERS@@@Z @ 0x1C005BCE0 (-xxxUserPowerEventCalloutWorker@@YAJPEAU_WIN32_POWEREVENT_PARAMETERS@@@Z.c)
 *     UserPowerInfoCallout @ 0x1C005E654 (UserPowerInfoCallout.c)
 * Callees:
 *     QueuePowerRequest @ 0x1C005C560 (QueuePowerRequest.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02015EC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall PowerDisplayBurst(__int64 a1)
{
  __int64 v1; // rbx
  __int128 v2; // [rsp+20h] [rbp-18h] BYREF

  DWORD1(v2) = 0;
  v1 = (int)a1;
  switch ( (_DWORD)a1 )
  {
    case 6:
      qword_1C0253130 = (((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
                       * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64;
      break;
    case 5:
    case 0x10:
      qword_1C0253138 = (((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
                       * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64;
      break;
    case 0x19:
      qword_1C0253140 = (((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
                       * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64;
      break;
    default:
      MicrosoftTelemetryAssertTriggeredNoArgsKM(a1);
      break;
  }
  if ( !dword_1C025319C )
  {
    LODWORD(v2) = 4;
    *((_QWORD *)&v2 + 1) = v1;
    QueuePowerRequest(&v2, 0);
  }
}
