/*
 * XREFs of DxgkOpenResourceFromNtHandle @ 0x1C011B2E0
 * Callers:
 *     ?VmBusOpenResource@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C0243ED0 (-VmBusOpenResource@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 * Callees:
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0002B1C (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0002CE8 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00041C0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?Release@DXGSYNCOBJECTLOCK@@QEAAXXZ @ 0x1C0004370 (-Release@DXGSYNCOBJECTLOCK@@QEAAXXZ.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C0006318 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?AcquireShared@DXGSYNCOBJECTLOCK@@QEAAXXZ @ 0x1C00070D0 (-AcquireShared@DXGSYNCOBJECTLOCK@@QEAAXXZ.c)
 *     ??0DXGSYNCOBJECTLOCK@@QEAA@QEAVDXGGLOBAL@@_N@Z @ 0x1C0007124 (--0DXGSYNCOBJECTLOCK@@QEAA@QEAVDXGGLOBAL@@_N@Z.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C0024B10 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?DestroySyncObject@DXGGLOBAL@@QEAAXPEAVDXGSYNCOBJECT@@I_N@Z @ 0x1C00DCB58 (-DestroySyncObject@DXGGLOBAL@@QEAAXPEAVDXGSYNCOBJECT@@I_N@Z.c)
 *     ?Open@DXGSYNCOBJECT@@QEAAJPEAVADAPTER_RENDER@@PEAVDXGDEVICE@@PEAPEAVDXGDEVICESYNCOBJECT@@PEAIPEAPEAXPEA_KIPEAPEAVDXGADAPTERSYNCOBJECT@@_NU_D3DDDI_SYNCHRONIZATIONOBJECT_FLAGS@@@Z @ 0x1C010F530 (-Open@DXGSYNCOBJECT@@QEAAJPEAVADAPTER_RENDER@@PEAVDXGDEVICE@@PEAPEAVDXGDEVICESYNCOBJECT@@PEAIPEA.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0115560 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ??$OpenResourceFromGlobalHandleOrNtObject@U_D3DKMT_OPENRESOURCEFROMNTHANDLE@@@@YAJPEAU_D3DKMT_OPENRESOURCEFROMNTHANDLE@@IPEAU_DXGSHAREDALLOCOBJECT@@H@Z @ 0x1C011CD14 (--$OpenResourceFromGlobalHandleOrNtObject@U_D3DKMT_OPENRESOURCEFROMNTHANDLE@@@@YAJPEAU_D3DKMT_OP.c)
 *     ?DestroyLocal@DXGKEYEDMUTEX@@SAJI@Z @ 0x1C02908F4 (-DestroyLocal@DXGKEYEDMUTEX@@SAJI@Z.c)
 *     ?Open@DXGKEYEDMUTEX@@QEAAJPEAIPEAXI_N@Z @ 0x1C029126C (-Open@DXGKEYEDMUTEX@@QEAAJPEAIPEAXI_N@Z.c)
 */

__int64 __fastcall DxgkOpenResourceFromNtHandle(ULONG64 a1, __int64 a2, __int64 a3)
{
  char CurrentThreadPreviousMode; // al
  KPROCESSOR_MODE v5; // r12
  ULONG64 v6; // rax
  HANDLE v7; // r14
  NTSTATUS v8; // eax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // rsi
  BOOL v13; // r14d
  DXGSYNCOBJECT **v14; // r15
  DXGKEYEDMUTEX *v15; // rcx
  _DWORD *v16; // rdx
  _DWORD *v17; // rdx
  struct DXGPROCESS *Current; // r14
  unsigned int v19; // ecx
  __int64 v20; // rdx
  int v21; // r8d
  unsigned __int64 v22; // rdi
  __int64 v23; // rax
  unsigned __int64 v24; // rdi
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v29; // rax
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // r8
  __int64 v33; // rax
  PERESOURCE *Global; // rax
  __int64 v35; // rdx
  struct DXGPROCESS *v36; // r13
  __int64 v37; // rcx
  __int64 v38; // rdx
  int v39; // r8d
  __int64 v40; // rcx
  __int64 v41; // rdi
  __int64 v42; // rax
  unsigned int v43; // edi
  PERESOURCE *v44; // rax
  int v45; // [rsp+60h] [rbp-D8h] BYREF
  __int64 v46; // [rsp+68h] [rbp-D0h]
  char v47; // [rsp+70h] [rbp-C8h]
  struct _OBJECT_HANDLE_INFORMATION HandleInformation; // [rsp+78h] [rbp-C0h] BYREF
  _BYTE v49[8]; // [rsp+80h] [rbp-B8h] BYREF
  char v50; // [rsp+88h] [rbp-B0h]
  HANDLE Handle[2]; // [rsp+90h] [rbp-A8h]
  __int128 v52; // [rsp+A0h] [rbp-98h]
  __int128 v53; // [rsp+B0h] [rbp-88h]
  __int128 v54; // [rsp+C0h] [rbp-78h]
  __int128 v55; // [rsp+D0h] [rbp-68h]
  void *v56[2]; // [rsp+E0h] [rbp-58h]
  unsigned int v57[18]; // [rsp+F0h] [rbp-48h]
  unsigned int v58; // [rsp+148h] [rbp+10h] BYREF
  unsigned int v59; // [rsp+150h] [rbp+18h] BYREF
  PVOID Object; // [rsp+158h] [rbp+20h] BYREF

  v45 = -1;
  v46 = 0LL;
  if ( (qword_1C00B19B0 & 2) != 0 )
  {
    v47 = 1;
    v45 = 2076;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer(a1, &EventProfilerEnter, a3, 2076);
  }
  else
  {
    v47 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v45, 2076LL);
  CurrentThreadPreviousMode = PsGetCurrentThreadPreviousMode();
  v5 = CurrentThreadPreviousMode == 1;
  HandleInformation = 0LL;
  if ( CurrentThreadPreviousMode == 1 )
  {
    v6 = a1;
    if ( a1 >= MmUserProbeAddress )
      v6 = MmUserProbeAddress;
    *(_OWORD *)Handle = *(_OWORD *)v6;
    v52 = *(_OWORD *)(v6 + 16);
    v53 = *(_OWORD *)(v6 + 32);
    v54 = *(_OWORD *)(v6 + 48);
    v55 = *(_OWORD *)(v6 + 64);
    *(_OWORD *)v56 = *(_OWORD *)(v6 + 80);
    *(_QWORD *)v57 = *(_QWORD *)(v6 + 96);
  }
  else
  {
    *(_OWORD *)Handle = *(_OWORD *)a1;
    *(_OWORD *)v56 = *(_OWORD *)(a1 + 80);
    *(_QWORD *)v57 = *(_QWORD *)(a1 + 96);
  }
  Object = 0LL;
  v7 = Handle[1];
  v8 = ObReferenceObjectByHandle(
         Handle[1],
         0x20000u,
         g_pDxgkSharedAllocationObjectType,
         v5,
         &Object,
         &HandleInformation);
  v12 = v8;
  if ( v8 != -1073741788 )
  {
    if ( v8 < 0 )
    {
      v33 = WdLogNewEntry5_WdWarning(v10, v9, v11);
      *(_QWORD *)(v33 + 24) = v7;
      *(_QWORD *)(v33 + 32) = v12;
      WdLogEvent5_WdWarning(v33);
LABEL_27:
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v45, v25);
      if ( v47 )
      {
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
          McTemplateK0q_EtwWriteTransfer(v26, &EventProfilerExit, v27, v45);
      }
      return (unsigned int)v12;
    }
    v13 = (HandleInformation.GrantedAccess & 1) == 0;
    v58 = 0;
    v59 = 0;
    v14 = (DXGSYNCOBJECT **)Object;
    v15 = (DXGKEYEDMUTEX *)*((_QWORD *)Object + 3);
    if ( !v15 || (LODWORD(v12) = DXGKEYEDMUTEX::Open(v15, &v58, v56[1], v57[0], 1), (int)v12 >= 0) )
    {
      if ( v14[4] )
      {
        Global = (PERESOURCE *)DXGGLOBAL::GetGlobal((__int64)v15, v9);
        DXGSYNCOBJECTLOCK::DXGSYNCOBJECTLOCK((DXGSYNCOBJECTLOCK *)v49, Global, 0);
        DXGSYNCOBJECTLOCK::AcquireShared((DXGSYNCOBJECTLOCK *)v49, v35);
        LODWORD(v12) = DXGSYNCOBJECT::Open(
                         v14[4],
                         0LL,
                         0LL,
                         0LL,
                         &v59,
                         0LL,
                         0LL,
                         0,
                         0LL,
                         0,
                         DXGSYNCOBJECT::FlagsDefault);
        if ( (int)v12 < 0 )
        {
          if ( v50 )
            DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)v49);
          goto LABEL_25;
        }
        if ( v50 )
          DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)v49);
      }
      if ( v5 )
      {
        v16 = (_DWORD *)(a1 + 84);
        if ( a1 + 84 >= MmUserProbeAddress )
          v16 = (_DWORD *)MmUserProbeAddress;
        *v16 = v58;
        v17 = (_DWORD *)(a1 + 100);
        if ( a1 + 100 >= MmUserProbeAddress )
          v17 = (_DWORD *)MmUserProbeAddress;
        *v17 = v59;
      }
      else
      {
        *(_DWORD *)(a1 + 84) = v58;
        *(_DWORD *)(a1 + 100) = v59;
      }
      LODWORD(v12) = OpenResourceFromGlobalHandleOrNtObject<_D3DKMT_OPENRESOURCEFROMNTHANDLE>(a1, 0LL, v14, v13);
      if ( (int)v12 >= 0 )
      {
        Current = DXGPROCESS::GetCurrent((__int64)v15, v9);
        DXGPUSHLOCK::AcquireExclusive((struct DXGPROCESS *)((char *)Current + 208));
        v19 = (v59 >> 6) & 0xFFFFFF;
        if ( v19 < *((_DWORD *)Current + 64) )
        {
          v20 = *((_QWORD *)Current + 30);
          v21 = *(_DWORD *)(v20 + 16LL * v19 + 8);
          if ( ((v59 >> 25) & 0x60) == (v21 & 0x60) && (v21 & 0x1F) != 0 )
          {
            v22 = 2 * (((unsigned __int64)v59 >> 6) & 0xFFFFFF);
            if ( (*(_DWORD *)(v20 + 16 * (((unsigned __int64)v59 >> 6) & 0xFFFFFF) + 8) & 0x2000) == 0 )
            {
              v23 = WdLogNewEntry5_WdAssertion((v59 >> 25) & 0x60, v20);
              *(_QWORD *)(v23 + 24) = 222LL;
              WdLogEvent5_WdAssertion(v23);
              v20 = *((_QWORD *)Current + 30);
            }
            *(_DWORD *)(v20 + 8 * v22 + 8) &= ~0x2000u;
          }
        }
        *((_QWORD *)Current + 27) = 0LL;
        ExReleasePushLockExclusiveEx((char *)Current + 208, 0LL);
        KeLeaveCriticalRegion();
        v24 = v58;
        if ( v58 )
        {
          v36 = DXGPROCESS::GetCurrent((__int64)v15, v9);
          DXGPUSHLOCK::AcquireExclusive((struct DXGPROCESS *)((char *)v36 + 208));
          v37 = ((unsigned int)v24 >> 6) & 0xFFFFFF;
          if ( (unsigned int)v37 < *((_DWORD *)v36 + 64) )
          {
            v38 = *((_QWORD *)v36 + 30);
            v39 = *(_DWORD *)(v38 + 16 * v37 + 8);
            v40 = ((unsigned int)v24 >> 25) & 0x60;
            if ( (((unsigned int)v24 >> 25) & 0x60) == (v39 & 0x60) && (v39 & 0x1F) != 0 )
            {
              v41 = 2 * ((v24 >> 6) & 0xFFFFFF);
              if ( (*(_DWORD *)(v38 + 8 * v41 + 8) & 0x2000) == 0 )
              {
                v42 = WdLogNewEntry5_WdAssertion(v40, v38);
                *(_QWORD *)(v42 + 24) = 222LL;
                WdLogEvent5_WdAssertion(v42);
                v38 = *((_QWORD *)v36 + 30);
              }
              *(_DWORD *)(v38 + 8 * v41 + 8) &= ~0x2000u;
            }
          }
          *((_QWORD *)v36 + 27) = 0LL;
          ExReleasePushLockExclusiveEx((char *)v36 + 208, 0LL);
          KeLeaveCriticalRegion();
        }
      }
    }
LABEL_25:
    if ( (int)v12 < 0 )
    {
      if ( v58 )
        DXGKEYEDMUTEX::DestroyLocal(v58);
      v43 = v59;
      if ( v59 )
      {
        v44 = (PERESOURCE *)DXGGLOBAL::GetGlobal((__int64)v15, v9);
        DXGGLOBAL::DestroySyncObject(v44, v14[4], v43, 0);
      }
    }
    ObfDereferenceObject(v14);
    goto LABEL_27;
  }
  v29 = WdLogNewEntry5_WdWarning(v10, v9, v11);
  *(_QWORD *)(v29 + 24) = v7;
  *(_QWORD *)(v29 + 32) = -1073741788LL;
  WdLogEvent5_WdWarning(v29);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v45, v30);
  if ( v47 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v31, &EventProfilerExit, v32, v45);
  return 3221225508LL;
}
