/*
 * XREFs of ??0DXGPROTECTEDSESSIONMUTEX@@QEAA@PEAVDXGGLOBAL@@_N@Z @ 0x1C00456E8
 * Callers:
 *     ?CreateSharedProtectedSessionNtObject@@YAJDW4_HMGRENTRY_TYPE@@IPEAXPEAU_OBJECT_ATTRIBUTES@@DPEAPEAX@Z @ 0x1C027280C (-CreateSharedProtectedSessionNtObject@@YAJDW4_HMGRENTRY_TYPE@@IPEAXPEAU_OBJECT_ATTRIBUTES@@DPEAP.c)
 *     ?DxgkSharedProtectedSessionObDeleteProcedure@@YAXPEAX@Z @ 0x1C0272BE0 (-DxgkSharedProtectedSessionObDeleteProcedure@@YAXPEAX@Z.c)
 *     DxgkDestroyProtectedSession @ 0x1C0284C10 (DxgkDestroyProtectedSession.c)
 *     DxgkQueryProtectedSessionStatus @ 0x1C0285750 (DxgkQueryProtectedSessionStatus.c)
 * Callees:
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000D070 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C000DBC4 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 */

DXGPROTECTEDSESSIONMUTEX *__fastcall DXGPROTECTEDSESSIONMUTEX::DXGPROTECTEDSESSIONMUTEX(
        DXGPROTECTEDSESSIONMUTEX *this,
        struct DXGGLOBAL *a2)
{
  DXGAUTOMUTEX::DXGAUTOMUTEX(this, (struct DXGGLOBAL *)((char *)a2 + 304208), 0);
  DXGAUTOMUTEX::Acquire(this);
  return this;
}
