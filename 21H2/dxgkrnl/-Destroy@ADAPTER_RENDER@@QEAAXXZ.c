/*
 * XREFs of ?Destroy@ADAPTER_RENDER@@QEAAXXZ @ 0x1C02C3330
 * Callers:
 *     ?CreateRenderCore@ADAPTER_RENDER@@SAJPEAVDXGADAPTER@@PEAPEAV1@@Z @ 0x1C0201EB4 (-CreateRenderCore@ADAPTER_RENDER@@SAJPEAVDXGADAPTER@@PEAPEAV1@@Z.c)
 *     ?Destroy@DXGADAPTER@@QEAAXXZ @ 0x1C02BA5BC (-Destroy@DXGADAPTER@@QEAAXXZ.c)
 * Callees:
 *     ?DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ @ 0x1C000BBD0 (-DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ.c)
 *     ??_V@YAXPEAX@Z @ 0x1C000D990 (--_V@YAXPEAX@Z.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C000EE00 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z @ 0x1C000EF08 (--0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C000FABC (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??_GDXGPRESENTHISTORYTOKENQUEUE@@QEAAPEAXI@Z @ 0x1C001EE50 (--_GDXGPRESENTHISTORYTOKENQUEUE@@QEAAPEAXI@Z.c)
 *     ?Leave@DXGCRITICALREGION@@QEAAXXZ @ 0x1C0026D60 (-Leave@DXGCRITICALREGION@@QEAAXXZ.c)
 *     ?Enter@DXGCRITICALREGION@@QEAAXXZ @ 0x1C0026DF0 (-Enter@DXGCRITICALREGION@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C002CCC0 (_guard_dispatch_icall_nop.c)
 *     ?DestroyAdapterInfo@DXGPROCESS@@QEAAXPEAUDXGPROCESS_RENDER_ADAPTER_INFO@@@Z @ 0x1C016DBD4 (-DestroyAdapterInfo@DXGPROCESS@@QEAAXPEAUDXGPROCESS_RENDER_ADAPTER_INFO@@@Z.c)
 *     ?DestroySyncObject@DXGGLOBAL@@QEAAXPEAVDXGSYNCOBJECT@@I@Z @ 0x1C019A7B8 (-DestroySyncObject@DXGGLOBAL@@QEAAXPEAVDXGSYNCOBJECT@@I@Z.c)
 *     ?CloseVidMmAdapter@DXGPROCESS_RENDER_ADAPTER_INFO@@QEAAXPEAVDXGPROCESS@@PEAVADAPTER_RENDER@@@Z @ 0x1C01E5174 (-CloseVidMmAdapter@DXGPROCESS_RENDER_ADAPTER_INFO@@QEAAXPEAVDXGPROCESS@@PEAVADAPTER_RENDER@@@Z.c)
 *     ?DestroyVirtualGpuState@DXGVIRTUALGPUMANAGER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C03574B4 (-DestroyVirtualGpuState@DXGVIRTUALGPUMANAGER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 */

void __fastcall ADAPTER_RENDER::Destroy(ADAPTER_RENDER *this)
{
  DXGVIRTUALGPUMANAGER *v2; // rcx
  DXGVIRTUALGPUMANAGER *v3; // rcx
  PERESOURCE *Global; // rax
  _QWORD *v5; // r14
  _QWORD *i; // rsi
  __int64 v7; // rdi
  DXGPRESENTHISTORYTOKENQUEUE *v8; // rcx
  _BYTE v9[8]; // [rsp+20h] [rbp-28h] BYREF
  DXGPUSHLOCK *v10; // [rsp+28h] [rbp-20h]
  int j; // [rsp+30h] [rbp-18h]
  char v12; // [rsp+50h] [rbp+8h] BYREF
  char v13; // [rsp+51h] [rbp+9h]

  v13 = 0;
  DXGCRITICALREGION::Enter((DXGCRITICALREGION *)&v12);
  v2 = (DXGVIRTUALGPUMANAGER *)*((_QWORD *)this + 217);
  if ( v2 )
    DXGVIRTUALGPUMANAGER::DestroyVirtualGpuState(v2, 0LL);
  v3 = (DXGVIRTUALGPUMANAGER *)*((_QWORD *)this + 216);
  if ( v3 )
    DXGVIRTUALGPUMANAGER::DestroyVirtualGpuState(v3, 0LL);
  if ( *((_QWORD *)this + 99) )
  {
    Global = (PERESOURCE *)DXGGLOBAL_GetGlobal();
    DXGGLOBAL::DestroySyncObject(Global, *((struct DXGSYNCOBJECT **)this + 99), 0);
    *((_QWORD *)this + 99) = 0LL;
  }
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx((char *)this + 72, 0LL);
  v5 = (_QWORD *)((char *)this + 296);
  *((_QWORD *)this + 10) = KeGetCurrentThread();
  for ( i = (_QWORD *)*((_QWORD *)this + 37); i != v5; i = (_QWORD *)*i )
    DXGPROCESS_RENDER_ADAPTER_INFO::CloseVidMmAdapter(
      (DXGPROCESS_RENDER_ADAPTER_INFO *)(i - 7),
      (struct DXGPROCESS *)*(i - 3),
      this);
  *((_QWORD *)this + 10) = 0LL;
  ExReleasePushLockExclusiveEx((char *)this + 72, 0LL);
  KeLeaveCriticalRegion();
  if ( *((_QWORD *)this + 82) )
  {
    (*(void (**)(void))(*(_QWORD *)(*((_QWORD *)this + 81) + 8LL) + 32LL))();
    *((_QWORD *)this + 82) = 0LL;
  }
  if ( *((_QWORD *)this + 79) )
  {
    (*(void (**)(void))(*(_QWORD *)(*((_QWORD *)this + 78) + 8LL) + 32LL))();
    *((_QWORD *)this + 79) = 0LL;
  }
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx((char *)this + 72, 0LL);
  *((_QWORD *)this + 10) = KeGetCurrentThread();
  while ( (_QWORD *)*v5 != v5 )
    DXGPROCESS::DestroyAdapterInfo(*(DXGPROCESS **)(*v5 - 24LL), (struct ADAPTER_RENDER **)(*v5 - 56LL));
  *((_QWORD *)this + 10) = 0LL;
  ExReleasePushLockExclusiveEx((char *)this + 72, 0LL);
  KeLeaveCriticalRegion();
  DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v9, (struct _KTHREAD **)this + 108, 0);
  DXGPUSHLOCK::AcquireExclusive(v10);
  v7 = 0LL;
  for ( j = 2; (unsigned int)v7 < *((_DWORD *)this + 224); v7 = (unsigned int)(v7 + 1) )
  {
    v8 = *(DXGPRESENTHISTORYTOKENQUEUE **)(*((_QWORD *)this + 113) + 8 * v7);
    if ( v8 )
      DXGPRESENTHISTORYTOKENQUEUE::`scalar deleting destructor'(v8);
  }
  operator delete[](*((void **)this + 113));
  *((_DWORD *)this + 224) = 0;
  *((_QWORD *)this + 113) = 0LL;
  DXGCRITICALREGION::Leave((DXGCRITICALREGION *)&v12);
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v9);
  if ( v13 )
    DXGCRITICALREGION::Leave((DXGCRITICALREGION *)&v12);
}
