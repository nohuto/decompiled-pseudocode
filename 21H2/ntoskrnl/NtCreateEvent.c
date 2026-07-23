/*
 * XREFs of NtCreateEvent @ 0x14071B0B0
 * Callers:
 *     PfSnOpenVolumesForPrefetch @ 0x140676358 (PfSnOpenVolumesForPrefetch.c)
 *     PfSnPrefetchMetadata @ 0x140676A74 (PfSnPrefetchMetadata.c)
 *     PfSnPopulateReadList @ 0x140677260 (PfSnPopulateReadList.c)
 *     SepAdtOpenEtwReadyEvent @ 0x14079E5F4 (SepAdtOpenEtwReadyEvent.c)
 *     IoInitSystemPreDrivers @ 0x140A3FB60 (IoInitSystemPreDrivers.c)
 *     FsRtlInitializeSmssEvent @ 0x140A6CB14 (FsRtlInitializeSmssEvent.c)
 * Callees:
 *     KeInitializeEvent @ 0x14035E640 (KeInitializeEvent.c)
 *     ObCreateObjectEx @ 0x14071BBF0 (ObCreateObjectEx.c)
 *     ObInsertObjectEx @ 0x14071BE00 (ObInsertObjectEx.c)
 */

NTSTATUS __cdecl NtCreateEvent(
        PHANDLE EventHandle,
        ACCESS_MASK DesiredAccess,
        POBJECT_ATTRIBUTES ObjectAttributes,
        EVENT_TYPE EventType,
        BOOLEAN InitialState)
{
  PHANDLE v6; // rdi
  unsigned __int8 v7; // si
  NTSTATUS result; // eax
  __int64 v9; // [rsp+58h] [rbp-10h] BYREF

  v6 = EventHandle;
  v9 = 0LL;
  v7 = KeGetCurrentThread()->$6BEBF485330D18E60173AA6D991B35AC::gap0[10];
  if ( v7 )
  {
    if ( (unsigned __int64)EventHandle >= 0x7FFFFFFF0000LL )
      EventHandle = (PHANDLE)0x7FFFFFFF0000LL;
    *EventHandle = *EventHandle;
  }
  if ( (unsigned int)EventType > SynchronizationEvent )
    return -1073741811;
  result = ObCreateObjectEx(v7, (_DWORD)ExEventObjectType, (_DWORD)ObjectAttributes, v7);
  if ( result >= 0 )
  {
    KeInitializeEvent(0LL, EventType, InitialState);
    result = ObInsertObjectEx(0LL, 0LL, 0, 0LL, (__int64)&v9);
    if ( result >= 0 )
      *v6 = (HANDLE)v9;
  }
  return result;
}
