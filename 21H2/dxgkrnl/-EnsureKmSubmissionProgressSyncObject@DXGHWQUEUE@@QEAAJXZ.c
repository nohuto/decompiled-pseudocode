/*
 * XREFs of ?EnsureKmSubmissionProgressSyncObject@DXGHWQUEUE@@QEAAJXZ @ 0x1C0223396
 * Callers:
 *     ?Render@DXGCONTEXT@@QEAAJPEAU_D3DKMT_RENDER@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAPEAV1@PEAPEAVDXGALLOCATION@@PEAPEAVDXGHWQUEUE@@@Z @ 0x1C0171830 (-Render@DXGCONTEXT@@QEAAJPEAU_D3DKMT_RENDER@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSH.c)
 *     ?SubmitPresentWithDmaBuffer@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT@@PEAVDXGHWQUEUE@@PEAVDXGALLOCATION@@2PEAU_DXGKARG_PRESENT@@PEAU_VIDMM_DMA_BUFFER@@PEAUVIDSCH_SUBMIT_DATA_BASE@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C0172460 (-SubmitPresentWithDmaBuffer@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT@@PEAVDXGHWQUEUE@@PEAVDXGALLOCAT.c)
 *     ?RenderKmLda@DXGCONTEXT@@SAJPEAU_D3DKMT_RENDER@@PEAVCOREDEVICEACCESS@@PEAPEAV1@PEAPEAVDXGALLOCATION@@PEAPEAVDXGHWQUEUE@@@Z @ 0x1C033DA14 (-RenderKmLda@DXGCONTEXT@@SAJPEAU_D3DKMT_RENDER@@PEAVCOREDEVICEACCESS@@PEAPEAV1@PEAPEAVDXGALLOCAT.c)
 * Callees:
 *     ?Release@DXGSYNCOBJECTLOCK@@QEAAXXZ @ 0x1C0009A8C (-Release@DXGSYNCOBJECTLOCK@@QEAAXXZ.c)
 *     ?AcquireShared@DXGSYNCOBJECTLOCK@@QEAAXXZ @ 0x1C0009B5C (-AcquireShared@DXGSYNCOBJECTLOCK@@QEAAXXZ.c)
 *     ??0DXGSYNCOBJECTLOCK@@QEAA@QEAVDXGGLOBAL@@_N@Z @ 0x1C0009BB0 (--0DXGSYNCOBJECTLOCK@@QEAA@QEAVDXGGLOBAL@@_N@Z.c)
 *     ?DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ @ 0x1C000BBD0 (-DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C000C3F8 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000F574 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000F5FC (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??_GDXGDEVICESYNCOBJECT@@QEAAPEAXI@Z @ 0x1C001E3F0 (--_GDXGDEVICESYNCOBJECT@@QEAAPEAXI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C002CCC0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C002CFC0 (memset.c)
 *     ?GetVidSchSyncObject@DXGSYNCOBJECT@@QEAAPEAU_VIDSCH_SYNC_OBJECT@@PEAVADAPTER_RENDER@@@Z @ 0x1C016A93C (-GetVidSchSyncObject@DXGSYNCOBJECT@@QEAAPEAU_VIDSCH_SYNC_OBJECT@@PEAVADAPTER_RENDER@@@Z.c)
 *     ?CreateSyncObject@DXGGLOBAL@@QEAAJPEAVADAPTER_RENDER@@PEAVDXGDEVICE@@IPEAU_D3DDDI_SYNCHRONIZATIONOBJECTINFO2@@U_VIDSCH_SYNC_OBJECT_CLIENTHINT@@_NPEAVDXGPAGINGQUEUE@@PEAPEAVDXGSYNCOBJECT@@PEAPEAVDXGDEVICESYNCOBJECT@@PEAIPEAPEAVDXGADAPTERSYNCOBJECT@@@Z @ 0x1C0199294 (-CreateSyncObject@DXGGLOBAL@@QEAAJPEAVADAPTER_RENDER@@PEAVDXGDEVICE@@IPEAU_D3DDDI_SYNCHRONIZATIO.c)
 */

__int64 __fastcall DXGHWQUEUE::EnsureKmSubmissionProgressSyncObject(DXGHWQUEUE *this)
{
  struct DXGDEVICESYNCOBJECT **v1; // rbx
  struct DXGGLOBAL *Global; // rax
  struct DXGGLOBAL *v5; // rax
  int SyncObject; // eax
  unsigned int v7; // esi
  struct _VIDSCH_SYNC_OBJECT *VidSchSyncObject; // rax
  _BYTE v9[8]; // [rsp+68h] [rbp-9h] BYREF
  char v10; // [rsp+70h] [rbp-1h]
  _QWORD v11[10]; // [rsp+78h] [rbp+7h] BYREF

  v1 = (struct DXGDEVICESYNCOBJECT **)((char *)this + 88);
  if ( *((_QWORD *)this + 11) )
    return 0LL;
  memset(v11, 0, sizeof(v11));
  *((_QWORD *)this + 12) = 0LL;
  v11[1] = 0LL;
  LODWORD(v11[0]) = 5;
  Global = DXGGLOBAL_GetGlobal();
  DXGSYNCOBJECTLOCK::DXGSYNCOBJECTLOCK((DXGSYNCOBJECTLOCK *)v9, Global, 0);
  DXGSYNCOBJECTLOCK::AcquireShared((DXGSYNCOBJECTLOCK *)v9);
  v5 = DXGGLOBAL_GetGlobal();
  SyncObject = DXGGLOBAL::CreateSyncObject(
                 (__int64)v5,
                 *(struct ADAPTER_RENDER **)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 16LL),
                 *(struct DXGDEVICE **)(*((_QWORD *)this + 2) + 16LL),
                 (unsigned int)(1 << *(_DWORD *)(*((_QWORD *)this + 2) + 400LL)),
                 (__int64)v11,
                 4u,
                 0,
                 0LL,
                 0LL,
                 v1,
                 0LL,
                 0LL);
  v7 = SyncObject;
  if ( SyncObject >= 0 )
  {
    if ( v10 )
      DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)v9);
    DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v9, (struct DXGFASTMUTEX *const)(*((_QWORD *)*v1 + 4) + 32LL), 0);
    DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v9);
    VidSchSyncObject = DXGSYNCOBJECT::GetVidSchSyncObject(
                         *((DXGSYNCOBJECT **)*v1 + 4),
                         *(struct ADAPTER_RENDER **)(*((_QWORD *)*v1 + 2) + 16LL));
    (*(void (__fastcall **)(_QWORD, struct _VIDSCH_SYNC_OBJECT *, _QWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 16LL)
                                                                                                 + 624LL)
                                                                                     + 8LL)
                                                                         + 272LL))(
      *((_QWORD *)this + 5),
      VidSchSyncObject,
      0LL);
    if ( v10 )
      DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v9);
  }
  else
  {
    WdLogSingleEntry2(3LL, this, SyncObject);
    if ( v10 )
      DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)v9);
    if ( *v1 )
    {
      DXGDEVICESYNCOBJECT::`scalar deleting destructor'(*v1);
      *v1 = 0LL;
    }
  }
  return v7;
}
