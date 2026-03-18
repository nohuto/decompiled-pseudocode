/*
 * XREFs of ?NotifyProcessFreezeCoreDripsBlockerTracking@DXGGLOBAL@@QEAAX_KPEAU_EPROCESS@@_N@Z @ 0x1C00D9D00
 * Callers:
 *     ?NotifyProcessFreeze@DXGPROCESS@@QEAAXXZ @ 0x1C00DA784 (-NotifyProcessFreeze@DXGPROCESS@@QEAAXXZ.c)
 *     ?NotifyProcessThaw@DXGPROCESS@@QEAAXXZ @ 0x1C00DDFC4 (-NotifyProcessThaw@DXGPROCESS@@QEAAXXZ.c)
 * Callees:
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000CF20 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000D070 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C000DBC4 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?NotifyProcessFreeze@DripsBlockerTrackingHelper@@QEAAX_KPEAU_EPROCESS@@_N@Z @ 0x1C02BEEB8 (-NotifyProcessFreeze@DripsBlockerTrackingHelper@@QEAAX_KPEAU_EPROCESS@@_N@Z.c)
 */

void __fastcall DXGGLOBAL::NotifyProcessFreezeCoreDripsBlockerTracking(
        DXGGLOBAL *this,
        unsigned __int64 a2,
        struct _EPROCESS *a3,
        bool a4)
{
  __int64 v8; // rdx
  _BYTE v9[24]; // [rsp+20h] [rbp-18h] BYREF

  if ( *((_DWORD *)this + 464) && *((_BYTE *)this + 304096) )
  {
    DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v9, (DXGGLOBAL *)((char *)this + 1864), 0);
    DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v9);
    DripsBlockerTrackingHelper::NotifyProcessFreeze((DXGGLOBAL *)((char *)this + 2016), a2, a3, a4);
    if ( v9[8] )
      DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v9, v8);
  }
}
