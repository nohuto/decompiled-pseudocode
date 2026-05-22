/*
 * XREFs of ?ReleasePrivateReference@SharedObjectBase@@IEAAIXZ @ 0x1800BEFF0
 * Callers:
 *     ?Create@SipcServer@@SAJAEBU_GUID@@W4SIPC_SERVICE_BOUNDARY@@P6AXPEAXPEAUISIPCServer@@KK@Z22PEAPEAU4@@Z @ 0x1800311CC (-Create@SipcServer@@SAJAEBU_GUID@@W4SIPC_SERVICE_BOUNDARY@@P6AXPEAXPEAUISIPCServer@@KK@Z22PEAPEA.c)
 *     ?CreateSingleton@GameInputServerProxy@@SAJPEAUIGameInputServerInputRouter@@PEAPEAV1@@Z @ 0x180042BB0 (-CreateSingleton@GameInputServerProxy@@SAJPEAUIGameInputServerInputRouter@@PEAPEAV1@@Z.c)
 *     ?OnDisposePublic@GameInputServerProxy@@EEAAXXZ @ 0x1800431A0 (-OnDisposePublic@GameInputServerProxy@@EEAAXXZ.c)
 *     ??_GEndpointListEntry@SipcServer@@QEAAPEAXI@Z @ 0x1800BF56C (--_GEndpointListEntry@SipcServer@@QEAAPEAXI@Z.c)
 *     ?ReleasePrivateReference@SipcServer@@UEAAXXZ @ 0x1800C1AA0 (-ReleasePrivateReference@SipcServer@@UEAAXXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18004ACA0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall SharedObjectBase::ReleasePrivateReference(SharedObjectBase *this)
{
  unsigned __int64 v2; // rax
  unsigned int v3; // edi

  v2 = (unsigned __int64)_InterlockedExchangeAdd64((volatile signed __int64 *)this + 1, 0xFFFFFFFF00000000uLL) >> 32;
  if ( (unsigned int)v2 <= 1 )
    __fastfail(0xEu);
  v3 = v2 - 2;
  if ( (_DWORD)v2 == 2 )
  {
    (*(void (__fastcall **)(SharedObjectBase *))(*(_QWORD *)this + 24LL))(this);
    if ( !(unsigned int)_InterlockedExchangeAdd64((volatile signed __int64 *)this + 1, 0xFFFFFFFF00000000uLL) )
      (*(void (__fastcall **)(SharedObjectBase *))(*(_QWORD *)this + 8LL))(this);
  }
  return v3;
}
