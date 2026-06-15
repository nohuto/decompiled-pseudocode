/*
 * XREFs of ??_GDeviceStateChangedContext@CMonitorManager@@QEAAPEAXI@Z @ 0x1800FABA0
 * Callers:
 *     ??1?$CAutoPtr@UDeviceStateChangedContext@CMonitorManager@@@ATL@@QEAA@XZ @ 0x1800FA64C (--1-$CAutoPtr@UDeviceStateChangedContext@CMonitorManager@@@ATL@@QEAA@XZ.c)
 *     ?FreeNode@?$CAtlList@V?$CAutoPtr@UDeviceStateChangedContext@CMonitorManager@@@ATL@@V?$CAutoPtrElementTraits@UDeviceStateChangedContext@CMonitorManager@@@2@@ATL@@AEAAXPEAVCNode@12@@Z @ 0x1800FC8F0 (-FreeNode@-$CAtlList@V-$CAutoPtr@UDeviceStateChangedContext@CMonitorManager@@@ATL@@V-$CAutoPtrEl.c)
 *     ?ProcessDeviceStateChanged@CMonitorManager@@AEAAXXZ @ 0x1800FF000 (-ProcessDeviceStateChanged@CMonitorManager@@AEAAXXZ.c)
 *     ?QueueDeviceStateChanged@CMonitorManager@@AEAAJKPEBG@Z @ 0x1800FF36C (-QueueDeviceStateChanged@CMonitorManager@@AEAAJKPEBG@Z.c)
 * Callees:
 *     ?Release@CStringData@ATL@@QEAAXXZ @ 0x180006EA0 (-Release@CStringData@ATL@@QEAAXXZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18006AB58 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

CMonitorManager::DeviceStateChangedContext *__fastcall CMonitorManager::DeviceStateChangedContext::`scalar deleting destructor'(
        CMonitorManager::DeviceStateChangedContext *this)
{
  struct _TP_WORK *v2; // rcx

  v2 = (struct _TP_WORK *)*((_QWORD *)this + 2);
  if ( v2 )
    CloseThreadpoolWork(v2);
  ATL::CStringData::Release((ATL::CStringData *)(*(_QWORD *)this - 24LL));
  operator delete(this, (const struct std::nothrow_t *)0x18);
  return this;
}
