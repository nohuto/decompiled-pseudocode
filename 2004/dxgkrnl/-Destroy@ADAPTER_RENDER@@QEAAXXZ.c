/*
 * XREFs of ?Destroy@ADAPTER_RENDER@@QEAAXXZ @ 0x1C02158A0
 * Callers:
 *     ?CreateRenderCore@ADAPTER_RENDER@@SAJPEAVDXGADAPTER@@PEAPEAV1@@Z @ 0x1C017C7B4 (-CreateRenderCore@ADAPTER_RENDER@@SAJPEAVDXGADAPTER@@PEAPEAV1@@Z.c)
 *     ?Destroy@DXGADAPTER@@QEAAXXZ @ 0x1C020C1A4 (-Destroy@DXGADAPTER@@QEAAXXZ.c)
 * Callees:
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0002ADC (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z @ 0x1C0002B54 (--0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z.c)
 *     ??_V@YAXPEAX@Z @ 0x1C0002C80 (--_V@YAXPEAX@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0004010 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C00042F0 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??_GDXGPRESENTHISTORYTOKENQUEUE@@QEAAPEAXI@Z @ 0x1C001A388 (--_GDXGPRESENTHISTORYTOKENQUEUE@@QEAAPEAXI@Z.c)
 *     ?Leave@DXGCRITICALREGION@@QEAAXXZ @ 0x1C0021948 (-Leave@DXGCRITICALREGION@@QEAAXXZ.c)
 *     ?Enter@DXGCRITICALREGION@@QEAAXXZ @ 0x1C00219D0 (-Enter@DXGCRITICALREGION@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C00271E0 (_guard_dispatch_icall_nop.c)
 *     ?DestroySyncObject@DXGGLOBAL@@QEAAXPEAVDXGSYNCOBJECT@@I@Z @ 0x1C0113088 (-DestroySyncObject@DXGGLOBAL@@QEAAXPEAVDXGSYNCOBJECT@@I@Z.c)
 *     ?DestroyAdapterInfo@DXGPROCESS@@QEAAXPEAUDXGPROCESS_ADAPTER_INFO@@@Z @ 0x1C011399C (-DestroyAdapterInfo@DXGPROCESS@@QEAAXPEAUDXGPROCESS_ADAPTER_INFO@@@Z.c)
 *     ?CloseVidMmAdapter@DXGPROCESS_ADAPTER_INFO@@QEAAXPEAVDXGPROCESS@@PEAVADAPTER_RENDER@@@Z @ 0x1C016658C (-CloseVidMmAdapter@DXGPROCESS_ADAPTER_INFO@@QEAAXPEAVDXGPROCESS@@PEAVADAPTER_RENDER@@@Z.c)
 *     ?DestroyVirtualGpuState@DXGVIRTUALGPUMANAGER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C022FA0C (-DestroyVirtualGpuState@DXGVIRTUALGPUMANAGER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 */

void __fastcall ADAPTER_RENDER::Destroy(ADAPTER_RENDER *this, __int64 a2)
{
  __int64 v3; // rdx
  DXGVIRTUALGPUMANAGER *v4; // rcx
  DXGVIRTUALGPUMANAGER *v5; // rcx
  struct DXGSYNCOBJECT *v6; // rdi
  PERESOURCE *Global; // rax
  _QWORD *v8; // r14
  _QWORD *i; // rsi
  __int64 v10; // rdi
  DXGPRESENTHISTORYTOKENQUEUE *v11; // rcx
  __int64 v12; // rdx
  __int64 v13; // rdx
  _BYTE v14[8]; // [rsp+20h] [rbp-28h] BYREF
  DXGPUSHLOCK *v15; // [rsp+28h] [rbp-20h]
  int j; // [rsp+30h] [rbp-18h]
  char v17; // [rsp+50h] [rbp+8h] BYREF
  char v18; // [rsp+51h] [rbp+9h]

  v18 = 0;
  DXGCRITICALREGION::Enter((DXGCRITICALREGION *)&v17, a2);
  v4 = (DXGVIRTUALGPUMANAGER *)*((_QWORD *)this + 205);
  if ( v4 )
    DXGVIRTUALGPUMANAGER::DestroyVirtualGpuState(v4, 0LL);
  v5 = (DXGVIRTUALGPUMANAGER *)*((_QWORD *)this + 204);
  if ( v5 )
    DXGVIRTUALGPUMANAGER::DestroyVirtualGpuState(v5, 0LL);
  v6 = (struct DXGSYNCOBJECT *)*((_QWORD *)this + 96);
  if ( v6 )
  {
    Global = (PERESOURCE *)DXGGLOBAL::GetGlobal((__int64)v5, v3);
    DXGGLOBAL::DestroySyncObject(Global, v6, 0);
    *((_QWORD *)this + 96) = 0LL;
  }
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx((char *)this + 72, 0LL);
  v8 = (_QWORD *)((char *)this + 288);
  *((_QWORD *)this + 10) = KeGetCurrentThread();
  for ( i = (_QWORD *)*((_QWORD *)this + 36); i != v8; i = (_QWORD *)*i )
    DXGPROCESS_ADAPTER_INFO::CloseVidMmAdapter((DXGPROCESS_ADAPTER_INFO *)(i - 7), (struct DXGPROCESS *)*(i - 3), this);
  *((_QWORD *)this + 10) = 0LL;
  ExReleasePushLockExclusiveEx((char *)this + 72, 0LL);
  KeLeaveCriticalRegion();
  if ( *((_QWORD *)this + 81) )
  {
    (*(void (**)(void))(*(_QWORD *)(*((_QWORD *)this + 80) + 8LL) + 32LL))();
    *((_QWORD *)this + 81) = 0LL;
  }
  if ( *((_QWORD *)this + 78) )
  {
    (*(void (**)(void))(*(_QWORD *)(*((_QWORD *)this + 77) + 8LL) + 32LL))();
    *((_QWORD *)this + 78) = 0LL;
  }
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx((char *)this + 72, 0LL);
  *((_QWORD *)this + 10) = KeGetCurrentThread();
  while ( (_QWORD *)*v8 != v8 )
    DXGPROCESS::DestroyAdapterInfo(*(DXGPROCESS **)(*v8 - 24LL), (struct ADAPTER_RENDER **)(*v8 - 56LL));
  *((_QWORD *)this + 10) = 0LL;
  ExReleasePushLockExclusiveEx((char *)this + 72, 0LL);
  KeLeaveCriticalRegion();
  DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v14, (struct _KTHREAD **)this + 105, 0);
  DXGPUSHLOCK::AcquireExclusive(v15);
  v10 = 0LL;
  for ( j = 2; (unsigned int)v10 < *((_DWORD *)this + 218); v10 = (unsigned int)(v10 + 1) )
  {
    v11 = *(DXGPRESENTHISTORYTOKENQUEUE **)(*((_QWORD *)this + 110) + 8 * v10);
    if ( v11 )
      DXGPRESENTHISTORYTOKENQUEUE::`scalar deleting destructor'(v11);
  }
  operator delete[](*((void **)this + 110));
  *((_DWORD *)this + 218) = 0;
  *((_QWORD *)this + 110) = 0LL;
  DXGCRITICALREGION::Leave((DXGCRITICALREGION *)&v17, v12);
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v14);
  if ( v18 )
    DXGCRITICALREGION::Leave((DXGCRITICALREGION *)&v17, v13);
}
