/*
 * XREFs of ?DxgkOpenSyncObjectFromNtHandle2Impl@@YAJPEAU_D3DKMT_OPENSYNCOBJECTFROMNTHANDLE2@@E@Z @ 0x1C00D7EA8
 * Callers:
 *     DxgkOpenSyncObjectFromNtHandle2Internal @ 0x1C00D7E90 (DxgkOpenSyncObjectFromNtHandle2Internal.c)
 *     DxgkOpenSyncObjectFromNtHandle2 @ 0x1C02753F0 (DxgkOpenSyncObjectFromNtHandle2.c)
 * Callees:
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C0008348 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000A650 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C000A788 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ @ 0x1C000B200 (-Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C000D778 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C000D7CC (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJPEAD@Z @ 0x1C000E890 (-AcquireShared@COREDEVICEACCESS@@QEAAJPEAD@Z.c)
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x1C000E994 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     ?Release@DXGSYNCOBJECTLOCK@@QEAAXXZ @ 0x1C000EB44 (-Release@DXGSYNCOBJECTLOCK@@QEAAXXZ.c)
 *     ?AcquireShared@DXGSYNCOBJECTLOCK@@QEAAXXZ @ 0x1C000EC34 (-AcquireShared@DXGSYNCOBJECTLOCK@@QEAAXXZ.c)
 *     ??0DXGSYNCOBJECTLOCK@@QEAA@QEAVDXGGLOBAL@@_N@Z @ 0x1C000EC88 (--0DXGSYNCOBJECTLOCK@@QEAA@QEAVDXGGLOBAL@@_N@Z.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C000F00C (--0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     __security_check_cookie @ 0x1C0024300 (__security_check_cookie.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C0024408 (McTemplateK0q_EtwWriteTransfer.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x1C0024550 (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     McTemplateK0ppp_EtwWriteTransfer @ 0x1C0045254 (McTemplateK0ppp_EtwWriteTransfer.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C00DB790 (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?Open@DXGSYNCOBJECT@@QEAAJPEAVADAPTER_RENDER@@PEAVDXGDEVICE@@PEAPEAVDXGDEVICESYNCOBJECT@@PEAIPEAPEAXPEA_KIPEAPEAVDXGADAPTERSYNCOBJECT@@_NU_D3DDDI_SYNCHRONIZATIONOBJECT_FLAGS@@@Z @ 0x1C0112870 (-Open@DXGSYNCOBJECT@@QEAAJPEAVADAPTER_RENDER@@PEAVDXGDEVICE@@PEAPEAVDXGDEVICESYNCOBJECT@@PEAIPEA.c)
 *     ?DxgkDestroySynchronizationObjectImpl@@YAJPEBU_D3DKMT_DESTROYSYNCHRONIZATIONOBJECT@@H@Z @ 0x1C0118FCC (-DxgkDestroySynchronizationObjectImpl@@YAJPEBU_D3DKMT_DESTROYSYNCHRONIZATIONOBJECT@@H@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0119460 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

__int64 __fastcall DxgkOpenSyncObjectFromNtHandle2Impl(
        struct _D3DKMT_OPENSYNCOBJECTFROMNTHANDLE2 *a1,
        char a2,
        __int64 a3)
{
  struct _D3DKMT_OPENSYNCOBJECTFROMNTHANDLE2 *v4; // rsi
  __int64 v5; // rdx
  ULONG64 v6; // rcx
  __int64 v7; // r8
  struct DXGPROCESS *Current; // r15
  __int64 v9; // rdx
  __int64 v10; // rcx
  struct ADAPTER_RENDER **v11; // r13
  __int64 v12; // r9
  __int64 v13; // rbx
  HANDLE v14; // r12
  NTSTATUS v15; // eax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  unsigned int v19; // ebx
  PERESOURCE *Global; // rax
  __int64 v21; // rdx
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  int v25; // r12d
  __int64 v26; // r9
  __int64 v27; // rax
  __int64 v28; // rdx
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // r8
  unsigned __int64 v33; // rbx
  __int64 v34; // rax
  __int64 v35; // rax
  __int64 v36; // rdx
  ULONG64 v37; // rax
  __int64 v38; // rax
  __int64 v39; // rax
  __int64 v40; // rax
  __int64 v41; // rcx
  __int64 v42; // r8
  __int64 v43; // rdx
  __int64 v44; // rcx
  __int64 v45; // r8
  __int64 v46; // rax
  struct DXGDEVICE *v48; // [rsp+68h] [rbp-1A0h] BYREF
  int v49; // [rsp+70h] [rbp-198h] BYREF
  __int64 v50; // [rsp+78h] [rbp-190h]
  char v51; // [rsp+80h] [rbp-188h]
  struct DXGADAPTERSYNCOBJECT *v52; // [rsp+88h] [rbp-180h] BYREF
  _QWORD v53[2]; // [rsp+90h] [rbp-178h] BYREF
  struct _D3DKMT_DESTROYSYNCHRONIZATIONOBJECT v54[2]; // [rsp+A0h] [rbp-168h]
  PVOID Object; // [rsp+A8h] [rbp-160h] BYREF
  HANDLE Handle[2]; // [rsp+B0h] [rbp-158h]
  void *v57[2]; // [rsp+C0h] [rbp-148h] BYREF
  unsigned int v58[4]; // [rsp+D0h] [rbp-138h] BYREF
  __int128 v59; // [rsp+E0h] [rbp-128h]
  __int128 v60; // [rsp+F0h] [rbp-118h]
  UINT64 v61; // [rsp+100h] [rbp-108h]
  struct DXGDEVICE *v62; // [rsp+110h] [rbp-F8h] BYREF
  struct _OBJECT_HANDLE_INFORMATION HandleInformation; // [rsp+118h] [rbp-F0h] BYREF
  _BYTE v64[8]; // [rsp+120h] [rbp-E8h] BYREF
  char v65; // [rsp+128h] [rbp-E0h]
  _BYTE v66[160]; // [rsp+130h] [rbp-D8h] BYREF

  v4 = a1;
  *(_QWORD *)&v54[0].hSyncObject = a1;
  v49 = -1;
  v50 = 0LL;
  if ( (qword_1C00AE9B0 & 2) != 0 )
  {
    v51 = 1;
    v49 = 2086;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)a1, &EventProfilerEnter, a3, 2086);
  }
  else
  {
    v51 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v49, 2086LL);
  Current = DXGPROCESS::GetCurrent();
  if ( Current )
  {
    if ( a2 )
    {
      v6 = MmUserProbeAddress;
      v37 = (ULONG64)v4;
      if ( (unsigned __int64)v4 >= MmUserProbeAddress )
        v37 = MmUserProbeAddress;
      *(_OWORD *)Handle = *(_OWORD *)v37;
      *(_OWORD *)v57 = *(_OWORD *)(v37 + 16);
      *(_OWORD *)v58 = *(_OWORD *)(v37 + 32);
      v59 = *(_OWORD *)(v37 + 48);
      v60 = *(_OWORD *)(v37 + 64);
      v61 = *(_QWORD *)(v37 + 80);
    }
    else
    {
      *(_OWORD *)Handle = *(_OWORD *)&v4->hNtHandle;
      *(_OWORD *)v57 = *(_OWORD *)&v4->hSyncObject;
      *(_OWORD *)v58 = *(_OWORD *)&v4->Reserved[1];
      v59 = *(_OWORD *)&v4->Reserved[3];
      v60 = *(_OWORD *)&v4->Reserved[5];
      v61 = v4->Reserved[7];
    }
    LODWORD(v57[0]) = 0;
    if ( (HIDWORD(Handle[1]) & 0x7FFFFF00) != 0 )
    {
      v38 = WdLogNewEntry5_WdWarning(v6, v5, v7);
      *(_QWORD *)(v38 + 24) = 1587LL;
      WdLogEvent5_WdWarning(v38);
    }
    else
    {
      if ( (BYTE4(Handle[1]) & 0x10) != 0 || (BYTE4(Handle[1]) & 0x20) != 0 )
      {
        v39 = WdLogNewEntry5_WdWarning(v6, v5, v7);
        *(_QWORD *)(v39 + 24) = 1594LL;
        WdLogEvent5_WdWarning(v39);
      }
      v62 = 0LL;
      DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE(
        (DXGDEVICEBYHANDLE *)&v48,
        LODWORD(Handle[1]),
        (struct _KTHREAD **)Current,
        &v62);
      v11 = (struct ADAPTER_RENDER **)v62;
      if ( v62 )
      {
        DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v53, v62);
        COREDEVICEACCESS::COREDEVICEACCESS((__int64)v66, (__int64)v11, 0, v12, 0);
        LODWORD(v13) = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v66, 0LL);
        if ( (int)v13 < 0 )
        {
          COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v66);
          if ( v53[0] )
            DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v53);
          if ( !v48 )
            goto LABEL_60;
        }
        else
        {
          HandleInformation = 0LL;
          Object = 0LL;
          v14 = Handle[0];
          v15 = ObReferenceObjectByHandle(
                  Handle[0],
                  0x20000u,
                  g_pDxgkSharedSyncObjectType,
                  1,
                  &Object,
                  &HandleInformation);
          v13 = v15;
          if ( v15 == -1073741788 )
          {
            v46 = WdLogNewEntry5_WdWarning(v17, v16, v18);
            v13 = -1073741788LL;
          }
          else
          {
            if ( v15 >= 0 )
            {
              v19 = HIDWORD(Handle[1]) & 0xFFFFFFCF | ~(8 * LOBYTE(HandleInformation.GrantedAccess)) & 0x10 | ~(32 * LOBYTE(HandleInformation.GrantedAccess)) & 0x20;
              v52 = 0LL;
              Global = (PERESOURCE *)DXGGLOBAL::GetGlobal(v17, v16);
              DXGSYNCOBJECTLOCK::DXGSYNCOBJECTLOCK((DXGSYNCOBJECTLOCK *)v64, Global, 0);
              DXGSYNCOBJECTLOCK::AcquireShared((DXGSYNCOBJECTLOCK *)v64, v21);
              v25 = DXGSYNCOBJECT::Open(
                      *(DXGSYNCOBJECT **)Object,
                      v11[2],
                      (struct DXGDEVICE *)v11,
                      0LL,
                      (unsigned int *)v57,
                      &v57[1],
                      (unsigned __int64 *)v58,
                      v58[2],
                      &v52,
                      1,
                      (struct _D3DDDI_SYNCHRONIZATIONOBJECT_FLAGS)v19);
              if ( v25 < 0 )
              {
                if ( v65 )
                  DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)v64, v22);
                COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v66);
                if ( v53[0] )
                  DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v53);
              }
              else
              {
                if ( v65 )
                  DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)v64, v22);
                if ( bTracingEnabled )
                {
                  v26 = v52 ? *((_QWORD *)v52 + 4) : 0LL;
                  if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
                    McTemplateK0ppp_EtwWriteTransfer(v23, &EventOpenSyncObject, v24, v26, LODWORD(v57[0]), v11);
                }
                COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v66);
                if ( v53[0] )
                  DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v53);
                if ( a2 && (unsigned __int64)v4 >= MmUserProbeAddress )
                  v4 = (struct _D3DKMT_OPENSYNCOBJECTFROMNTHANDLE2 *)MmUserProbeAddress;
                *(_OWORD *)&v4->hNtHandle = *(_OWORD *)Handle;
                *(_OWORD *)&v4->hSyncObject = *(_OWORD *)v57;
                *(_OWORD *)&v4->Reserved[1] = *(_OWORD *)v58;
                *(_OWORD *)&v4->Reserved[3] = v59;
                *(_OWORD *)&v4->Reserved[5] = v60;
                v4->Reserved[7] = v61;
                DXGPUSHLOCK::AcquireExclusive((struct DXGPROCESS *)((char *)Current + 208));
                v27 = (LODWORD(v57[0]) >> 6) & 0xFFFFFF;
                if ( (unsigned int)v27 < *((_DWORD *)Current + 64) )
                {
                  v28 = *((_QWORD *)Current + 30);
                  if ( ((LODWORD(v57[0]) >> 25) & 0x60) == (*(_BYTE *)(v28 + 16 * v27 + 8) & 0x60)
                    && (*(_DWORD *)(v28 + 16 * v27 + 8) & 0x1F) != 0 )
                  {
                    v33 = 2 * (((unsigned __int64)v57[0] >> 6) & 0xFFFFFF);
                    if ( (*(_DWORD *)(v28 + 16 * (((unsigned __int64)v57[0] >> 6) & 0xFFFFFF) + 8) & 0x2000) == 0 )
                    {
                      v34 = WdLogNewEntry5_WdAssertion((LODWORD(v57[0]) >> 25) & 0x60, v28);
                      *(_QWORD *)(v34 + 24) = 217LL;
                      WdLogEvent5_WdAssertion(v34);
                      v28 = *((_QWORD *)Current + 30);
                    }
                    *(_DWORD *)(v28 + 8 * v33 + 8) &= ~0x2000u;
                  }
                }
                *((_QWORD *)Current + 27) = 0LL;
                ExReleasePushLockExclusiveEx((char *)Current + 208, 0LL);
                KeLeaveCriticalRegion();
              }
              ObfDereferenceObject(Object);
              if ( v48 && _InterlockedExchangeAdd64((volatile signed __int64 *)v48 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
                ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v48 + 2), v48);
              DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v49, v29);
              if ( v51 )
              {
                if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
                  McTemplateK0q_EtwWriteTransfer(v30, &EventProfilerExit, v31, v49);
              }
              return (unsigned int)v25;
            }
            v46 = WdLogNewEntry5_WdWarning(v17, v16, v18);
          }
          *(_QWORD *)(v46 + 24) = v14;
          *(_QWORD *)(v46 + 32) = v13;
          WdLogEvent5_WdWarning(v46);
          COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v66);
          if ( v53[0] )
            DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v53);
          if ( !v48 )
            goto LABEL_60;
        }
        if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v48 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
          ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v48 + 2), v48);
LABEL_60:
        DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v49, v43);
        if ( v51 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
          McTemplateK0q_EtwWriteTransfer(v44, &EventProfilerExit, v45, v49);
        return (unsigned int)v13;
      }
      v40 = WdLogNewEntry5_WdError(v10, v9);
      *(_QWORD *)(v40 + 24) = LODWORD(Handle[1]);
      *(_QWORD *)(v40 + 32) = -1073741811LL;
      WdLogEvent5_WdError(v40);
      if ( v48 && _InterlockedExchangeAdd64((volatile signed __int64 *)v48 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
        ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v48 + 2), v48);
    }
  }
  else
  {
    v35 = WdLogNewEntry5_WdError(v6, v5);
    *(_QWORD *)(v35 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v35);
  }
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v49, v36);
  if ( v51 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v41, &EventProfilerExit, v42, v49);
  return 3221225485LL;
}
