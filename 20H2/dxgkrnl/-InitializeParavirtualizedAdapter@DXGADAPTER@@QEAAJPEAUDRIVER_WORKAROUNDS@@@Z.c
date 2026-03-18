/*
 * XREFs of ?InitializeParavirtualizedAdapter@DXGADAPTER@@QEAAJPEAUDRIVER_WORKAROUNDS@@@Z @ 0x1C020C98C
 * Callers:
 *     ?Initialize@DXGADAPTER@@QEAAJPEAU_DEVICE_OBJECT@@PEAU_DXGK_ADAPTER_CAPS@@@Z @ 0x1C017A068 (-Initialize@DXGADAPTER@@QEAAJPEAU_DEVICE_OBJECT@@PEAU_DXGK_ADAPTER_CAPS@@@Z.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0004010 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     __security_check_cookie @ 0x1C00243B0 (__security_check_cookie.c)
 *     memset @ 0x1C0027400 (memset.c)
 *     McTemplateK0pqqqqxx_EtwWriteTransfer @ 0x1C0039724 (McTemplateK0pqqqqxx_EtwWriteTransfer.c)
 *     ?VmBusSendAsyncMessage@@YAJPEAUVMBCHANNEL__@@PEAUDXGKVMB_COMMAND_BASE@@IPEAU_MDL@@@Z @ 0x1C004099C (-VmBusSendAsyncMessage@@YAJPEAUVMBCHANNEL__@@PEAUDXGKVMB_COMMAND_BASE@@IPEAU_MDL@@@Z.c)
 *     DpiGetAdapterInfo @ 0x1C0177B64 (DpiGetAdapterInfo.c)
 *     ?CopyRegistryKeys@DXGADAPTER@@QEAAJXZ @ 0x1C020A8B0 (-CopyRegistryKeys@DXGADAPTER@@QEAAJXZ.c)
 *     ?CreateVmBusChannel@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGADAPTER@@@Z @ 0x1C0237264 (-CreateVmBusChannel@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGADAPTER@@@Z.c)
 *     ?GetMmioSpaceInfo@DXG_GUEST_GLOBAL_VMBUS@@QEAAJPEA_K0@Z @ 0x1C0239600 (-GetMmioSpaceInfo@DXG_GUEST_GLOBAL_VMBUS@@QEAAJPEA_K0@Z.c)
 *     ?VmBusSendGetInternalAdapterInfo19h1@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAUDXGKVMB_COMMAND_GETINTERNALADAPTERINFO_RETURN1@@@Z @ 0x1C0247B20 (-VmBusSendGetInternalAdapterInfo19h1@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAUDXGKVMB_COMMAND_GETINT.c)
 *     ?VmBusSendGetInternalAdapterInfo@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAUDXGKVMB_COMMAND_GETINTERNALADAPTERINFO_RETURN@@@Z @ 0x1C0247BE8 (-VmBusSendGetInternalAdapterInfo@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAUDXGKVMB_COMMAND_GETINTERNA.c)
 *     ?VmBusSendOpenAdapter@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAIPEBU_LUID@@@Z @ 0x1C0248FD0 (-VmBusSendOpenAdapter@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAIPEBU_LUID@@@Z.c)
 *     ?VmBusSendSetIoSpaceRegion@DXG_GUEST_GLOBAL_VMBUS@@QEAAJ_K0I@Z @ 0x1C024AA18 (-VmBusSendSetIoSpaceRegion@DXG_GUEST_GLOBAL_VMBUS@@QEAAJ_K0I@Z.c)
 *     ?CopyDriverStore@DXGADAPTER@@QEAAJXZ @ 0x1C02608C0 (-CopyDriverStore@DXGADAPTER@@QEAAJXZ.c)
 *     ?EnsureVmBusInterface@DXGGLOBAL@@QEAAJXZ @ 0x1C0268208 (-EnsureVmBusInterface@DXGGLOBAL@@QEAAJXZ.c)
 *     ?HandleVirtualMachineReset@DXGGLOBAL@@QEAAXXZ @ 0x1C0268AF4 (-HandleVirtualMachineReset@DXGGLOBAL@@QEAAXXZ.c)
 *     DpiSetDriverVersion @ 0x1C02C5DAC (DpiSetDriverVersion.c)
 */

__int64 __fastcall DXGADAPTER::InitializeParavirtualizedAdapter(DXGADAPTER *this, struct DRIVER_WORKAROUNDS *a2)
{
  DXG_GUEST_VIRTUALGPU_VMBUS *v3; // r14
  char v5; // r13
  __int64 v6; // rdx
  __int64 v7; // rcx
  int VmBusChannel; // ebx
  __int64 v9; // r8
  unsigned int v10; // edi
  unsigned int v11; // eax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rdx
  __int64 v15; // rcx
  bool v16; // cf
  int v17; // eax
  DXGGLOBAL *Global; // rax
  DXGGLOBAL *v19; // rax
  DXG_GUEST_GLOBAL_VMBUS *v20; // r15
  struct DXGGLOBAL *v21; // rax
  __int64 v22; // rax
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  const EVENT_DESCRIPTOR *v26; // rdx
  __int64 v27; // rax
  struct _MDL *v28; // r9
  struct VMBCHANNEL__ *v29; // rcx
  int v31; // [rsp+28h] [rbp-D8h]
  unsigned int v32; // [rsp+38h] [rbp-C8h]
  unsigned __int64 v33; // [rsp+50h] [rbp-B0h] BYREF
  unsigned __int64 v34; // [rsp+58h] [rbp-A8h] BYREF
  _QWORD v35[2]; // [rsp+60h] [rbp-A0h] BYREF
  int v36; // [rsp+70h] [rbp-90h]
  int v37; // [rsp+78h] [rbp-88h]
  unsigned int v38; // [rsp+7Ch] [rbp-84h]
  int v39; // [rsp+80h] [rbp-80h]
  __int64 v40; // [rsp+88h] [rbp-78h]
  __int64 v41; // [rsp+90h] [rbp-70h]
  _QWORD v42[88]; // [rsp+98h] [rbp-68h] BYREF

  *((_BYTE *)this + 209) = 1;
  v3 = (DXGADAPTER *)((char *)this + 4240);
  v5 = 0;
  VmBusChannel = DXG_GUEST_VIRTUALGPU_VMBUS::CreateVmBusChannel((struct VMBCHANNEL__ **)this + 530, this);
  if ( VmBusChannel < 0 )
  {
    v10 = 1;
    goto LABEL_24;
  }
  v11 = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendOpenAdapter(
          v3,
          (const struct _LUID *)(*(_QWORD *)(*((_QWORD *)this + 27) + 64LL) + 2672LL));
  *((_DWORD *)this + 1078) = v11;
  if ( !v11 )
  {
    v10 = 2;
    VmBusChannel = -1073741823;
    goto LABEL_24;
  }
  memset(v42, 0, sizeof(v42));
  if ( *((_DWORD *)DXGGLOBAL::GetGlobal(v13, v12) + 408) <= 0x10u )
  {
    VmBusChannel = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendGetInternalAdapterInfo19h1(
                     v3,
                     (struct DXGKVMB_COMMAND_GETINTERNALADAPTERINFO_RETURN1 *)v42);
    if ( VmBusChannel < 0 )
    {
      v10 = 4;
      goto LABEL_24;
    }
  }
  else
  {
    VmBusChannel = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendGetInternalAdapterInfo(
                     v3,
                     (struct DXGKVMB_COMMAND_GETINTERNALADAPTERINFO_RETURN *)v42);
    if ( VmBusChannel < 0 )
    {
      v10 = 3;
      goto LABEL_24;
    }
  }
  v14 = LODWORD(v42[1]);
  v10 = 8;
  *(_DWORD *)a2 = *(_DWORD *)a2 & 0xFFFE7FFF | ((BYTE4(v42[1]) & 0x10 | (4 * (BYTE4(v42[1]) & 8))) << 11);
  DpiSetDriverVersion(*((_QWORD *)this + 27), v14, &v42[3], &v42[23]);
  VmBusChannel = DpiGetAdapterInfo(
                   *((_QWORD *)this + 27),
                   (_DWORD *)this + 348,
                   (_QWORD *)this + 34,
                   (DXGADAPTER *)((char *)this + 1880));
  if ( VmBusChannel < 0 )
    goto LABEL_11;
  v15 = HIDWORD(v42[1]);
  *((_DWORD *)this + 87) ^= (*((_DWORD *)this + 87) ^ LODWORD(v42[0])) & 0x18;
  *((_BYTE *)this + 210) = v15 & 1;
  v16 = HIDWORD(v42[0]) < 2;
  *((_BYTE *)this + 211) = (v15 & 4) != 0;
  v17 = 2;
  if ( v16 )
    v17 = HIDWORD(v42[0]);
  *((_DWORD *)this + 665) = v17;
  *(_QWORD *)((char *)this + 4324) = v42[2];
  if ( (v15 & 2) != 0 )
  {
    Global = DXGGLOBAL::GetGlobal(v15, v6);
    DXGGLOBAL::HandleVirtualMachineReset(Global);
  }
  v34 = 0LL;
  v33 = 0LL;
  v19 = DXGGLOBAL::GetGlobal(v15, v6);
  VmBusChannel = DXGGLOBAL::EnsureVmBusInterface(v19);
  if ( VmBusChannel < 0 )
  {
LABEL_11:
    v10 = 5;
  }
  else
  {
    v20 = (DXG_GUEST_GLOBAL_VMBUS *)*((_QWORD *)DXGGLOBAL::GetGlobal(v7, v6) + 197);
    VmBusChannel = DXG_GUEST_GLOBAL_VMBUS::GetMmioSpaceInfo(v20, &v34, &v33);
    if ( VmBusChannel >= 0 )
    {
      v21 = DXGGLOBAL::GetGlobal(v7, v6);
      VmBusChannel = DXG_GUEST_GLOBAL_VMBUS::VmBusSendSetIoSpaceRegion(v20, v34, v33, *((_DWORD *)v21 + 401));
      if ( VmBusChannel >= 0 )
      {
        VmBusChannel = DXGADAPTER::CopyDriverStore(this);
        if ( VmBusChannel >= 0 )
        {
          VmBusChannel = DXGADAPTER::CopyRegistryKeys(this, v6);
          if ( VmBusChannel >= 0 )
            return (unsigned int)VmBusChannel;
          v10 = 9;
          v5 = 1;
        }
      }
      else
      {
        v10 = 7;
      }
    }
    else
    {
      v10 = 6;
    }
  }
LABEL_24:
  if ( v5 )
  {
    v22 = WdLogNewEntry5_WdWarning(v7, v6, v9);
    *(_QWORD *)(v22 + 24) = VmBusChannel;
    *(_QWORD *)(v22 + 32) = v10;
    WdLogEvent5_WdWarning(v22);
    VmBusChannel = 0;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x4000000) != 0 )
    {
      v26 = (const EVENT_DESCRIPTOR *)&VirtualGpuGuestEvent;
      v32 = v10;
      v31 = 0;
LABEL_29:
      McTemplateK0pqqqqxx_EtwWriteTransfer(v24, v26, v25, this, 0, v31, 0, v32, 0LL, 0LL);
    }
  }
  else
  {
    v27 = WdLogNewEntry5_WdError(v7, v6);
    *(_QWORD *)(v27 + 24) = VmBusChannel;
    *(_QWORD *)(v27 + 32) = v10;
    WdLogEvent5_WdError(v27);
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000000) != 0 )
    {
      v26 = (const EVENT_DESCRIPTOR *)&VirtualGpuGuestEventFailure;
      v32 = v10;
      v31 = VmBusChannel;
      goto LABEL_29;
    }
  }
  if ( v10 != 1 && *((_DWORD *)DXGGLOBAL::GetGlobal(v24, v23) + 408) >= 0x1Au )
  {
    v35[1] = 0LL;
    v29 = *(struct VMBCHANNEL__ **)v3;
    v35[0] = 0LL;
    v36 = 65;
    v37 = 0;
    v38 = v10;
    v39 = VmBusChannel;
    v40 = 0LL;
    v41 = 0LL;
    VmBusSendAsyncMessage(v29, (struct DXGKVMB_COMMAND_BASE *)v35, 56LL, v28);
  }
  return (unsigned int)VmBusChannel;
}
