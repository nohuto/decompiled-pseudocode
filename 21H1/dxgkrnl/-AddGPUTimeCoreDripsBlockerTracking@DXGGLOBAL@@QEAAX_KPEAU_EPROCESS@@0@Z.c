/*
 * XREFs of ?AddGPUTimeCoreDripsBlockerTracking@DXGGLOBAL@@QEAAX_KPEAU_EPROCESS@@0@Z @ 0x1C02BA660
 * Callers:
 *     ?ApplyCsFunctionAdapterCallback@@YAJPEAVDXGADAPTER@@PEAX@Z @ 0x1C027F9C0 (-ApplyCsFunctionAdapterCallback@@YAJPEAVDXGADAPTER@@PEAX@Z.c)
 * Callees:
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000CF20 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000D070 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C000DBC4 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?GetFirstProfilerInterface@DXGGLOBAL@@SA?AW4_DXGKETW_PROFILER_TYPE@@XZ @ 0x1C0127F20 (-GetFirstProfilerInterface@DXGGLOBAL@@SA-AW4_DXGKETW_PROFILER_TYPE@@XZ.c)
 *     ?AddGPUTimeToProcessEntry@DripsBlockerTrackingHelper@@QEAAJ_KPEAU_EPROCESS@@0W4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C02BB15C (-AddGPUTimeToProcessEntry@DripsBlockerTrackingHelper@@QEAAJ_KPEAU_EPROCESS@@0W4_DXGKETW_PROFILER.c)
 */

void __fastcall DXGGLOBAL::AddGPUTimeCoreDripsBlockerTracking(
        DXGGLOBAL *this,
        __int64 a2,
        struct _EPROCESS *a3,
        __int64 a4)
{
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  int FirstProfilerInterface; // eax
  __int64 v12; // rdx
  _BYTE v13[24]; // [rsp+30h] [rbp-18h] BYREF

  if ( a2 )
  {
    if ( *((_DWORD *)this + 464) && *((_BYTE *)this + 304096) )
    {
      DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v13, (DXGGLOBAL *)((char *)this + 1864), 0);
      DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v13);
      FirstProfilerInterface = DXGGLOBAL::GetFirstProfilerInterface(v10, v9);
      DripsBlockerTrackingHelper::AddGPUTimeToProcessEntry((char *)this + 2016, a2, a3, a4, FirstProfilerInterface);
      if ( v13[8] )
        DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v13, v12);
    }
  }
  else
  {
    v8 = WdLogNewEntry5_WdEvent(this, 0LL);
    *(_QWORD *)(v8 + 24) = 330LL;
    WdLogEvent5_WdEvent(v8);
  }
}
