/*
 * XREFs of ?SynchronizeImplicitQueueWithRenderQueues@DXGCONTEXT@@QEAAJPEAPEAV1@K_NPEAUVIDSCH_SUBMIT_DATA_BASE@@1@Z @ 0x1C02825CC
 * Callers:
 *     ?SubmitPresent@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT@@PEAPEAVDXGHWQUEUE@@IPEAPEAV1@PEAVDXGALLOCATION@@IIPEAU_DXGKARG_PRESENT@@PEAU_D3DKMT_PRESENT_RGNS@@PEAU_VIDMM_DMA_BUFFER@@PEAUVIDSCH_SUBMIT_DATA_BASE@@W4_D3DDDIFORMAT@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C00FF5D0 (-SubmitPresent@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT@@PEAPEAVDXGHWQUEUE@@IPEAPEAV1@PEAVDXGALLOCAT.c)
 *     ?SubmitPresentHistoryToken@@YAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAVCWin32kLocks@@HPEAT_LARGE_INTEGER@@PEAUDXGK_PRESENT_PARAMS@@PEAUVIDSCH_SUBMIT_DATA_BASE@@PEAVDXGCONTEXT@@PEAU_PRESENT_REDIRECTED_PARAMS@@PEAD@Z @ 0x1C01050C0 (-SubmitPresentHistoryToken@@YAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@PEAVCOREDEVICEACCESS@@PEAVDXGADA.c)
 *     ?SubmitPresentHistoryTokenFromVm@DXGADAPTER@@QEAAJIU_VIDSCH_SUBMIT_FLAGS@@PEAVDXGPRESENTHISTORYTOKENQUEUE@@PEAU_D3DKMT_PRESENTHISTORYTOKEN@@2PEAVCRefCountedBuffer@@II3K@Z @ 0x1C023ACE8 (-SubmitPresentHistoryTokenFromVm@DXGADAPTER@@QEAAJIU_VIDSCH_SUBMIT_FLAGS@@PEAVDXGPRESENTHISTORYT.c)
 *     ?SubmitPresentLda@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT@@IPEAPEAV1@PEAVDXGALLOCATION@@PEAU_DXGKARG_PRESENT@@PEAUVIDSCH_SUBMIT_DATA_BASE@@@Z @ 0x1C0281CCC (-SubmitPresentLda@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT@@IPEAPEAV1@PEAVDXGALLOCATION@@PEAU_DXGKAR.c)
 *     ?SubmitPresentMultiPlaneOverlays3@DXGCONTEXT@@AEAAJPEBU_D3DKMT_PRESENT_MULTIPLANE_OVERLAY3@@EEEPEBVDXGALLOCATIONREFERENCE@@PEAEPEAU_DXGKARG_PRESENT@@PEAUVIDSCH_SUBMIT_DATA_BASE@@PEAPEAV1@@Z @ 0x1C02A62BC (-SubmitPresentMultiPlaneOverlays3@DXGCONTEXT@@AEAAJPEBU_D3DKMT_PRESENT_MULTIPLANE_OVERLAY3@@EEEP.c)
 * Callees:
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002848 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002BF0 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00041C0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?Release@DXGSYNCOBJECTLOCK@@QEAAXXZ @ 0x1C0004370 (-Release@DXGSYNCOBJECTLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0006910 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?AcquireShared@DXGSYNCOBJECTLOCK@@QEAAXXZ @ 0x1C00070D0 (-AcquireShared@DXGSYNCOBJECTLOCK@@QEAAXXZ.c)
 *     ??0DXGSYNCOBJECTLOCK@@QEAA@QEAVDXGGLOBAL@@_N@Z @ 0x1C0007124 (--0DXGSYNCOBJECTLOCK@@QEAA@QEAVDXGGLOBAL@@_N@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0028C00 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0028F00 (memset.c)
 *     ?CreateSyncObject@DXGGLOBAL@@QEAAJPEAVADAPTER_RENDER@@PEAVDXGDEVICE@@IPEAU_D3DDDI_SYNCHRONIZATIONOBJECTINFO2@@U_VIDSCH_SYNC_OBJECT_CLIENTHINT@@_NPEAVDXGPAGINGQUEUE@@PEAPEAVDXGSYNCOBJECT@@PEAPEAVDXGDEVICESYNCOBJECT@@PEAIPEAPEAVDXGADAPTERSYNCOBJECT@@@Z @ 0x1C010ED88 (-CreateSyncObject@DXGGLOBAL@@QEAAJPEAVADAPTER_RENDER@@PEAVDXGDEVICE@@IPEAU_D3DDDI_SYNCHRONIZATIO.c)
 *     ?GetVidSchSyncObject@DXGSYNCOBJECT@@QEAAPEAU_VIDSCH_SYNC_OBJECT@@PEAVADAPTER_RENDER@@@Z @ 0x1C01165B0 (-GetVidSchSyncObject@DXGSYNCOBJECT@@QEAAPEAU_VIDSCH_SYNC_OBJECT@@PEAVADAPTER_RENDER@@@Z.c)
 *     ?GetRenderHwQueueCount@DXGCONTEXT@@QEAAIXZ @ 0x1C026D804 (-GetRenderHwQueueCount@DXGCONTEXT@@QEAAIXZ.c)
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
  unsigned int RenderHwQueueCount; // esi
  DXGCONTEXT **v27; // r8
  __int64 v28; // r8
  __int64 v29; // r9
  _BYTE *PoolWithTag; // rbx
  int v31; // edi
  unsigned int v32; // r8d
  _QWORD *v33; // r12
  _QWORD *i; // rdx
  __int64 v35; // rcx
  struct DXGCONTEXT **v36; // r10
  __int64 v37; // r11
  _QWORD *v38; // r9
  _QWORD *j; // rdx
  __int64 v40; // rcx
  __int64 v41; // rdx
  struct VIDSCH_SUBMIT_DATA_BASE *v42; // rax
  __int64 v43; // r8
  __int64 v44; // rdx
  _QWORD *k; // rbx
  struct _VIDSCH_SYNC_OBJECT *v46; // rax
  struct DXGCONTEXT **v47; // r12
  __int64 v48; // r15
  _QWORD *v49; // rsi
  _QWORD *m; // rbx
  struct _VIDSCH_SYNC_OBJECT *v51; // rax
  _BYTE v52[8]; // [rsp+60h] [rbp-A0h] BYREF
  char v53; // [rsp+68h] [rbp-98h]
  struct _VIDSCH_SYNC_OBJECT *VidSchSyncObject; // [rsp+70h] [rbp-90h] BYREF
  _BYTE v55[24]; // [rsp+78h] [rbp-88h] BYREF
  _BYTE *v56; // [rsp+90h] [rbp-70h]
  _BYTE v57[64]; // [rsp+98h] [rbp-68h] BYREF
  unsigned int v58; // [rsp+D8h] [rbp-28h]
  _QWORD v59[16]; // [rsp+E0h] [rbp-20h] BYREF
  __int64 v60; // [rsp+170h] [rbp+70h] BYREF
  char v61; // [rsp+188h] [rbp+88h]

  v61 = a4;
  v6 = (struct DXGDEVICESYNCOBJECT **)((char *)this + 256);
  if ( !*((_QWORD *)this + 32) )
  {
    memset(v59, 0, 0x50uLL);
    HIDWORD(v59[0]) |= 0x80u;
    LODWORD(v59[0]) = 5;
    *((_QWORD *)this + 33) = 0LL;
    v59[1] = 0LL;
    Global = (PERESOURCE *)DXGGLOBAL::GetGlobal(v11, v10);
    DXGSYNCOBJECTLOCK::DXGSYNCOBJECTLOCK((DXGSYNCOBJECTLOCK *)v52, Global, 1);
    if ( !a6 )
      DXGSYNCOBJECTLOCK::AcquireShared((DXGSYNCOBJECTLOCK *)v52, v13);
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
                   (__int64)v59,
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
      if ( v53 )
        DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)v52);
      return (unsigned int)v23;
    }
    if ( v53 )
      DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)v52);
  }
  v60 = ++*((_QWORD *)this + 33);
  RenderHwQueueCount = DXGCONTEXT::GetRenderHwQueueCount(this);
  if ( a3 > 1 )
  {
    v27 = a2 + 1;
    do
    {
      RenderHwQueueCount += DXGCONTEXT::GetRenderHwQueueCount(*v27);
      v27 = (DXGCONTEXT **)(v28 + 8);
    }
    while ( v29 != 1 );
  }
  v58 = 0;
  PoolWithTag = 0LL;
  v56 = 0LL;
  if ( RenderHwQueueCount <= 8 )
  {
    PoolWithTag = v57;
    v56 = v57;
  }
  else
  {
    if ( 0xFFFFFFFFFFFFFFFFuLL / RenderHwQueueCount < 8 )
      goto LABEL_19;
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, 8LL * RenderHwQueueCount, 0x4B677844u);
    v56 = PoolWithTag;
  }
  v58 = RenderHwQueueCount;
  if ( !PoolWithTag )
    goto LABEL_20;
  memset(PoolWithTag, 0, 8LL * RenderHwQueueCount);
  PoolWithTag = v56;
LABEL_19:
  if ( PoolWithTag )
  {
    v32 = 0;
    v33 = (_QWORD *)((char *)this + 424);
    for ( i = (_QWORD *)*((_QWORD *)this + 53); i != v33 && i; i = (_QWORD *)*i )
    {
      v35 = v32++;
      *(_QWORD *)&PoolWithTag[8 * v35] = i[5];
    }
    if ( a3 > 1 )
    {
      v36 = a2 + 1;
      v37 = a3 - 1;
      do
      {
        v38 = (_QWORD *)((char *)*v36 + 424);
        for ( j = (_QWORD *)*v38; j != v38 && j; j = (_QWORD *)*j )
        {
          v40 = v32++;
          *(_QWORD *)&PoolWithTag[8 * v40] = j[5];
        }
        ++v36;
        --v37;
      }
      while ( v37 );
    }
    DXGAUTOMUTEX::DXGAUTOMUTEX(
      (DXGAUTOMUTEX *)v55,
      (struct DXGFASTMUTEX *const)(*(_QWORD *)(*((_QWORD *)this + 32) + 32LL) + 32LL),
      0);
    DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v55);
    VidSchSyncObject = DXGSYNCOBJECT::GetVidSchSyncObject(
                         *(DXGSYNCOBJECT **)(*((_QWORD *)this + 32) + 32LL),
                         *(struct ADAPTER_RENDER **)(*(_QWORD *)(*((_QWORD *)this + 32) + 16LL) + 16LL));
    v31 = (*(__int64 (__fastcall **)(_QWORD, _BYTE *, __int64, struct _VIDSCH_SYNC_OBJECT **, _DWORD, __int64 *))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 616LL) + 8LL) + 648LL))(
            RenderHwQueueCount,
            PoolWithTag,
            1LL,
            &VidSchSyncObject,
            0,
            &v60);
    if ( v31 >= 0 )
    {
      v42 = a5;
      v43 = v60;
      v44 = (__int64)VidSchSyncObject;
      if ( a5 )
      {
        *((_QWORD *)a5 + 64) = VidSchSyncObject;
        *((_QWORD *)v42 + 65) = v43;
      }
      if ( v61 )
      {
        v31 = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL)
                                                                                          + 616LL)
                                                                              + 8LL)
                                                                  + 632LL))(
                *((_QWORD *)this + 38),
                v44,
                v43);
      }
      else
      {
        DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v55, v44);
        for ( k = (_QWORD *)*v33; k != v33 && k; k = (_QWORD *)*k )
        {
          DXGAUTOMUTEX::DXGAUTOMUTEX(
            (DXGAUTOMUTEX *)v52,
            (struct DXGFASTMUTEX *const)(*(_QWORD *)(k[9] + 32LL) + 32LL),
            0);
          DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v52);
          v46 = DXGSYNCOBJECT::GetVidSchSyncObject(
                  *(DXGSYNCOBJECT **)(k[9] + 32LL),
                  *(struct ADAPTER_RENDER **)(*(_QWORD *)(k[9] + 16LL) + 16LL));
          v31 = (*(__int64 (__fastcall **)(_QWORD, struct _VIDSCH_SYNC_OBJECT *, _QWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 616LL) + 8LL)
                                                                                        + 632LL))(
                  *((_QWORD *)this + 38),
                  v46,
                  k[10]);
          if ( v53 )
            DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v52, v41);
        }
        if ( a3 > 1 )
        {
          v47 = a2 + 1;
          v48 = a3 - 1;
          do
          {
            v49 = (_QWORD *)((char *)*v47 + 424);
            for ( m = (_QWORD *)*v49; m != v49 && m; m = (_QWORD *)*m )
            {
              DXGAUTOMUTEX::DXGAUTOMUTEX(
                (DXGAUTOMUTEX *)v52,
                (struct DXGFASTMUTEX *const)(*(_QWORD *)(m[9] + 32LL) + 32LL),
                0);
              DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v52);
              v51 = DXGSYNCOBJECT::GetVidSchSyncObject(
                      *(DXGSYNCOBJECT **)(m[9] + 32LL),
                      *(struct ADAPTER_RENDER **)(*(_QWORD *)(m[9] + 16LL) + 16LL));
              v31 = (*(__int64 (__fastcall **)(_QWORD, struct _VIDSCH_SYNC_OBJECT *, _QWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 616LL) + 8LL)
                                                                                            + 632LL))(
                      *((_QWORD *)this + 38),
                      v51,
                      m[10]);
              if ( v53 )
                DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v52, v41);
            }
            ++v47;
            --v48;
          }
          while ( v48 );
        }
      }
    }
    if ( v55[8] )
      DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v55, v41);
    PoolWithTag = v56;
    goto LABEL_55;
  }
LABEL_20:
  v31 = -1073741801;
LABEL_55:
  if ( PoolWithTag != v57 && PoolWithTag )
    ExFreePoolWithTag(PoolWithTag, 0);
  return (unsigned int)v31;
}
