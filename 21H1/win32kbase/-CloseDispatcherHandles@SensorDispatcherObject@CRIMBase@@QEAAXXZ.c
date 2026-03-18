/*
 * XREFs of ?CloseDispatcherHandles@SensorDispatcherObject@CRIMBase@@QEAAXXZ @ 0x1C003FB20
 * Callers:
 *     ?CreateDispatcherHandles@SensorDispatcherObject@CRIMBase@@QEAAJAEBUDispatcherCreation@2@@Z @ 0x1C00370C8 (-CreateDispatcherHandles@SensorDispatcherObject@CRIMBase@@QEAAJAEBUDispatcherCreation@2@@Z.c)
 *     ?CleanupHandles@CRIMBase@@IEAAXXZ @ 0x1C003FA70 (-CleanupHandles@CRIMBase@@IEAAXXZ.c)
 * Callees:
 *     ?_Signal@MarshalingCompletion@SensorDispatcherObject@CRIMBase@@AEBAXXZ @ 0x1C003FC14 (-_Signal@MarshalingCompletion@SensorDispatcherObject@CRIMBase@@AEBAXXZ.c)
 *     RIMLockExclusive @ 0x1C0069440 (RIMLockExclusive.c)
 *     ProtectHandle @ 0x1C006FD98 (ProtectHandle.c)
 */

void __fastcall CRIMBase::SensorDispatcherObject::CloseDispatcherHandles(CRIMBase::SensorDispatcherObject *this)
{
  __int64 v2; // rdx
  void *v3; // rcx
  void *v4; // rcx
  void *v5; // rcx
  PVOID *v6; // rdi

  RIMLockExclusive(this);
  v3 = (void *)*((_QWORD *)this + 3);
  if ( v3 )
  {
    if ( *((_BYTE *)this + 32) )
    {
      ProtectHandle(v3, v2, ExEventObjectType, 0LL);
      v3 = (void *)*((_QWORD *)this + 3);
      *((_BYTE *)this + 32) = 0;
    }
    ObCloseHandle(v3, 1);
    *((_QWORD *)this + 3) = 0LL;
  }
  v4 = (void *)*((_QWORD *)this + 5);
  if ( v4 )
  {
    ZwClose(v4);
    *((_QWORD *)this + 5) = 0LL;
  }
  v5 = (void *)*((_QWORD *)this + 6);
  if ( v5 )
  {
    ObfDereferenceObject(v5);
    *((_QWORD *)this + 6) = 0LL;
  }
  v6 = (PVOID *)((char *)this + 56);
  if ( *((_QWORD *)this + 7) )
  {
    CRIMBase::SensorDispatcherObject::MarshalingCompletion::_Signal((CRIMBase::SensorDispatcherObject *)((char *)this + 56));
    ObfDereferenceObject(*v6);
    *v6 = 0LL;
  }
  *((_DWORD *)this + 5) = 0;
  *((_DWORD *)this + 4) = 17;
  *((_QWORD *)this + 1) = 0LL;
  ExReleasePushLockExclusiveEx(this, 0LL);
  KeLeaveCriticalRegion();
}
