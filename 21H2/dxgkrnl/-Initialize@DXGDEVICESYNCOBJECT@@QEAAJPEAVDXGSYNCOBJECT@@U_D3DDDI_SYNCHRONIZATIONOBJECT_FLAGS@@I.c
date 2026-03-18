/*
 * XREFs of ?Initialize@DXGDEVICESYNCOBJECT@@QEAAJPEAVDXGSYNCOBJECT@@U_D3DDDI_SYNCHRONIZATIONOBJECT_FLAGS@@I@Z @ 0x1C018654C
 * Callers:
 *     ?Open@DXGSYNCOBJECT@@QEAAJPEAVADAPTER_RENDER@@PEAVDXGDEVICE@@PEAPEAVDXGDEVICESYNCOBJECT@@PEAIPEAPEAXPEA_KIPEAPEAVDXGADAPTERSYNCOBJECT@@_NU_D3DDDI_SYNCHRONIZATIONOBJECT_FLAGS@@@Z @ 0x1C01988F8 (-Open@DXGSYNCOBJECT@@QEAAJPEAVADAPTER_RENDER@@PEAVDXGDEVICE@@PEAPEAVDXGDEVICESYNCOBJECT@@PEAIPEA.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ?GetMonitoredFenceStorage@DXGSYNCOBJECT@@QEAAPEAUVIDMM_MONITORED_FENCE_STORAGE@@XZ @ 0x1C000C188 (-GetMonitoredFenceStorage@DXGSYNCOBJECT@@QEAAPEAUVIDMM_MONITORED_FENCE_STORAGE@@XZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C000C3F8 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1C000CD40 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x1C000E350 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C000E420 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000F574 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C000FABC (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C002B284 (McTemplateK0q_EtwWriteTransfer.c)
 *     _guard_dispatch_icall_nop @ 0x1C002CCC0 (_guard_dispatch_icall_nop.c)
 *     ?FindAdapterObject@DXGSYNCOBJECTCA@@QEAAPEAVDXGADAPTERSYNCOBJECTCA@@PEAVADAPTER_RENDER@@@Z @ 0x1C0059A28 (-FindAdapterObject@DXGSYNCOBJECTCA@@QEAAPEAVDXGADAPTERSYNCOBJECTCA@@PEAVADAPTER_RENDER@@@Z.c)
 *     ?GetCurrent@DXGTHREAD@@SAPEAV1@XZ @ 0x1C017D000 (-GetCurrent@DXGTHREAD@@SAPEAV1@XZ.c)
 *     ?AllocHandle@HMGRTABLE@@QEAAIPEAXW4_HMGRENTRY_TYPE@@IH@Z @ 0x1C0195A00 (-AllocHandle@HMGRTABLE@@QEAAIPEAXW4_HMGRENTRY_TYPE@@IH@Z.c)
 */

__int64 __fastcall DXGDEVICESYNCOBJECT::Initialize(
        DXGDEVICESYNCOBJECT *this,
        struct DXGSYNCOBJECT *a2,
        struct _D3DDDI_SYNCHRONIZATIONOBJECT_FLAGS a3,
        __int64 a4)
{
  int v6; // r15d
  __int64 v8; // r8
  __int64 v9; // rcx
  __int64 v10; // rcx
  __int64 v11; // rsi
  __int64 v12; // r14
  int v13; // eax
  int v14; // esi
  __int64 v15; // rbx
  struct VIDMM_MONITORED_FENCE_STORAGE *MonitoredFenceStorage; // rax
  __int64 v17; // rbx
  int v18; // eax
  __int64 v19; // r9
  __int64 v20; // rcx
  __int64 v21; // rbx
  __int64 v22; // rax
  __int64 CurrentProcess; // rax
  __int64 ProcessDxgProcess; // rax
  __int64 v25; // rbx
  __int64 v26; // rsi
  __int64 v27; // rbx
  __int64 v28; // rcx
  __int64 v29; // r8
  unsigned int v30; // eax
  unsigned int v31; // edx
  __int64 v32; // rax
  __int64 v33; // r9
  int v34; // r8d
  __int64 v35; // rcx
  int v37; // r9d
  struct DXGTHREAD *Current; // rax
  DXGFASTMUTEX *v39; // [rsp+50h] [rbp-30h] BYREF
  char v40; // [rsp+58h] [rbp-28h]
  char v41[8]; // [rsp+60h] [rbp-20h] BYREF
  __int64 v42; // [rsp+68h] [rbp-18h]
  int v43; // [rsp+70h] [rbp-10h]

  v6 = a4;
  v8 = *(_QWORD *)(*((_QWORD *)this + 2) + 16LL);
  v9 = *(_QWORD *)(v8 + 16);
  if ( KeGetCurrentThread() != *(struct _KTHREAD **)(v9 + 184)
    && !ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(v9 + 168)) )
  {
    WdLogSingleEntry1(1LL, 161LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"GetDevice()->GetRenderCore()->IsCoreResourceSharedOwner()",
      161LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  *((struct _D3DDDI_SYNCHRONIZATIONOBJECT_FLAGS *)this + 18) = a3;
  *((_QWORD *)this + 4) = a2;
  _InterlockedAdd((volatile signed __int32 *)a2 + 6, 1u);
  *((_BYTE *)this + 92) |= 1u;
  if ( (*((_DWORD *)a2 + 71) & 2) == 0 )
  {
    v10 = *((_QWORD *)this + 2);
    v11 = *((_QWORD *)this + 4);
    v12 = *(_QWORD *)(*(_QWORD *)(v10 + 16) + 648LL);
    v13 = *(_DWORD *)(v11 + 200);
    if ( v13 != 5 && v13 != 6 )
    {
      WdLogSingleEntry1(1LL, 353LL);
      DxgkLogInternalTriageEvent(
        0LL,
        262146,
        -1,
        (__int64)L"GetSyncObjectType() == D3DDDI_MONITORED_FENCE || GetSyncObjectType() == D3DDDI_PERIODIC_MONITORED_FENCE",
        353LL,
        0LL,
        0LL,
        0LL,
        0LL);
      v10 = *((_QWORD *)this + 2);
    }
    v14 = (*(__int64 (__fastcall **)(_QWORD, __int64, char *))(*(_QWORD *)(v12 + 8) + 944LL))(
            *(_QWORD *)(*(_QWORD *)(v10 + 16) + 656LL),
            v11 + 128,
            (char *)this + 56);
    if ( v14 < 0 )
      return (unsigned int)v14;
    if ( *(_BYTE *)&a3.0 >= 0 )
    {
      v15 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 648LL);
      MonitoredFenceStorage = DXGSYNCOBJECT::GetMonitoredFenceStorage(*((DXGSYNCOBJECT **)this + 4));
      v14 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, struct VIDMM_MONITORED_FENCE_STORAGE *, char *, int))(*(_QWORD *)(v15 + 8) + 952LL))(
              *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 656LL),
              *(_QWORD *)(*((_QWORD *)this + 2) + 760LL),
              MonitoredFenceStorage,
              (char *)this + 48,
              v6);
      if ( v14 < 0 )
        return (unsigned int)v14;
    }
    v17 = *((_QWORD *)this + 4);
    if ( (unsigned int)(*(_DWORD *)(v17 + 200) - 5) > 1 )
    {
      WdLogSingleEntry1(1LL, 353LL);
      DxgkLogInternalTriageEvent(
        0LL,
        262146,
        -1,
        (__int64)L"GetSyncObjectType() == D3DDDI_MONITORED_FENCE || GetSyncObjectType() == D3DDDI_PERIODIC_MONITORED_FENCE",
        353LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    *((_QWORD *)this + 8) = *(_QWORD *)(v17 + 136);
    v18 = *((_DWORD *)this + 18);
    if ( (v18 & 0x10) == 0 && (v18 & 0x40) == 0 )
    {
      DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)&v39, (struct DXGFASTMUTEX *const)(*((_QWORD *)this + 4) + 32LL), 0);
      if ( v40 )
        WdLogSingleEntry5(0LL, 275LL, 4LL, &v39, 0LL, 0LL);
      DXGFASTMUTEX::Acquire(v39);
      v20 = *((_QWORD *)this + 4);
      v40 = 1;
      v21 = (*(_DWORD *)(v20 + 204) & 4) != 0
          ? *((_QWORD *)DXGSYNCOBJECTCA::FindAdapterObject(
                          (DXGSYNCOBJECTCA *)v20,
                          *(struct ADAPTER_RENDER **)(*((_QWORD *)this + 2) + 16LL))
            + 4)
          : *(_QWORD *)(v20 + 328);
      if ( !v21 )
        goto LABEL_20;
      v22 = operator new[](0x18uLL, 0x4B677844u, 64LL, v19);
      *((_QWORD *)this + 3) = v22;
      if ( !v22 )
      {
        v14 = -1073741801;
        if ( v40 )
          DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)&v39);
        return (unsigned int)v14;
      }
      *(_QWORD *)(v22 + 16) = v21;
      (*(void (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 624LL)
                                                         + 8LL)
                                             + 680LL))(
        *(_QWORD *)(*((_QWORD *)this + 2) + 768LL),
        *((_QWORD *)this + 3));
      if ( v40 )
      {
LABEL_20:
        v40 = 0;
        DXGFASTMUTEX::Release((struct _KTHREAD **)v39);
      }
    }
  }
  if ( (*((_BYTE *)this + 92) & 4) == 0 )
    return 0LL;
  CurrentProcess = PsGetCurrentProcess(v9, a2, v8, a4);
  ProcessDxgProcess = PsGetProcessDxgProcess(CurrentProcess);
  v25 = ProcessDxgProcess;
  if ( ProcessDxgProcess && (*(_DWORD *)(ProcessDxgProcess + 424) & 0x80) == 0
    || (Current = DXGTHREAD::GetCurrent()) == 0LL
    || (v26 = *((_QWORD *)Current + 3)) == 0 )
  {
    v26 = v25;
  }
  v42 = v26 + 248;
  if ( v26 != -248 && *(struct _KTHREAD **)(v26 + 256) == KeGetCurrentThread() )
  {
    WdLogSingleEntry1(1LL, 1425LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"bAllowAcquireRecursive || pPushLock == NULL || !m_pPushLock->IsExclusiveOwner()",
      1425LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  v27 = v42;
  KeEnterCriticalRegion();
  if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx(v27, 0LL) )
  {
    if ( bTracingEnabled )
    {
      v37 = *(_DWORD *)(v27 + 24);
      if ( v37 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
        McTemplateK0q_EtwWriteTransfer(v28, (const EVENT_DESCRIPTOR *)"g", v29, v37);
    }
    ExAcquirePushLockExclusiveEx(v27, 0LL);
  }
  *(_QWORD *)(v27 + 8) = KeGetCurrentThread();
  v43 = 2;
  v30 = HMGRTABLE::AllocHandle(v26 + 280, this, 11LL, 0LL, 0);
  *((_DWORD *)this + 10) = v30;
  v31 = v30;
  if ( v30 )
  {
    v32 = (v30 >> 6) & 0xFFFFFF;
    if ( (unsigned int)v32 < *(_DWORD *)(v26 + 296) )
    {
      v33 = *(_QWORD *)(v26 + 280);
      v34 = *(_DWORD *)(v33 + 16 * v32 + 8);
      if ( ((v31 >> 25) & 0x60) == (*(_BYTE *)(v33 + 16 * v32 + 8) & 0x60) && (v34 & 0x2000) == 0 && (v34 & 0x1F) != 0 )
        *(_DWORD *)(v33 + 16 * (((unsigned __int64)v31 >> 6) & 0xFFFFFF) + 8) |= 0x2000u;
    }
    if ( v43 == 1 )
    {
      v43 = 0;
      ExReleasePushLockSharedEx(v42, 0LL);
      goto LABEL_38;
    }
    if ( v43 == 2 )
    {
      v35 = v42;
      v43 = 0;
      *(_QWORD *)(v42 + 8) = 0LL;
      ExReleasePushLockExclusiveEx(v35, 0LL);
LABEL_38:
      KeLeaveCriticalRegion();
    }
    return 0LL;
  }
  v14 = -1073741801;
  WdLogSingleEntry2(6LL, this, -1073741801LL);
  DxgkLogInternalTriageEvent(
    0LL,
    262145,
    -1,
    (__int64)L"pSyncObject 0x%I64x: Fail to allocate per process handle, returning 0x%I64x",
    (__int64)this,
    -1073741801LL,
    0LL,
    0LL,
    0LL);
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v41);
  return (unsigned int)v14;
}
