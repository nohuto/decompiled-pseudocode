/*
 * XREFs of ?AddWakeUpCoreDripsBlockerTracking@DXGGLOBAL@@QEAAX_KPEAU_EPROCESS@@@Z @ 0x1C02BA728
 * Callers:
 *     ?WakeUpAdapter@DXGADAPTER@@QEAAXXZ @ 0x1C020C200 (-WakeUpAdapter@DXGADAPTER@@QEAAXXZ.c)
 *     ?ReportGpuWakeupWorkItemCallback@DXGGLOBAL@@SAXPEAU_DEVICE_OBJECT@@PEAXPEAU_IO_WORKITEM@@@Z @ 0x1C02BAC90 (-ReportGpuWakeupWorkItemCallback@DXGGLOBAL@@SAXPEAU_DEVICE_OBJECT@@PEAXPEAU_IO_WORKITEM@@@Z.c)
 * Callees:
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000CF20 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000D070 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C000DBC4 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?GetFirstProfilerInterface@DXGGLOBAL@@SA?AW4_DXGKETW_PROFILER_TYPE@@XZ @ 0x1C0127F20 (-GetFirstProfilerInterface@DXGGLOBAL@@SA-AW4_DXGKETW_PROFILER_TYPE@@XZ.c)
 *     ?AddWakeUpToProcessEntry@DripsBlockerTrackingHelper@@QEAAJ_KPEAU_EPROCESS@@W4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C02BB4A4 (-AddWakeUpToProcessEntry@DripsBlockerTrackingHelper@@QEAAJ_KPEAU_EPROCESS@@W4_DXGKETW_PROFILER_T.c)
 */

void __fastcall DXGGLOBAL::AddWakeUpCoreDripsBlockerTracking(DXGGLOBAL *this, __int64 a2, struct _EPROCESS *a3)
{
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  unsigned int FirstProfilerInterface; // eax
  __int64 v10; // rdx
  _BYTE v11[24]; // [rsp+20h] [rbp-18h] BYREF

  if ( a2 )
  {
    if ( *((_DWORD *)this + 464) && *((_BYTE *)this + 304096) )
    {
      DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v11, (DXGGLOBAL *)((char *)this + 1864), 0);
      DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v11);
      FirstProfilerInterface = DXGGLOBAL::GetFirstProfilerInterface(v8, v7);
      DripsBlockerTrackingHelper::AddWakeUpToProcessEntry((char *)this + 2016, a2, a3, FirstProfilerInterface);
      if ( v11[8] )
        DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v11, v10);
    }
  }
  else
  {
    v6 = WdLogNewEntry5_WdEvent(this, 0LL);
    *(_QWORD *)(v6 + 24) = 427LL;
    WdLogEvent5_WdEvent(v6);
  }
}
