/*
 * XREFs of ?InitializeVirtualMachine@DXGVIRTUALMACHINE@@QEAAJPEAXE@Z @ 0x1C0285624
 * Callers:
 *     DxgkDeviceIoctl @ 0x1C0044460 (DxgkDeviceIoctl.c)
 *     ?SetVirtualGpuVmBus@DXGK_VIRTUAL_GPU_PARAV@@UEAAJPEAU_DXGKARG_SETVIRTUALGPUVMBUS@@@Z @ 0x1C0235DA0 (-SetVirtualGpuVmBus@DXGK_VIRTUAL_GPU_PARAV@@UEAAJPEAU_DXGKARG_SETVIRTUALGPUVMBUS@@@Z.c)
 *     ?SetVirtualGpuVmBus@DXGK_VIRTUAL_GPU_GPUP@@UEAAJPEAU_DXGKARG_SETVIRTUALGPUVMBUS@@@Z @ 0x1C02375E0 (-SetVirtualGpuVmBus@DXGK_VIRTUAL_GPU_GPUP@@UEAAJPEAU_DXGKARG_SETVIRTUALGPUVMBUS@@@Z.c)
 * Callees:
 *     ?Release@DxgkCompositionObject@@QEBA_JXZ @ 0x1C001AAD0 (-Release@DxgkCompositionObject@@QEBA_JXZ.c)
 *     ?CreateVmBusChannel@DXG_HOST_GLOBAL_VMBUS@@QEAAJPEAXPEAVDXGPROCESSVMWP@@@Z @ 0x1C02383C8 (-CreateVmBusChannel@DXG_HOST_GLOBAL_VMBUS@@QEAAJPEAXPEAVDXGPROCESSVMWP@@@Z.c)
 *     ?SetVailObject@DXGVIRTUALMACHINE@@QEAAXPEAVDXGVAILOBJECT@@@Z @ 0x1C0286358 (-SetVailObject@DXGVIRTUALMACHINE@@QEAAXPEAVDXGVAILOBJECT@@@Z.c)
 *     ?Create@DXGVAILOBJECT@@SAJPEAPEAV1@@Z @ 0x1C02B4AC8 (-Create@DXGVAILOBJECT@@SAJPEAPEAV1@@Z.c)
 *     ?InitializeVmBus@DXGVAILOBJECT@@QEAAJPEAX@Z @ 0x1C02B57D4 (-InitializeVmBus@DXGVAILOBJECT@@QEAAJPEAX@Z.c)
 *     ?IsFeatureEnabled@DXGVAILOBJECT@@SAEXZ @ 0x1C02B587C (-IsFeatureEnabled@DXGVAILOBJECT@@SAEXZ.c)
 *     ?UpdateVmBus@DXGVAILOBJECT@@QEAAJPEAX@Z @ 0x1C02B5C8C (-UpdateVmBus@DXGVAILOBJECT@@QEAAJPEAX@Z.c)
 */

__int64 __fastcall DXGVIRTUALMACHINE::InitializeVirtualMachine(struct DXGPROCESSVMWP **this, void *a2, char a3)
{
  __int64 v3; // rbx
  struct VMBCHANNEL__ **v7; // rcx
  int VmBusChannel; // eax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rax
  int v12; // eax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v16; // rax
  DXGVAILOBJECT *v17; // rcx
  int updated; // eax
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // rax
  DxgkCompositionObject *v22; // [rsp+38h] [rbp+10h] BYREF

  LODWORD(v3) = 0;
  if ( a2 )
  {
    v7 = this + 16;
    if ( *v7 )
      return 0LL;
    VmBusChannel = DXG_HOST_GLOBAL_VMBUS::CreateVmBusChannel(v7, (__int64)a2, this[7]);
    v3 = VmBusChannel;
    if ( VmBusChannel < 0 )
    {
      v11 = WdLogNewEntry5_WdError(v10, v9);
      *(_QWORD *)(v11 + 24) = v3;
      WdLogEvent5_WdError(v11);
    }
  }
  if ( DXGVAILOBJECT::IsFeatureEnabled() )
  {
    if ( (int)v3 < 0 )
      return (unsigned int)v3;
    if ( !this[36] && a3 )
    {
      v22 = 0LL;
      v12 = DXGVAILOBJECT::Create(&v22);
      v3 = v12;
      if ( v12 < 0 )
      {
        v16 = WdLogNewEntry5_WdError(v14, v13);
        *(_QWORD *)(v16 + 24) = v3;
        WdLogEvent5_WdError(v16);
      }
      else
      {
        DXGVIRTUALMACHINE::SetVailObject((DXGVIRTUALMACHINE *)this, v22);
        DxgkCompositionObject::Release(v22);
      }
    }
    if ( (int)v3 < 0 )
      return (unsigned int)v3;
    if ( a2 )
    {
      v17 = this[36];
      if ( v17 )
      {
        if ( *((_QWORD *)v17 + 13) )
          updated = DXGVAILOBJECT::UpdateVmBus(v17, a2);
        else
          updated = DXGVAILOBJECT::InitializeVmBus(v17, a2);
        v3 = updated;
        if ( updated >= 0 )
          goto LABEL_22;
        v21 = WdLogNewEntry5_WdError(v20, v19);
        *(_QWORD *)(v21 + 24) = v3;
        WdLogEvent5_WdError(v21);
      }
    }
  }
  if ( (int)v3 >= 0 )
LABEL_22:
    *((_BYTE *)this + 297) = 0;
  return (unsigned int)v3;
}
