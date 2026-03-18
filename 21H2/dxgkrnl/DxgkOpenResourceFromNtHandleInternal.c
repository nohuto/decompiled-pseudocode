/*
 * XREFs of DxgkOpenResourceFromNtHandleInternal @ 0x1C01EA090
 * Callers:
 *     DxgkOpenResourceFromNtHandle @ 0x1C01EA070 (DxgkOpenResourceFromNtHandle.c)
 *     ?VmBusOpenResource@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C03710F0 (-VmBusOpenResource@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ?Release@DXGSYNCOBJECTLOCK@@QEAAXXZ @ 0x1C0009A8C (-Release@DXGSYNCOBJECTLOCK@@QEAAXXZ.c)
 *     ?AcquireShared@DXGSYNCOBJECTLOCK@@QEAAXXZ @ 0x1C0009B5C (-AcquireShared@DXGSYNCOBJECTLOCK@@QEAAXXZ.c)
 *     ??0DXGSYNCOBJECTLOCK@@QEAA@QEAVDXGGLOBAL@@_N@Z @ 0x1C0009BB0 (--0DXGSYNCOBJECTLOCK@@QEAA@QEAVDXGGLOBAL@@_N@Z.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C000B780 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ @ 0x1C000BBD0 (-DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C000D9B8 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C000EE00 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOPUSHLOCKFASTSHARED@@QEAA@AEAVDXGPUSHLOCKFAST@@_N@Z @ 0x1C002A224 (--0DXGAUTOPUSHLOCKFASTSHARED@@QEAA@AEAVDXGPUSHLOCKFAST@@_N@Z.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C002B284 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0186AA0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?Open@DXGSYNCOBJECT@@QEAAJPEAVADAPTER_RENDER@@PEAVDXGDEVICE@@PEAPEAVDXGDEVICESYNCOBJECT@@PEAIPEAPEAXPEA_KIPEAPEAVDXGADAPTERSYNCOBJECT@@_NU_D3DDDI_SYNCHRONIZATIONOBJECT_FLAGS@@@Z @ 0x1C01988F8 (-Open@DXGSYNCOBJECT@@QEAAJPEAVADAPTER_RENDER@@PEAVDXGDEVICE@@PEAPEAVDXGDEVICESYNCOBJECT@@PEAIPEA.c)
 *     ?DestroySyncObject@DXGGLOBAL@@QEAAXPEAVDXGSYNCOBJECT@@I@Z @ 0x1C019A7B8 (-DestroySyncObject@DXGGLOBAL@@QEAAXPEAVDXGSYNCOBJECT@@I@Z.c)
 *     ??$OpenResourceFromGlobalHandleOrNtObject@U_D3DKMT_OPENRESOURCEFROMNTHANDLE@@@@YAJPEAU_D3DKMT_OPENRESOURCEFROMNTHANDLE@@IPEAU_DXGSHAREDALLOCOBJECT@@H@Z @ 0x1C019FB3C (--$OpenResourceFromGlobalHandleOrNtObject@U_D3DKMT_OPENRESOURCEFROMNTHANDLE@@@@YAJPEAU_D3DKMT_OP.c)
 *     ?DestroyLocal@DXGKEYEDMUTEX@@SAJI@Z @ 0x1C033F7C8 (-DestroyLocal@DXGKEYEDMUTEX@@SAJI@Z.c)
 *     ?Open@DXGKEYEDMUTEX@@QEAAJPEAIPEAXI_N@Z @ 0x1C03402D4 (-Open@DXGKEYEDMUTEX@@QEAAJPEAIPEAXI_N@Z.c)
 */

__int64 __fastcall DxgkOpenResourceFromNtHandleInternal(ULONG64 a1, __int64 a2, __int64 a3)
{
  unsigned int v3; // esi
  KPROCESSOR_MODE v5; // r14
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  struct DXGPROCESS *Current; // r12
  ULONG64 v11; // rax
  BOOL v12; // r13d
  HANDLE v13; // r12
  NTSTATUS v14; // eax
  int v15; // r14d
  PVOID v16; // rsi
  DXGKEYEDMUTEX *v17; // rcx
  _DWORD *v18; // rdx
  _DWORD *v19; // rdx
  __int64 v20; // rax
  __int64 v21; // rdx
  unsigned __int64 v22; // rdi
  unsigned __int64 v23; // rdi
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v27; // r14
  struct DXGGLOBAL *Global; // rax
  __int64 v29; // rax
  unsigned int v30; // edx
  __int64 v31; // rcx
  __int64 v32; // r8
  __int64 v33; // rcx
  __int64 v34; // r8
  struct DXGGLOBAL *v35; // rax
  __int64 v36; // rax
  __int64 v37; // r10
  __int64 v38; // rdi
  unsigned int v39; // edi
  PERESOURCE *v40; // rax
  unsigned int v41; // [rsp+60h] [rbp-F8h] BYREF
  int v42; // [rsp+68h] [rbp-F0h] BYREF
  __int64 v43; // [rsp+70h] [rbp-E8h]
  char v44; // [rsp+78h] [rbp-E0h]
  __int64 v45; // [rsp+80h] [rbp-D8h] BYREF
  char v46; // [rsp+88h] [rbp-D0h]
  PVOID Object; // [rsp+90h] [rbp-C8h] BYREF
  struct _OBJECT_HANDLE_INFORMATION HandleInformation; // [rsp+98h] [rbp-C0h] BYREF
  PVOID v49; // [rsp+A0h] [rbp-B8h]
  struct DXGPROCESS *v50; // [rsp+A8h] [rbp-B0h]
  HANDLE Handle[2]; // [rsp+B0h] [rbp-A8h]
  __int128 v52; // [rsp+C0h] [rbp-98h]
  __int128 v53; // [rsp+D0h] [rbp-88h]
  __int128 v54; // [rsp+E0h] [rbp-78h]
  __int128 v55; // [rsp+F0h] [rbp-68h]
  void *v56[2]; // [rsp+100h] [rbp-58h]
  unsigned int v57[18]; // [rsp+110h] [rbp-48h]
  KPROCESSOR_MODE v59; // [rsp+170h] [rbp+18h]
  unsigned int v60; // [rsp+178h] [rbp+20h] BYREF

  v3 = a2;
  v42 = -1;
  v43 = 0LL;
  if ( (qword_1C012F870 & 2) != 0 )
  {
    v44 = 1;
    v42 = 2076;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(a1, &EventProfilerEnter, a3, 2076);
  }
  else
  {
    v44 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v42, 2076);
  v5 = (unsigned __int8)PsGetCurrentThreadPreviousMode() == 1;
  v59 = v5;
  HandleInformation = 0LL;
  Current = DXGPROCESS::GetCurrent(v7, v6, v8, v9);
  v50 = Current;
  if ( !Current )
  {
    WdLogSingleEntry1(3LL, 11692LL);
LABEL_47:
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v42);
    if ( v44 && (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v31, &EventProfilerExit, v32, v42);
    return 3221225485LL;
  }
  if ( v5 )
  {
    v11 = a1;
    if ( a1 >= MmUserProbeAddress )
      v11 = MmUserProbeAddress;
    *(_OWORD *)Handle = *(_OWORD *)v11;
    v52 = *(_OWORD *)(v11 + 16);
    v53 = *(_OWORD *)(v11 + 32);
    v54 = *(_OWORD *)(v11 + 48);
    v55 = *(_OWORD *)(v11 + 64);
    *(_OWORD *)v56 = *(_OWORD *)(v11 + 80);
    *(_QWORD *)v57 = *(_QWORD *)(v11 + 96);
  }
  else
  {
    *(_OWORD *)Handle = *(_OWORD *)a1;
    *(_OWORD *)v56 = *(_OWORD *)(a1 + 80);
    *(_QWORD *)v57 = *(_QWORD *)(a1 + 96);
  }
  v12 = 0;
  if ( (*((_DWORD *)Current + 106) & 0x10) != 0 )
  {
    v27 = *((_QWORD *)DXGGLOBAL_GetGlobal() + 4);
    Global = DXGGLOBAL_GetGlobal();
    DXGAUTOPUSHLOCKFASTSHARED::DXGAUTOPUSHLOCKFASTSHARED(
      (DXGAUTOPUSHLOCKFASTSHARED *)&v45,
      (struct DXGGLOBAL *)((char *)Global + 40));
    v29 = (v3 >> 6) & 0xFFFFFF;
    if ( (unsigned int)v29 < *(_DWORD *)(v27 + 16) )
    {
      v30 = *(_DWORD *)(*(_QWORD *)v27 + 16 * v29 + 8);
      if ( v3 >> 30 == ((v30 >> 5) & 3) && (v30 & 0x2000) == 0 && (v30 & 0x1F) != 0 )
      {
        if ( (v30 & 0x1F) == 4 )
        {
          v16 = *(PVOID *)(*(_QWORD *)v27 + 16LL * (unsigned int)v29);
          goto LABEL_44;
        }
        WdLogSingleEntry1(2LL, 267LL);
        DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Handle type mismatch", 267LL, 0LL, 0LL, 0LL, 0LL);
      }
    }
    v16 = 0LL;
LABEL_44:
    v49 = v16;
    if ( v16 )
    {
      if ( v46 )
      {
        ExReleasePushLockSharedEx(v45, 0LL);
        KeLeaveCriticalRegion();
      }
      goto LABEL_12;
    }
    WdLogSingleEntry1(3LL, a2);
    if ( v46 )
    {
      ExReleasePushLockSharedEx(v45, 0LL);
      KeLeaveCriticalRegion();
    }
    goto LABEL_47;
  }
  Object = 0LL;
  v13 = Handle[1];
  v14 = ObReferenceObjectByHandle(
          Handle[1],
          0x20000u,
          g_pDxgkSharedAllocationObjectType,
          v5,
          &Object,
          &HandleInformation);
  v15 = v14;
  v16 = Object;
  v49 = Object;
  if ( v14 != -1073741788 )
  {
    if ( v14 < 0 )
    {
      WdLogSingleEntry2(3LL, v13, v14);
LABEL_31:
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v42);
      if ( v44 )
      {
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
          McTemplateK0q_EtwWriteTransfer(v24, &EventProfilerExit, v25, v42);
      }
      return (unsigned int)v15;
    }
    v12 = (HandleInformation.GrantedAccess & 1) == 0;
    Current = v50;
LABEL_12:
    v60 = 0;
    v41 = 0;
    v17 = (DXGKEYEDMUTEX *)*((_QWORD *)v16 + 3);
    if ( !v17 || (v15 = DXGKEYEDMUTEX::Open(v17, &v60, v56[1], v57[0], 1), v15 >= 0) )
    {
      if ( *((_QWORD *)v16 + 4) )
      {
        v35 = DXGGLOBAL_GetGlobal();
        DXGSYNCOBJECTLOCK::DXGSYNCOBJECTLOCK((DXGSYNCOBJECTLOCK *)&v45, v35, 0);
        DXGSYNCOBJECTLOCK::AcquireShared((DXGSYNCOBJECTLOCK *)&v45);
        v15 = DXGSYNCOBJECT::Open(
                *((DXGSYNCOBJECT **)v16 + 4),
                0LL,
                0LL,
                0LL,
                &v41,
                0LL,
                0LL,
                0,
                0LL,
                0,
                DXGSYNCOBJECT::FlagsDefault);
        if ( v15 < 0 )
        {
          if ( v46 )
            DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)&v45);
          goto LABEL_28;
        }
        if ( v46 )
          DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)&v45);
      }
      if ( v59 )
      {
        v18 = (_DWORD *)(a1 + 84);
        if ( a1 + 84 >= MmUserProbeAddress )
          v18 = (_DWORD *)MmUserProbeAddress;
        *v18 = v60;
        v19 = (_DWORD *)(a1 + 100);
        if ( a1 + 100 >= MmUserProbeAddress )
          v19 = (_DWORD *)MmUserProbeAddress;
        *v19 = v41;
      }
      else
      {
        *(_DWORD *)(a1 + 84) = v60;
        *(_DWORD *)(a1 + 100) = v41;
      }
      v15 = OpenResourceFromGlobalHandleOrNtObject<_D3DKMT_OPENRESOURCEFROMNTHANDLE>(
              a1,
              0LL,
              (struct _EX_RUNDOWN_REF *)v16,
              v12);
      if ( v15 >= 0 )
      {
        DXGPUSHLOCK::AcquireExclusive((struct DXGPROCESS *)((char *)Current + 248));
        v20 = (v41 >> 6) & 0xFFFFFF;
        if ( (unsigned int)v20 < *((_DWORD *)Current + 74) )
        {
          v21 = *((_QWORD *)Current + 35);
          if ( ((v41 >> 25) & 0x60) == (*(_BYTE *)(v21 + 16 * v20 + 8) & 0x60)
            && (*(_DWORD *)(v21 + 16 * v20 + 8) & 0x1F) != 0 )
          {
            v22 = 2 * (((unsigned __int64)v41 >> 6) & 0xFFFFFF);
            if ( (*(_DWORD *)(v21 + 16 * (((unsigned __int64)v41 >> 6) & 0xFFFFFF) + 8) & 0x2000) == 0 )
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
              v21 = *((_QWORD *)Current + 35);
            }
            *(_DWORD *)(v21 + 8 * v22 + 8) &= ~0x2000u;
          }
        }
        *((_QWORD *)Current + 32) = 0LL;
        ExReleasePushLockExclusiveEx((char *)Current + 248, 0LL);
        KeLeaveCriticalRegion();
        v23 = v60;
        if ( v60 )
        {
          DXGPUSHLOCK::AcquireExclusive((struct DXGPROCESS *)((char *)Current + 248));
          v36 = ((unsigned int)v23 >> 6) & 0xFFFFFF;
          if ( (unsigned int)v36 < *((_DWORD *)Current + 74) )
          {
            v37 = *((_QWORD *)Current + 35);
            if ( (((unsigned int)v23 >> 25) & 0x60) == (*(_BYTE *)(v37 + 16 * v36 + 8) & 0x60)
              && (*(_DWORD *)(v37 + 16 * v36 + 8) & 0x1F) != 0 )
            {
              v38 = 2 * ((v23 >> 6) & 0xFFFFFF);
              if ( (*(_DWORD *)(v37 + 8 * v38 + 8) & 0x2000) == 0 )
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
                v37 = *((_QWORD *)Current + 35);
              }
              *(_DWORD *)(v37 + 8 * v38 + 8) &= ~0x2000u;
            }
          }
          *((_QWORD *)Current + 32) = 0LL;
          ExReleasePushLockExclusiveEx((char *)Current + 248, 0LL);
          KeLeaveCriticalRegion();
        }
      }
    }
LABEL_28:
    if ( v15 < 0 )
    {
      if ( v60 )
        DXGKEYEDMUTEX::DestroyLocal(v60);
      v39 = v41;
      if ( v41 )
      {
        v40 = (PERESOURCE *)DXGGLOBAL_GetGlobal();
        DXGGLOBAL::DestroySyncObject(v40, *((struct DXGSYNCOBJECT **)v16 + 4), v39);
      }
    }
    if ( (*((_DWORD *)v50 + 106) & 0x10) == 0 )
      ObfDereferenceObject(v16);
    goto LABEL_31;
  }
  WdLogSingleEntry2(3LL, v13, -1073741788LL);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v42);
  if ( v44 )
  {
    LOBYTE(v33) = BYTE1(Microsoft_Windows_DxgKrnlEnableBits);
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v33, &EventProfilerExit, v34, v42);
  }
  return 3221225508LL;
}
