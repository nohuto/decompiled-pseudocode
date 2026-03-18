/*
 * XREFs of ?Cleanup@DXGVMBUSCHANNEL@@QEAAXXZ @ 0x1C0350720
 * Callers:
 *     ?DestroyVmBusChannel@@YAXPEAVDXGVMBUSCHANNEL@@@Z @ 0x1C0350F38 (-DestroyVmBusChannel@@YAXPEAVDXGVMBUSCHANNEL@@@Z.c)
 *     ??1DXGVMBUSCHANNEL@@UEAA@XZ @ 0x1C03550A0 (--1DXGVMBUSCHANNEL@@UEAA@XZ.c)
 * Callees:
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C000C3F8 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000F574 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000F5FC (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C002CCC0 (_guard_dispatch_icall_nop.c)
 *     ?Disable@DXGVMBUSCHANNEL@@QEAAXXZ @ 0x1C0351070 (-Disable@DXGVMBUSCHANNEL@@QEAAXXZ.c)
 *     ?VmBusInterfaceDereference@@YAXXZ @ 0x1C036F034 (-VmBusInterfaceDereference@@YAXXZ.c)
 */

void __fastcall DXGVMBUSCHANNEL::Cleanup(DXGVMBUSCHANNEL *this)
{
  _BYTE v2[24]; // [rsp+20h] [rbp-18h] BYREF

  DXGVMBUSCHANNEL::Disable(this);
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v2, (DXGVMBUSCHANNEL *)((char *)this + 120), 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v2);
  if ( *((_QWORD *)this + 2) )
  {
    ((void (*)(void))qword_1C0131BA8)();
    VmBusInterfaceDereference();
    *((_QWORD *)this + 2) = 0LL;
  }
  if ( v2[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v2);
}
