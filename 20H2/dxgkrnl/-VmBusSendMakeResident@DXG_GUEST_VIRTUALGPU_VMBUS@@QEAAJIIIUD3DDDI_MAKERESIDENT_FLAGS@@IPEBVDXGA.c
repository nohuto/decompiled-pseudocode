/*
 * XREFs of ?VmBusSendMakeResident@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJIIIUD3DDDI_MAKERESIDENT_FLAGS@@IPEBVDXGALLOCATIONREFERENCE@@PEA_K2@Z @ 0x1C02488A8
 * Callers:
 *     ?CreateAllocation@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEALLOCATION@@EEPEAU_DXGSHAREDALLOCOBJECT@@PEBU_D3DKM_CREATESTANDARDALLOCATION@@PEAVCOREDEVICEACCESS@@IPEAU_EPROCESS@@PEAIPEA_K6PEAU_D3DKMT_CREATESTANDARDALLOCATION@@PEAXI@Z @ 0x1C00F1850 (-CreateAllocation@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEALLOCATION@@EEPEAU_DXGSHAREDALLOCOBJECT@@PEB.c)
 *     ?DxgkMakeResidentInternal@@YAJPEAUD3DDDI_MAKERESIDENT@@HPEAD@Z @ 0x1C014DC50 (-DxgkMakeResidentInternal@@YAJPEAUD3DDDI_MAKERESIDENT@@HPEAD@Z.c)
 *     ?MakeAllocationResident@DXGDEVICE@@QEAAJIPEAVCOREDEVICEACCESS@@@Z @ 0x1C0254914 (-MakeAllocationResident@DXGDEVICE@@QEAAJIPEAVCOREDEVICEACCESS@@@Z.c)
 *     ?OpenSharedSurfForDevice@DXGDXGIKEYEDMUTEX@@AEAAJPEAVDXGDEVICE@@@Z @ 0x1C0299ED0 (-OpenSharedSurfForDevice@DXGDXGIKEYEDMUTEX@@AEAAJPEAVDXGDEVICE@@@Z.c)
 *     ?PrepareStagingBuffer@BLTQUEUE@@QEAAJPEAVDXGDEVICE@@IPEAVCOREDEVICEACCESS@@@Z @ 0x1C02FCABC (-PrepareStagingBuffer@BLTQUEUE@@QEAAJPEAVDXGDEVICE@@IPEAVCOREDEVICEACCESS@@@Z.c)
 * Callees:
 *     ??_V@YAXPEAX@Z @ 0x1C0002C80 (--_V@YAXPEAX@Z.c)
 *     ??2@YAPEAX_KIHW4_POOL_TYPE@@@Z @ 0x1C0004548 (--2@YAPEAX_KIHW4_POOL_TYPE@@@Z.c)
 *     __security_check_cookie @ 0x1C00243B0 (__security_check_cookie.c)
 *     ?VmBusSendSyncMessage@DXG_VMBUS_CHANNEL_BASE@@QEAAJPEAUDXGKVMB_COMMAND_BASE@@IPEAXPEAIPEAU_MDL@@@Z @ 0x1C024C01C (-VmBusSendSyncMessage@DXG_VMBUS_CHANNEL_BASE@@QEAAJPEAUDXGKVMB_COMMAND_BASE@@IPEAXPEAIPEAU_MDL@@.c)
 */

__int64 __fastcall DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendMakeResident(
        DXG_GUEST_VIRTUALGPU_VMBUS *this,
        __int64 a2,
        int a3,
        int a4,
        struct D3DDDI_MAKERESIDENT_FLAGS a5,
        unsigned int a6,
        const struct DXGALLOCATIONREFERENCE *a7,
        unsigned __int64 *a8,
        unsigned __int64 *a9)
{
  int v11; // r12d
  char *v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  struct DXGKVMB_COMMAND_BASE *v17; // rbx
  __int64 v18; // rax
  _DWORD *v21; // r9
  __int64 v22; // r10
  __int64 v23; // rax
  __int64 v24; // rdx
  __int64 v25; // rcx
  int v26; // edi
  __int64 v27; // rax
  __int64 v28; // rax
  struct _MDL *v29; // [rsp+28h] [rbp-60h]
  unsigned int v30; // [rsp+30h] [rbp-58h] BYREF
  DXG_VMBUS_CHANNEL_BASE *v31; // [rsp+38h] [rbp-50h]
  _QWORD v32[2]; // [rsp+40h] [rbp-48h] BYREF
  int v33; // [rsp+50h] [rbp-38h]

  v11 = a2;
  v31 = this;
  if ( a6 - 1 > 0x7FFF )
  {
    v28 = WdLogNewEntry5_WdError(this, a2);
    *(_QWORD *)(v28 + 24) = 9861LL;
    WdLogEvent5_WdError(v28);
    return 3221225485LL;
  }
  else
  {
    v12 = (char *)operator new(4 * a6 + 44, 0x4B677844u, 1, (POOL_TYPE)512);
    v17 = (struct DXGKVMB_COMMAND_BASE *)v12;
    if ( v12 )
    {
      *(_QWORD *)v12 = 0LL;
      *((_DWORD *)v12 + 3) = 0;
      *((_DWORD *)v12 + 4) = 11;
      *((_DWORD *)v12 + 2) = v11;
      *((struct D3DDDI_MAKERESIDENT_FLAGS *)v12 + 8) = a5;
      *((_DWORD *)v12 + 6) = a3;
      *((_DWORD *)v12 + 7) = a4;
      *((_DWORD *)v12 + 9) = a6;
      if ( a6 )
      {
        v21 = v12 + 40;
        v22 = a6;
        do
        {
          v23 = *(_QWORD *)a7;
          a7 = (const struct DXGALLOCATIONREFERENCE *)((char *)a7 + 8);
          *v21++ = *(_DWORD *)(v23 + 96);
          --v22;
        }
        while ( v22 );
      }
      v30 = 24;
      v26 = DXG_VMBUS_CHANNEL_BASE::VmBusSendSyncMessage(v31, v17, 4 * a6 + 44, v32, &v30, v29);
      if ( v26 < 0 )
        goto LABEL_14;
      v26 = -1073741823;
      if ( v30 < 0x18 )
        goto LABEL_14;
      if ( a8 )
        *a8 = v32[0];
      if ( a9 )
        *a9 = v32[1];
      v26 = v33;
      if ( v33 < 0 )
      {
LABEL_14:
        v27 = WdLogNewEntry5_WdError(v25, v24);
        *(_QWORD *)(v27 + 24) = v26;
        WdLogEvent5_WdError(v27);
      }
      operator delete[](v17);
      return (unsigned int)v26;
    }
    else
    {
      v18 = WdLogNewEntry5_WdLowResource(v14, v13, v15, v16);
      *(_QWORD *)(v18 + 24) = 9868LL;
      WdLogEvent5_WdLowResource(v18);
      return 3221225495LL;
    }
  }
}
