/*
 * XREFs of ?DestroyDevice@DXGDEVICE@@QEAAXPEAVCOREDEVICEACCESS@@@Z @ 0x1C00E4D6C
 * Callers:
 *     ?DestroyAllDeviceState@DXGDEVICE@@QEAAXPEAVCOREDEVICEACCESS@@@Z @ 0x1C00E5260 (-DestroyAllDeviceState@DXGDEVICE@@QEAAXPEAVCOREDEVICEACCESS@@@Z.c)
 *     ?Stop@DXGDEVICE@@QEAAXE@Z @ 0x1C02568E8 (-Stop@DXGDEVICE@@QEAAXE@Z.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1C0002824 (--3@YAXPEAX@Z.c)
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x1C00055D4 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0028C00 (_guard_dispatch_icall_nop.c)
 *     McTemplateK0ppqpttq_EtwWriteTransfer @ 0x1C0043720 (McTemplateK0ppqpttq_EtwWriteTransfer.c)
 *     ?DestroyCoreState@DXGPAGINGQUEUE@@IEAAXPEAVCOREDEVICEACCESS@@@Z @ 0x1C00E4258 (-DestroyCoreState@DXGPAGINGQUEUE@@IEAAXPEAVCOREDEVICEACCESS@@@Z.c)
 *     ?CloseAdapter@DXGPROCESS@@QEAAXPEAVADAPTER_RENDER@@@Z @ 0x1C00E4F9C (-CloseAdapter@DXGPROCESS@@QEAAXPEAVADAPTER_RENDER@@@Z.c)
 *     ?DdiDestroyDevice@ADAPTER_RENDER@@QEAAJPEAX@Z @ 0x1C00E50D4 (-DdiDestroyDevice@ADAPTER_RENDER@@QEAAJPEAX@Z.c)
 *     ?FlushDeferredDestruction@DXGDEVICE@@QEAAXPEAVCOREDEVICEACCESS@@EE@Z @ 0x1C00E549C (-FlushDeferredDestruction@DXGDEVICE@@QEAAXPEAVCOREDEVICEACCESS@@EE@Z.c)
 *     ?IterateOutputDuplMgrsForRender@ADAPTER_DISPLAY@@QEAAJP6AJPEAVOUTPUTDUPL_MGR@@PEAX@Z1@Z @ 0x1C00E5824 (-IterateOutputDuplMgrsForRender@ADAPTER_DISPLAY@@QEAAJP6AJPEAVOUTPUTDUPL_MGR@@PEAX@Z1@Z.c)
 *     ?DestroyContext@DXGCONTEXT@@QEAAXPEAVCOREDEVICEACCESS@@@Z @ 0x1C00E5EDC (-DestroyContext@DXGCONTEXT@@QEAAXPEAVCOREDEVICEACCESS@@@Z.c)
 *     ?DestroyCoreState@DXGDEVICESYNCOBJECT@@QEAAXXZ @ 0x1C0116448 (-DestroyCoreState@DXGDEVICESYNCOBJECT@@QEAAXXZ.c)
 *     ?VmBusSendSyncMessage@DXG_VMBUS_CHANNEL_BASE@@QEAAJPEAUDXGKVMB_COMMAND_BASE@@IPEAXPEAIPEAU_MDL@@@Z @ 0x1C024CF2C (-VmBusSendSyncMessage@DXG_VMBUS_CHANNEL_BASE@@QEAAJPEAUDXGKVMB_COMMAND_BASE@@IPEAXPEAIPEAU_MDL@@.c)
 *     ?GetHostProcess@DXGPROCESS@@QEAAIXZ @ 0x1C0285260 (-GetHostProcess@DXGPROCESS@@QEAAIXZ.c)
 */

void __fastcall DXGDEVICE::DestroyDevice(ADAPTER_RENDER **this, struct COREDEVICEACCESS *a2)
{
  struct COREDEVICEACCESS *v4; // rdx
  unsigned int i; // esi
  __int64 v6; // rdi
  ReferenceCounted *v7; // rcx
  DXGPAGINGQUEUE *j; // rdi
  DXGDEVICESYNCOBJECT *k; // rdi
  DXGCONTEXT *m; // rdi
  ADAPTER_RENDER *v11; // rdx
  ADAPTER_RENDER *v12; // rcx
  DXGPROCESS *v13; // rcx
  ADAPTER_RENDER *v14; // rax
  struct _MDL *v15; // [rsp+28h] [rbp-50h]
  unsigned int v16; // [rsp+48h] [rbp-30h]
  __int64 v17; // [rsp+50h] [rbp-28h] BYREF
  unsigned int HostProcess; // [rsp+58h] [rbp-20h]
  int v19; // [rsp+5Ch] [rbp-1Ch]
  int v20; // [rsp+60h] [rbp-18h]
  int v21; // [rsp+68h] [rbp-10h]

  DXGDEVICE::FlushDeferredDestruction((DXGDEVICE *)this, a2, 0, 0);
  for ( i = 0; i < *((_DWORD *)this + 464); this[v6 + 207] = 0LL )
  {
    v6 = i;
    v7 = this[i + 191];
    if ( v7 )
    {
      ReferenceCounted::Release(v7, (__int64)v4);
      this[i + 191] = 0LL;
    }
    operator delete(this[i++ + 207]);
  }
  for ( j = this[62]; j != (DXGPAGINGQUEUE *)(this + 62) && j; j = *(DXGPAGINGQUEUE **)j )
    DXGPAGINGQUEUE::DestroyCoreState(j, v4);
  for ( k = this[64]; k != (DXGDEVICESYNCOBJECT *)(this + 64) && k; k = *(DXGDEVICESYNCOBJECT **)k )
    DXGDEVICESYNCOBJECT::DestroyCoreState(k);
  if ( this[236] )
  {
    (*(void (**)(void))(*(_QWORD *)(*((_QWORD *)this[2] + 77) + 8LL) + 616LL))();
    this[236] = 0LL;
  }
  for ( m = this[58]; m != (DXGCONTEXT *)(this + 58) && m; m = *(DXGCONTEXT **)m )
    DXGCONTEXT::DestroyContext(m, a2);
  v11 = this[73];
  if ( v11 )
  {
    ADAPTER_RENDER::DdiDestroyDevice(this[2], v11);
    this[73] = 0LL;
  }
  if ( this[95] )
  {
    (*(void (**)(void))(*(_QWORD *)(*((_QWORD *)this[2] + 80) + 8LL) + 408LL))();
    this[95] = 0LL;
  }
  if ( this[96] )
  {
    (*(void (**)(void))(*(_QWORD *)(*((_QWORD *)this[2] + 77) + 8LL) + 120LL))();
    this[96] = 0LL;
  }
  v12 = this[231];
  if ( v12 )
    ADAPTER_DISPLAY::IterateOutputDuplMgrsForRender(
      *((ADAPTER_DISPLAY **)v12 + 337),
      (int (*)(struct OUTPUTDUPL_MGR *, void *))W32kStub_UserRemoveWindowedSwapChain,
      this);
  if ( *((_BYTE *)this + 1870) )
  {
    DXGPROCESS::CloseAdapter(this[5], this[2]);
    *((_BYTE *)this + 1870) = 0;
  }
  if ( *((_DWORD *)this + 110) )
  {
    v13 = this[5];
    v17 = 0LL;
    HostProcess = DXGPROCESS::GetHostProcess(v13);
    v21 = *((_DWORD *)this + 110);
    v14 = this[2];
    v19 = 0;
    v20 = 1;
    DXG_VMBUS_CHANNEL_BASE::VmBusSendSyncMessage(
      (DXG_VMBUS_CHANNEL_BASE *)(*((_QWORD *)v14 + 2) + 4240LL),
      (struct DXGKVMB_COMMAND_BASE *)&v17,
      0x20u,
      0LL,
      0LL,
      v15);
    *((_DWORD *)this + 110) = 0;
  }
  if ( bTracingEnabled )
  {
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
    {
      v16 = *((_DWORD *)this + 109);
      LODWORD(v15) = *((_DWORD *)this + 108);
      McTemplateK0ppqpttq_EtwWriteTransfer(
        *((unsigned __int8 *)this + 1866),
        &EventDestroyDevice,
        v16,
        *(_QWORD *)(*((_QWORD *)this[5] + 8) + 72LL),
        *((_QWORD *)this[2] + 2),
        v15,
        this,
        *((unsigned __int8 *)this + 1865),
        *((unsigned __int8 *)this + 1866),
        v16);
    }
  }
}
