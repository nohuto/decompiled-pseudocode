/*
 * XREFs of ?DestroyCoreState@DXGHWQUEUE@@IEAAXPEAVCOREDEVICEACCESS@@@Z @ 0x1C026877C
 * Callers:
 *     ?DestroyContext@DXGCONTEXT@@QEAAXPEAVCOREDEVICEACCESS@@@Z @ 0x1C00DCBC8 (-DestroyContext@DXGCONTEXT@@QEAAXPEAVCOREDEVICEACCESS@@@Z.c)
 *     ?CreateHwQueue@DXGCONTEXT@@QEAAJPEAU_D3DKMT_CREATEHWQUEUE@@PEAXPEAPEAVDXGHWQUEUE@@@Z @ 0x1C02681AC (-CreateHwQueue@DXGCONTEXT@@QEAAJPEAU_D3DKMT_CREATEHWQUEUE@@PEAXPEAPEAVDXGHWQUEUE@@@Z.c)
 *     ?DestroyHwQueue@DXGCONTEXT@@QEAAXPEAVDXGHWQUEUE@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C026890C (-DestroyHwQueue@DXGCONTEXT@@QEAAXPEAVDXGHWQUEUE@@PEAVCOREDEVICEACCESS@@@Z.c)
 * Callees:
 *     ?Release@COREDEVICEACCESS@@QEAAXXZ @ 0x1C000A1D4 (-Release@COREDEVICEACCESS@@QEAAXXZ.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C000A6B4 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXPEAD@Z @ 0x1C000AA18 (-AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXPEAD@Z.c)
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00115CC (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0026570 (_guard_dispatch_icall_nop.c)
 *     McTemplateK0ppp_EtwWriteTransfer @ 0x1C0045254 (McTemplateK0ppp_EtwWriteTransfer.c)
 *     ?DestroyCoreState@DXGDEVICESYNCOBJECT@@QEAAXXZ @ 0x1C011B948 (-DestroyCoreState@DXGDEVICESYNCOBJECT@@QEAAXXZ.c)
 *     ?DdiDestroyHwQueue@ADAPTER_RENDER@@QEAAJPEAX@Z @ 0x1C0215A9C (-DdiDestroyHwQueue@ADAPTER_RENDER@@QEAAJPEAX@Z.c)
 */

void __fastcall DXGHWQUEUE::DestroyCoreState(DXGHWQUEUE *this, PERESOURCE **a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // rax
  bool v8; // zf
  char v9; // si
  char *v10; // rdx
  void *v11; // rdx
  DXGDEVICESYNCOBJECT *v12; // rcx
  DXGDEVICESYNCOBJECT *v13; // rcx

  if ( !DXGADAPTER::IsCoreResourceSharedOwner(*(DXGADAPTER **)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL)
                                                                         + 16LL)
                                                             + 16LL)) )
  {
    v7 = WdLogNewEntry5_WdAssertion(v5, v4);
    *(_QWORD *)(v7 + 24) = 78LL;
    WdLogEvent5_WdAssertion(v7);
  }
  if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 16LL) + 16LL) + 209LL) )
  {
    *((_BYTE *)this + 96) = 1;
  }
  else if ( !*((_BYTE *)this + 96) )
  {
    v8 = *((_QWORD *)this + 5) == 0LL;
    *((_BYTE *)this + 96) = 1;
    if ( !v8 )
    {
      if ( !a2 || DXGADAPTER::IsCoreResourceExclusiveOwner(a2[3]) )
      {
        v9 = 0;
      }
      else
      {
        v9 = 1;
        COREDEVICEACCESS::Release((COREDEVICEACCESS *)a2);
      }
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL)
                                                                         + 16LL)
                                                             + 616LL)
                                                 + 8LL)
                                     + 304LL))(*((_QWORD *)this + 5));
      if ( v9 )
        COREDEVICEACCESS::AcquireSharedUncheck((COREDEVICEACCESS *)a2, v10);
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL)
                                                                         + 16LL)
                                                             + 616LL)
                                                 + 8LL)
                                     + 264LL))(*((_QWORD *)this + 5));
      *((_QWORD *)this + 5) = 0LL;
    }
    v11 = (void *)*((_QWORD *)this + 4);
    if ( v11 )
    {
      ADAPTER_RENDER::DdiDestroyHwQueue(*(ADAPTER_RENDER **)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 16LL), v11, v6);
      *((_QWORD *)this + 4) = 0LL;
    }
    v12 = (DXGDEVICESYNCOBJECT *)*((_QWORD *)this + 9);
    if ( v12 )
      DXGDEVICESYNCOBJECT::DestroyCoreState(v12);
    v13 = (DXGDEVICESYNCOBJECT *)*((_QWORD *)this + 6);
    if ( v13 )
      DXGDEVICESYNCOBJECT::DestroyCoreState(v13);
    if ( bTracingEnabled )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
        McTemplateK0ppp_EtwWriteTransfer((__int64)v13, &EventDestroyHwQueue, v6, *((_QWORD *)this + 2), 0LL, this);
    }
  }
}
