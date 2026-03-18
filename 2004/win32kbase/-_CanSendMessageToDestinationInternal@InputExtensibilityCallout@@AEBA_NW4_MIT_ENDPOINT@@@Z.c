/*
 * XREFs of ?_CanSendMessageToDestinationInternal@InputExtensibilityCallout@@AEBA_NW4_MIT_ENDPOINT@@@Z @ 0x1C006A854
 * Callers:
 *     ?Broadcast@InputConfig@@SAXXZ @ 0x1C000F5E4 (-Broadcast@InputConfig@@SAXXZ.c)
 *     ?CoreMsgSendMessage@InputExtensibilityCallout@@QEBAJW4_MIT_ENDPOINT@@PEBXI@Z @ 0x1C006A794 (-CoreMsgSendMessage@InputExtensibilityCallout@@QEBAJW4_MIT_ENDPOINT@@PEBXI@Z.c)
 * Callees:
 *     isChildPartition @ 0x1C0070954 (isChildPartition.c)
 *     isRootPartition @ 0x1C0071238 (isRootPartition.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01FBBDC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

char __fastcall InputExtensibilityCallout::_CanSendMessageToDestinationInternal(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v4; // rbx
  __int64 v6; // rsi
  char v7; // bl
  int v8; // ecx
  int v10; // ecx
  __int64 v11; // rcx
  CInputThread *v13; // rdi
  int v14; // ebx

  v4 = (int)a2;
  if ( (int)a2 >= 19 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2, a3, a4);
  v6 = 5 * v4;
  if ( !*(_QWORD *)(a1 + 40 * v4 + 32) )
    return 0;
  v7 = 1;
  if ( !*(_QWORD *)(a1 + 24) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2, a3, a4);
  v8 = *(_DWORD *)(a1 + 8 * v6 + 40);
  if ( v8 )
  {
    v10 = v8 - 1;
    if ( v10 )
    {
      v11 = (unsigned int)(v10 - 1);
      if ( !(_DWORD)v11 )
        return isRootPartition();
      if ( (_DWORD)v11 != 1 )
      {
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v11, a2, a3, a4);
        return v7;
      }
      return isChildPartition(v11);
    }
    else
    {
      v13 = gpInputThread;
      KeEnterCriticalRegion();
      ExAcquirePushLockSharedEx(v13, 0LL);
      v14 = *((_DWORD *)v13 + 4);
      ExReleasePushLockSharedEx(v13, 0LL);
      KeLeaveCriticalRegion();
      return v14 == 2;
    }
  }
  return v7;
}
