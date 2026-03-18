/*
 * XREFs of ?DxgkOpenSyncObjectFromNtHandle2Impl@@YAJPEAU_D3DKMT_OPENSYNCOBJECTFROMNTHANDLE2@@E@Z @ 0x1C0150D18
 * Callers:
 *     DxgkOpenSyncObjectFromNtHandle2Internal @ 0x1C0150D00 (DxgkOpenSyncObjectFromNtHandle2Internal.c)
 *     DxgkOpenSyncObjectFromNtHandle2 @ 0x1C0279850 (DxgkOpenSyncObjectFromNtHandle2.c)
 * Callees:
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C000217C (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0002ADC (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0002CA8 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x1C0003EE0 (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0004010 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?Release@DXGSYNCOBJECTLOCK@@QEAAXXZ @ 0x1C0004150 (-Release@DXGSYNCOBJECTLOCK@@QEAAXXZ.c)
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ @ 0x1C00041C0 (-Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C0006148 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJPEAD@Z @ 0x1C0006A30 (-AcquireShared@COREDEVICEACCESS@@QEAAJPEAD@Z.c)
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x1C0006B34 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     ?AcquireShared@DXGSYNCOBJECTLOCK@@QEAAXXZ @ 0x1C0006E20 (-AcquireShared@DXGSYNCOBJECTLOCK@@QEAAXXZ.c)
 *     ??0DXGSYNCOBJECTLOCK@@QEAA@QEAVDXGGLOBAL@@_N@Z @ 0x1C0006E74 (--0DXGSYNCOBJECTLOCK@@QEAA@QEAVDXGGLOBAL@@_N@Z.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C00071B4 (--0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     __security_check_cookie @ 0x1C0024350 (__security_check_cookie.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C0024458 (McTemplateK0q_EtwWriteTransfer.c)
 *     McTemplateK0ppp_EtwWriteTransfer @ 0x1C0046274 (McTemplateK0ppp_EtwWriteTransfer.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C00E4064 (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?Open@DXGSYNCOBJECT@@QEAAJPEAVADAPTER_RENDER@@PEAVDXGDEVICE@@PEAPEAVDXGDEVICESYNCOBJECT@@PEAIPEAPEAXPEA_KIPEAPEAVDXGADAPTERSYNCOBJECT@@_NU_D3DDDI_SYNCHRONIZATIONOBJECT_FLAGS@@@Z @ 0x1C010E240 (-Open@DXGSYNCOBJECT@@QEAAJPEAVADAPTER_RENDER@@PEAVDXGDEVICE@@PEAPEAVDXGDEVICESYNCOBJECT@@PEAIPEA.c)
 *     ?DxgkDestroySynchronizationObjectImpl@@YAJPEBU_D3DKMT_DESTROYSYNCHRONIZATIONOBJECT@@H@Z @ 0x1C0112B9C (-DxgkDestroySynchronizationObjectImpl@@YAJPEBU_D3DKMT_DESTROYSYNCHRONIZATIONOBJECT@@H@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0113030 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

__int64 __fastcall DxgkOpenSyncObjectFromNtHandle2Impl(
        struct _D3DKMT_OPENSYNCOBJECTFROMNTHANDLE2 *a1,
        char a2,
        __int64 a3)
{
  struct _D3DKMT_OPENSYNCOBJECTFROMNTHANDLE2 *v4; // rsi
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rdx
  ULONG64 v8; // rcx
  __int64 v9; // r8
  struct DXGPROCESS *Current; // r15
  __int64 v11; // rdx
  __int64 v12; // rcx
  struct ADAPTER_RENDER **v13; // r13
  __int64 v14; // r9
  __int64 v15; // rbx
  HANDLE v16; // r12
  NTSTATUS v17; // eax
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  unsigned int v21; // ebx
  PERESOURCE *Global; // rax
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  int v26; // r12d
  __int64 v27; // r9
  __int64 v28; // rax
  __int64 v29; // rdx
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // r8
  unsigned __int64 v34; // rbx
  __int64 v35; // rax
  __int64 v36; // rax
  __int64 v37; // rdx
  ULONG64 v38; // rax
  __int64 v39; // rax
  __int64 v40; // rax
  __int64 v41; // rax
  __int64 v42; // rcx
  __int64 v43; // r8
  __int64 v44; // rdx
  __int64 v45; // rcx
  __int64 v46; // r8
  __int64 v47; // rax
  struct DXGDEVICE *v49; // [rsp+68h] [rbp-1A0h] BYREF
  int v50; // [rsp+70h] [rbp-198h] BYREF
  __int64 v51; // [rsp+78h] [rbp-190h]
  char v52; // [rsp+80h] [rbp-188h]
  struct DXGADAPTERSYNCOBJECT *v53; // [rsp+88h] [rbp-180h] BYREF
  _QWORD v54[2]; // [rsp+90h] [rbp-178h] BYREF
  struct _D3DKMT_DESTROYSYNCHRONIZATIONOBJECT v55[2]; // [rsp+A0h] [rbp-168h]
  PVOID Object; // [rsp+A8h] [rbp-160h] BYREF
  HANDLE Handle[2]; // [rsp+B0h] [rbp-158h]
  void *v58[2]; // [rsp+C0h] [rbp-148h] BYREF
  unsigned int v59[4]; // [rsp+D0h] [rbp-138h] BYREF
  __int128 v60; // [rsp+E0h] [rbp-128h]
  __int128 v61; // [rsp+F0h] [rbp-118h]
  UINT64 v62; // [rsp+100h] [rbp-108h]
  struct DXGDEVICE *v63; // [rsp+110h] [rbp-F8h] BYREF
  struct _OBJECT_HANDLE_INFORMATION HandleInformation; // [rsp+118h] [rbp-F0h] BYREF
  _BYTE v65[8]; // [rsp+120h] [rbp-E8h] BYREF
  char v66; // [rsp+128h] [rbp-E0h]
  _BYTE v67[160]; // [rsp+130h] [rbp-D8h] BYREF

  v4 = a1;
  *(_QWORD *)&v55[0].hSyncObject = a1;
  v50 = -1;
  v51 = 0LL;
  if ( (qword_1C00B09B0 & 2) != 0 )
  {
    v52 = 1;
    v50 = 2086;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)a1, &EventProfilerEnter, a3, 2086);
  }
  else
  {
    v52 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v50, 2086LL);
  Current = DXGPROCESS::GetCurrent(v6, v5);
  if ( Current )
  {
    if ( a2 )
    {
      v8 = MmUserProbeAddress;
      v38 = (ULONG64)v4;
      if ( (unsigned __int64)v4 >= MmUserProbeAddress )
        v38 = MmUserProbeAddress;
      *(_OWORD *)Handle = *(_OWORD *)v38;
      *(_OWORD *)v58 = *(_OWORD *)(v38 + 16);
      *(_OWORD *)v59 = *(_OWORD *)(v38 + 32);
      v60 = *(_OWORD *)(v38 + 48);
      v61 = *(_OWORD *)(v38 + 64);
      v62 = *(_QWORD *)(v38 + 80);
    }
    else
    {
      *(_OWORD *)Handle = *(_OWORD *)&v4->hNtHandle;
      *(_OWORD *)v58 = *(_OWORD *)&v4->hSyncObject;
      *(_OWORD *)v59 = *(_OWORD *)&v4->Reserved[1];
      v60 = *(_OWORD *)&v4->Reserved[3];
      v61 = *(_OWORD *)&v4->Reserved[5];
      v62 = v4->Reserved[7];
    }
    LODWORD(v58[0]) = 0;
    if ( (HIDWORD(Handle[1]) & 0x7FFFFE00) != 0 )
    {
      v39 = WdLogNewEntry5_WdWarning(v8, v7, v9);
      *(_QWORD *)(v39 + 24) = 1587LL;
      WdLogEvent5_WdWarning(v39);
    }
    else
    {
      if ( (BYTE4(Handle[1]) & 0x10) != 0 || (BYTE4(Handle[1]) & 0x20) != 0 )
      {
        v40 = WdLogNewEntry5_WdWarning(v8, v7, v9);
        *(_QWORD *)(v40 + 24) = 1594LL;
        WdLogEvent5_WdWarning(v40);
      }
      v63 = 0LL;
      DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE(
        (DXGDEVICEBYHANDLE *)&v49,
        LODWORD(Handle[1]),
        (struct _KTHREAD **)Current,
        &v63);
      v13 = (struct ADAPTER_RENDER **)v63;
      if ( v63 )
      {
        DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v54, v63);
        COREDEVICEACCESS::COREDEVICEACCESS((__int64)v67, (__int64)v13, 0, v14, 0);
        LODWORD(v15) = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v67, 0LL);
        if ( (int)v15 < 0 )
        {
          COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v67);
          if ( v54[0] )
            DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v54);
          if ( !v49 )
            goto LABEL_60;
        }
        else
        {
          HandleInformation = 0LL;
          Object = 0LL;
          v16 = Handle[0];
          v17 = ObReferenceObjectByHandle(
                  Handle[0],
                  0x20000u,
                  g_pDxgkSharedSyncObjectType,
                  1,
                  &Object,
                  &HandleInformation);
          v15 = v17;
          if ( v17 == -1073741788 )
          {
            v47 = WdLogNewEntry5_WdWarning(v19, v18, v20);
            v15 = -1073741788LL;
          }
          else
          {
            if ( v17 >= 0 )
            {
              v21 = HIDWORD(Handle[1]) & 0xFFFFFFCF | ~(8 * LOBYTE(HandleInformation.GrantedAccess)) & 0x10 | ~(32 * LOBYTE(HandleInformation.GrantedAccess)) & 0x20;
              v53 = 0LL;
              Global = (PERESOURCE *)DXGGLOBAL::GetGlobal(v19, v18);
              DXGSYNCOBJECTLOCK::DXGSYNCOBJECTLOCK((DXGSYNCOBJECTLOCK *)v65, Global, 0);
              DXGSYNCOBJECTLOCK::AcquireShared((DXGSYNCOBJECTLOCK *)v65, v23);
              v26 = DXGSYNCOBJECT::Open(
                      *(DXGSYNCOBJECT **)Object,
                      v13[2],
                      (struct DXGDEVICE *)v13,
                      0LL,
                      (unsigned int *)v58,
                      &v58[1],
                      (unsigned __int64 *)v59,
                      v59[2],
                      &v53,
                      1,
                      (struct _D3DDDI_SYNCHRONIZATIONOBJECT_FLAGS)v21);
              if ( v26 < 0 )
              {
                if ( v66 )
                  DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)v65);
                COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v67);
                if ( v54[0] )
                  DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v54);
              }
              else
              {
                if ( v66 )
                  DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)v65);
                if ( bTracingEnabled )
                {
                  v27 = v53 ? *((_QWORD *)v53 + 4) : 0LL;
                  if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
                    McTemplateK0ppp_EtwWriteTransfer(v24, &EventOpenSyncObject, v25, v27, LODWORD(v58[0]), v13);
                }
                COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v67);
                if ( v54[0] )
                  DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v54);
                if ( a2 && (unsigned __int64)v4 >= MmUserProbeAddress )
                  v4 = (struct _D3DKMT_OPENSYNCOBJECTFROMNTHANDLE2 *)MmUserProbeAddress;
                *(_OWORD *)&v4->hNtHandle = *(_OWORD *)Handle;
                *(_OWORD *)&v4->hSyncObject = *(_OWORD *)v58;
                *(_OWORD *)&v4->Reserved[1] = *(_OWORD *)v59;
                *(_OWORD *)&v4->Reserved[3] = v60;
                *(_OWORD *)&v4->Reserved[5] = v61;
                v4->Reserved[7] = v62;
                DXGPUSHLOCK::AcquireExclusive((struct DXGPROCESS *)((char *)Current + 208));
                v28 = (LODWORD(v58[0]) >> 6) & 0xFFFFFF;
                if ( (unsigned int)v28 < *((_DWORD *)Current + 64) )
                {
                  v29 = *((_QWORD *)Current + 30);
                  if ( ((LODWORD(v58[0]) >> 25) & 0x60) == (*(_BYTE *)(v29 + 16 * v28 + 8) & 0x60)
                    && (*(_DWORD *)(v29 + 16 * v28 + 8) & 0x1F) != 0 )
                  {
                    v34 = 2 * (((unsigned __int64)v58[0] >> 6) & 0xFFFFFF);
                    if ( (*(_DWORD *)(v29 + 16 * (((unsigned __int64)v58[0] >> 6) & 0xFFFFFF) + 8) & 0x2000) == 0 )
                    {
                      v35 = WdLogNewEntry5_WdAssertion((LODWORD(v58[0]) >> 25) & 0x60, v29);
                      *(_QWORD *)(v35 + 24) = 217LL;
                      WdLogEvent5_WdAssertion(v35);
                      v29 = *((_QWORD *)Current + 30);
                    }
                    *(_DWORD *)(v29 + 8 * v34 + 8) &= ~0x2000u;
                  }
                }
                *((_QWORD *)Current + 27) = 0LL;
                ExReleasePushLockExclusiveEx((char *)Current + 208, 0LL);
                KeLeaveCriticalRegion();
              }
              ObfDereferenceObject(Object);
              if ( v49 && _InterlockedExchangeAdd64((volatile signed __int64 *)v49 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
                ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v49 + 2), v49);
              DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v50, v30);
              if ( v52 )
              {
                if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
                  McTemplateK0q_EtwWriteTransfer(v31, &EventProfilerExit, v32, v50);
              }
              return (unsigned int)v26;
            }
            v47 = WdLogNewEntry5_WdWarning(v19, v18, v20);
          }
          *(_QWORD *)(v47 + 24) = v16;
          *(_QWORD *)(v47 + 32) = v15;
          WdLogEvent5_WdWarning(v47);
          COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v67);
          if ( v54[0] )
            DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v54);
          if ( !v49 )
            goto LABEL_60;
        }
        if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v49 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
          ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v49 + 2), v49);
LABEL_60:
        DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v50, v44);
        if ( v52 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
          McTemplateK0q_EtwWriteTransfer(v45, &EventProfilerExit, v46, v50);
        return (unsigned int)v15;
      }
      v41 = WdLogNewEntry5_WdError(v12, v11);
      *(_QWORD *)(v41 + 24) = LODWORD(Handle[1]);
      *(_QWORD *)(v41 + 32) = -1073741811LL;
      WdLogEvent5_WdError(v41);
      if ( v49 && _InterlockedExchangeAdd64((volatile signed __int64 *)v49 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
        ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v49 + 2), v49);
    }
  }
  else
  {
    v36 = WdLogNewEntry5_WdError(v8, v7);
    *(_QWORD *)(v36 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v36);
  }
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v50, v37);
  if ( v52 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v42, &EventProfilerExit, v43, v50);
  return 3221225485LL;
}
