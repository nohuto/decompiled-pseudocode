/*
 * XREFs of ?Cleanup@DXGVMBUSCHANNEL@@QEAAXXZ @ 0x1C02AE148
 * Callers:
 *     ??1DXGVMBUSCHANNEL@@UEAA@XZ @ 0x1C02ADDE4 (--1DXGVMBUSCHANNEL@@UEAA@XZ.c)
 *     ?DestroyVmBusChannel@@YAXPEAVDXGVMBUSCHANNEL@@@Z @ 0x1C02B07FC (-DestroyVmBusChannel@@YAXPEAVDXGVMBUSCHANNEL@@@Z.c)
 * Callees:
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000CF20 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000D070 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C000DBC4 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0026570 (_guard_dispatch_icall_nop.c)
 *     ?VmBusInterfaceDereference@@YAXXZ @ 0x1C023E38C (-VmBusInterfaceDereference@@YAXXZ.c)
 *     ?Disable@DXGVMBUSCHANNEL@@QEAAXXZ @ 0x1C02AE358 (-Disable@DXGVMBUSCHANNEL@@QEAAXXZ.c)
 */

void __fastcall DXGVMBUSCHANNEL::Cleanup(DXGVMBUSCHANNEL *this)
{
  __int64 v2; // rdx
  __int64 v3; // rdx
  __int64 v4; // rcx
  _BYTE v5[24]; // [rsp+20h] [rbp-18h] BYREF

  DXGVMBUSCHANNEL::Disable(this);
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v5, (DXGVMBUSCHANNEL *)((char *)this + 112), 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v5);
  if ( *((_QWORD *)this + 2) )
  {
    ((void (*)(void))qword_1C00B0F28)();
    VmBusInterfaceDereference(v4, v3);
    *((_QWORD *)this + 2) = 0LL;
  }
  if ( v5[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v5, v2);
}
