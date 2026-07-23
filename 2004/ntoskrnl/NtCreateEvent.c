/*
 * XREFs of NtCreateEvent @ 0x140679490
 * Callers:
 *     PfSnPopulateReadList @ 0x1406049E0 (PfSnPopulateReadList.c)
 *     PfSnPrefetchMetadata @ 0x1406BCE74 (PfSnPrefetchMetadata.c)
 *     PfSnOpenVolumesForPrefetch @ 0x1406BD56C (PfSnOpenVolumesForPrefetch.c)
 *     SepAdtOpenEtwReadyEvent @ 0x1407AABA4 (SepAdtOpenEtwReadyEvent.c)
 *     IoInitSystemPreDrivers @ 0x140A3AF4C (IoInitSystemPreDrivers.c)
 *     FsRtlInitializeSmssEvent @ 0x140A68364 (FsRtlInitializeSmssEvent.c)
 * Callees:
 *     KeInitializeEvent @ 0x140290DE0 (KeInitializeEvent.c)
 *     ObCreateObjectEx @ 0x140679FF0 (ObCreateObjectEx.c)
 *     ObInsertObjectEx @ 0x14067A230 (ObInsertObjectEx.c)
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
  v7 = KeGetCurrentThread()->$6A88714AB977AAA8032D9F5E2A96BA31::gap0[10];
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
