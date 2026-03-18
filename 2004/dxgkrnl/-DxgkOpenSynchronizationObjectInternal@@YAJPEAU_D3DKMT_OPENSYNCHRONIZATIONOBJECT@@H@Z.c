/*
 * XREFs of ?DxgkOpenSynchronizationObjectInternal@@YAJPEAU_D3DKMT_OPENSYNCHRONIZATIONOBJECT@@H@Z @ 0x1C016DAB8
 * Callers:
 *     ?DxgkCddOpenSynchronizationObject@@YAJPEAU_D3DKMT_OPENSYNCHRONIZATIONOBJECT@@@Z @ 0x1C016DAA0 (-DxgkCddOpenSynchronizationObject@@YAJPEAU_D3DKMT_OPENSYNCHRONIZATIONOBJECT@@@Z.c)
 *     DxgkOpenSynchronizationObject @ 0x1C02936E0 (DxgkOpenSynchronizationObject.c)
 * Callees:
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0002ADC (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0002CA8 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0004010 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?Release@DXGSYNCOBJECTLOCK@@QEAAXXZ @ 0x1C0004150 (-Release@DXGSYNCOBJECTLOCK@@QEAAXXZ.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C0006148 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?AcquireShared@DXGSYNCOBJECTLOCK@@QEAAXXZ @ 0x1C0006E20 (-AcquireShared@DXGSYNCOBJECTLOCK@@QEAAXXZ.c)
 *     ??0DXGSYNCOBJECTLOCK@@QEAA@QEAVDXGGLOBAL@@_N@Z @ 0x1C0006E74 (--0DXGSYNCOBJECTLOCK@@QEAA@QEAVDXGGLOBAL@@_N@Z.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C0024458 (McTemplateK0q_EtwWriteTransfer.c)
 *     McTemplateK0ppp_EtwWriteTransfer @ 0x1C0046274 (McTemplateK0ppp_EtwWriteTransfer.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0113030 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?DestroySyncObject@DXGGLOBAL@@QEAAXPEAVDXGSYNCOBJECT@@I@Z @ 0x1C0113088 (-DestroySyncObject@DXGGLOBAL@@QEAAXPEAVDXGSYNCOBJECT@@I@Z.c)
 *     ?OpenSyncObject@DXGGLOBAL@@QEAAJIPEAPEAVDXGSYNCOBJECT@@PEAIPEAPEAVDXGADAPTERSYNCOBJECT@@@Z @ 0x1C016DCD0 (-OpenSyncObject@DXGGLOBAL@@QEAAJIPEAPEAVDXGSYNCOBJECT@@PEAIPEAPEAVDXGADAPTERSYNCOBJECT@@@Z.c)
 */

__int64 __fastcall DxgkOpenSynchronizationObjectInternal(
        struct _D3DKMT_OPENSYNCHRONIZATIONOBJECT *a1,
        int a2,
        __int64 a3)
{
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rdx
  ULONG64 v8; // rcx
  struct DXGPROCESS *Current; // rsi
  D3DKMT_HANDLE hSharedHandle; // r14d
  PERESOURCE *Global; // rax
  __int64 v12; // rdx
  __int64 v13; // rdx
  __int64 v14; // rcx
  DXGGLOBAL *v15; // rax
  __int64 v16; // rdx
  ULONG64 v17; // rcx
  __int64 v18; // r8
  int v19; // r14d
  __int64 v20; // r9
  __int64 v21; // rax
  __int64 v22; // rdx
  unsigned __int64 v23; // rdi
  __int64 v24; // rax
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v28; // rax
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // r8
  struct _D3DKMT_OPENSYNCHRONIZATIONOBJECT *v32; // rax
  _DWORD *p_hSyncObject; // rdx
  PERESOURCE *v34; // rax
  struct DXGADAPTERSYNCOBJECT *v35[2]; // [rsp+30h] [rbp-58h] BYREF
  _BYTE v36[16]; // [rsp+40h] [rbp-48h] BYREF
  int v37; // [rsp+50h] [rbp-38h] BYREF
  __int64 v38; // [rsp+58h] [rbp-30h]
  char v39; // [rsp+60h] [rbp-28h]
  unsigned int v40; // [rsp+A0h] [rbp+18h] BYREF
  struct DXGSYNCOBJECT *v41; // [rsp+A8h] [rbp+20h] BYREF

  v37 = -1;
  v38 = 0LL;
  if ( (qword_1C00B09B0 & 2) != 0 )
  {
    v39 = 1;
    v37 = 2050;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)a1, &EventProfilerEnter, a3, 2050);
  }
  else
  {
    v39 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v37, 2050LL);
  Current = DXGPROCESS::GetCurrent(v6, v5);
  v35[1] = Current;
  if ( Current )
  {
    if ( a2 )
    {
      v8 = MmUserProbeAddress;
      v32 = a1;
      if ( (unsigned __int64)a1 >= MmUserProbeAddress )
        v32 = (struct _D3DKMT_OPENSYNCHRONIZATIONOBJECT *)MmUserProbeAddress;
      hSharedHandle = v32->hSharedHandle;
    }
    else
    {
      hSharedHandle = a1->hSharedHandle;
    }
    v41 = 0LL;
    v35[0] = 0LL;
    v40 = 0;
    Global = (PERESOURCE *)DXGGLOBAL::GetGlobal(v8, v7);
    DXGSYNCOBJECTLOCK::DXGSYNCOBJECTLOCK((DXGSYNCOBJECTLOCK *)v36, Global, 0);
    DXGSYNCOBJECTLOCK::AcquireShared((DXGSYNCOBJECTLOCK *)v36, v12);
    v15 = DXGGLOBAL::GetGlobal(v14, v13);
    v19 = DXGGLOBAL::OpenSyncObject(v15, hSharedHandle, &v41, &v40, v35);
    if ( v36[8] )
      DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)v36);
    if ( v19 < 0 )
    {
      if ( v41 )
      {
        v34 = (PERESOURCE *)DXGGLOBAL::GetGlobal(v17, v16);
        DXGGLOBAL::DestroySyncObject(v34, v41, v40);
      }
    }
    else
    {
      if ( a2 )
      {
        p_hSyncObject = &a1->hSyncObject;
        v17 = MmUserProbeAddress;
        if ( (unsigned __int64)&a1->hSyncObject >= MmUserProbeAddress )
          p_hSyncObject = (_DWORD *)MmUserProbeAddress;
        *p_hSyncObject = v40;
      }
      else
      {
        a1->hSyncObject = v40;
      }
      if ( bTracingEnabled )
      {
        v20 = v35[0] ? *((_QWORD *)v35[0] + 4) : 0LL;
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
          McTemplateK0ppp_EtwWriteTransfer(v17, &EventOpenSyncObject, v18, v20, v40, 0LL);
      }
      DXGPUSHLOCK::AcquireExclusive((struct DXGPROCESS *)((char *)Current + 208));
      v21 = (v40 >> 6) & 0xFFFFFF;
      if ( (unsigned int)v21 < *((_DWORD *)Current + 64) )
      {
        v22 = *((_QWORD *)Current + 30);
        if ( ((v40 >> 25) & 0x60) == (*(_BYTE *)(v22 + 16 * v21 + 8) & 0x60)
          && (*(_DWORD *)(v22 + 16 * v21 + 8) & 0x1F) != 0 )
        {
          v23 = 2 * (((unsigned __int64)v40 >> 6) & 0xFFFFFF);
          if ( (*(_DWORD *)(v22 + 16 * (((unsigned __int64)v40 >> 6) & 0xFFFFFF) + 8) & 0x2000) == 0 )
          {
            v24 = WdLogNewEntry5_WdAssertion((v40 >> 25) & 0x60, v22);
            *(_QWORD *)(v24 + 24) = 217LL;
            WdLogEvent5_WdAssertion(v24);
            v22 = *((_QWORD *)Current + 30);
          }
          *(_DWORD *)(v22 + 8 * v23 + 8) &= ~0x2000u;
        }
      }
      *((_QWORD *)Current + 27) = 0LL;
      ExReleasePushLockExclusiveEx((char *)Current + 208, 0LL);
      KeLeaveCriticalRegion();
    }
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v37, v16);
    if ( v39 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v25, &EventProfilerExit, v26, v37);
    }
    return (unsigned int)v19;
  }
  else
  {
    v28 = WdLogNewEntry5_WdError(v8, v7);
    *(_QWORD *)(v28 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v28);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v37, v29);
    if ( v39 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v30, &EventProfilerExit, v31, v37);
    return 3221225485LL;
  }
}
