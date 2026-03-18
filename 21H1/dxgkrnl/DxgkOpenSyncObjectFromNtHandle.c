/*
 * XREFs of DxgkOpenSyncObjectFromNtHandle @ 0x1C0274F50
 * Callers:
 *     <none>
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000A650 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C000A788 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C000D778 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C000D7CC (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?Release@DXGSYNCOBJECTLOCK@@QEAAXXZ @ 0x1C000EB44 (-Release@DXGSYNCOBJECTLOCK@@QEAAXXZ.c)
 *     ?AcquireShared@DXGSYNCOBJECTLOCK@@QEAAXXZ @ 0x1C000EC34 (-AcquireShared@DXGSYNCOBJECTLOCK@@QEAAXXZ.c)
 *     ??0DXGSYNCOBJECTLOCK@@QEAA@QEAVDXGGLOBAL@@_N@Z @ 0x1C000EC88 (--0DXGSYNCOBJECTLOCK@@QEAA@QEAVDXGGLOBAL@@_N@Z.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C0024408 (McTemplateK0q_EtwWriteTransfer.c)
 *     McTemplateK0ppp_EtwWriteTransfer @ 0x1C0045254 (McTemplateK0ppp_EtwWriteTransfer.c)
 *     ?Open@DXGSYNCOBJECT@@QEAAJPEAVADAPTER_RENDER@@PEAVDXGDEVICE@@PEAPEAVDXGDEVICESYNCOBJECT@@PEAIPEAPEAXPEA_KIPEAPEAVDXGADAPTERSYNCOBJECT@@_NU_D3DDDI_SYNCHRONIZATIONOBJECT_FLAGS@@@Z @ 0x1C0112870 (-Open@DXGSYNCOBJECT@@QEAAJPEAVADAPTER_RENDER@@PEAVDXGDEVICE@@PEAPEAVDXGDEVICESYNCOBJECT@@PEAIPEA.c)
 *     ?DxgkDestroySynchronizationObjectImpl@@YAJPEBU_D3DKMT_DESTROYSYNCHRONIZATIONOBJECT@@H@Z @ 0x1C0118FCC (-DxgkDestroySynchronizationObjectImpl@@YAJPEBU_D3DKMT_DESTROYSYNCHRONIZATIONOBJECT@@H@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0119460 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

__int64 __fastcall DxgkOpenSyncObjectFromNtHandle(ULONG64 a1, __int64 a2, __int64 a3)
{
  _OWORD *v4; // rax
  HANDLE v5; // r14
  NTSTATUS v6; // eax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // rdi
  __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v16; // rax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  PERESOURCE *Global; // rax
  __int64 v21; // rdx
  __int64 v22; // rdx
  PVOID v23; // r12
  __int64 v24; // rcx
  __int64 v25; // r8
  int v26; // r14d
  __int64 v27; // r9
  struct _D3DKMT_DESTROYSYNCHRONIZATIONOBJECT *v28; // rdx
  struct DXGPROCESS *Current; // r15
  D3DKMT_HANDLE v30; // ecx
  __int64 v31; // rdx
  int v32; // r9d
  unsigned __int64 v33; // rdi
  __int64 v34; // rax
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // r8
  struct _OBJECT_HANDLE_INFORMATION HandleInformation; // [rsp+60h] [rbp-68h] BYREF
  HANDLE Handle[2]; // [rsp+68h] [rbp-60h] BYREF
  int v40; // [rsp+78h] [rbp-50h] BYREF
  __int64 v41; // [rsp+80h] [rbp-48h]
  char v42; // [rsp+88h] [rbp-40h]
  struct _D3DKMT_DESTROYSYNCHRONIZATIONOBJECT v43; // [rsp+D8h] [rbp+10h] BYREF
  PVOID Object; // [rsp+E0h] [rbp+18h] BYREF
  struct DXGADAPTERSYNCOBJECT *v45; // [rsp+E8h] [rbp+20h] BYREF

  v40 = -1;
  v41 = 0LL;
  if ( (qword_1C00AE9B0 & 2) != 0 )
  {
    v42 = 1;
    v40 = 2086;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer(a1, &EventProfilerEnter, a3, 2086);
  }
  else
  {
    v42 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v40, 2086LL);
  HandleInformation = 0LL;
  v4 = (_OWORD *)a1;
  if ( a1 >= MmUserProbeAddress )
    v4 = (_OWORD *)MmUserProbeAddress;
  *(_OWORD *)Handle = *v4;
  Object = 0LL;
  v5 = Handle[0];
  v6 = ObReferenceObjectByHandle(Handle[0], 0x20000u, g_pDxgkSharedSyncObjectType, 1, &Object, &HandleInformation);
  v10 = v6;
  if ( v6 == -1073741788 )
  {
    v11 = WdLogNewEntry5_WdWarning(v8, v7, v9);
    *(_QWORD *)(v11 + 24) = v5;
    *(_QWORD *)(v11 + 32) = -1073741788LL;
    WdLogEvent5_WdWarning(v11);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v40, v12);
    if ( v42 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v13, &EventProfilerExit, v14, v40);
    }
    return 3221225508LL;
  }
  if ( v6 < 0 )
  {
    v16 = WdLogNewEntry5_WdWarning(v8, v7, v9);
    *(_QWORD *)(v16 + 24) = v5;
    *(_QWORD *)(v16 + 32) = v10;
    WdLogEvent5_WdWarning(v16);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v40, v17);
    if ( v42 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v18, &EventProfilerExit, v19, v40);
    return (unsigned int)v10;
  }
  v43.hSyncObject = 0;
  v45 = 0LL;
  Global = (PERESOURCE *)DXGGLOBAL::GetGlobal(v8, v7);
  DXGSYNCOBJECTLOCK::DXGSYNCOBJECTLOCK((DXGSYNCOBJECTLOCK *)Handle, Global, 0);
  DXGSYNCOBJECTLOCK::AcquireShared((DXGSYNCOBJECTLOCK *)Handle, v21);
  v23 = Object;
  if ( (unsigned int)(*(_DWORD *)(*(_QWORD *)Object + 192LL) - 5) <= 1 )
  {
    v26 = -1073741811;
LABEL_37:
    if ( LOBYTE(Handle[1]) )
      DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)Handle, v22);
    goto LABEL_39;
  }
  v26 = DXGSYNCOBJECT::Open(
          *(DXGSYNCOBJECT **)Object,
          0LL,
          0LL,
          0LL,
          &v43.hSyncObject,
          0LL,
          0LL,
          0,
          &v45,
          0,
          DXGSYNCOBJECT::FlagsDefault);
  if ( v26 < 0 )
    goto LABEL_37;
  if ( bTracingEnabled )
  {
    v27 = v45 ? *((_QWORD *)v45 + 4) : 0LL;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
      McTemplateK0ppp_EtwWriteTransfer(v24, &EventOpenSyncObject, v25, v27, v43.hSyncObject, 0LL);
  }
  if ( LOBYTE(Handle[1]) )
    DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)Handle, v22);
  v28 = (struct _D3DKMT_DESTROYSYNCHRONIZATIONOBJECT *)(a1 + 8);
  if ( a1 + 8 >= MmUserProbeAddress )
    v28 = (struct _D3DKMT_DESTROYSYNCHRONIZATIONOBJECT *)MmUserProbeAddress;
  v28->hSyncObject = v43.hSyncObject;
  Current = DXGPROCESS::GetCurrent(MmUserProbeAddress, (__int64)v28);
  DXGPUSHLOCK::AcquireExclusive((struct DXGPROCESS *)((char *)Current + 208));
  v30 = (v43.hSyncObject >> 6) & 0xFFFFFF;
  if ( v30 < *((_DWORD *)Current + 64) )
  {
    v31 = *((_QWORD *)Current + 30);
    v32 = *(_DWORD *)(v31 + 16LL * v30 + 8);
    if ( ((v43.hSyncObject >> 25) & 0x60) == (v32 & 0x60) && (v32 & 0x1F) != 0 )
    {
      v33 = 2 * (((unsigned __int64)v43.hSyncObject >> 6) & 0xFFFFFF);
      if ( (*(_DWORD *)(v31 + 16 * (((unsigned __int64)v43.hSyncObject >> 6) & 0xFFFFFF) + 8) & 0x2000) == 0 )
      {
        v34 = WdLogNewEntry5_WdAssertion((v43.hSyncObject >> 25) & 0x60, v31);
        *(_QWORD *)(v34 + 24) = 217LL;
        WdLogEvent5_WdAssertion(v34);
        v31 = *((_QWORD *)Current + 30);
      }
      *(_DWORD *)(v31 + 8 * v33 + 8) &= ~0x2000u;
    }
  }
  *((_QWORD *)Current + 27) = 0LL;
  ExReleasePushLockExclusiveEx((char *)Current + 208, 0LL);
  KeLeaveCriticalRegion();
LABEL_39:
  ObfDereferenceObject(v23);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v40, v35);
  if ( v42 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v36, &EventProfilerExit, v37, v40);
  return (unsigned int)v26;
}
