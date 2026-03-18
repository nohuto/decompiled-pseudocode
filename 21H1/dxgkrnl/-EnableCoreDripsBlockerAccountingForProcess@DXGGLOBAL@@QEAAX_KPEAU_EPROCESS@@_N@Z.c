/*
 * XREFs of ?EnableCoreDripsBlockerAccountingForProcess@DXGGLOBAL@@QEAAX_KPEAU_EPROCESS@@_N@Z @ 0x1C02BA7DC
 * Callers:
 *     ?ApplyCsFunctionAdapterCallback@@YAJPEAVDXGADAPTER@@PEAX@Z @ 0x1C027F9C0 (-ApplyCsFunctionAdapterCallback@@YAJPEAVDXGADAPTER@@PEAX@Z.c)
 * Callees:
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000CF20 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000D070 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C000DBC4 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?EnableAccountingForProcess@DripsBlockerTrackingHelper@@QEAAX_KPEAU_EPROCESS@@_N@Z @ 0x1C02BC0C4 (-EnableAccountingForProcess@DripsBlockerTrackingHelper@@QEAAX_KPEAU_EPROCESS@@_N@Z.c)
 */

void __fastcall DXGGLOBAL::EnableCoreDripsBlockerAccountingForProcess(
        DXGGLOBAL *this,
        unsigned __int64 a2,
        struct _EPROCESS *a3,
        bool a4)
{
  __int64 v8; // rdx
  _BYTE v9[24]; // [rsp+20h] [rbp-18h] BYREF

  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v9, (DXGGLOBAL *)((char *)this + 1864), 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v9);
  DripsBlockerTrackingHelper::EnableAccountingForProcess((DXGGLOBAL *)((char *)this + 2016), a2, a3, a4);
  if ( v9[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v9, v8);
}
