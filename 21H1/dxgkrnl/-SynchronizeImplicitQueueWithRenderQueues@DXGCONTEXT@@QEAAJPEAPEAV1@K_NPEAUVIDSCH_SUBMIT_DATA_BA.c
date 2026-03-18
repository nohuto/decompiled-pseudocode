/*
 * XREFs of ?SynchronizeImplicitQueueWithRenderQueues@DXGCONTEXT@@QEAAJPEAPEAV1@K_NPEAUVIDSCH_SUBMIT_DATA_BASE@@1@Z @ 0x1C027DE38
 * Callers:
 *     ?SubmitPresent@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT@@PEAPEAVDXGHWQUEUE@@IPEAPEAV1@PEAVDXGALLOCATION@@IIPEAU_DXGKARG_PRESENT@@PEAU_D3DKMT_PRESENT_RGNS@@PEAU_VIDMM_DMA_BUFFER@@PEAUVIDSCH_SUBMIT_DATA_BASE@@W4_D3DDDIFORMAT@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C00FEEA0 (-SubmitPresent@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT@@PEAPEAVDXGHWQUEUE@@IPEAPEAV1@PEAVDXGALLOCAT.c)
 *     ?SubmitPresentHistoryToken@@YAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAVCWin32kLocks@@HPEAT_LARGE_INTEGER@@PEAUDXGK_PRESENT_PARAMS@@PEAUVIDSCH_SUBMIT_DATA_BASE@@PEAVDXGCONTEXT@@PEAU_PRESENT_REDIRECTED_PARAMS@@PEAD@Z @ 0x1C01083E0 (-SubmitPresentHistoryToken@@YAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@PEAVCOREDEVICEACCESS@@PEAVDXGADA.c)
 *     ?SubmitPresentHistoryTokenFromVm@DXGADAPTER@@QEAAJIU_VIDSCH_SUBMIT_FLAGS@@PEAVDXGPRESENTHISTORYTOKENQUEUE@@PEAU_D3DKMT_PRESENTHISTORYTOKEN@@2PEAVCRefCountedBuffer@@II3K@Z @ 0x1C0236CBC (-SubmitPresentHistoryTokenFromVm@DXGADAPTER@@QEAAJIU_VIDSCH_SUBMIT_FLAGS@@PEAVDXGPRESENTHISTORYT.c)
 *     ?SubmitPresentLda@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT@@IPEAPEAV1@PEAVDXGALLOCATION@@PEAU_DXGKARG_PRESENT@@PEAUVIDSCH_SUBMIT_DATA_BASE@@@Z @ 0x1C027D538 (-SubmitPresentLda@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT@@IPEAPEAV1@PEAVDXGALLOCATION@@PEAU_DXGKAR.c)
 *     ?SubmitPresentMultiPlaneOverlays3@DXGCONTEXT@@AEAAJPEBU_D3DKMT_PRESENT_MULTIPLANE_OVERLAY3@@EEEPEBVDXGALLOCATIONREFERENCE@@PEAEPEAU_DXGKARG_PRESENT@@PEAUVIDSCH_SUBMIT_DATA_BASE@@PEAPEAV1@@Z @ 0x1C02A18EC (-SubmitPresentMultiPlaneOverlays3@DXGCONTEXT@@AEAAJPEBU_D3DKMT_PRESENT_MULTIPLANE_OVERLAY3@@EEEP.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000A650 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000CF20 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000D070 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C000DBC4 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Release@DXGSYNCOBJECTLOCK@@QEAAXXZ @ 0x1C000EB44 (-Release@DXGSYNCOBJECTLOCK@@QEAAXXZ.c)
 *     ?AcquireShared@DXGSYNCOBJECTLOCK@@QEAAXXZ @ 0x1C000EC34 (-AcquireShared@DXGSYNCOBJECTLOCK@@QEAAXXZ.c)
 *     ??0DXGSYNCOBJECTLOCK@@QEAA@QEAVDXGGLOBAL@@_N@Z @ 0x1C000EC88 (--0DXGSYNCOBJECTLOCK@@QEAA@QEAVDXGGLOBAL@@_N@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0026570 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0026840 (memset.c)
 *     ?CreateSyncObject@DXGGLOBAL@@QEAAJPEAVADAPTER_RENDER@@PEAVDXGDEVICE@@IPEAU_D3DDDI_SYNCHRONIZATIONOBJECTINFO2@@U_VIDSCH_SYNC_OBJECT_CLIENTHINT@@_NPEAVDXGPAGINGQUEUE@@PEAPEAVDXGSYNCOBJECT@@PEAPEAVDXGDEVICESYNCOBJECT@@PEAIPEAPEAVDXGADAPTERSYNCOBJECT@@@Z @ 0x1C01120E0 (-CreateSyncObject@DXGGLOBAL@@QEAAJPEAVADAPTER_RENDER@@PEAVDXGDEVICE@@IPEAU_D3DDDI_SYNCHRONIZATIO.c)
 *     ?GetVidSchSyncObject@DXGSYNCOBJECT@@QEAAPEAU_VIDSCH_SYNC_OBJECT@@PEAVADAPTER_RENDER@@@Z @ 0x1C011BAB0 (-GetVidSchSyncObject@DXGSYNCOBJECT@@QEAAPEAU_VIDSCH_SYNC_OBJECT@@PEAVADAPTER_RENDER@@@Z.c)
 *     ?GetRenderHwQueueCount@DXGCONTEXT@@QEAAIXZ @ 0x1C02691DC (-GetRenderHwQueueCount@DXGCONTEXT@@QEAAIXZ.c)
 */

__int64 __fastcall DXGCONTEXT::SynchronizeImplicitQueueWithRenderQueues(
        DXGCONTEXT *this,
        struct DXGCONTEXT **a2,
        unsigned int a3,
        char a4,
        struct VIDSCH_SUBMIT_DATA_BASE *a5,
        bool a6)
{
  struct DXGDEVICESYNCOBJECT **v6; // r12
  __int64 v10; // rdx
  __int64 v11; // rcx
  PERESOURCE *Global; // rax
  __int64 v13; // rdx
  struct DXGDEVICE *v14; // rdi
  __int64 v15; // rcx
  unsigned int v16; // ebx
  struct ADAPTER_RENDER *v17; // rsi
  struct DXGGLOBAL *v18; // rax
  int SyncObject; // eax
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // rbx
  __int64 v24; // rax
  __int64 v25; // rdx
  unsigned int RenderHwQueueCount; // esi
  DXGCONTEXT **v28; // r8
  __int64 v29; // r8
  __int64 v30; // r9
  _BYTE *PoolWithTag; // rbx
  int v32; // edi
  unsigned int v33; // r8d
  _QWORD *v34; // r12
  _QWORD *i; // rdx
  __int64 v36; // rcx
  struct DXGCONTEXT **v37; // r10
  __int64 v38; // r11
  _QWORD *v39; // r9
  _QWORD *j; // rdx
  __int64 v41; // rcx
  __int64 v42; // rdx
  struct VIDSCH_SUBMIT_DATA_BASE *v43; // rax
  __int64 v44; // r8
  __int64 v45; // rdx
  _QWORD *k; // rbx
  struct _VIDSCH_SYNC_OBJECT *v47; // rax
  struct DXGCONTEXT **v48; // r12
  __int64 v49; // r15
  _QWORD *v50; // rsi
  _QWORD *m; // rbx
  struct _VIDSCH_SYNC_OBJECT *v52; // rax
  _BYTE v53[8]; // [rsp+60h] [rbp-A0h] BYREF
  char v54; // [rsp+68h] [rbp-98h]
  struct _VIDSCH_SYNC_OBJECT *VidSchSyncObject; // [rsp+70h] [rbp-90h] BYREF
  _BYTE v56[24]; // [rsp+78h] [rbp-88h] BYREF
  _BYTE *v57; // [rsp+90h] [rbp-70h]
  _BYTE v58[64]; // [rsp+98h] [rbp-68h] BYREF
  unsigned int v59; // [rsp+D8h] [rbp-28h]
  _QWORD v60[16]; // [rsp+E0h] [rbp-20h] BYREF
  __int64 v61; // [rsp+170h] [rbp+70h] BYREF
  char v62; // [rsp+188h] [rbp+88h]

  v62 = a4;
  v6 = (struct DXGDEVICESYNCOBJECT **)((char *)this + 256);
  if ( !*((_QWORD *)this + 32) )
  {
    memset(v60, 0, 0x50uLL);
    HIDWORD(v60[0]) |= 0x80u;
    LODWORD(v60[0]) = 5;
    *((_QWORD *)this + 33) = 0LL;
    v60[1] = 0LL;
    Global = (PERESOURCE *)DXGGLOBAL::GetGlobal(v11, v10);
    DXGSYNCOBJECTLOCK::DXGSYNCOBJECTLOCK((DXGSYNCOBJECTLOCK *)v53, Global, 1);
    if ( !a6 )
      DXGSYNCOBJECTLOCK::AcquireShared((DXGSYNCOBJECTLOCK *)v53, v13);
    v14 = (struct DXGDEVICE *)*((_QWORD *)this + 2);
    v15 = *((unsigned int *)this + 104);
    v16 = 1 << v15;
    v17 = (struct ADAPTER_RENDER *)*((_QWORD *)v14 + 2);
    v18 = DXGGLOBAL::GetGlobal(v15, v13);
    SyncObject = DXGGLOBAL::CreateSyncObject(
                   (__int64)v18,
                   v17,
                   v14,
                   v16,
                   (__int64)v60,
                   0x11u,
                   0,
                   0LL,
                   0LL,
                   v6,
                   0LL,
                   0LL);
    v23 = SyncObject;
    if ( SyncObject < 0 )
    {
      v24 = WdLogNewEntry5_WdWarning(v21, v20, v22);
      *(_QWORD *)(v24 + 24) = this;
      *(_QWORD *)(v24 + 32) = v23;
      WdLogEvent5_WdWarning(v24);
      if ( v54 )
        DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)v53, v25);
      return (unsigned int)v23;
    }
    if ( v54 )
      DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)v53, v20);
  }
  v61 = ++*((_QWORD *)this + 33);
  RenderHwQueueCount = DXGCONTEXT::GetRenderHwQueueCount(this);
  if ( a3 > 1 )
  {
    v28 = a2 + 1;
    do
    {
      RenderHwQueueCount += DXGCONTEXT::GetRenderHwQueueCount(*v28);
      v28 = (DXGCONTEXT **)(v29 + 8);
    }
    while ( v30 != 1 );
  }
  v59 = 0;
  PoolWithTag = 0LL;
  v57 = 0LL;
  if ( RenderHwQueueCount <= 8 )
  {
    PoolWithTag = v58;
    v57 = v58;
  }
  else
  {
    if ( 0xFFFFFFFFFFFFFFFFuLL / RenderHwQueueCount < 8 )
      goto LABEL_19;
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, 8LL * RenderHwQueueCount, 0x4B677844u);
    v57 = PoolWithTag;
  }
  v59 = RenderHwQueueCount;
  if ( !PoolWithTag )
    goto LABEL_20;
  memset(PoolWithTag, 0, 8LL * RenderHwQueueCount);
  PoolWithTag = v57;
LABEL_19:
  if ( PoolWithTag )
  {
    v33 = 0;
    v34 = (_QWORD *)((char *)this + 424);
    for ( i = (_QWORD *)*((_QWORD *)this + 53); i != v34 && i; i = (_QWORD *)*i )
    {
      v36 = v33++;
      *(_QWORD *)&PoolWithTag[8 * v36] = i[5];
    }
    if ( a3 > 1 )
    {
      v37 = a2 + 1;
      v38 = a3 - 1;
      do
      {
        v39 = (_QWORD *)((char *)*v37 + 424);
        for ( j = (_QWORD *)*v39; j != v39 && j; j = (_QWORD *)*j )
        {
          v41 = v33++;
          *(_QWORD *)&PoolWithTag[8 * v41] = j[5];
        }
        ++v37;
        --v38;
      }
      while ( v38 );
    }
    DXGAUTOMUTEX::DXGAUTOMUTEX(
      (DXGAUTOMUTEX *)v56,
      (struct DXGFASTMUTEX *const)(*(_QWORD *)(*((_QWORD *)this + 32) + 32LL) + 32LL),
      0);
    DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v56);
    VidSchSyncObject = DXGSYNCOBJECT::GetVidSchSyncObject(
                         *(DXGSYNCOBJECT **)(*((_QWORD *)this + 32) + 32LL),
                         *(struct ADAPTER_RENDER **)(*(_QWORD *)(*((_QWORD *)this + 32) + 16LL) + 16LL));
    v32 = (*(__int64 (__fastcall **)(_QWORD, _BYTE *, __int64, struct _VIDSCH_SYNC_OBJECT **, _DWORD, __int64 *))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 616LL) + 8LL) + 648LL))(
            RenderHwQueueCount,
            PoolWithTag,
            1LL,
            &VidSchSyncObject,
            0,
            &v61);
    if ( v32 >= 0 )
    {
      v43 = a5;
      v44 = v61;
      v45 = (__int64)VidSchSyncObject;
      if ( a5 )
      {
        *((_QWORD *)a5 + 64) = VidSchSyncObject;
        *((_QWORD *)v43 + 65) = v44;
      }
      if ( v62 )
      {
        v32 = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL)
                                                                                          + 616LL)
                                                                              + 8LL)
                                                                  + 632LL))(
                *((_QWORD *)this + 38),
                v45,
                v44);
      }
      else
      {
        DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v56, v45);
        for ( k = (_QWORD *)*v34; k != v34 && k; k = (_QWORD *)*k )
        {
          DXGAUTOMUTEX::DXGAUTOMUTEX(
            (DXGAUTOMUTEX *)v53,
            (struct DXGFASTMUTEX *const)(*(_QWORD *)(k[9] + 32LL) + 32LL),
            0);
          DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v53);
          v47 = DXGSYNCOBJECT::GetVidSchSyncObject(
                  *(DXGSYNCOBJECT **)(k[9] + 32LL),
                  *(struct ADAPTER_RENDER **)(*(_QWORD *)(k[9] + 16LL) + 16LL));
          v32 = (*(__int64 (__fastcall **)(_QWORD, struct _VIDSCH_SYNC_OBJECT *, _QWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 616LL) + 8LL)
                                                                                        + 632LL))(
                  *((_QWORD *)this + 38),
                  v47,
                  k[10]);
          if ( v54 )
            DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v53, v42);
        }
        if ( a3 > 1 )
        {
          v48 = a2 + 1;
          v49 = a3 - 1;
          do
          {
            v50 = (_QWORD *)((char *)*v48 + 424);
            for ( m = (_QWORD *)*v50; m != v50 && m; m = (_QWORD *)*m )
            {
              DXGAUTOMUTEX::DXGAUTOMUTEX(
                (DXGAUTOMUTEX *)v53,
                (struct DXGFASTMUTEX *const)(*(_QWORD *)(m[9] + 32LL) + 32LL),
                0);
              DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v53);
              v52 = DXGSYNCOBJECT::GetVidSchSyncObject(
                      *(DXGSYNCOBJECT **)(m[9] + 32LL),
                      *(struct ADAPTER_RENDER **)(*(_QWORD *)(m[9] + 16LL) + 16LL));
              v32 = (*(__int64 (__fastcall **)(_QWORD, struct _VIDSCH_SYNC_OBJECT *, _QWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 616LL) + 8LL)
                                                                                            + 632LL))(
                      *((_QWORD *)this + 38),
                      v52,
                      m[10]);
              if ( v54 )
                DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v53, v42);
            }
            ++v48;
            --v49;
          }
          while ( v49 );
        }
      }
    }
    if ( v56[8] )
      DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v56, v42);
    PoolWithTag = v57;
    goto LABEL_55;
  }
LABEL_20:
  v32 = -1073741801;
LABEL_55:
  if ( PoolWithTag != v58 && PoolWithTag )
    ExFreePoolWithTag(PoolWithTag, 0);
  return (unsigned int)v32;
}
