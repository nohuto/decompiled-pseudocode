/*
 * XREFs of ?ReleasePublicReference@SharedObjectBase@@IEAAIXZ @ 0x1800BEBB0
 * Callers:
 *     ?Create@SipcServer@@SAJAEBU_GUID@@W4SIPC_SERVICE_BOUNDARY@@P6AXPEAXPEAUISIPCServer@@KK@Z22PEAPEAU4@@Z @ 0x18003122C (-Create@SipcServer@@SAJAEBU_GUID@@W4SIPC_SERVICE_BOUNDARY@@P6AXPEAXPEAUISIPCServer@@KK@Z22PEAPEA.c)
 *     ?Release@?$SharedUnknownBase@UISIPCEndpoint@@@@UEAAKXZ @ 0x180042CA0 (-Release@-$SharedUnknownBase@UISIPCEndpoint@@@@UEAAKXZ.c)
 *     ?Release@GameInputServerProxy@@UEAAKXZ @ 0x180042CB0 (-Release@GameInputServerProxy@@UEAAKXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18004A6B0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall SharedObjectBase::ReleasePublicReference(SharedObjectBase *this)
{
  unsigned int v2; // eax
  unsigned int v3; // esi

  v2 = _InterlockedExchangeAdd64((volatile signed __int64 *)this + 1, 0xFFFFFFFFFFFFFFFFuLL);
  if ( v2 <= 1 )
    __fastfail(0xEu);
  v3 = v2 - 2;
  if ( v2 == 2 )
  {
    (*(void (__fastcall **)(SharedObjectBase *))(*(_QWORD *)this + 16LL))(this);
    if ( !((unsigned __int64)_InterlockedExchangeAdd64((volatile signed __int64 *)this + 1, 0xFFFFFFFFFFFFFFFFuLL) >> 32) )
      (*(void (__fastcall **)(SharedObjectBase *))(*(_QWORD *)this + 8LL))(this);
  }
  return v3;
}
