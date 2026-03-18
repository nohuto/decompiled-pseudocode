/*
 * XREFs of ?DestroyVmBusGuestSubscribers@DXGVAILGUESTOBJECT@@IEAAXXZ @ 0x1C02B0824
 * Callers:
 *     ?ReleaseReference@DXGVAILGUESTOBJECT@@QEAAXXZ @ 0x1C02B1108 (-ReleaseReference@DXGVAILGUESTOBJECT@@QEAAXXZ.c)
 * Callees:
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000CF20 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000D070 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C000DBC4 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0026570 (_guard_dispatch_icall_nop.c)
 */

void __fastcall DXGVAILGUESTOBJECT::DestroyVmBusGuestSubscribers(DXGVAILGUESTOBJECT *this)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // rcx
  _BYTE v5[24]; // [rsp+20h] [rbp-18h] BYREF

  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v5, (DXGVAILGUESTOBJECT *)((char *)this + 16), 1);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v5);
  v3 = *((_QWORD *)this + 9);
  if ( v3 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 56LL))(v3);
    *((_QWORD *)this + 9) = 0LL;
  }
  v4 = *((_QWORD *)this + 10);
  if ( v4 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 56LL))(v4);
    *((_QWORD *)this + 10) = 0LL;
  }
  if ( v5[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v5, v2);
}
