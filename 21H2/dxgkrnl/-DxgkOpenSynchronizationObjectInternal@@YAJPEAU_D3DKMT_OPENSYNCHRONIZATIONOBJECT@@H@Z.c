/*
 * XREFs of ?DxgkOpenSynchronizationObjectInternal@@YAJPEAU_D3DKMT_OPENSYNCHRONIZATIONOBJECT@@H@Z @ 0x1C01EC868
 * Callers:
 *     ?DxgkCddOpenSynchronizationObject@@YAJPEAU_D3DKMT_OPENSYNCHRONIZATIONOBJECT@@@Z @ 0x1C01EC850 (-DxgkCddOpenSynchronizationObject@@YAJPEAU_D3DKMT_OPENSYNCHRONIZATIONOBJECT@@@Z.c)
 *     DxgkOpenSynchronizationObject @ 0x1C03432B0 (DxgkOpenSynchronizationObject.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ?Release@DXGSYNCOBJECTLOCK@@QEAAXXZ @ 0x1C0009A8C (-Release@DXGSYNCOBJECTLOCK@@QEAAXXZ.c)
 *     ?AcquireShared@DXGSYNCOBJECTLOCK@@QEAAXXZ @ 0x1C0009B5C (-AcquireShared@DXGSYNCOBJECTLOCK@@QEAAXXZ.c)
 *     ??0DXGSYNCOBJECTLOCK@@QEAA@QEAVDXGGLOBAL@@_N@Z @ 0x1C0009BB0 (--0DXGSYNCOBJECTLOCK@@QEAA@QEAVDXGGLOBAL@@_N@Z.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C000B780 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ @ 0x1C000BBD0 (-DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C000D9B8 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C000EE00 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C002B284 (McTemplateK0q_EtwWriteTransfer.c)
 *     McTemplateK0ppp_EtwWriteTransfer @ 0x1C00541B0 (McTemplateK0ppp_EtwWriteTransfer.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0186AA0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?DestroySyncObject@DXGGLOBAL@@QEAAXPEAVDXGSYNCOBJECT@@I@Z @ 0x1C019A7B8 (-DestroySyncObject@DXGGLOBAL@@QEAAXPEAVDXGSYNCOBJECT@@I@Z.c)
 *     ?OpenSyncObject@DXGGLOBAL@@QEAAJIPEAPEAVDXGSYNCOBJECT@@PEAIPEAPEAVDXGADAPTERSYNCOBJECT@@@Z @ 0x1C01ECAB0 (-OpenSyncObject@DXGGLOBAL@@QEAAJIPEAPEAVDXGSYNCOBJECT@@PEAIPEAPEAVDXGADAPTERSYNCOBJECT@@@Z.c)
 */

__int64 __fastcall DxgkOpenSynchronizationObjectInternal(
        struct _D3DKMT_OPENSYNCHRONIZATIONOBJECT *a1,
        int a2,
        __int64 a3)
{
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  struct DXGPROCESS *Current; // r14
  D3DKMT_HANDLE hSharedHandle; // esi
  struct DXGGLOBAL *Global; // rax
  DXGGLOBAL *v12; // rax
  int v13; // esi
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // rax
  __int64 v17; // rdx
  unsigned __int64 v18; // rdi
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v22; // rcx
  __int64 v23; // r8
  struct _D3DKMT_OPENSYNCHRONIZATIONOBJECT *v24; // rax
  _DWORD *p_hSyncObject; // rdx
  PERESOURCE *v26; // rax
  struct DXGADAPTERSYNCOBJECT *v27[2]; // [rsp+50h] [rbp-58h] BYREF
  _BYTE v28[16]; // [rsp+60h] [rbp-48h] BYREF
  int v29; // [rsp+70h] [rbp-38h] BYREF
  __int64 v30; // [rsp+78h] [rbp-30h]
  char v31; // [rsp+80h] [rbp-28h]
  unsigned int v32; // [rsp+C0h] [rbp+18h] BYREF
  struct DXGSYNCOBJECT *v33; // [rsp+C8h] [rbp+20h] BYREF

  v29 = -1;
  v30 = 0LL;
  if ( (qword_1C012F870 & 2) != 0 )
  {
    v31 = 1;
    v29 = 2050;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)a1, &EventProfilerEnter, a3, 2050);
  }
  else
  {
    v31 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v29, 2050);
  Current = DXGPROCESS::GetCurrent(v6, v5, v7, v8);
  v27[1] = Current;
  if ( Current )
  {
    if ( a2 )
    {
      v24 = a1;
      if ( (unsigned __int64)a1 >= MmUserProbeAddress )
        v24 = (struct _D3DKMT_OPENSYNCHRONIZATIONOBJECT *)MmUserProbeAddress;
      hSharedHandle = v24->hSharedHandle;
    }
    else
    {
      hSharedHandle = a1->hSharedHandle;
    }
    v33 = 0LL;
    v27[0] = 0LL;
    v32 = 0;
    Global = DXGGLOBAL_GetGlobal();
    DXGSYNCOBJECTLOCK::DXGSYNCOBJECTLOCK((DXGSYNCOBJECTLOCK *)v28, Global, 0);
    DXGSYNCOBJECTLOCK::AcquireShared((DXGSYNCOBJECTLOCK *)v28);
    v12 = DXGGLOBAL_GetGlobal();
    v13 = DXGGLOBAL::OpenSyncObject(v12, hSharedHandle, &v33, &v32, v27);
    if ( v28[8] )
      DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)v28);
    if ( v13 < 0 )
    {
      if ( v33 )
      {
        v26 = (PERESOURCE *)DXGGLOBAL_GetGlobal();
        DXGGLOBAL::DestroySyncObject(v26, v33, v32);
      }
    }
    else
    {
      if ( a2 )
      {
        p_hSyncObject = &a1->hSyncObject;
        if ( (unsigned __int64)&a1->hSyncObject >= MmUserProbeAddress )
          p_hSyncObject = (_DWORD *)MmUserProbeAddress;
        *p_hSyncObject = v32;
      }
      else
      {
        a1->hSyncObject = v32;
      }
      if ( bTracingEnabled )
      {
        v15 = v27[0] ? *((_QWORD *)v27[0] + 4) : 0LL;
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
          McTemplateK0ppp_EtwWriteTransfer(
            (REGHANDLE *)&DxgkControlGuid_Context,
            &EventOpenSyncObject,
            v14,
            v15,
            v32,
            0LL);
      }
      DXGPUSHLOCK::AcquireExclusive((struct DXGPROCESS *)((char *)Current + 248));
      v16 = (v32 >> 6) & 0xFFFFFF;
      if ( (unsigned int)v16 < *((_DWORD *)Current + 74) )
      {
        v17 = *((_QWORD *)Current + 35);
        if ( ((v32 >> 25) & 0x60) == (*(_BYTE *)(v17 + 16 * v16 + 8) & 0x60)
          && (*(_DWORD *)(v17 + 16 * v16 + 8) & 0x1F) != 0 )
        {
          v18 = 2 * (((unsigned __int64)v32 >> 6) & 0xFFFFFF);
          if ( (*(_DWORD *)(v17 + 16 * (((unsigned __int64)v32 >> 6) & 0xFFFFFF) + 8) & 0x2000) == 0 )
          {
            WdLogSingleEntry1(1LL, 217LL);
            DxgkLogInternalTriageEvent(
              0LL,
              262146,
              -1,
              (__int64)L"m_pEntryTable[GetIndex(hObject)].Destroyed",
              217LL,
              0LL,
              0LL,
              0LL,
              0LL);
            v17 = *((_QWORD *)Current + 35);
          }
          *(_DWORD *)(v17 + 8 * v18 + 8) &= ~0x2000u;
        }
      }
      *((_QWORD *)Current + 32) = 0LL;
      ExReleasePushLockExclusiveEx((char *)Current + 248, 0LL);
      KeLeaveCriticalRegion();
    }
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v29);
    if ( v31 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v19, &EventProfilerExit, v20, v29);
    }
    return (unsigned int)v13;
  }
  else
  {
    WdLogSingleEntry1(2LL, -1073741811LL);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Invalid process context, returning 0x%I64x",
      -1073741811LL,
      0LL,
      0LL,
      0LL,
      0LL);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v29);
    if ( v31 )
    {
      LOBYTE(v22) = BYTE1(Microsoft_Windows_DxgKrnlEnableBits);
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v22, &EventProfilerExit, v23, v29);
    }
    return 3221225485LL;
  }
}
