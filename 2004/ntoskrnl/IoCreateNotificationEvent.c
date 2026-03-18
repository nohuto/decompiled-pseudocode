/*
 * XREFs of IoCreateNotificationEvent @ 0x14077B210
 * Callers:
 *     IoCaptureLiveDump @ 0x140893018 (IoCaptureLiveDump.c)
 * Callees:
 *     HalPutDmaAdapter @ 0x140208270 (HalPutDmaAdapter.c)
 *     ZwCreateEvent @ 0x1403F3EC0 (ZwCreateEvent.c)
 *     ObReferenceObjectByHandle @ 0x1405F5C90 (ObReferenceObjectByHandle.c)
 */

PKEVENT __stdcall IoCreateNotificationEvent(PUNICODE_STRING EventName, PHANDLE EventHandle)
{
  NTSTATUS v3; // eax
  struct _KEVENT *v4; // rbx
  PKEVENT result; // rax
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+30h] [rbp-30h] BYREF
  HANDLE EventHandlea; // [rsp+70h] [rbp+10h] BYREF
  PVOID Object; // [rsp+80h] [rbp+20h] BYREF

  *(&ObjectAttributes.Length + 1) = 0;
  memset(&ObjectAttributes.Attributes + 1, 0, 20);
  EventHandlea = 0LL;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = EventName;
  ObjectAttributes.Length = 48;
  ObjectAttributes.Attributes = 640;
  if ( ZwCreateEvent(&EventHandlea, 0x1F0003u, &ObjectAttributes, NotificationEvent, 1u) < 0 )
    return 0LL;
  Object = 0LL;
  v3 = ObReferenceObjectByHandle(EventHandlea, 0, (POBJECT_TYPE)ExEventObjectType, 0, &Object, 0LL);
  v4 = (struct _KEVENT *)Object;
  if ( v3 < 0 )
    v4 = 0LL;
  else
    HalPutDmaAdapter((PADAPTER_OBJECT)Object);
  result = v4;
  *EventHandle = EventHandlea;
  return result;
}
