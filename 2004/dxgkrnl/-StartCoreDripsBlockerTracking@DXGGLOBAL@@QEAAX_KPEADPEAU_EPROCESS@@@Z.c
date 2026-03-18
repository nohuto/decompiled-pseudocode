/*
 * XREFs of ?StartCoreDripsBlockerTracking@DXGGLOBAL@@QEAAX_KPEADPEAU_EPROCESS@@@Z @ 0x1C00E845C
 * Callers:
 *     ?AcquireCoreResourceExclusive@DXGADAPTER@@AEAAXW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@IPEAD@Z @ 0x1C00E84B8 (-AcquireCoreResourceExclusive@DXGADAPTER@@AEAAXW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@IPEAD@Z.c)
 * Callees:
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002808 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002BB0 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0006598 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?GetFirstProfilerInterface@DXGGLOBAL@@SA?AW4_DXGKETW_PROFILER_TYPE@@XZ @ 0x1C00E86B8 (-GetFirstProfilerInterface@DXGGLOBAL@@SA-AW4_DXGKETW_PROFILER_TYPE@@XZ.c)
 *     ?AddProcessEntry@DripsBlockerTrackingHelper@@QEAAJ_KPEBDPEAU_EPROCESS@@W4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C02BF884 (-AddProcessEntry@DripsBlockerTrackingHelper@@QEAAJ_KPEBDPEAU_EPROCESS@@W4_DXGKETW_PROFILER_TYPE@.c)
 */

void __fastcall DXGGLOBAL::StartCoreDripsBlockerTracking(DXGGLOBAL *this, __int64 a2, char *a3, struct _EPROCESS *a4)
{
  __int64 v8; // rax
  int FirstProfilerInterface; // eax
  __int64 v10; // rdx
  _BYTE v11[24]; // [rsp+30h] [rbp-18h] BYREF

  if ( !a2 )
  {
    v8 = WdLogNewEntry5_WdEvent();
    *(_QWORD *)(v8 + 24) = 504LL;
LABEL_7:
    WdLogEvent5_WdEvent(v8);
    return;
  }
  if ( !a4 )
  {
    v8 = WdLogNewEntry5_WdEvent();
    *(_QWORD *)(v8 + 24) = 510LL;
    goto LABEL_7;
  }
  if ( *((_DWORD *)this + 494) && *((_BYTE *)this + 304216) )
  {
    DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v11, (DXGGLOBAL *)((char *)this + 1984), 0);
    DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v11);
    FirstProfilerInterface = DXGGLOBAL::GetFirstProfilerInterface();
    DripsBlockerTrackingHelper::AddProcessEntry((char *)this + 2136, a2, a3, a4, FirstProfilerInterface);
    if ( v11[8] )
      DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v11, v10);
  }
}
