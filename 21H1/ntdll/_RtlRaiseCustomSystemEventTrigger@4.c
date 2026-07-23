/*
 * XREFs of _RtlRaiseCustomSystemEventTrigger@4 @ 0x4B369C20
 * Callers:
 *     <none>
 * Callees:
 *     _TpPostWork@4 @ 0x4B2C1B30 (_TpPostWork@4.c)
 *     _RtlFreeHeap@12 @ 0x4B2C3B70 (_RtlFreeHeap@12.c)
 *     _RtlAllocateHeap@12 @ 0x4B2C5D40 (_RtlAllocateHeap@12.c)
 *     _NtQueryWnfStateData@24 @ 0x4B2F3FB0 (_NtQueryWnfStateData@24.c)
 *     _NtQueryWnfStateNameInformation@20 @ 0x4B2F3FC0 (_NtQueryWnfStateNameInformation@20.c)
 *     _NtUpdateWnfStateData@28 @ 0x4B2F4660 (_NtUpdateWnfStateData@28.c)
 *     @__security_check_cookie@4 @ 0x4B2F4B20 (@__security_check_cookie@4.c)
 *     _RtlInitUnicodeString@8 @ 0x4B2F5020 (_RtlInitUnicodeString@8.c)
 *     _RtlGUIDFromString@8 @ 0x4B362640 (_RtlGUIDFromString@8.c)
 *     _RtlpCtContextFree@4 @ 0x4B369E26 (_RtlpCtContextFree@4.c)
 *     _RtlpCtContextInit@8 @ 0x4B369E6A (_RtlpCtContextInit@8.c)
 *     _RtlpGetSebDataAndFilterBuffer@40 @ 0x4B369F12 (_RtlpGetSebDataAndFilterBuffer@40.c)
 */

DWORD __cdecl RtlRaiseCustomSystemEventTrigger(PCUSTOM_SYSTEM_EVENT_TRIGGER_CONFIG TriggerConfig)
{
  NTSTATUS SebDataAndFilterBuffer; // esi
  _DWORD *Heap; // eax
  _DWORD *v3; // ebx
  int v4; // ecx
  SIZE_T v6; // [esp-4h] [ebp-54h]
  ULONG BufferSize; // [esp+Ch] [ebp-44h] BYREF
  int InfoBuffer; // [esp+10h] [ebp-40h] BYREF
  PVOID BaseAddress; // [esp+14h] [ebp-3Ch] BYREF
  ULONG ChangeStamp; // [esp+18h] [ebp-38h] BYREF
  _UNICODE_STRING DestinationString; // [esp+1Ch] [ebp-34h] BYREF
  int v12; // [esp+24h] [ebp-2Ch]
  int v13; // [esp+28h] [ebp-28h]
  int v14; // [esp+2Ch] [ebp-24h]
  int v15; // [esp+30h] [ebp-20h]
  WNF_STATE_NAME StateName; // [esp+34h] [ebp-1Ch] BYREF
  GUID Guid; // [esp+3Ch] [ebp-14h] BYREF

  BaseAddress = 0;
  v12 = 0;
  v13 = 0;
  v14 = 0;
  v15 = 0;
  StateName.Data[0] = WNF_SEB_DEV_MNF_CUSTOM_NOTIFICATION_RECEIVED;
  StateName.Data[1] = 1099172670;
  memset(&Guid, 0, sizeof(Guid));
  if ( !TriggerConfig )
    return -1073741811;
  RtlInitUnicodeString(&DestinationString, (PCWSTR)TriggerConfig->TriggerId);
  SebDataAndFilterBuffer = RtlGUIDFromString(&DestinationString, &Guid);
  if ( SebDataAndFilterBuffer < 0 )
    return SebDataAndFilterBuffer;
  if ( _InterlockedExchange(RtlpCtPublishInProgress, 1) )
    return -1073741823;
  LODWORD(v6) = 4096;
  BufferSize = 4096;
  Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, v6);
  v3 = Heap;
  if ( Heap )
  {
    SebDataAndFilterBuffer = NtQueryWnfStateData(&StateName, 0, 0, &ChangeStamp, Heap, &BufferSize);
    if ( SebDataAndFilterBuffer >= 0 )
    {
      SebDataAndFilterBuffer = NtQueryWnfStateNameInformation(&StateName, WnfInfoIsQuiescent, 0, &InfoBuffer, 4u);
      if ( SebDataAndFilterBuffer >= 0 )
      {
        if ( InfoBuffer )
        {
          SebDataAndFilterBuffer = NtQueryWnfStateNameInformation(
                                     &StateName,
                                     WnfInfoSubscribersPresent,
                                     0,
                                     &InfoBuffer,
                                     4u);
          if ( SebDataAndFilterBuffer >= 0 )
          {
            if ( InfoBuffer )
            {
              BufferSize = 4096;
              SebDataAndFilterBuffer = RtlpGetSebDataAndFilterBuffer(&Guid, v4, v3 + 2, &BufferSize, v12, v13, v14, v15);
              if ( SebDataAndFilterBuffer >= 0 )
              {
                v3[1] = -1;
                *v3 = 0;
                *v3 = 4 * (BufferSize & 0xFFF | 0x100000);
                SebDataAndFilterBuffer = RtlpCtContextInit(&BaseAddress, ChangeStamp);
                if ( SebDataAndFilterBuffer >= 0 )
                {
                  SebDataAndFilterBuffer = NtUpdateWnfStateData(&StateName, v3, BufferSize + 8, 0, 0, ChangeStamp, 1u);
                  if ( SebDataAndFilterBuffer >= 0 )
                  {
                    TpPostWork(*(PTP_WORK *)BaseAddress);
                    goto LABEL_22;
                  }
                }
                if ( BaseAddress )
                  RtlpCtContextFree(BaseAddress);
              }
            }
            else
            {
              SebDataAndFilterBuffer = -1073741653;
            }
          }
        }
        else
        {
          SebDataAndFilterBuffer = -1073741823;
        }
      }
    }
  }
  else
  {
    SebDataAndFilterBuffer = -1073741670;
  }
  _InterlockedExchange(RtlpCtPublishInProgress, 0);
LABEL_22:
  if ( v3 )
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v3);
  return SebDataAndFilterBuffer;
}
