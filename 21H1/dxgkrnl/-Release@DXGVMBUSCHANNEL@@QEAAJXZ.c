/*
 * XREFs of ?Release@DXGVMBUSCHANNEL@@QEAAJXZ @ 0x1C02AF1E8
 * Callers:
 *     ?Create@DXGVMBUSCHANNEL@@SAJPEAXAEBU_GUID@@1PEBU_UNICODE_STRING@@EPEAPEAV1@@Z @ 0x1C02AE2BC (-Create@DXGVMBUSCHANNEL@@SAJPEAXAEBU_GUID@@1PEBU_UNICODE_STRING@@EPEAPEAV1@@Z.c)
 *     ?UnregisterAsSubscriber@DXGCHANNELENDPOINTPROXY@@MEAAJXZ @ 0x1C02AF2B0 (-UnregisterAsSubscriber@DXGCHANNELENDPOINTPROXY@@MEAAJXZ.c)
 *     ?DestroyVmBusChannel@@YAXPEAVDXGVMBUSCHANNEL@@@Z @ 0x1C02B07FC (-DestroyVmBusChannel@@YAXPEAVDXGVMBUSCHANNEL@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0026570 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DXGVMBUSCHANNEL::Release(DXGVMBUSCHANNEL *this)
{
  unsigned __int32 v1; // ebx

  v1 = _InterlockedDecrement((volatile signed __int32 *)this + 2);
  if ( !v1 && this )
    (**(void (__fastcall ***)(DXGVMBUSCHANNEL *, __int64))this)(this, 1LL);
  return v1;
}
