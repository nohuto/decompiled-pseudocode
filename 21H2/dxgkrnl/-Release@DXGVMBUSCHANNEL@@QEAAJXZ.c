/*
 * XREFs of ?Release@DXGVMBUSCHANNEL@@QEAAJXZ @ 0x1C03518A0
 * Callers:
 *     ?DestroyVmBusChannel@@YAXPEAVDXGVMBUSCHANNEL@@@Z @ 0x1C0350F38 (-DestroyVmBusChannel@@YAXPEAVDXGVMBUSCHANNEL@@@Z.c)
 *     ?Create@DXGVMBUSCHANNEL@@SAJPEAXAEBU_GUID@@1PEBU_UNICODE_STRING@@EPEAPEAV1@@Z @ 0x1C03555F8 (-Create@DXGVMBUSCHANNEL@@SAJPEAXAEBU_GUID@@1PEBU_UNICODE_STRING@@EPEAPEAV1@@Z.c)
 *     ?UnregisterAsSubscriber@DXGCHANNELENDPOINTPROXY@@MEAAJXZ @ 0x1C0356790 (-UnregisterAsSubscriber@DXGCHANNELENDPOINTPROXY@@MEAAJXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C002CCC0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DXGVMBUSCHANNEL::Release(DXGVMBUSCHANNEL *this)
{
  unsigned __int32 v1; // ebx

  v1 = _InterlockedDecrement((volatile signed __int32 *)this + 2);
  if ( !v1 && this )
    (**(void (__fastcall ***)(DXGVMBUSCHANNEL *, __int64))this)(this, 1LL);
  return v1;
}
