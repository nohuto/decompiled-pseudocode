/*
 * XREFs of ?NotifyProcessFreezeCoreDripsBlockerTracking@DXGGLOBAL@@QEAAX_KPEAU_EPROCESS@@_N@Z @ 0x1C0163DA8
 * Callers:
 *     ?NotifyProcessThaw@DXGPROCESS@@QEAAXXZ @ 0x1C015BE1C (-NotifyProcessThaw@DXGPROCESS@@QEAAXXZ.c)
 *     ?NotifyProcessFreeze@DXGPROCESS@@QEAAXXZ @ 0x1C0164528 (-NotifyProcessFreeze@DXGPROCESS@@QEAAXXZ.c)
 * Callees:
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C000C3F8 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000F574 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000F5FC (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?NotifyProcessFreeze@DripsBlockerTrackingHelper@@QEAAX_KPEAU_EPROCESS@@_N@Z @ 0x1C02FE99C (-NotifyProcessFreeze@DripsBlockerTrackingHelper@@QEAAX_KPEAU_EPROCESS@@_N@Z.c)
 */

void __fastcall DXGGLOBAL::NotifyProcessFreezeCoreDripsBlockerTracking(
        DXGGLOBAL *this,
        unsigned __int64 a2,
        struct _EPROCESS *a3,
        bool a4)
{
  _BYTE v8[24]; // [rsp+20h] [rbp-18h] BYREF

  if ( *((_DWORD *)this + 538) && *((_BYTE *)this + 304408) )
  {
    DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v8, (DXGGLOBAL *)((char *)this + 2160), 0);
    DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v8);
    DripsBlockerTrackingHelper::NotifyProcessFreeze((DXGGLOBAL *)((char *)this + 2328), a2, a3, a4);
    if ( v8[8] )
      DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v8);
  }
}
