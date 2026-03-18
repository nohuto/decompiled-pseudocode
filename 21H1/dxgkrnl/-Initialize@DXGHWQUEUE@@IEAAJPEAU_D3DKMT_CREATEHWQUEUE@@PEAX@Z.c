/*
 * XREFs of ?Initialize@DXGHWQUEUE@@IEAAJPEAU_D3DKMT_CREATEHWQUEUE@@PEAX@Z @ 0x1C0269204
 * Callers:
 *     ?CreateHwQueue@DXGCONTEXT@@QEAAJPEAU_D3DKMT_CREATEHWQUEUE@@PEAXPEAPEAVDXGHWQUEUE@@@Z @ 0x1C02681AC (-CreateHwQueue@DXGCONTEXT@@QEAAJPEAU_D3DKMT_CREATEHWQUEUE@@PEAXPEAPEAVDXGHWQUEUE@@@Z.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000A650 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C000A788 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000CF20 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000D070 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C000DBC4 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?GetMonitoredFenceStorage@DXGSYNCOBJECT@@QEAAPEAUVIDMM_MONITORED_FENCE_STORAGE@@XZ @ 0x1C000DC14 (-GetMonitoredFenceStorage@DXGSYNCOBJECT@@QEAAPEAUVIDMM_MONITORED_FENCE_STORAGE@@XZ.c)
 *     ?Release@DXGSYNCOBJECTLOCK@@QEAAXXZ @ 0x1C000EB44 (-Release@DXGSYNCOBJECTLOCK@@QEAAXXZ.c)
 *     ?AcquireShared@DXGSYNCOBJECTLOCK@@QEAAXXZ @ 0x1C000EC34 (-AcquireShared@DXGSYNCOBJECTLOCK@@QEAAXXZ.c)
 *     ??0DXGSYNCOBJECTLOCK@@QEAA@QEAVDXGGLOBAL@@_N@Z @ 0x1C000EC88 (--0DXGSYNCOBJECTLOCK@@QEAA@QEAVDXGGLOBAL@@_N@Z.c)
 *     ?AllocHandleSafe@DXGPROCESS@@QEAAIPEAXW4_HMGRENTRY_TYPE@@@Z @ 0x1C000F100 (-AllocHandleSafe@DXGPROCESS@@QEAAIPEAXW4_HMGRENTRY_TYPE@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0026570 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0026840 (memset.c)
 *     McTemplateK0ppp_EtwWriteTransfer @ 0x1C0045254 (McTemplateK0ppp_EtwWriteTransfer.c)
 *     ?CreateSyncObject@DXGGLOBAL@@QEAAJPEAVADAPTER_RENDER@@PEAVDXGDEVICE@@IPEAU_D3DDDI_SYNCHRONIZATIONOBJECTINFO2@@U_VIDSCH_SYNC_OBJECT_CLIENTHINT@@_NPEAVDXGPAGINGQUEUE@@PEAPEAVDXGSYNCOBJECT@@PEAPEAVDXGDEVICESYNCOBJECT@@PEAIPEAPEAVDXGADAPTERSYNCOBJECT@@@Z @ 0x1C01120E0 (-CreateSyncObject@DXGGLOBAL@@QEAAJPEAVADAPTER_RENDER@@PEAVDXGDEVICE@@IPEAU_D3DDDI_SYNCHRONIZATIO.c)
 *     ?GetVidSchSyncObject@DXGSYNCOBJECT@@QEAAPEAU_VIDSCH_SYNC_OBJECT@@PEAVADAPTER_RENDER@@@Z @ 0x1C011BAB0 (-GetVidSchSyncObject@DXGSYNCOBJECT@@QEAAPEAU_VIDSCH_SYNC_OBJECT@@PEAVADAPTER_RENDER@@@Z.c)
 *     ?DdiCreateHwQueue@ADAPTER_RENDER@@QEAAJPEAXPEAU_DXGKARG_CREATEHWQUEUE@@@Z @ 0x1C0214A0C (-DdiCreateHwQueue@ADAPTER_RENDER@@QEAAJPEAXPEAU_DXGKARG_CREATEHWQUEUE@@@Z.c)
 *     ?InitializeOnHost@DXGHWQUEUE@@IEAAJPEAU_D3DKMT_CREATEHWQUEUE@@PEAX@Z @ 0x1C0269780 (-InitializeOnHost@DXGHWQUEUE@@IEAAJPEAU_D3DKMT_CREATEHWQUEUE@@PEAX@Z.c)
 */

int __fastcall DXGHWQUEUE::Initialize(struct DXGDEVICESYNCOBJECT **this, struct _D3DKMT_CREATEHWQUEUE *a2, void *a3)
{
  __int64 v7; // rdx
  __int64 v8; // rcx
  PERESOURCE *Global; // rax
  __int64 v10; // rdx
  struct DXGDEVICESYNCOBJECT *v11; // rax
  struct DXGDEVICE *v12; // rdi
  __int64 v13; // rcx
  unsigned int v14; // ebx
  struct ADAPTER_RENDER *v15; // rsi
  __int64 v16; // rdx
  struct DXGGLOBAL *v17; // rax
  int v18; // eax
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // rbx
  struct DXGDEVICESYNCOBJECT *v23; // rax
  struct DXGDEVICESYNCOBJECT *v24; // rax
  struct DXGDEVICE *v25; // rdi
  __int64 v26; // rcx
  unsigned int v27; // ebx
  struct ADAPTER_RENDER *v28; // rsi
  __int64 v29; // rdx
  struct DXGGLOBAL *v30; // rax
  int SyncObject; // eax
  __int64 v32; // rax
  __int64 v33; // rdx
  __int64 v34; // rdi
  D3DKMT_HANDLE v35; // esi
  __int64 v36; // rax
  __int64 v37; // rdx
  unsigned __int64 v38; // rbx
  __int64 v39; // rax
  UINT PrivateDriverDataSize; // eax
  __int64 v41; // rdx
  UINT Value; // ecx
  char *v43; // rsi
  void *v44; // rcx
  struct DXGDEVICESYNCOBJECT *v45; // rax
  int v46; // eax
  __int64 v47; // rdx
  HANDLE hHwQueue; // rcx
  _QWORD *v49; // rdi
  int v50; // eax
  __int64 v51; // rdx
  __int64 v52; // rcx
  __int64 v53; // r8
  __int64 v54; // rax
  __int64 v55; // rax
  struct _VIDSCH_SYNC_OBJECT *VidSchSyncObject; // rax
  __int64 v57; // rdx
  struct _VIDSCH_SYNC_OBJECT *v58; // rax
  __int64 v59; // rdx
  unsigned int v60; // eax
  __int64 v61; // rdx
  __int64 v62; // r8
  _BYTE v63[8]; // [rsp+68h] [rbp-A0h] BYREF
  __int64 v64; // [rsp+70h] [rbp-98h]
  _DXGKARG_CREATEHWQUEUE v65; // [rsp+78h] [rbp-90h] BYREF
  _QWORD v66[10]; // [rsp+A8h] [rbp-60h] BYREF
  _QWORD v67[10]; // [rsp+F8h] [rbp-10h] BYREF
  D3DKMT_HANDLE v68; // [rsp+178h] [rbp+70h] BYREF

  if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this[2] + 2) + 16LL) + 16LL) + 209LL) )
    return DXGHWQUEUE::InitializeOnHost((DXGHWQUEUE *)this, a2, a3);
  memset(v67, 0, sizeof(v67));
  v68 = 0;
  LODWORD(v67[0]) = 5;
  Global = (PERESOURCE *)DXGGLOBAL::GetGlobal(v8, v7);
  DXGSYNCOBJECTLOCK::DXGSYNCOBJECTLOCK((DXGSYNCOBJECTLOCK *)v63, Global, 0);
  DXGSYNCOBJECTLOCK::AcquireShared((DXGSYNCOBJECTLOCK *)v63, v10);
  v11 = this[2];
  v12 = (struct DXGDEVICE *)*((_QWORD *)v11 + 2);
  v13 = *((unsigned int *)v11 + 104);
  v14 = 1 << v13;
  v15 = (struct ADAPTER_RENDER *)*((_QWORD *)v12 + 2);
  v17 = DXGGLOBAL::GetGlobal(v13, v16);
  v18 = DXGGLOBAL::CreateSyncObject((__int64)v17, v15, v12, v14, (__int64)v67, 3u, 0, 0LL, 0LL, this + 6, &v68, 0LL);
  v22 = v18;
  if ( v18 < 0 )
    goto LABEL_5;
  memset(v66, 0, sizeof(v66));
  v23 = this[10];
  HIDWORD(v66[0]) |= 0x80u;
  v66[1] = v23;
  v24 = this[2];
  LODWORD(v66[0]) = 5;
  v25 = (struct DXGDEVICE *)*((_QWORD *)v24 + 2);
  v26 = *((unsigned int *)v24 + 104);
  v27 = 1 << v26;
  v28 = (struct ADAPTER_RENDER *)*((_QWORD *)v25 + 2);
  v30 = DXGGLOBAL::GetGlobal(v26, v29);
  SyncObject = DXGGLOBAL::CreateSyncObject(
                 (__int64)v30,
                 v28,
                 v25,
                 v27,
                 (__int64)v66,
                 0x10u,
                 0,
                 0LL,
                 0LL,
                 this + 9,
                 0LL,
                 0LL);
  v22 = SyncObject;
  if ( SyncObject < 0 )
  {
LABEL_5:
    v32 = WdLogNewEntry5_WdWarning(v20, v19, v21);
    *(_QWORD *)(v32 + 24) = *((_QWORD *)this[2] + 2);
    *(_QWORD *)(v32 + 32) = v22;
    WdLogEvent5_WdWarning(v32);
    if ( (_BYTE)v64 )
      DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)v63, v33);
    return v22;
  }
  if ( (_BYTE)v64 )
    DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)v63, v19);
  v34 = *(_QWORD *)(*((_QWORD *)this[2] + 2) + 40LL);
  DXGPUSHLOCK::AcquireExclusive((DXGPUSHLOCK *)(v34 + 208));
  v35 = v68;
  v36 = (v68 >> 6) & 0xFFFFFF;
  if ( (unsigned int)v36 < *(_DWORD *)(v34 + 256) )
  {
    v37 = *(_QWORD *)(v34 + 240);
    if ( ((v68 >> 25) & 0x60) == (*(_BYTE *)(v37 + 16 * v36 + 8) & 0x60)
      && (*(_DWORD *)(v37 + 16 * v36 + 8) & 0x1F) != 0 )
    {
      v38 = 2 * (((unsigned __int64)v68 >> 6) & 0xFFFFFF);
      if ( (*(_DWORD *)(v37 + 16 * (((unsigned __int64)v68 >> 6) & 0xFFFFFF) + 8) & 0x2000) == 0 )
      {
        v39 = WdLogNewEntry5_WdAssertion((v68 >> 25) & 0x60, v37);
        *(_QWORD *)(v39 + 24) = 217LL;
        WdLogEvent5_WdAssertion(v39);
        v37 = *(_QWORD *)(v34 + 240);
      }
      *(_DWORD *)(v37 + 8 * v38 + 8) &= ~0x2000u;
    }
  }
  *(_QWORD *)(v34 + 216) = 0LL;
  ExReleasePushLockExclusiveEx(v34 + 208, 0LL);
  KeLeaveCriticalRegion();
  PrivateDriverDataSize = a2->PrivateDriverDataSize;
  v41 = (__int64)this[2];
  Value = a2->Flags.Value;
  *(_QWORD *)(&v65.hHwQueueProgressFence + 1) = 0LL;
  HIDWORD(v65.HwQueueProgressFenceCPUVirtualAddress) = 0;
  v65.hHwQueue = this;
  v65.Flags.Value = Value;
  v65.pPrivateDriverData = a3;
  v65.PrivateDriverDataSize = PrivateDriverDataSize;
  v65.hHwQueueProgressFence = v35;
  if ( (*(_DWORD *)(v41 + 420) & 4) != 0 || *(_BYTE *)(*(_QWORD *)(v41 + 16) + 1866LL) )
    v65.Flags.Value = Value | 1;
  v43 = (char *)(this + 6);
  v44 = (void *)*((_QWORD *)DXGSYNCOBJECT::GetMonitoredFenceStorage(*((DXGSYNCOBJECT **)this[6] + 4), v41) + 1);
  v65.HwQueueProgressFenceGPUVirtualAddress = v67[3];
  this[8] = (struct DXGDEVICESYNCOBJECT *)v67[3];
  v45 = this[2];
  v65.HwQueueProgressFenceCPUVirtualAddress = v44;
  this[7] = (struct DXGDEVICESYNCOBJECT *)v44;
  v46 = ADAPTER_RENDER::DdiCreateHwQueue(*(ADAPTER_RENDER **)(*((_QWORD *)v45 + 2) + 16LL), *((void **)v45 + 23), &v65);
  v22 = v46;
  if ( v46 >= 0 )
  {
    hHwQueue = v65.hHwQueue;
    this[4] = (struct DXGDEVICESYNCOBJECT *)v65.hHwQueue;
  }
  if ( v46 == -1073741822 )
  {
    this[4] = (struct DXGDEVICESYNCOBJECT *)153;
  }
  else if ( v46 < 0 )
  {
    v55 = WdLogNewEntry5_WdError(hHwQueue, v47);
    *(_QWORD *)(v55 + 24) = v22;
    WdLogEvent5_WdError(v55);
    return v22;
  }
  v49 = this + 5;
  v50 = (*(__int64 (__fastcall **)(struct DXGDEVICESYNCOBJECT **, _QWORD, struct _D3DKMT_CREATEHWQUEUE *, char *))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this[2] + 2) + 16LL) + 616LL) + 8LL) + 232LL))(
          this,
          *((_QWORD *)this[2] + 37),
          a2,
          (char *)this + 40);
  v22 = v50;
  if ( v50 >= 0 )
  {
    DXGAUTOMUTEX::DXGAUTOMUTEX(
      (DXGAUTOMUTEX *)v63,
      (struct DXGFASTMUTEX *const)(*(_QWORD *)(*(_QWORD *)v43 + 32LL) + 32LL),
      0);
    DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v63);
    VidSchSyncObject = DXGSYNCOBJECT::GetVidSchSyncObject(
                         *(DXGSYNCOBJECT **)(*(_QWORD *)v43 + 32LL),
                         *(struct ADAPTER_RENDER **)(*(_QWORD *)(*(_QWORD *)v43 + 16LL) + 16LL));
    (*(void (__fastcall **)(_QWORD, struct _VIDSCH_SYNC_OBJECT *, __int64))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this[2] + 2) + 16LL)
                                                                                                  + 616LL)
                                                                                      + 8LL)
                                                                          + 272LL))(
      *v49,
      VidSchSyncObject,
      1LL);
    if ( (_BYTE)v64 )
      DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v63, v57);
    DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v63, (struct DXGFASTMUTEX *const)(*((_QWORD *)this[9] + 4) + 32LL), 0);
    DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v63);
    v58 = DXGSYNCOBJECT::GetVidSchSyncObject(
            *((DXGSYNCOBJECT **)this[9] + 4),
            *(struct ADAPTER_RENDER **)(*((_QWORD *)this[9] + 2) + 16LL));
    (*(void (__fastcall **)(_QWORD, struct _VIDSCH_SYNC_OBJECT *, __int64))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this[2] + 2) + 16LL)
                                                                                                  + 616LL)
                                                                                      + 8LL)
                                                                          + 272LL))(
      *v49,
      v58,
      2LL);
    if ( (_BYTE)v64 )
      DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v63, v59);
    v60 = DXGPROCESS::AllocHandleSafe(*(_QWORD *)(*((_QWORD *)this[2] + 2) + 40LL), (__int64)this, 0xFu);
    *((_DWORD *)this + 6) = v60;
    if ( v60 )
    {
      if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
        McTemplateK0ppp_EtwWriteTransfer(v60, &EventCreateHwQueue, v62, this[2], v60, this);
      return v22;
    }
    v54 = WdLogNewEntry5_WdWarning(0LL, v61, v62);
    v22 = -1073741801LL;
    *(_QWORD *)(v54 + 24) = this;
  }
  else
  {
    v54 = WdLogNewEntry5_WdWarning(v52, v51, v53);
    *(_QWORD *)(v54 + 24) = *((_QWORD *)this[2] + 2);
  }
  *(_QWORD *)(v54 + 32) = v22;
  WdLogEvent5_WdWarning(v54);
  return v22;
}
