/*
 * XREFs of ?CreateMarshalingEvent@MarshalingCompletion@SensorDispatcherObject@CRIMBase@@QEAA_NXZ @ 0x1C000625C
 * Callers:
 *     ?CreateDispatcherHandles@SensorDispatcherObject@CRIMBase@@QEAAJAEBUDispatcherCreation@2@@Z @ 0x1C00060C8 (-CreateDispatcherHandles@SensorDispatcherObject@CRIMBase@@QEAAJAEBUDispatcherCreation@2@@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall CRIMBase::SensorDispatcherObject::MarshalingCompletion::CreateMarshalingEvent(
        CRIMBase::SensorDispatcherObject::MarshalingCompletion *this)
{
  void *v2; // rcx
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+30h] [rbp-30h] BYREF
  void *EventHandle; // [rsp+70h] [rbp+10h] BYREF
  PVOID Object; // [rsp+78h] [rbp+18h] BYREF

  memset(&ObjectAttributes.Length + 1, 0, 20);
  memset(&ObjectAttributes.Attributes + 1, 0, 20);
  EventHandle = 0LL;
  ObjectAttributes.Length = 48;
  ObjectAttributes.Attributes = 512;
  if ( ZwCreateEvent(&EventHandle, 0x1F0003u, &ObjectAttributes, SynchronizationEvent, 0) >= 0 )
  {
    Object = 0LL;
    ObReferenceObjectByHandle(EventHandle, 0x1F0003u, (POBJECT_TYPE)ExEventObjectType, 0, &Object, 0LL);
    v2 = EventHandle;
    *(_QWORD *)this = Object;
    ZwClose(v2);
  }
  return *(_QWORD *)this != 0LL;
}
