/*
 * XREFs of ?_CanSendMessageToDestinationInternal@InputExtensibilityCallout@@AEBA_NW4_MIT_ENDPOINT@@@Z @ 0x1C0061924
 * Callers:
 *     ?CoreMsgSendMessage@InputExtensibilityCallout@@QEBAJW4_MIT_ENDPOINT@@PEBXI@Z @ 0x1C0061864 (-CoreMsgSendMessage@InputExtensibilityCallout@@QEBAJW4_MIT_ENDPOINT@@PEBXI@Z.c)
 *     ?Broadcast@InputConfig@@SAXXZ @ 0x1C00A52A4 (-Broadcast@InputConfig@@SAXXZ.c)
 * Callees:
 *     isChildPartition @ 0x1C0064F84 (isChildPartition.c)
 *     isRootPartition @ 0x1C0065868 (isRootPartition.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02015EC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

char __fastcall InputExtensibilityCallout::_CanSendMessageToDestinationInternal(__int64 a1, int a2)
{
  __int64 v2; // rbx
  __int64 v4; // rsi
  char v5; // bl
  int v6; // ecx
  int v8; // ecx
  __int64 v9; // rcx
  CInputThread *v11; // rdi
  int v12; // ebx

  v2 = a2;
  if ( a2 >= 19 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1);
  v4 = 5 * v2;
  if ( !*(_QWORD *)(a1 + 40 * v2 + 32) )
    return 0;
  v5 = 1;
  if ( !*(_QWORD *)(a1 + 24) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1);
  v6 = *(_DWORD *)(a1 + 8 * v4 + 40);
  if ( v6 )
  {
    v8 = v6 - 1;
    if ( v8 )
    {
      v9 = (unsigned int)(v8 - 1);
      if ( !(_DWORD)v9 )
        return isRootPartition();
      if ( (_DWORD)v9 != 1 )
      {
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v9);
        return v5;
      }
      return isChildPartition(v9);
    }
    else
    {
      v11 = gpInputThread;
      KeEnterCriticalRegion();
      ExAcquirePushLockSharedEx(v11, 0LL);
      v12 = *((_DWORD *)v11 + 4);
      ExReleasePushLockSharedEx(v11, 0LL);
      KeLeaveCriticalRegion();
      return v12 == 2;
    }
  }
  return v5;
}
