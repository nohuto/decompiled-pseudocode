/*
 * XREFs of ?SynchronizeImplicitQueueWithRenderQueues@DXGCONTEXT@@QEAAJPEAPEAV1@K_NPEAUVIDSCH_SUBMIT_DATA_BASE@@1@Z @ 0x1C0224DC6
 * Callers:
 *     ?SubmitPresentMultiPlaneOverlays3@DXGCONTEXT@@AEAAJPEBU_D3DKMT_PRESENT_MULTIPLANE_OVERLAY3@@EEEPEBVDXGALLOCATIONREFERENCE@@PEAEPEAU_DXGKARG_PRESENT@@PEAUVIDSCH_SUBMIT_DATA_BASE@@PEAPEAV1@@Z @ 0x1C01739B0 (-SubmitPresentMultiPlaneOverlays3@DXGCONTEXT@@AEAAJPEBU_D3DKMT_PRESENT_MULTIPLANE_OVERLAY3@@EEEP.c)
 *     ?SubmitPresentHistoryToken@@YAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAVCWin32kLocks@@HPEAT_LARGE_INTEGER@@PEAUDXGK_PRESENT_PARAMS@@PEAUVIDSCH_SUBMIT_DATA_BASE@@PEAVDXGCONTEXT@@PEAU_PRESENT_REDIRECTED_PARAMS@@PEAD@Z @ 0x1C01752C0 (-SubmitPresentHistoryToken@@YAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@PEAVCOREDEVICEACCESS@@PEAVDXGADA.c)
 *     ?SubmitPresent@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT@@PEAPEAVDXGHWQUEUE@@IPEAPEAV1@PEAVDXGALLOCATION@@IIPEAU_DXGKARG_PRESENT@@PEAU_D3DKMT_PRESENT_RGNS@@PEAU_VIDMM_DMA_BUFFER@@PEAUVIDSCH_SUBMIT_DATA_BASE@@W4_D3DDDIFORMAT@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C017B810 (-SubmitPresent@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT@@PEAPEAVDXGHWQUEUE@@IPEAPEAV1@PEAVDXGALLOCAT.c)
 *     ?SubmitPresentLda@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT@@IPEAPEAV1@PEAVDXGALLOCATION@@PEAU_DXGKARG_PRESENT@@PEAUVIDSCH_SUBMIT_DATA_BASE@@@Z @ 0x1C0332444 (-SubmitPresentLda@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT@@IPEAPEAV1@PEAVDXGALLOCATION@@PEAU_DXGKAR.c)
 *     ?SubmitPresentHistoryTokenFromVm@DXGADAPTER@@QEAAJIU_VIDSCH_SUBMIT_FLAGS@@PEAVDXGPRESENTHISTORYTOKENQUEUE@@PEAU_D3DKMT_PRESENTHISTORYTOKEN@@2PEAVCRefCountedBuffer@@II3K@Z @ 0x1C0365710 (-SubmitPresentHistoryTokenFromVm@DXGADAPTER@@QEAAJIU_VIDSCH_SUBMIT_FLAGS@@PEAVDXGPRESENTHISTORYT.c)
 * Callees:
 *     ?Release@DXGSYNCOBJECTLOCK@@QEAAXXZ @ 0x1C0009A8C (-Release@DXGSYNCOBJECTLOCK@@QEAAXXZ.c)
 *     ?AcquireShared@DXGSYNCOBJECTLOCK@@QEAAXXZ @ 0x1C0009B5C (-AcquireShared@DXGSYNCOBJECTLOCK@@QEAAXXZ.c)
 *     ??0DXGSYNCOBJECTLOCK@@QEAA@QEAVDXGGLOBAL@@_N@Z @ 0x1C0009BB0 (--0DXGSYNCOBJECTLOCK@@QEAA@QEAVDXGGLOBAL@@_N@Z.c)
 *     ?DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ @ 0x1C000BBD0 (-DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C000C3F8 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000F574 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000F5FC (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C002CCC0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C002CFC0 (memset.c)
 *     ?GetVidSchSyncObject@DXGSYNCOBJECT@@QEAAPEAU_VIDSCH_SYNC_OBJECT@@PEAVADAPTER_RENDER@@@Z @ 0x1C016A93C (-GetVidSchSyncObject@DXGSYNCOBJECT@@QEAAPEAU_VIDSCH_SYNC_OBJECT@@PEAVADAPTER_RENDER@@@Z.c)
 *     ?CreateSyncObject@DXGGLOBAL@@QEAAJPEAVADAPTER_RENDER@@PEAVDXGDEVICE@@IPEAU_D3DDDI_SYNCHRONIZATIONOBJECTINFO2@@U_VIDSCH_SYNC_OBJECT_CLIENTHINT@@_NPEAVDXGPAGINGQUEUE@@PEAPEAVDXGSYNCOBJECT@@PEAPEAVDXGDEVICESYNCOBJECT@@PEAIPEAPEAVDXGADAPTERSYNCOBJECT@@@Z @ 0x1C0199294 (-CreateSyncObject@DXGGLOBAL@@QEAAJPEAVADAPTER_RENDER@@PEAVDXGDEVICE@@IPEAU_D3DDDI_SYNCHRONIZATIO.c)
 *     ?GetRenderHwQueueCount@DXGCONTEXT@@QEAAIXZ @ 0x1C030ED78 (-GetRenderHwQueueCount@DXGCONTEXT@@QEAAIXZ.c)
 */

__int64 __fastcall DXGCONTEXT::SynchronizeImplicitQueueWithRenderQueues(
        DXGCONTEXT *this,
        struct DXGCONTEXT **a2,
        unsigned int a3,
        char a4,
        struct VIDSCH_SUBMIT_DATA_BASE *a5,
        bool a6)
{
  struct DXGDEVICESYNCOBJECT **v6; // rbx
  __int64 v7; // r13
  struct DXGGLOBAL *Global; // rax
  struct DXGGLOBAL *v11; // rax
  int SyncObject; // eax
  unsigned int v13; // ebx
  unsigned int v15; // r15d
  unsigned int RenderHwQueueCount; // esi
  __int64 v17; // r9
  DXGCONTEXT **v18; // r8
  __int64 v19; // r8
  __int64 v20; // r9
  _BYTE *Pool2; // rbx
  int v22; // esi
  unsigned int v23; // r8d
  _QWORD *v24; // r14
  _QWORD *i; // rdx
  __int64 v26; // rcx
  struct DXGCONTEXT **v27; // r10
  __int64 v28; // r11
  _QWORD *v29; // r9
  _QWORD *j; // rdx
  __int64 v31; // rcx
  struct VIDSCH_SUBMIT_DATA_BASE *v32; // rax
  __int64 v33; // r8
  struct _VIDSCH_SYNC_OBJECT *v34; // rdx
  _QWORD *k; // rbx
  struct _VIDSCH_SYNC_OBJECT *v36; // rax
  struct DXGCONTEXT **v37; // r15
  __int64 v38; // r12
  _QWORD *v39; // r14
  _QWORD *m; // rbx
  struct _VIDSCH_SYNC_OBJECT *v41; // rax
  _BYTE v42[8]; // [rsp+60h] [rbp-A0h] BYREF
  char v43; // [rsp+68h] [rbp-98h]
  struct _VIDSCH_SYNC_OBJECT *VidSchSyncObject; // [rsp+70h] [rbp-90h] BYREF
  _BYTE v45[24]; // [rsp+78h] [rbp-88h] BYREF
  _BYTE *v46; // [rsp+90h] [rbp-70h]
  _BYTE v47[64]; // [rsp+98h] [rbp-68h] BYREF
  unsigned int v48; // [rsp+D8h] [rbp-28h]
  _QWORD v49[16]; // [rsp+E0h] [rbp-20h] BYREF
  __int64 v50; // [rsp+170h] [rbp+70h] BYREF
  char v51; // [rsp+188h] [rbp+88h]

  v51 = a4;
  v6 = (struct DXGDEVICESYNCOBJECT **)((char *)this + 240);
  v7 = a3;
  if ( !*((_QWORD *)this + 30) )
  {
    memset(v49, 0, 0x50uLL);
    HIDWORD(v49[0]) |= 0x80u;
    LODWORD(v49[0]) = 5;
    *((_QWORD *)this + 31) = 0LL;
    v49[1] = 0LL;
    Global = DXGGLOBAL_GetGlobal();
    DXGSYNCOBJECTLOCK::DXGSYNCOBJECTLOCK((DXGSYNCOBJECTLOCK *)v42, Global, 1);
    if ( !a6 )
      DXGSYNCOBJECTLOCK::AcquireShared((DXGSYNCOBJECTLOCK *)v42);
    v11 = DXGGLOBAL_GetGlobal();
    SyncObject = DXGGLOBAL::CreateSyncObject(
                   (__int64)v11,
                   *(struct ADAPTER_RENDER **)(*((_QWORD *)this + 2) + 16LL),
                   *((struct DXGDEVICE **)this + 2),
                   (unsigned int)(1 << *((_DWORD *)this + 100)),
                   (__int64)v49,
                   0x11u,
                   0,
                   0LL,
                   0LL,
                   v6,
                   0LL,
                   0LL);
    v13 = SyncObject;
    if ( SyncObject < 0 )
    {
      WdLogSingleEntry2(3LL, this, SyncObject);
      if ( v43 )
        DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)v42);
      return v13;
    }
    if ( v43 )
      DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)v42);
  }
  v50 = ++*((_QWORD *)this + 31);
  v15 = v7 + 1;
  RenderHwQueueCount = DXGCONTEXT::GetRenderHwQueueCount(this);
  if ( (unsigned int)(v7 + 1) > 1 )
  {
    v18 = a2 + 1;
    do
    {
      RenderHwQueueCount += DXGCONTEXT::GetRenderHwQueueCount(*v18);
      v18 = (DXGCONTEXT **)(v19 + 8);
      v17 = v20 - 1;
    }
    while ( v17 );
  }
  v48 = 0;
  Pool2 = 0LL;
  v46 = 0LL;
  if ( RenderHwQueueCount <= 8 )
  {
    Pool2 = v47;
    v46 = v47;
    if ( RenderHwQueueCount )
    {
      memset(v47, 0, 8LL * RenderHwQueueCount);
      Pool2 = v46;
    }
    goto LABEL_18;
  }
  if ( 0xFFFFFFFFFFFFFFFFuLL / RenderHwQueueCount >= 8 )
  {
    Pool2 = (_BYTE *)ExAllocatePool2(256LL, 8LL * RenderHwQueueCount, 1265072196LL, v17);
    v46 = Pool2;
LABEL_18:
    v48 = RenderHwQueueCount;
  }
  if ( Pool2 )
  {
    v23 = 0;
    v24 = (_QWORD *)((char *)this + 408);
    for ( i = (_QWORD *)*((_QWORD *)this + 51); i != v24 && i; i = (_QWORD *)*i )
    {
      v26 = v23++;
      *(_QWORD *)&Pool2[8 * v26] = i[5];
    }
    if ( v15 > 1 )
    {
      v27 = a2 + 1;
      v28 = v7;
      do
      {
        v29 = (_QWORD *)((char *)*v27 + 408);
        for ( j = (_QWORD *)*v29; j != v29 && j; j = (_QWORD *)*j )
        {
          v31 = v23++;
          *(_QWORD *)&Pool2[8 * v31] = j[5];
        }
        ++v27;
        --v28;
      }
      while ( v28 );
    }
    DXGAUTOMUTEX::DXGAUTOMUTEX(
      (DXGAUTOMUTEX *)v45,
      (struct DXGFASTMUTEX *const)(*(_QWORD *)(*((_QWORD *)this + 30) + 32LL) + 32LL),
      0);
    DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v45);
    VidSchSyncObject = DXGSYNCOBJECT::GetVidSchSyncObject(
                         *(DXGSYNCOBJECT **)(*((_QWORD *)this + 30) + 32LL),
                         *(struct ADAPTER_RENDER **)(*(_QWORD *)(*((_QWORD *)this + 30) + 16LL) + 16LL));
    v22 = (*(__int64 (__fastcall **)(_QWORD, _BYTE *, __int64, struct _VIDSCH_SYNC_OBJECT **, _DWORD, __int64 *))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 624LL) + 8LL) + 648LL))(
            RenderHwQueueCount,
            Pool2,
            1LL,
            &VidSchSyncObject,
            0,
            &v50);
    if ( v22 >= 0 )
    {
      v32 = a5;
      v33 = v50;
      v34 = VidSchSyncObject;
      if ( a5 )
      {
        *((_QWORD *)a5 + 66) = VidSchSyncObject;
        *((_QWORD *)v32 + 67) = v33;
      }
      if ( v51 )
      {
        v22 = (*(__int64 (__fastcall **)(_QWORD, struct _VIDSCH_SYNC_OBJECT *, __int64))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 624LL) + 8LL)
                                                                                       + 632LL))(
                *((_QWORD *)this + 36),
                v34,
                v33);
      }
      else
      {
        DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v45);
        for ( k = (_QWORD *)*v24; k != v24 && k; k = (_QWORD *)*k )
        {
          DXGAUTOMUTEX::DXGAUTOMUTEX(
            (DXGAUTOMUTEX *)v42,
            (struct DXGFASTMUTEX *const)(*(_QWORD *)(k[9] + 32LL) + 32LL),
            0);
          DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v42);
          v36 = DXGSYNCOBJECT::GetVidSchSyncObject(
                  *(DXGSYNCOBJECT **)(k[9] + 32LL),
                  *(struct ADAPTER_RENDER **)(*(_QWORD *)(k[9] + 16LL) + 16LL));
          v22 = (*(__int64 (__fastcall **)(_QWORD, struct _VIDSCH_SYNC_OBJECT *, _QWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 624LL) + 8LL)
                                                                                        + 632LL))(
                  *((_QWORD *)this + 36),
                  v36,
                  k[10]);
          if ( v43 )
            DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v42);
        }
        if ( v15 > 1 )
        {
          v37 = a2 + 1;
          v38 = v7;
          do
          {
            v39 = (_QWORD *)((char *)*v37 + 408);
            for ( m = (_QWORD *)*v39; m != v39 && m; m = (_QWORD *)*m )
            {
              DXGAUTOMUTEX::DXGAUTOMUTEX(
                (DXGAUTOMUTEX *)v42,
                (struct DXGFASTMUTEX *const)(*(_QWORD *)(m[9] + 32LL) + 32LL),
                0);
              DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v42);
              v41 = DXGSYNCOBJECT::GetVidSchSyncObject(
                      *(DXGSYNCOBJECT **)(m[9] + 32LL),
                      *(struct ADAPTER_RENDER **)(*(_QWORD *)(m[9] + 16LL) + 16LL));
              v22 = (*(__int64 (__fastcall **)(_QWORD, struct _VIDSCH_SYNC_OBJECT *, _QWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 624LL) + 8LL)
                                                                                            + 632LL))(
                      *((_QWORD *)this + 36),
                      v41,
                      m[10]);
              if ( v43 )
                DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v42);
            }
            ++v37;
            --v38;
          }
          while ( v38 );
        }
      }
    }
    if ( v45[8] )
      DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v45);
    Pool2 = v46;
  }
  else
  {
    v22 = -1073741801;
  }
  if ( Pool2 != v47 && Pool2 )
    ExFreePoolWithTag(Pool2, 0);
  return (unsigned int)v22;
}
