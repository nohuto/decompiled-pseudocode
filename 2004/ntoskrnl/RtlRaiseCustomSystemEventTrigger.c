/*
 * XREFs of RtlRaiseCustomSystemEventTrigger @ 0x1405891A0
 * Callers:
 *     <none>
 * Callees:
 *     RtlInitUnicodeString @ 0x140298F60 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x1403CCE60 (__security_check_cookie.c)
 *     ZwQueryWnfStateData @ 0x1403F6220 (ZwQueryWnfStateData.c)
 *     ZwQueryWnfStateNameInformation @ 0x1403F6240 (ZwQueryWnfStateNameInformation.c)
 *     ZwUpdateWnfStateData @ 0x1403F6F80 (ZwUpdateWnfStateData.c)
 *     RtlGUIDFromString @ 0x1405DD3D0 (RtlGUIDFromString.c)
 *     RtlpCtAllocateMemory @ 0x140916068 (RtlpCtAllocateMemory.c)
 *     RtlpCtContextFree @ 0x14091608C (RtlpCtContextFree.c)
 *     RtlpCtContextInit @ 0x1409160E8 (RtlpCtContextInit.c)
 *     RtlpCtFreeMemory @ 0x1409161B0 (RtlpCtFreeMemory.c)
 *     RtlpCtQueueWorkItem @ 0x140916274 (RtlpCtQueueWorkItem.c)
 */

__int64 __fastcall RtlRaiseCustomSystemEventTrigger(__int64 a1)
{
  int WnfStateData; // ebx
  __int64 Memory; // rdi
  PVOID P; // [rsp+50h] [rbp+7h]
  UNICODE_STRING DestinationString; // [rsp+58h] [rbp+Fh] BYREF
  __int128 v6; // [rsp+68h] [rbp+1Fh]
  __int64 v7; // [rsp+78h] [rbp+2Fh] BYREF
  GUID Guid; // [rsp+80h] [rbp+37h] BYREF

  P = 0LL;
  v7 = WNF_SEB_DEV_MNF_CUSTOM_NOTIFICATION_RECEIVED;
  v6 = 0LL;
  DestinationString = 0LL;
  Guid = 0LL;
  if ( a1 )
  {
    RtlInitUnicodeString(&DestinationString, *(PCWSTR *)(a1 + 8));
    WnfStateData = RtlGUIDFromString(&DestinationString, &Guid);
    if ( WnfStateData >= 0 )
    {
      if ( _InterlockedExchange(&RtlpCtPublishInProgress, 1) )
      {
        return (unsigned int)-1073741823;
      }
      else
      {
        Memory = RtlpCtAllocateMemory(0x1000uLL);
        if ( Memory )
        {
          WnfStateData = ZwQueryWnfStateData((__int64)&v7, 0LL);
          if ( WnfStateData >= 0 )
          {
            WnfStateData = ZwQueryWnfStateNameInformation((__int64)&v7, 2LL);
            if ( WnfStateData >= 0 )
              WnfStateData = -1073741823;
          }
        }
        else
        {
          WnfStateData = -1073741670;
        }
        _InterlockedExchange(&RtlpCtPublishInProgress, 0);
        if ( Memory )
          RtlpCtFreeMemory(Memory);
      }
    }
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return (unsigned int)WnfStateData;
}
