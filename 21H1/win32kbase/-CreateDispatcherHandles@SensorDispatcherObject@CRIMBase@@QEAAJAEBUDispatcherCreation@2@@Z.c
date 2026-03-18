/*
 * XREFs of ?CreateDispatcherHandles@SensorDispatcherObject@CRIMBase@@QEAAJAEBUDispatcherCreation@2@@Z @ 0x1C00370C8
 * Callers:
 *     ?CreateHandles@CRIMBase@@IEAAJQEBW4DispatcherHandleName@1@_KP6AXPEAURIMDevChangeStruct@@@ZPEAX@Z @ 0x1C0036F50 (-CreateHandles@CRIMBase@@IEAAJQEBW4DispatcherHandleName@1@_KP6AXPEAURIMDevChangeStruct@@@ZPEAX@Z.c)
 * Callees:
 *     ?CreateMarshalingEvent@MarshalingCompletion@SensorDispatcherObject@CRIMBase@@QEAA_NXZ @ 0x1C003725C (-CreateMarshalingEvent@MarshalingCompletion@SensorDispatcherObject@CRIMBase@@QEAA_NXZ.c)
 *     ?CloseDispatcherHandles@SensorDispatcherObject@CRIMBase@@QEAAXXZ @ 0x1C003FB20 (-CloseDispatcherHandles@SensorDispatcherObject@CRIMBase@@QEAAXXZ.c)
 *     ProtectHandle @ 0x1C006FD98 (ProtectHandle.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02015EC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall CRIMBase::SensorDispatcherObject::CreateDispatcherHandles(
        CRIMBase::SensorDispatcherObject *this,
        const struct CRIMBase::DispatcherCreation *a2)
{
  __int64 v4; // rcx
  _QWORD *v5; // rsi
  NTSTATUS Event; // eax
  NTSTATUS v7; // ebx
  POBJECT_TYPE *v8; // rcx
  struct _OBJECT_TYPE *v9; // r15
  void *v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r9
  PVOID Object; // [rsp+60h] [rbp+8h] BYREF

  v4 = *((unsigned int *)a2 + 1);
  *((_DWORD *)this + 5) = v4;
  *((_DWORD *)this + 4) = *(_DWORD *)a2;
  if ( (_DWORD)v4 == 1 )
  {
    v5 = (_QWORD *)((char *)this + 24);
    Event = ZwCreateEvent((PHANDLE)this + 3, 0x1F0003u, 0LL, SynchronizationEvent, 0);
  }
  else
  {
    if ( (_DWORD)v4 != 2 )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v4);
    v5 = (_QWORD *)((char *)this + 24);
    Event = ZwCreateTimer((PHANDLE)this + 3, 0x1F0003u, 0LL, SynchronizationTimer);
  }
  v7 = Event;
  if ( Event < 0 )
    goto LABEL_21;
  v8 = (POBJECT_TYPE *)ExTimerObjectType;
  if ( *((_DWORD *)this + 5) == 1 )
    v8 = ExEventObjectType;
  v9 = *v8;
  v10 = (void *)*v5;
  Object = 0LL;
  v7 = ObReferenceObjectByHandle(v10, 0x1F0003u, v9, 1, &Object, 0LL);
  *((_QWORD *)this + 6) = Object;
  if ( (*((_DWORD *)a2 + 2) & 2) != 0 )
  {
    if ( *((_DWORD *)this + 5) != 1 )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v12);
    LOBYTE(v13) = 1;
    ProtectHandle(*v5, v11, v9, v13);
    *((_BYTE *)this + 32) = 1;
  }
  if ( v7 < 0 )
    goto LABEL_21;
  v7 = ObOpenObjectByPointer(*((PVOID *)this + 6), 0x200u, 0LL, 0x1F0003u, v9, 0, (PHANDLE)this + 5);
  if ( v7 < 0 )
    goto LABEL_21;
  if ( (*((_DWORD *)a2 + 2) & 1) != 0 )
  {
    if ( CRIMBase::SensorDispatcherObject::MarshalingCompletion::CreateMarshalingEvent((CRIMBase::SensorDispatcherObject *)((char *)this + 56)) )
      return 0;
    v7 = -1073741823;
  }
  if ( v7 < 0 )
LABEL_21:
    CRIMBase::SensorDispatcherObject::CloseDispatcherHandles(this);
  return (unsigned int)v7;
}
