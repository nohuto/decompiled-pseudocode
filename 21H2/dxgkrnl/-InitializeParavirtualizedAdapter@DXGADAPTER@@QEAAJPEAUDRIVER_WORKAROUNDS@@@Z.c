/*
 * XREFs of ?InitializeParavirtualizedAdapter@DXGADAPTER@@QEAAJPEAUDRIVER_WORKAROUNDS@@@Z @ 0x1C02BBED4
 * Callers:
 *     ?Initialize@DXGADAPTER@@QEAAJPEAU_DEVICE_OBJECT@@PEAU_DXGK_ADAPTER_CAPS@@@Z @ 0x1C01FECEC (-Initialize@DXGADAPTER@@QEAAJPEAU_DEVICE_OBJECT@@PEAU_DXGK_ADAPTER_CAPS@@@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ?DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ @ 0x1C000BBD0 (-DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ.c)
 *     DpReadDeviceSpace @ 0x1C0025680 (DpReadDeviceSpace.c)
 *     __security_check_cookie @ 0x1C002B170 (__security_check_cookie.c)
 *     memset @ 0x1C002CFC0 (memset.c)
 *     McTemplateK0pqqqqxx_EtwWriteTransfer @ 0x1C004505C (McTemplateK0pqqqqxx_EtwWriteTransfer.c)
 *     DpWriteDeviceSpace @ 0x1C005F150 (DpWriteDeviceSpace.c)
 *     DpiGetAdapterInfo @ 0x1C01FD7E8 (DpiGetAdapterInfo.c)
 *     ?CopyRegistryKeys@DXGADAPTER@@QEAAJXZ @ 0x1C02B9D58 (-CopyRegistryKeys@DXGADAPTER@@QEAAJXZ.c)
 *     ?CopyDriverStore@DXGADAPTER@@QEAAJXZ @ 0x1C0301F98 (-CopyDriverStore@DXGADAPTER@@QEAAJXZ.c)
 *     ?EnsureVmBusInterface@DXGGLOBAL@@QEAAJXZ @ 0x1C0309F70 (-EnsureVmBusInterface@DXGGLOBAL@@QEAAJXZ.c)
 *     ?HandleVirtualMachineReset@DXGGLOBAL@@QEAAXXZ @ 0x1C030A8B0 (-HandleVirtualMachineReset@DXGGLOBAL@@QEAAXXZ.c)
 *     ?CreateVmBusChannel@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGADAPTER@@@Z @ 0x1C0361D14 (-CreateVmBusChannel@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGADAPTER@@@Z.c)
 *     ?GetMmioSpaceInfo@DXG_GUEST_GLOBAL_VMBUS@@QEAAJPEA_K0@Z @ 0x1C0364B10 (-GetMmioSpaceInfo@DXG_GUEST_GLOBAL_VMBUS@@QEAAJPEA_K0@Z.c)
 *     ?VmBusSendGetInternalAdapterInfo19h1@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAUDXGKVMB_COMMAND_GETINTERNALADAPTERINFO_RETURN1@@@Z @ 0x1C0378354 (-VmBusSendGetInternalAdapterInfo19h1@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAUDXGKVMB_COMMAND_GETINT.c)
 *     ?VmBusSendGetInternalAdapterInfo@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAUDXGKVMB_COMMAND_GETINTERNALADAPTERINFO_RETURN@@@Z @ 0x1C03784A4 (-VmBusSendGetInternalAdapterInfo@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAUDXGKVMB_COMMAND_GETINTERNA.c)
 *     ?VmBusSendLogEvent@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAXJW4DXGKVMB_EVENT_SCENARIO@@I_K1@Z @ 0x1C03797D0 (-VmBusSendLogEvent@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAXJW4DXGKVMB_EVENT_SCENARIO@@I_K1@Z.c)
 *     ?VmBusSendOpenAdapter@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAIPEBU_LUID@@@Z @ 0x1C037A480 (-VmBusSendOpenAdapter@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAIPEBU_LUID@@@Z.c)
 *     ?VmBusSendSetIoSpaceRegion@DXG_GUEST_GLOBAL_VMBUS@@QEAAJ_K0I@Z @ 0x1C037C7CC (-VmBusSendSetIoSpaceRegion@DXG_GUEST_GLOBAL_VMBUS@@QEAAJ_K0I@Z.c)
 *     DpiSetDriverVersion @ 0x1C0387A3C (DpiSetDriverVersion.c)
 */

__int64 __fastcall DXGADAPTER::InitializeParavirtualizedAdapter(DXGADAPTER *this, struct DRIVER_WORKAROUNDS *a2)
{
  char v4; // r13
  int v5; // eax
  __int64 v6; // rdx
  __int64 v7; // rcx
  int v8; // eax
  int VmBusChannel; // ebx
  unsigned int v10; // edi
  unsigned int v11; // eax
  struct DXGGLOBAL *Global; // rax
  DXG_GUEST_VIRTUALGPU_VMBUS *v13; // rcx
  struct DXGGLOBAL *v14; // rax
  int v15; // edx
  unsigned int v16; // eax
  unsigned int v17; // ecx
  char v18; // cl
  int v19; // eax
  DXGGLOBAL *v20; // rax
  DXGGLOBAL *v21; // rax
  DXG_GUEST_GLOBAL_VMBUS *v22; // rdi
  struct DXGGLOBAL *v23; // rax
  __int64 v24; // r8
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // r8
  __int64 v29; // [rsp+20h] [rbp-E0h]
  __int64 v30; // [rsp+20h] [rbp-E0h]
  __int64 v31; // [rsp+28h] [rbp-D8h]
  __int64 v32; // [rsp+28h] [rbp-D8h]
  __int64 v33; // [rsp+30h] [rbp-D0h]
  __int64 v34; // [rsp+38h] [rbp-C8h]
  unsigned int v35; // [rsp+50h] [rbp-B0h] BYREF
  ULONG v36; // [rsp+54h] [rbp-ACh] BYREF
  int v37; // [rsp+58h] [rbp-A8h] BYREF
  unsigned __int64 v38; // [rsp+60h] [rbp-A0h] BYREF
  unsigned __int64 v39; // [rsp+68h] [rbp-98h] BYREF
  _QWORD v40[89]; // [rsp+70h] [rbp-90h] BYREF

  *((_BYTE *)this + 209) = 1;
  v35 = 0;
  v36 = 0;
  v4 = 0;
  v5 = DpReadDeviceSpace(*((_QWORD *)this + 27), 0LL, &v35, 0xD0u, 4u, &v36);
  if ( v5 < 0 || v36 != 4 )
    goto LABEL_8;
  if ( v35 >= 0x28 )
  {
    v8 = 41;
    if ( v35 < 0x29 )
      v8 = v35;
    v37 = v8;
    *((_DWORD *)DXGGLOBAL_GetGlobal() + 450) = v8;
    v5 = DpWriteDeviceSpace(*((_QWORD *)this + 27), 0LL, &v37, 0xD0u, 4u, &v36);
    if ( v5 < 0 || v36 != 4 )
    {
LABEL_8:
      *(_QWORD *)(WdLogNewEntry5_WdTrace(v7, v6) + 24) = v5;
      v35 = 0;
    }
  }
  *((_DWORD *)DXGGLOBAL_GetGlobal() + 451) = v35;
  VmBusChannel = DXG_GUEST_VIRTUALGPU_VMBUS::CreateVmBusChannel((struct VMBCHANNEL__ **)this + 543, this);
  if ( VmBusChannel >= 0 )
  {
    v11 = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendOpenAdapter(
            (DXGADAPTER *)((char *)this + 4344),
            (const struct _LUID *)(*(_QWORD *)(*((_QWORD *)this + 27) + 64LL) + 2672LL));
    *((_DWORD *)this + 1108) = v11;
    if ( v11 )
    {
      memset(v40, 0, sizeof(v40));
      Global = DXGGLOBAL_GetGlobal();
      v13 = (DXGADAPTER *)((char *)this + 4344);
      if ( *((_DWORD *)Global + 450) <= 0x10u )
      {
        VmBusChannel = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendGetInternalAdapterInfo19h1(
                         v13,
                         (struct DXGKVMB_COMMAND_GETINTERNALADAPTERINFO_RETURN1 *)v40);
        if ( VmBusChannel < 0 )
        {
          v10 = 4;
          goto LABEL_51;
        }
      }
      else
      {
        VmBusChannel = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendGetInternalAdapterInfo(
                         v13,
                         (struct DXGKVMB_COMMAND_GETINTERNALADAPTERINFO_RETURN *)v40);
        if ( VmBusChannel < 0 )
        {
          v10 = 3;
          goto LABEL_51;
        }
      }
      *(_DWORD *)a2 ^= (*(_DWORD *)a2 ^ (HIDWORD(v40[1]) << 14)) & 0x20000;
      v14 = DXGGLOBAL_GetGlobal();
      v15 = *(_DWORD *)a2;
      if ( *((_DWORD *)v14 + 450) < 0x26u )
      {
        if ( (v40[1] & 0x1000000000LL) != 0 )
          v16 = v15 & 0xFFFE7FFF | 0x10000;
        else
          v16 = v15 & 0xFFFE7FFF;
      }
      else
      {
        v16 = v15 ^ (v15 ^ (HIDWORD(v40[1]) << 8)) & 0x18000;
      }
      *(_DWORD *)a2 = v16;
      if ( *((_DWORD *)DXGGLOBAL_GetGlobal() + 450) < 0x29u )
        v17 = *(_DWORD *)a2 & 0xFFE3FFFF;
      else
        v17 = (*(_DWORD *)a2 & 0xFFF3FFFF ^ (HIDWORD(v40[1]) << 11)) & 0x100000 ^ (*(_DWORD *)a2 & 0xFFF3FFFF | ((WORD2(v40[1]) & 0xC00) << 8));
      *(_DWORD *)a2 = v17;
      if ( *((_DWORD *)DXGGLOBAL_GetGlobal() + 450) >= 0x22u )
        *(_QWORD *)((char *)this + 4452) = v40[88];
      if ( *((_DWORD *)DXGGLOBAL_GetGlobal() + 450) >= 0x28u && (v40[1] & 0x4000000000LL) != 0 )
        *((_BYTE *)DXGGLOBAL_GetGlobal() + 1808) = 1;
      if ( *((_DWORD *)DXGGLOBAL_GetGlobal() + 450) >= 0x10u )
        DpiSetDriverVersion(*((_QWORD *)this + 27), LODWORD(v40[1]), &v40[3], &v40[23]);
      VmBusChannel = DpiGetAdapterInfo(
                       *((_QWORD *)this + 27),
                       (_DWORD *)this + 372,
                       (_QWORD *)this + 35,
                       (DXGADAPTER *)((char *)this + 1976));
      if ( VmBusChannel < 0 )
        goto LABEL_34;
      v18 = BYTE4(v40[1]);
      *((_DWORD *)this + 109) ^= (LOBYTE(v40[0]) ^ (unsigned __int8)*((_DWORD *)this + 109)) & 0x18;
      *((_BYTE *)this + 210) = v18 & 1;
      *((_BYTE *)this + 211) = (v18 & 4) != 0;
      v19 = 2;
      if ( HIDWORD(v40[0]) < 2 )
        v19 = HIDWORD(v40[0]);
      *((_DWORD *)this + 689) = v19;
      *(_QWORD *)((char *)this + 4444) = v40[2];
      if ( (v18 & 2) != 0 )
      {
        v20 = DXGGLOBAL_GetGlobal();
        DXGGLOBAL::HandleVirtualMachineReset(v20);
      }
      v21 = DXGGLOBAL_GetGlobal();
      VmBusChannel = DXGGLOBAL::EnsureVmBusInterface(v21);
      if ( VmBusChannel < 0 )
      {
LABEL_34:
        v10 = 5;
      }
      else
      {
        if ( *((_BYTE *)DXGGLOBAL_GetGlobal() + 1808) )
          *((_QWORD *)this + 544) = **((_QWORD **)DXGGLOBAL_GetGlobal() + 218);
        v39 = 0LL;
        v38 = 0LL;
        v22 = (DXG_GUEST_GLOBAL_VMBUS *)*((_QWORD *)DXGGLOBAL_GetGlobal() + 218);
        VmBusChannel = DXG_GUEST_GLOBAL_VMBUS::GetMmioSpaceInfo(v22, &v39, &v38);
        if ( VmBusChannel >= 0 )
        {
          v23 = DXGGLOBAL_GetGlobal();
          VmBusChannel = DXG_GUEST_GLOBAL_VMBUS::VmBusSendSetIoSpaceRegion(v22, v39, v38, *((_DWORD *)v23 + 443));
          if ( VmBusChannel >= 0 )
          {
            if ( (*((_DWORD *)this + 109) & 8) != 0
              || (VmBusChannel = DXGADAPTER::CopyDriverStore(this), VmBusChannel >= 0) )
            {
              VmBusChannel = DXGADAPTER::CopyRegistryKeys(this);
              if ( VmBusChannel >= 0 )
                return (unsigned int)VmBusChannel;
              v10 = 9;
              v4 = 1;
            }
            else
            {
              v10 = 8;
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
    }
    else
    {
      v10 = 2;
      VmBusChannel = -1073741823;
    }
  }
  else
  {
    v10 = 1;
  }
LABEL_51:
  if ( v4 )
  {
    WdLogSingleEntry2(3LL, VmBusChannel, v10);
    VmBusChannel = 0;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000000) != 0 )
    {
      LODWORD(v31) = 0;
      LODWORD(v29) = 0;
      McTemplateK0pqqqqxx_EtwWriteTransfer(0LL, &VirtualGpuGuestEvent, v24, this, v29, v31, 0, v10, 0LL, 0LL);
    }
  }
  else
  {
    WdLogSingleEntry2(2LL, VmBusChannel, v10);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Status:0x%I64x Reason: 0x%I64x ",
      VmBusChannel,
      v10,
      0LL,
      0LL,
      0LL);
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x4000000) != 0 )
    {
      LODWORD(v34) = v10;
      LODWORD(v33) = 0;
      LODWORD(v32) = VmBusChannel;
      LODWORD(v30) = 0;
      McTemplateK0pqqqqxx_EtwWriteTransfer(v25, &VirtualGpuGuestEventFailure, v26, this, v30, v32, v33, v34, 0LL, 0LL);
    }
  }
  if ( v10 != 1 && *((_DWORD *)DXGGLOBAL_GetGlobal() + 450) >= 0x1Au )
    DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendLogEvent((char *)this + 4344, (unsigned int)VmBusChannel, v27, v10);
  return (unsigned int)VmBusChannel;
}
