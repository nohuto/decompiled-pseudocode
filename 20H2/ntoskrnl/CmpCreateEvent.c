/*
 * XREFs of CmpCreateEvent @ 0x14064FAD0
 * Callers:
 *     CmpDoFileRead @ 0x140326840 (CmpDoFileRead.c)
 *     CmpGetVolumeClusterSize @ 0x1405DCF4C (CmpGetVolumeClusterSize.c)
 *     CmpDoFileWrite @ 0x14064F21C (CmpDoFileWrite.c)
 *     CmpOpenHiveFile @ 0x14064F528 (CmpOpenHiveFile.c)
 * Callees:
 *     ZwClose @ 0x1403F8350 (ZwClose.c)
 *     ZwCreateEvent @ 0x1403F8A70 (ZwCreateEvent.c)
 *     ObReferenceObjectByHandle @ 0x1406118C0 (ObReferenceObjectByHandle.c)
 */

__int64 __fastcall CmpCreateEvent(EVENT_TYPE EventType, HANDLE *a2, PVOID *a3)
{
  NTSTATUS v5; // ebx
  HANDLE v6; // rcx
  PVOID Object; // [rsp+30h] [rbp-40h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+38h] [rbp-38h] BYREF
  HANDLE EventHandle; // [rsp+98h] [rbp+28h] BYREF

  memset(&ObjectAttributes.Length + 1, 0, 20);
  memset(&ObjectAttributes.Attributes + 1, 0, 20);
  EventHandle = 0LL;
  ObjectAttributes.Length = 48;
  ObjectAttributes.Attributes = 576;
  v5 = ZwCreateEvent(&EventHandle, 0x1F0003u, &ObjectAttributes, EventType, 0);
  if ( v5 < 0 || (Object = 0LL, v5 = ObReferenceObjectByHandle(EventHandle, 0x1F0003u, 0LL, 0, &Object, 0LL), v5 < 0) )
  {
    v6 = EventHandle;
  }
  else
  {
    v6 = 0LL;
    *a2 = EventHandle;
    v5 = 0;
    *a3 = Object;
    EventHandle = 0LL;
  }
  if ( v6 )
    ZwClose(v6);
  return (unsigned int)v5;
}
