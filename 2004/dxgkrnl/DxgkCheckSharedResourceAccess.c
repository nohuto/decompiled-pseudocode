/*
 * XREFs of DxgkCheckSharedResourceAccess @ 0x1C0229700
 * Callers:
 *     <none>
 * Callees:
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002808 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0002CA8 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0004010 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C0006148 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ??0DXGGLOBALSHAREMUTEX@@QEAA@XZ @ 0x1C0006568 (--0DXGGLOBALSHAREMUTEX@@QEAA@XZ.c)
 *     ??1DXGGLOBALSHAREMUTEX@@QEAA@XZ @ 0x1C00065E8 (--1DXGGLOBALSHAREMUTEX@@QEAA@XZ.c)
 *     ??0DXGPROCESSACCESSLISTMUTEX@@QEAA@PEAVDXGSHAREDRESOURCEACCESS@@@Z @ 0x1C0019094 (--0DXGPROCESSACCESSLISTMUTEX@@QEAA@PEAVDXGSHAREDRESOURCEACCESS@@@Z.c)
 *     ?GetObjectA@DXGGLOBAL@@QEAAPEAXIW4_HMGRENTRY_TYPE@@_N@Z @ 0x1C001BFA0 (-GetObjectA@DXGGLOBAL@@QEAAPEAXIW4_HMGRENTRY_TYPE@@_N@Z.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C0024458 (McTemplateK0q_EtwWriteTransfer.c)
 */

__int64 __fastcall DxgkCheckSharedResourceAccess(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 *v3; // rbx
  __int64 v4; // rdx
  __int64 v5; // rbx
  __int64 v6; // rdx
  __int64 v7; // rcx
  struct DXGGLOBAL *Global; // rax
  __int64 ObjectA; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v19; // rbx
  __int64 v20; // rdx
  __int64 *v21; // rsi
  __int64 *i; // rbx
  HANDLE CurrentProcessId; // rax
  __int64 v24; // rdx
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8
  _BYTE v31[16]; // [rsp+20h] [rbp-48h] BYREF
  _BYTE v32[16]; // [rsp+30h] [rbp-38h] BYREF
  int v33; // [rsp+40h] [rbp-28h] BYREF
  __int64 v34; // [rsp+48h] [rbp-20h]
  char v35; // [rsp+50h] [rbp-18h]
  unsigned int v36; // [rsp+7Ch] [rbp+14h]

  v3 = (__int64 *)a1;
  v33 = -1;
  v34 = 0LL;
  if ( (qword_1C00B09B0 & 2) != 0 )
  {
    v35 = 1;
    v33 = 2059;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer(a1, &EventProfilerEnter, a3, 2059);
  }
  else
  {
    v35 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v33, 2059LL);
  if ( (unsigned __int64)v3 >= MmUserProbeAddress )
    v3 = (__int64 *)MmUserProbeAddress;
  v5 = *v3;
  v36 = HIDWORD(v5);
  DXGGLOBALSHAREMUTEX::DXGGLOBALSHAREMUTEX((DXGGLOBALSHAREMUTEX *)v31, v4);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v31);
  Global = DXGGLOBAL::GetGlobal(v7, v6);
  ObjectA = DXGGLOBAL::GetObjectA((__int64)Global, (unsigned int)v5, 2);
  if ( ObjectA )
  {
    v19 = *(_QWORD *)(ObjectA + 152);
    if ( v19 )
    {
      DXGPROCESSACCESSLISTMUTEX::DXGPROCESSACCESSLISTMUTEX(
        (DXGPROCESSACCESSLISTMUTEX *)v32,
        *(struct DXGSHAREDRESOURCEACCESS **)(ObjectA + 152));
      DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v32);
      v21 = (__int64 *)(v19 + 48);
      for ( i = *(__int64 **)(v19 + 48); i != v21; i = (__int64 *)*i )
      {
        if ( *((_BYTE *)i + 16) )
          CurrentProcessId = PsGetCurrentProcessId();
        else
          CurrentProcessId = PsGetProcessId((PEPROCESS)i[3]);
        if ( CurrentProcessId == (HANDLE)v36 )
        {
          DXGGLOBALSHAREMUTEX::~DXGGLOBALSHAREMUTEX((DXGGLOBALSHAREMUTEX *)v32, v20);
          goto LABEL_25;
        }
      }
      DXGGLOBALSHAREMUTEX::~DXGGLOBALSHAREMUTEX((DXGGLOBALSHAREMUTEX *)v32, v20);
      DXGGLOBALSHAREMUTEX::~DXGGLOBALSHAREMUTEX((DXGGLOBALSHAREMUTEX *)v31, v24);
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v33, v25);
      if ( v35 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v26, &EventProfilerExit, v27, v33);
      return 3221225506LL;
    }
    else
    {
LABEL_25:
      DXGGLOBALSHAREMUTEX::~DXGGLOBALSHAREMUTEX((DXGGLOBALSHAREMUTEX *)v31, v10);
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v33, v28);
      if ( v35 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v29, &EventProfilerExit, v30, v33);
      return 0LL;
    }
  }
  else
  {
    v13 = WdLogNewEntry5_WdWarning(v11, v10, v12);
    *(_QWORD *)(v13 + 24) = (unsigned int)v5;
    *(_QWORD *)(v13 + 32) = -1073741811LL;
    WdLogEvent5_WdWarning(v13);
    DXGGLOBALSHAREMUTEX::~DXGGLOBALSHAREMUTEX((DXGGLOBALSHAREMUTEX *)v31, v14);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v33, v15);
    if ( v35 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v16, &EventProfilerExit, v17, v33);
    }
    return 3221225485LL;
  }
}
