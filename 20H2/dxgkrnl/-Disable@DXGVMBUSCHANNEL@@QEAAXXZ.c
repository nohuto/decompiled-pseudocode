/*
 * XREFs of ?Disable@DXGVMBUSCHANNEL@@QEAAXXZ @ 0x1C02B18B8
 * Callers:
 *     ?Cleanup@DXGVMBUSCHANNEL@@QEAAXXZ @ 0x1C02B16A8 (-Cleanup@DXGVMBUSCHANNEL@@QEAAXXZ.c)
 *     ?DisableVmBusChannel@@YAXPEAVDXGVMBUSCHANNEL@@@Z @ 0x1C02B3E88 (-DisableVmBusChannel@@YAXPEAVDXGVMBUSCHANNEL@@@Z.c)
 *     ?Enable@DXGVMBUSCHANNEL@@QEAAJ_N@Z @ 0x1C02B3EA4 (-Enable@DXGVMBUSCHANNEL@@QEAAJ_N@Z.c)
 * Callees:
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002808 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002BB0 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0006598 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0027100 (_guard_dispatch_icall_nop.c)
 */

void __fastcall DXGVMBUSCHANNEL::Disable(DXGVMBUSCHANNEL *this)
{
  __int64 v2; // rdx
  _BYTE v3[24]; // [rsp+20h] [rbp-18h] BYREF

  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v3, (DXGVMBUSCHANNEL *)((char *)this + 112), 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v3);
  if ( *((_QWORD *)this + 2) && *((_BYTE *)this + 24) )
  {
    *((_WORD *)this + 12) = 0;
    *((_BYTE *)this + 26) = 0;
    ((void (*)(void))qword_1C00B2078)();
  }
  if ( v3[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v3, v2);
}
