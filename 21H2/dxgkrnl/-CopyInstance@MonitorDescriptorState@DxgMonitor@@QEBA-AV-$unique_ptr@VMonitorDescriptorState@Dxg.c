/*
 * XREFs of ?CopyInstance@MonitorDescriptorState@DxgMonitor@@QEBA?AV?$unique_ptr@VMonitorDescriptorState@DxgMonitor@@U?$default_delete@VMonitorDescriptorState@DxgMonitor@@@wistd@@@wistd@@AEBVIMonitorComponentParent@2@AEBVIMonitorRegistry@2@@Z @ 0x1C03B6E78
 * Callers:
 *     ?_CopyMonitorInformation@DXGMONITOR@@QEAAJPEBV1@@Z @ 0x1C03B5278 (-_CopyMonitorInformation@DXGMONITOR@@QEAAJPEBV1@@Z.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1C000CD40 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ??3@YAXPEAX@Z @ 0x1C000D96C (--3@YAXPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C002CCC0 (_guard_dispatch_icall_nop.c)
 *     ??0MultiMonitorDescriptor@DxgMonitor@@QEAA@AEAUIMonitorDescriptor@1@0@Z @ 0x1C006BAB4 (--0MultiMonitorDescriptor@DxgMonitor@@QEAA@AEAUIMonitorDescriptor@1@0@Z.c)
 *     ??0MonitorDescriptorState@DxgMonitor@@QEAA@AEBVIMonitorComponentParent@1@AEBVIMonitorRegistry@1@@Z @ 0x1C020864C (--0MonitorDescriptorState@DxgMonitor@@QEAA@AEBVIMonitorComponentParent@1@AEBVIMonitorRegistry@1@.c)
 *     ??1MonitorDescriptorState@DxgMonitor@@QEAA@XZ @ 0x1C03B6D8C (--1MonitorDescriptorState@DxgMonitor@@QEAA@XZ.c)
 */

DxgMonitor::MonitorDescriptorState **__fastcall DxgMonitor::MonitorDescriptorState::CopyInstance(
        __int64 a1,
        DxgMonitor::MonitorDescriptorState **a2,
        const struct DxgMonitor::IMonitorComponentParent *a3,
        const struct DxgMonitor::IMonitorRegistry *a4)
{
  DxgMonitor::MonitorDescriptorState *v8; // rax
  DxgMonitor::MonitorDescriptorState *v9; // rbx
  __int64 v10; // r9
  __int64 v11; // rcx
  __int64 *v12; // rax
  __int64 v13; // rdx
  void (__fastcall ***v14)(_QWORD, __int64); // rcx
  void (__fastcall ***v15)(_QWORD, __int64); // rcx
  __int64 v16; // rcx
  __int64 *v17; // rax
  __int64 v18; // rdx
  void (__fastcall ***v19)(_QWORD, __int64); // rcx
  void (__fastcall ***v20)(_QWORD, __int64); // rcx
  DxgMonitor::MultiMonitorDescriptor *v21; // rax
  DxgMonitor::MultiMonitorDescriptor *v22; // rax
  void (__fastcall ***v23)(_QWORD, __int64); // rcx
  __int64 v24; // rax
  __int64 v25; // rax
  _QWORD v27[3]; // [rsp+20h] [rbp-18h] BYREF

  v8 = (DxgMonitor::MonitorDescriptorState *)operator new[](0xB8uLL, 0x4D677844u, 256LL, (__int64)a4);
  if ( !v8 || (v9 = DxgMonitor::MonitorDescriptorState::MonitorDescriptorState(v8, a3, a4)) == 0LL )
  {
    *a2 = 0LL;
    return a2;
  }
  v11 = *(_QWORD *)(a1 + 128);
  if ( v11 )
  {
    v12 = (__int64 *)(*(__int64 (__fastcall **)(__int64, _QWORD *))(*(_QWORD *)v11 + 16LL))(v11, v27);
    v13 = *v12;
    *v12 = 0LL;
    v14 = (void (__fastcall ***)(_QWORD, __int64))*((_QWORD *)v9 + 16);
    *((_QWORD *)v9 + 16) = v13;
    if ( v14 )
      (**v14)(v14, 1LL);
    v15 = (void (__fastcall ***)(_QWORD, __int64))v27[0];
    v27[0] = 0LL;
    if ( v15 )
      (**v15)(v15, 1LL);
    if ( !*((_QWORD *)v9 + 16) )
      goto LABEL_9;
  }
  v16 = *(_QWORD *)(a1 + 136);
  if ( v16 )
  {
    v17 = (__int64 *)(*(__int64 (__fastcall **)(__int64, _QWORD *))(*(_QWORD *)v16 + 16LL))(v16, v27);
    v18 = *v17;
    *v17 = 0LL;
    v19 = (void (__fastcall ***)(_QWORD, __int64))*((_QWORD *)v9 + 17);
    *((_QWORD *)v9 + 17) = v18;
    if ( v19 )
      (**v19)(v19, 1LL);
    v20 = (void (__fastcall ***)(_QWORD, __int64))v27[0];
    v27[0] = 0LL;
    if ( v20 )
      (**v20)(v20, 1LL);
    if ( !*((_QWORD *)v9 + 17) )
      goto LABEL_9;
    *((_BYTE *)v9 + 152) = *(_BYTE *)(a1 + 152);
  }
  if ( !*(_QWORD *)(a1 + 144) )
    goto LABEL_24;
  v21 = (DxgMonitor::MultiMonitorDescriptor *)operator new[](0x28uLL, 0x4D677844u, 256LL, v10);
  v22 = v21
      ? DxgMonitor::MultiMonitorDescriptor::MultiMonitorDescriptor(
          v21,
          *((struct DxgMonitor::IMonitorDescriptor **)v9 + 16),
          *((struct DxgMonitor::IMonitorDescriptor **)v9 + 17))
      : 0LL;
  v23 = (void (__fastcall ***)(_QWORD, __int64))*((_QWORD *)v9 + 18);
  *((_QWORD *)v9 + 18) = v22;
  if ( v23 )
    (**v23)(v23, 1LL);
  if ( *((_QWORD *)v9 + 18) )
  {
LABEL_24:
    v24 = *(_QWORD *)(a1 + 160);
    if ( v24 == *(_QWORD *)(a1 + 128) )
    {
      v25 = *((_QWORD *)v9 + 16);
    }
    else if ( v24 == *(_QWORD *)(a1 + 136) )
    {
      v25 = *((_QWORD *)v9 + 17);
    }
    else
    {
      if ( v24 != *(_QWORD *)(a1 + 144) )
      {
LABEL_31:
        *a2 = v9;
        return a2;
      }
      v25 = *((_QWORD *)v9 + 18);
    }
    *((_QWORD *)v9 + 20) = v25;
    goto LABEL_31;
  }
LABEL_9:
  *a2 = 0LL;
  DxgMonitor::MonitorDescriptorState::~MonitorDescriptorState((PERESOURCE)v9);
  operator delete(v9);
  return a2;
}
