/*
 * XREFs of ?CreateDispatcherHandles@SensorDispatcherObject@CRIMBase@@QEAAJAEBUDispatcherCreation@2@@Z @ 0x1C00060C8
 * Callers:
 *     ?CreateHandles@CRIMBase@@IEAAJQEBW4DispatcherHandleName@1@_KP6AXPEAURIMDevChangeStruct@@@ZPEAX@Z @ 0x1C0005F50 (-CreateHandles@CRIMBase@@IEAAJQEBW4DispatcherHandleName@1@_KP6AXPEAURIMDevChangeStruct@@@ZPEAX@Z.c)
 * Callees:
 *     ?CreateMarshalingEvent@MarshalingCompletion@SensorDispatcherObject@CRIMBase@@QEAA_NXZ @ 0x1C000625C (-CreateMarshalingEvent@MarshalingCompletion@SensorDispatcherObject@CRIMBase@@QEAA_NXZ.c)
 *     ?CloseDispatcherHandles@SensorDispatcherObject@CRIMBase@@QEAAXXZ @ 0x1C0022550 (-CloseDispatcherHandles@SensorDispatcherObject@CRIMBase@@QEAAXXZ.c)
 *     ProtectHandle @ 0x1C0036EB4 (ProtectHandle.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01FA2AC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall CRIMBase::SensorDispatcherObject::CreateDispatcherHandles(
        CRIMBase::SensorDispatcherObject *this,
        const struct CRIMBase::DispatcherCreation *a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v6; // rcx
  _QWORD *v7; // rsi
  NTSTATUS Event; // eax
  NTSTATUS v9; // ebx
  POBJECT_TYPE *v10; // rcx
  struct _OBJECT_TYPE *v11; // r15
  void *v12; // rcx
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  PVOID Object; // [rsp+60h] [rbp+8h] BYREF

  v6 = *((unsigned int *)a2 + 1);
  *((_DWORD *)this + 5) = v6;
  *((_DWORD *)this + 4) = *(_DWORD *)a2;
  if ( (_DWORD)v6 == 1 )
  {
    v7 = (_QWORD *)((char *)this + 24);
    Event = ZwCreateEvent((PHANDLE)this + 3, 0x1F0003u, 0LL, SynchronizationEvent, 0);
  }
  else
  {
    if ( (_DWORD)v6 != 2 )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v6, a2, a3, a4);
    v7 = (_QWORD *)((char *)this + 24);
    Event = ZwCreateTimer((PHANDLE)this + 3, 0x1F0003u, 0LL, SynchronizationTimer);
  }
  v9 = Event;
  if ( Event < 0 )
    goto LABEL_21;
  v10 = (POBJECT_TYPE *)ExTimerObjectType;
  if ( *((_DWORD *)this + 5) == 1 )
    v10 = ExEventObjectType;
  v11 = *v10;
  v12 = (void *)*v7;
  Object = 0LL;
  v9 = ObReferenceObjectByHandle(v12, 0x1F0003u, v11, 1, &Object, 0LL);
  *((_QWORD *)this + 6) = Object;
  if ( (*((_DWORD *)a2 + 2) & 2) != 0 )
  {
    if ( *((_DWORD *)this + 5) != 1 )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v14, v13, v15, v16);
    LOBYTE(v16) = 1;
    ProtectHandle(*v7, v13, v11, v16);
    *((_BYTE *)this + 32) = 1;
  }
  if ( v9 < 0 )
    goto LABEL_21;
  v9 = ObOpenObjectByPointer(*((PVOID *)this + 6), 0x200u, 0LL, 0x1F0003u, v11, 0, (PHANDLE)this + 5);
  if ( v9 < 0 )
    goto LABEL_21;
  if ( (*((_DWORD *)a2 + 2) & 1) != 0 )
  {
    if ( CRIMBase::SensorDispatcherObject::MarshalingCompletion::CreateMarshalingEvent((CRIMBase::SensorDispatcherObject *)((char *)this + 56)) )
      return 0;
    v9 = -1073741823;
  }
  if ( v9 < 0 )
LABEL_21:
    CRIMBase::SensorDispatcherObject::CloseDispatcherHandles(this);
  return (unsigned int)v9;
}
