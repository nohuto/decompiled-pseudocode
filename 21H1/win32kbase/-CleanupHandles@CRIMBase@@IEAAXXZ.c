/*
 * XREFs of ?CleanupHandles@CRIMBase@@IEAAXXZ @ 0x1C003FA70
 * Callers:
 *     CleanupSensorExplicitly @ 0x1C003F9F0 (CleanupSensorExplicitly.c)
 * Callees:
 *     ?CloseDispatcherHandles@SensorDispatcherObject@CRIMBase@@QEAAXXZ @ 0x1C003FB20 (-CloseDispatcherHandles@SensorDispatcherObject@CRIMBase@@QEAAXXZ.c)
 *     Win32FreePool @ 0x1C008C9A0 (Win32FreePool.c)
 *     RIMUnregisterForInput @ 0x1C00A0B60 (RIMUnregisterForInput.c)
 */

void __fastcall CRIMBase::CleanupHandles(HANDLE *this)
{
  CRIMBase::SensorDispatcherObject *v1; // rdi
  CRIMBase::SensorDispatcherObject *v3; // rsi
  HANDLE v4; // rcx
  HANDLE v5; // rcx
  CRIMBase *v6; // rcx

  v1 = (CRIMBase::SensorDispatcherObject *)(this + 19);
  v3 = (CRIMBase::SensorDispatcherObject *)(this + 155);
  while ( v1 != v3 )
  {
    CRIMBase::SensorDispatcherObject::CloseDispatcherHandles(v1);
    v1 = (CRIMBase::SensorDispatcherObject *)((char *)v1 + 64);
  }
  if ( this[1] != (HANDLE)-1LL )
  {
    RIMUnregisterForInput();
    ObCloseHandle(this[1], 1);
    this[1] = (HANDLE)-1LL;
  }
  v4 = this[2];
  if ( v4 )
  {
    ObfDereferenceObject(v4);
    this[2] = 0LL;
  }
  v5 = this[8];
  if ( v5 && v5 != this[9] )
  {
    Win32FreePool(v5);
    this[8] = 0LL;
  }
  v6 = (CRIMBase *)this[9];
  if ( v6 != (CRIMBase *)(this + 10) )
  {
    Win32FreePool(v6);
    this[9] = 0LL;
    *((_DWORD *)this + 14) = 0;
    if ( this[8] )
      this[8] = 0LL;
  }
}
