/*
 * XREFs of ?VmBusSendMapGpuVirtualAddress@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJIPEBVDXGDEVICE@@IIPEAUD3DDDI_MAPGPUVIRTUALADDRESS@@@Z @ 0x1C0245860
 * Callers:
 *     ?CreateAllocation@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEALLOCATION@@EEPEAU_DXGSHAREDALLOCOBJECT@@PEBU_D3DKM_CREATESTANDARDALLOCATION@@PEAVCOREDEVICEACCESS@@IPEAU_EPROCESS@@PEAIPEA_K6PEAU_D3DKMT_CREATESTANDARDALLOCATION@@PEAXI@Z @ 0x1C0104C00 (-CreateAllocation@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEALLOCATION@@EEPEAU_DXGSHAREDALLOCOBJECT@@PEB.c)
 *     DxgkMapGpuVirtualAddress @ 0x1C0145D30 (DxgkMapGpuVirtualAddress.c)
 *     ?MapGpuVirtualAddressToAllocation@@YAJPEAVADAPTER_RENDER@@PEAVDXGALLOCATION@@@Z @ 0x1C0229E68 (-MapGpuVirtualAddressToAllocation@@YAJPEAVADAPTER_RENDER@@PEAVDXGALLOCATION@@@Z.c)
 *     ?OpenSharedSurfForDevice@DXGDXGIKEYEDMUTEX@@AEAAJPEAVDXGDEVICE@@@Z @ 0x1C02969C0 (-OpenSharedSurfForDevice@DXGDXGIKEYEDMUTEX@@AEAAJPEAVDXGDEVICE@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0024300 (__security_check_cookie.c)
 *     ?VmBusSendSyncMessage@DXG_VMBUS_CHANNEL_BASE@@QEAAJPEAUDXGKVMB_COMMAND_BASE@@IPEAXPEAIPEAU_MDL@@@Z @ 0x1C0248DD4 (-VmBusSendSyncMessage@DXG_VMBUS_CHANNEL_BASE@@QEAAJPEAUDXGKVMB_COMMAND_BASE@@IPEAXPEAIPEAU_MDL@@.c)
 */

__int64 __fastcall DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendMapGpuVirtualAddress(
        DXG_GUEST_VIRTUALGPU_VMBUS *this,
        int a2,
        const struct DXGDEVICE *a3,
        int a4,
        unsigned int a5,
        struct D3DDDI_MAPGPUVIRTUALADDRESS *a6)
{
  __int128 v6; // xmm1
  __int128 v7; // xmm0
  __int128 v8; // xmm1
  __int128 v9; // xmm0
  __int128 v10; // xmm1
  int v11; // eax
  __int64 v12; // rdx
  __int64 v13; // rcx
  int v14; // ebx
  __int64 v15; // rax
  struct _MDL *v17; // [rsp+28h] [rbp-91h]
  unsigned int v18[4]; // [rsp+30h] [rbp-89h] BYREF
  __int64 v19; // [rsp+40h] [rbp-79h] BYREF
  int v20; // [rsp+48h] [rbp-71h]
  int v21; // [rsp+4Ch] [rbp-6Dh]
  int v22; // [rsp+50h] [rbp-69h]
  __int128 v23; // [rsp+58h] [rbp-61h]
  __int128 v24; // [rsp+68h] [rbp-51h]
  __int128 v25; // [rsp+78h] [rbp-41h]
  __int128 v26; // [rsp+88h] [rbp-31h]
  __int128 v27; // [rsp+98h] [rbp-21h]
  __int128 v28; // [rsp+A8h] [rbp-11h]
  UINT64 PagingFenceValue; // [rsp+B8h] [rbp-1h]
  int v30; // [rsp+C0h] [rbp+7h]
  _QWORD v31[2]; // [rsp+D0h] [rbp+17h] BYREF
  int v32; // [rsp+E0h] [rbp+27h]

  v19 = 0LL;
  v21 = 0;
  v20 = a2;
  v22 = 17;
  v6 = *(_OWORD *)&a6->MinimumAddress;
  v23 = *(_OWORD *)&a6->hPagingQueue;
  LODWORD(v23) = a4;
  v7 = *(_OWORD *)&a6->hAllocation;
  v24 = v6;
  v8 = *(_OWORD *)&a6->SizeInPages;
  v25 = v7;
  LODWORD(v25) = a5;
  v9 = *(_OWORD *)&a6->DriverProtection;
  v26 = v8;
  v10 = *(_OWORD *)&a6->Reserved1;
  v27 = v9;
  PagingFenceValue = a6->PagingFenceValue;
  v28 = v10;
  if ( a3 )
    v11 = *((_DWORD *)a3 + 110);
  else
    v11 = 0;
  v30 = v11;
  v18[0] = 24;
  v14 = DXG_VMBUS_CHANNEL_BASE::VmBusSendSyncMessage(this, (struct DXGKVMB_COMMAND_BASE *)&v19, 0x88u, v31, v18, v17);
  if ( v14 < 0
    || (v14 = -1073741823, v18[0] < 0x18)
    || (v14 = v32, a6->VirtualAddress = v31[0], a6->PagingFenceValue = v31[1], v14 < 0) )
  {
    v15 = WdLogNewEntry5_WdError(v13, v12);
    *(_QWORD *)(v15 + 24) = v14;
    WdLogEvent5_WdError(v15);
  }
  return (unsigned int)v14;
}
