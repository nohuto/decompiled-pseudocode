/*
 * XREFs of PopCadHpmiPnpNotification @ 0x1408F58F0
 * Callers:
 *     <none>
 * Callees:
 *     PopCadTriggerDriverLoad @ 0x1408F5958 (PopCadTriggerDriverLoad.c)
 */

__int64 __fastcall PopCadHpmiPnpNotification(char *NotificationStructure, PVOID Context)
{
  unsigned int v2; // ebx
  __int64 v3; // rax
  __int64 v5; // rcx

  v2 = 0;
  v3 = *(_QWORD *)(NotificationStructure + 20) - *(_QWORD *)&GUID_DEVINTERFACE_HPMI.Data1;
  if ( !v3 )
    v3 = *(_QWORD *)(NotificationStructure + 28) - *(_QWORD *)GUID_DEVINTERFACE_HPMI.Data4;
  if ( v3 )
  {
    return (unsigned int)-1073741811;
  }
  else
  {
    v5 = *(_QWORD *)(NotificationStructure + 4) - *(_QWORD *)&GUID_DEVICE_INTERFACE_ARRIVAL.Data1;
    if ( !v5 )
      v5 = *(_QWORD *)(NotificationStructure + 12) - *(_QWORD *)GUID_DEVICE_INTERFACE_ARRIVAL.Data4;
    if ( !v5 )
      PopCadTriggerDriverLoad(2LL);
  }
  return v2;
}
