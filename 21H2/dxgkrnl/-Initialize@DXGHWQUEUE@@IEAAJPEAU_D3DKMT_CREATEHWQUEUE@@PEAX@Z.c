/*
 * XREFs of ?Initialize@DXGHWQUEUE@@IEAAJPEAU_D3DKMT_CREATEHWQUEUE@@PEAX@Z @ 0x1C030EDA0
 * Callers:
 *     ?CreateHwQueue@DXGCONTEXT@@QEAAJPEAU_D3DKMT_CREATEHWQUEUE@@PEAXPEAPEAVDXGHWQUEUE@@@Z @ 0x1C030DAEC (-CreateHwQueue@DXGCONTEXT@@QEAAJPEAU_D3DKMT_CREATEHWQUEUE@@PEAXPEAPEAVDXGHWQUEUE@@@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ?Release@DXGSYNCOBJECTLOCK@@QEAAXXZ @ 0x1C0009A8C (-Release@DXGSYNCOBJECTLOCK@@QEAAXXZ.c)
 *     ?AllocHandleSafe@DXGPROCESS@@QEAAIPEAXW4_HMGRENTRY_TYPE@@@Z @ 0x1C0009AD4 (-AllocHandleSafe@DXGPROCESS@@QEAAIPEAXW4_HMGRENTRY_TYPE@@@Z.c)
 *     ?AcquireShared@DXGSYNCOBJECTLOCK@@QEAAXXZ @ 0x1C0009B5C (-AcquireShared@DXGSYNCOBJECTLOCK@@QEAAXXZ.c)
 *     ??0DXGSYNCOBJECTLOCK@@QEAA@QEAVDXGGLOBAL@@_N@Z @ 0x1C0009BB0 (--0DXGSYNCOBJECTLOCK@@QEAA@QEAVDXGGLOBAL@@_N@Z.c)
 *     ?DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ @ 0x1C000BBD0 (-DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ.c)
 *     ?GetMonitoredFenceStorage@DXGSYNCOBJECT@@QEAAPEAUVIDMM_MONITORED_FENCE_STORAGE@@XZ @ 0x1C000C188 (-GetMonitoredFenceStorage@DXGSYNCOBJECT@@QEAAPEAUVIDMM_MONITORED_FENCE_STORAGE@@XZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C000C3F8 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C000EE00 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000F574 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000F5FC (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C002CCC0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C002CFC0 (memset.c)
 *     McTemplateK0ppp_EtwWriteTransfer @ 0x1C00541B0 (McTemplateK0ppp_EtwWriteTransfer.c)
 *     ?GetVidSchSyncObject@DXGSYNCOBJECT@@QEAAPEAU_VIDSCH_SYNC_OBJECT@@PEAVADAPTER_RENDER@@@Z @ 0x1C016A93C (-GetVidSchSyncObject@DXGSYNCOBJECT@@QEAAPEAU_VIDSCH_SYNC_OBJECT@@PEAVADAPTER_RENDER@@@Z.c)
 *     ?CreateSyncObject@DXGGLOBAL@@QEAAJPEAVADAPTER_RENDER@@PEAVDXGDEVICE@@IPEAU_D3DDDI_SYNCHRONIZATIONOBJECTINFO2@@U_VIDSCH_SYNC_OBJECT_CLIENTHINT@@_NPEAVDXGPAGINGQUEUE@@PEAPEAVDXGSYNCOBJECT@@PEAPEAVDXGDEVICESYNCOBJECT@@PEAIPEAPEAVDXGADAPTERSYNCOBJECT@@@Z @ 0x1C0199294 (-CreateSyncObject@DXGGLOBAL@@QEAAJPEAVADAPTER_RENDER@@PEAVDXGDEVICE@@IPEAU_D3DDDI_SYNCHRONIZATIO.c)
 *     ?DdiCreateHwQueue@ADAPTER_RENDER@@QEAAJPEAXPEAU_DXGKARG_CREATEHWQUEUE@@@Z @ 0x1C02C6D8C (-DdiCreateHwQueue@ADAPTER_RENDER@@QEAAJPEAXPEAU_DXGKARG_CREATEHWQUEUE@@@Z.c)
 *     ?InitializeOnHost@DXGHWQUEUE@@IEAAJPEAU_D3DKMT_CREATEHWQUEUE@@PEAX@Z @ 0x1C030F520 (-InitializeOnHost@DXGHWQUEUE@@IEAAJPEAU_D3DKMT_CREATEHWQUEUE@@PEAX@Z.c)
 *     ?CheckNoKmdAccessPrivateData@@YAJIPEAXI@Z @ 0x1C0317E84 (-CheckNoKmdAccessPrivateData@@YAJIPEAXI@Z.c)
 */

int __fastcall DXGHWQUEUE::Initialize(DXGHWQUEUE *this, struct _D3DKMT_CREATEHWQUEUE *a2, void *a3)
{
  __int64 v6; // rax
  int result; // eax
  struct DXGGLOBAL *Global; // rax
  struct DXGGLOBAL *v9; // rax
  __int64 v10; // rsi
  __int64 v11; // rax
  __int64 v12; // rdx
  unsigned __int64 v13; // rbx
  __int64 v14; // rdi
  __int64 v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rbx
  __int64 v18; // rax
  struct DXGGLOBAL *v19; // rax
  int SyncObject; // eax
  __int64 v21; // rsi
  __int64 v22; // r14
  D3DKMT_HANDLE v23; // r13d
  __int64 v24; // rax
  __int64 v25; // rdx
  unsigned __int64 v26; // rsi
  __int64 v27; // rdx
  UINT Value; // ecx
  UINT PrivateDriverDataSize; // eax
  struct VIDMM_MONITORED_FENCE_STORAGE *MonitoredFenceStorage; // rax
  __int64 v31; // rdx
  void *v32; // rcx
  int v33; // eax
  _QWORD *v34; // r14
  int v35; // eax
  struct _VIDSCH_SYNC_OBJECT *VidSchSyncObject; // rax
  struct _VIDSCH_SYNC_OBJECT *v37; // rax
  unsigned int v38; // eax
  __int64 v39; // r8
  __int64 v40; // [rsp+60h] [rbp-A0h] BYREF
  char v41; // [rsp+68h] [rbp-98h]
  _DXGKARG_CREATEHWQUEUE v42; // [rsp+70h] [rbp-90h] BYREF
  _QWORD v43[10]; // [rsp+A0h] [rbp-60h] BYREF
  _QWORD v44[16]; // [rsp+F0h] [rbp-10h] BYREF
  D3DKMT_HANDLE v45; // [rsp+180h] [rbp+80h] BYREF
  void *v46; // [rsp+190h] [rbp+90h]
  __int64 v47; // [rsp+198h] [rbp+98h]

  v46 = a3;
  memset(v44, 0, 0x50uLL);
  v6 = *((_QWORD *)this + 2);
  LODWORD(v44[0]) = 5;
  v45 = 0;
  if ( !*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v6 + 16) + 16LL) + 16LL) + 209LL)
    || (result = DXGHWQUEUE::InitializeOnHost(this, a2, a3), result >= 0) )
  {
    Global = DXGGLOBAL_GetGlobal();
    DXGSYNCOBJECTLOCK::DXGSYNCOBJECTLOCK((DXGSYNCOBJECTLOCK *)&v40, Global, 0);
    DXGSYNCOBJECTLOCK::AcquireShared((DXGSYNCOBJECTLOCK *)&v40);
    v9 = DXGGLOBAL_GetGlobal();
    v10 = (int)DXGGLOBAL::CreateSyncObject(
                 (__int64)v9,
                 *(struct ADAPTER_RENDER **)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 16LL),
                 *(struct DXGDEVICE **)(*((_QWORD *)this + 2) + 16LL),
                 (unsigned int)(1 << *(_DWORD *)(*((_QWORD *)this + 2) + 400LL)),
                 (__int64)v44,
                 3u,
                 0,
                 0LL,
                 0LL,
                 (struct DXGDEVICESYNCOBJECT **)this + 6,
                 &v45,
                 0LL);
    v11 = *((_QWORD *)this + 2);
    if ( (int)v10 < 0 )
    {
      v12 = *(_QWORD *)(v11 + 16);
LABEL_15:
      WdLogSingleEntry2(3LL, v12, v10);
LABEL_16:
      if ( v41 )
        DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)&v40);
      return v10;
    }
    if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v11 + 16) + 16LL) + 16LL) + 209LL) )
    {
      v13 = v45;
      *(_DWORD *)(*((_QWORD *)this + 6) + 44LL) = a2->hHwQueueProgressFence;
      a2->hHwQueueProgressFence = v13;
      v14 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 40LL);
      DXGPUSHLOCK::AcquireExclusive((DXGPUSHLOCK *)(v14 + 248));
      v15 = ((unsigned int)v13 >> 6) & 0xFFFFFF;
      if ( (unsigned int)v15 < *(_DWORD *)(v14 + 296) )
      {
        v16 = *(_QWORD *)(v14 + 280);
        if ( (((unsigned int)v13 >> 25) & 0x60) == (*(_BYTE *)(v16 + 16 * v15 + 8) & 0x60)
          && (*(_DWORD *)(v16 + 16 * v15 + 8) & 0x1F) != 0 )
        {
          v17 = 2 * ((v13 >> 6) & 0xFFFFFF);
          if ( (*(_DWORD *)(v16 + 8 * v17 + 8) & 0x2000) == 0 )
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
            v16 = *(_QWORD *)(v14 + 280);
          }
          *(_DWORD *)(v16 + 8 * v17 + 8) &= ~0x2000u;
        }
      }
      *(_QWORD *)(v14 + 256) = 0LL;
      ExReleasePushLockExclusiveEx(v14 + 248, 0LL);
      KeLeaveCriticalRegion();
      LODWORD(v10) = 0;
      goto LABEL_16;
    }
    memset(v43, 0, sizeof(v43));
    v18 = *((_QWORD *)this + 10);
    HIDWORD(v43[0]) |= 0x80u;
    v43[1] = v18;
    LODWORD(v43[0]) = 5;
    v19 = DXGGLOBAL_GetGlobal();
    SyncObject = DXGGLOBAL::CreateSyncObject(
                   (__int64)v19,
                   *(struct ADAPTER_RENDER **)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 16LL),
                   *(struct DXGDEVICE **)(*((_QWORD *)this + 2) + 16LL),
                   (unsigned int)(1 << *(_DWORD *)(*((_QWORD *)this + 2) + 400LL)),
                   (__int64)v43,
                   0x10u,
                   0,
                   0LL,
                   0LL,
                   (struct DXGDEVICESYNCOBJECT **)this + 9,
                   0LL,
                   0LL);
    v10 = SyncObject;
    if ( SyncObject < 0 )
    {
      v12 = *(_QWORD *)(*((_QWORD *)this + 2) + 16LL);
      goto LABEL_15;
    }
    if ( v41 )
      DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)&v40);
    v21 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 40LL);
    v47 = v21;
    v22 = v21 + 248;
    v40 = v21 + 248;
    DXGPUSHLOCK::AcquireExclusive((DXGPUSHLOCK *)(v21 + 248));
    v23 = v45;
    v24 = (v45 >> 6) & 0xFFFFFF;
    if ( (unsigned int)v24 < *(_DWORD *)(v21 + 296) )
    {
      v25 = *(_QWORD *)(v21 + 280);
      if ( ((v45 >> 25) & 0x60) == (*(_BYTE *)(v25 + 16 * v24 + 8) & 0x60)
        && (*(_DWORD *)(v25 + 16 * v24 + 8) & 0x1F) != 0 )
      {
        v26 = 2 * (((unsigned __int64)v45 >> 6) & 0xFFFFFF);
        if ( (*(_DWORD *)(v25 + 16 * (((unsigned __int64)v45 >> 6) & 0xFFFFFF) + 8) & 0x2000) == 0 )
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
          v22 = v40;
          v25 = *(_QWORD *)(v47 + 280);
        }
        *(_DWORD *)(v25 + 8 * v26 + 8) &= ~0x2000u;
      }
    }
    *(_QWORD *)(v22 + 8) = 0LL;
    ExReleasePushLockExclusiveEx(v22, 0LL);
    KeLeaveCriticalRegion();
    v27 = *((_QWORD *)this + 2);
    Value = a2->Flags.Value;
    v42.pPrivateDriverData = v46;
    PrivateDriverDataSize = a2->PrivateDriverDataSize;
    v42.hHwQueueProgressFence = v23;
    v42.PrivateDriverDataSize = PrivateDriverDataSize;
    *(_QWORD *)(&v42.hHwQueueProgressFence + 1) = 0LL;
    HIDWORD(v42.HwQueueProgressFenceCPUVirtualAddress) = 0;
    v42.hHwQueue = this;
    v42.Flags.Value = Value;
    if ( (*(_DWORD *)(v27 + 404) & 4) != 0 || *(_BYTE *)(*(_QWORD *)(v27 + 16) + 1866LL) )
      v42.Flags.Value = Value | 1;
    MonitoredFenceStorage = DXGSYNCOBJECT::GetMonitoredFenceStorage(*(DXGSYNCOBJECT **)(*((_QWORD *)this + 6) + 32LL));
    v31 = *((_QWORD *)this + 2);
    v32 = (void *)*((_QWORD *)MonitoredFenceStorage + 1);
    v42.HwQueueProgressFenceGPUVirtualAddress = v44[3];
    *((_QWORD *)this + 8) = v44[3];
    *((_QWORD *)this + 7) = v32;
    LODWORD(MonitoredFenceStorage) = a2->Flags.0;
    v42.HwQueueProgressFenceCPUVirtualAddress = v32;
    if ( ((unsigned __int8)MonitoredFenceStorage & 8) == 0 )
    {
      v33 = ADAPTER_RENDER::DdiCreateHwQueue(
              *(ADAPTER_RENDER **)(*(_QWORD *)(v31 + 16) + 16LL),
              *(void **)(v31 + 184),
              &v42);
      v10 = v33;
      if ( v33 < 0 )
      {
        if ( v33 != -1073741822 )
        {
          WdLogSingleEntry1(2LL, v33);
          DxgkLogInternalTriageEvent(
            0LL,
            0x40000,
            -1,
            (__int64)L"DdiCreateHwQueue() failed with status 0x%I64d",
            v10,
            0LL,
            0LL,
            0LL,
            0LL);
          return v10;
        }
        *((_QWORD *)this + 4) = 153LL;
      }
      else
      {
        *((_QWORD *)this + 4) = v42.hHwQueue;
      }
LABEL_38:
      v34 = (_QWORD *)((char *)this + 40);
      v35 = (*(__int64 (__fastcall **)(DXGHWQUEUE *, _QWORD, struct _D3DKMT_CREATEHWQUEUE *, char *))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 16LL) + 624LL) + 8LL) + 232LL))(
              this,
              *(_QWORD *)(*((_QWORD *)this + 2) + 280LL),
              a2,
              (char *)this + 40);
      LODWORD(v10) = v35;
      if ( v35 >= 0 )
      {
        DXGAUTOMUTEX::DXGAUTOMUTEX(
          (DXGAUTOMUTEX *)&v40,
          (struct DXGFASTMUTEX *const)(*(_QWORD *)(*((_QWORD *)this + 6) + 32LL) + 32LL),
          0);
        DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)&v40);
        VidSchSyncObject = DXGSYNCOBJECT::GetVidSchSyncObject(
                             *(DXGSYNCOBJECT **)(*((_QWORD *)this + 6) + 32LL),
                             *(struct ADAPTER_RENDER **)(*(_QWORD *)(*((_QWORD *)this + 6) + 16LL) + 16LL));
        (*(void (__fastcall **)(_QWORD, struct _VIDSCH_SYNC_OBJECT *, __int64))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 16LL) + 624LL)
                                                                                          + 8LL)
                                                                              + 272LL))(
          *v34,
          VidSchSyncObject,
          1LL);
        if ( v41 )
          DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)&v40);
        DXGAUTOMUTEX::DXGAUTOMUTEX(
          (DXGAUTOMUTEX *)&v40,
          (struct DXGFASTMUTEX *const)(*(_QWORD *)(*((_QWORD *)this + 9) + 32LL) + 32LL),
          0);
        DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)&v40);
        v37 = DXGSYNCOBJECT::GetVidSchSyncObject(
                *(DXGSYNCOBJECT **)(*((_QWORD *)this + 9) + 32LL),
                *(struct ADAPTER_RENDER **)(*(_QWORD *)(*((_QWORD *)this + 9) + 16LL) + 16LL));
        (*(void (__fastcall **)(_QWORD, struct _VIDSCH_SYNC_OBJECT *, __int64))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 16LL) + 624LL)
                                                                                          + 8LL)
                                                                              + 272LL))(
          *v34,
          v37,
          2LL);
        if ( v41 )
          DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)&v40);
        v38 = DXGPROCESS::AllocHandleSafe(
                *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 40LL),
                (__int64)this,
                0xFu);
        *((_DWORD *)this + 6) = v38;
        if ( v38 )
        {
          if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x400) != 0 )
            McTemplateK0ppp_EtwWriteTransfer(
              (REGHANDLE *)&DxgkControlGuid_Context,
              &EventCreateHwQueue,
              v39,
              *((_QWORD *)this + 2),
              v38,
              this);
        }
        else
        {
          LODWORD(v10) = -1073741801;
          WdLogSingleEntry2(3LL, this, -1073741801LL);
        }
      }
      else
      {
        WdLogSingleEntry2(3LL, *(_QWORD *)(*((_QWORD *)this + 2) + 16LL), v35);
      }
      return v10;
    }
    if ( (*(_DWORD *)(v31 + 404) & 0x20) == 0 )
    {
      WdLogSingleEntry1(2LL, 380LL);
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"The HW queue must specify NoKmdAccess flag",
        380LL,
        0LL,
        0LL,
        0LL,
        0LL);
      return -1073741811;
    }
    result = CheckNoKmdAccessPrivateData(v42.PrivateDriverDataSize, v42.pPrivateDriverData, 0xFF000005);
    if ( result >= 0 )
      goto LABEL_38;
  }
  return result;
}
