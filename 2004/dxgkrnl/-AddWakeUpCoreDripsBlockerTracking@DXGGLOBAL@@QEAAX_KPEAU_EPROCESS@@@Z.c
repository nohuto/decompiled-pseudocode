/*
 * XREFs of ?AddWakeUpCoreDripsBlockerTracking@DXGGLOBAL@@QEAAX_KPEAU_EPROCESS@@@Z @ 0x1C02BEC68
 * Callers:
 *     ?WakeUpAdapter@DXGADAPTER@@QEAAXXZ @ 0x1C0210450 (-WakeUpAdapter@DXGADAPTER@@QEAAXXZ.c)
 *     ?ReportGpuWakeupWorkItemCallback@DXGGLOBAL@@SAXPEAU_DEVICE_OBJECT@@PEAXPEAU_IO_WORKITEM@@@Z @ 0x1C02BF1D0 (-ReportGpuWakeupWorkItemCallback@DXGGLOBAL@@SAXPEAU_DEVICE_OBJECT@@PEAXPEAU_IO_WORKITEM@@@Z.c)
 * Callees:
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002808 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002BB0 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0006598 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?GetFirstProfilerInterface@DXGGLOBAL@@SA?AW4_DXGKETW_PROFILER_TYPE@@XZ @ 0x1C00E86B8 (-GetFirstProfilerInterface@DXGGLOBAL@@SA-AW4_DXGKETW_PROFILER_TYPE@@XZ.c)
 *     ?AddWakeUpToProcessEntry@DripsBlockerTrackingHelper@@QEAAJ_KPEAU_EPROCESS@@W4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C02BF9E4 (-AddWakeUpToProcessEntry@DripsBlockerTrackingHelper@@QEAAJ_KPEAU_EPROCESS@@W4_DXGKETW_PROFILER_T.c)
 */

void __fastcall DXGGLOBAL::AddWakeUpCoreDripsBlockerTracking(DXGGLOBAL *this, __int64 a2, struct _EPROCESS *a3)
{
  __int64 v6; // rax
  unsigned int FirstProfilerInterface; // eax
  __int64 v8; // rdx
  _BYTE v9[24]; // [rsp+20h] [rbp-18h] BYREF

  if ( a2 )
  {
    if ( *((_DWORD *)this + 494) && *((_BYTE *)this + 304216) )
    {
      DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v9, (DXGGLOBAL *)((char *)this + 1984), 0);
      DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v9);
      FirstProfilerInterface = DXGGLOBAL::GetFirstProfilerInterface();
      DripsBlockerTrackingHelper::AddWakeUpToProcessEntry((char *)this + 2136, a2, a3, FirstProfilerInterface);
      if ( v9[8] )
        DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v9, v8);
    }
  }
  else
  {
    v6 = WdLogNewEntry5_WdEvent(this, 0LL);
    *(_QWORD *)(v6 + 24) = 427LL;
    WdLogEvent5_WdEvent(v6);
  }
}
