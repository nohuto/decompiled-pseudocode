/*
 * XREFs of ??0DXGPROTECTEDSESSIONMUTEX@@QEAA@PEAVDXGGLOBAL@@_N@Z @ 0x1C0046648
 * Callers:
 *     ?CreateSharedProtectedSessionNtObject@@YAJDW4_HMGRENTRY_TYPE@@IPEAXPEAU_OBJECT_ATTRIBUTES@@DPEAPEAX@Z @ 0x1C0275C8C (-CreateSharedProtectedSessionNtObject@@YAJDW4_HMGRENTRY_TYPE@@IPEAXPEAU_OBJECT_ATTRIBUTES@@DPEAP.c)
 *     ?DxgkSharedProtectedSessionObDeleteProcedure@@YAXPEAX@Z @ 0x1C0276060 (-DxgkSharedProtectedSessionObDeleteProcedure@@YAXPEAX@Z.c)
 *     DxgkDestroyProtectedSession @ 0x1C02880D0 (DxgkDestroyProtectedSession.c)
 *     DxgkQueryProtectedSessionStatus @ 0x1C0288C10 (DxgkQueryProtectedSessionStatus.c)
 * Callees:
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002808 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0006598 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 */

DXGPROTECTEDSESSIONMUTEX *__fastcall DXGPROTECTEDSESSIONMUTEX::DXGPROTECTEDSESSIONMUTEX(
        DXGPROTECTEDSESSIONMUTEX *this,
        struct DXGGLOBAL *a2)
{
  DXGAUTOMUTEX::DXGAUTOMUTEX(this, (struct DXGGLOBAL *)((char *)a2 + 304328), 0);
  DXGAUTOMUTEX::Acquire(this);
  return this;
}
