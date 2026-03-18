/*
 * XREFs of ?DestroyCoreState@DXGHWQUEUE@@IEAAXPEAVCOREDEVICEACCESS@@@Z @ 0x1C030E1A0
 * Callers:
 *     ?DestroyContext@DXGCONTEXT@@QEAAXPEAVCOREDEVICEACCESS@@@Z @ 0x1C016CC98 (-DestroyContext@DXGCONTEXT@@QEAAXPEAVCOREDEVICEACCESS@@@Z.c)
 *     ?CreateHwQueue@DXGCONTEXT@@QEAAJPEAU_D3DKMT_CREATEHWQUEUE@@PEAXPEAPEAVDXGHWQUEUE@@@Z @ 0x1C030DAEC (-CreateHwQueue@DXGCONTEXT@@QEAAJPEAU_D3DKMT_CREATEHWQUEUE@@PEAXPEAPEAVDXGHWQUEUE@@@Z.c)
 *     ?DestroyHwQueue@DXGCONTEXT@@QEAAXPEAVDXGHWQUEUE@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C030E37C (-DestroyHwQueue@DXGCONTEXT@@QEAAXPEAVDXGHWQUEUE@@PEAVCOREDEVICEACCESS@@@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C000C10C (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXPEAD@Z @ 0x1C000EE78 (-AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXPEAD@Z.c)
 *     ?Release@COREDEVICEACCESS@@QEAAXXZ @ 0x1C000EEA8 (-Release@COREDEVICEACCESS@@QEAAXXZ.c)
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00131F8 (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C002CCC0 (_guard_dispatch_icall_nop.c)
 *     McTemplateK0ppp_EtwWriteTransfer @ 0x1C00541B0 (McTemplateK0ppp_EtwWriteTransfer.c)
 *     ?DestroyCoreState@DXGDEVICESYNCOBJECT@@QEAAXXZ @ 0x1C0186AFC (-DestroyCoreState@DXGDEVICESYNCOBJECT@@QEAAXXZ.c)
 *     ?DdiDestroyHwQueue@ADAPTER_RENDER@@QEAAJPEAX@Z @ 0x1C02C81B0 (-DdiDestroyHwQueue@ADAPTER_RENDER@@QEAAJPEAX@Z.c)
 */

void __fastcall DXGHWQUEUE::DestroyCoreState(DXGHWQUEUE *this, PERESOURCE **a2)
{
  __int64 v4; // r8
  char v5; // di
  char *v6; // rdx
  void *v7; // rdx
  DXGDEVICESYNCOBJECT *v8; // rcx
  DXGDEVICESYNCOBJECT *v9; // rcx
  __int64 v10; // rax

  v5 = 1;
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(*(DXGADAPTER **)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL)
                                                                         + 16LL)
                                                             + 16LL)) )
  {
    WdLogSingleEntry1(1LL, 88LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"GetDevice()->GetRenderCore()->GetAdapter()->IsCoreResourceSharedOwner()",
      88LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 16LL) + 16LL) + 209LL) )
  {
    *((_BYTE *)this + 112) = 1;
  }
  else if ( !*((_BYTE *)this + 112) )
  {
    *((_BYTE *)this + 112) = 1;
    if ( *((_QWORD *)this + 5) )
    {
      if ( !a2 || DXGADAPTER::IsCoreResourceExclusiveOwner(a2[3]) )
        v5 = 0;
      else
        COREDEVICEACCESS::Release((COREDEVICEACCESS *)a2);
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL)
                                                                         + 16LL)
                                                             + 624LL)
                                                 + 8LL)
                                     + 304LL))(*((_QWORD *)this + 5));
      if ( v5 )
        COREDEVICEACCESS::AcquireSharedUncheck((COREDEVICEACCESS *)a2, v6);
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL)
                                                                         + 16LL)
                                                             + 624LL)
                                                 + 8LL)
                                     + 264LL))(*((_QWORD *)this + 5));
      *((_QWORD *)this + 5) = 0LL;
    }
    v7 = (void *)*((_QWORD *)this + 4);
    if ( v7 )
    {
      ADAPTER_RENDER::DdiDestroyHwQueue(*(ADAPTER_RENDER **)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 16LL), v7, v4);
      *((_QWORD *)this + 4) = 0LL;
    }
    v8 = (DXGDEVICESYNCOBJECT *)*((_QWORD *)this + 9);
    if ( v8 )
      DXGDEVICESYNCOBJECT::DestroyCoreState(v8);
    v9 = (DXGDEVICESYNCOBJECT *)*((_QWORD *)this + 11);
    if ( v9 )
      DXGDEVICESYNCOBJECT::DestroyCoreState(v9);
    v10 = *((_QWORD *)this + 6);
    if ( v10 )
    {
      *(_DWORD *)(v10 + 44) = 0;
      DXGDEVICESYNCOBJECT::DestroyCoreState(*((DXGDEVICESYNCOBJECT **)this + 6));
    }
    if ( bTracingEnabled )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x400) != 0 )
        McTemplateK0ppp_EtwWriteTransfer(
          (REGHANDLE *)&DxgkControlGuid_Context,
          &EventDestroyHwQueue,
          v4,
          *((_QWORD *)this + 2),
          0LL,
          this);
    }
  }
}
