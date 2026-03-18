/*
 * XREFs of ?VmBusSendQueryClockCalibration@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAU_D3DKMT_QUERYCLOCKCALIBRATION@@@Z @ 0x1C024AD74
 * Callers:
 *     ?DxgkQueryClockCalibrationInternal@@YAJPEAVDXGPROCESS@@PEAU_D3DKMT_QUERYCLOCKCALIBRATION@@PEAVDXGADAPTER@@@Z @ 0x1C00D57F8 (-DxgkQueryClockCalibrationInternal@@YAJPEAVDXGPROCESS@@PEAU_D3DKMT_QUERYCLOCKCALIBRATION@@PEAVDX.c)
 *     DxgkQueryClockCalibration @ 0x1C0225290 (DxgkQueryClockCalibration.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0024350 (__security_check_cookie.c)
 *     ?Feature_Servicing_WSL2AppsBroken_35674161__private_IsEnabled@@YAHXZ @ 0x1C0025944 (-Feature_Servicing_WSL2AppsBroken_35674161__private_IsEnabled@@YAHXZ.c)
 *     ?VmBusSendSyncMessage@DXG_VMBUS_CHANNEL_BASE@@QEAAJPEAUDXGKVMB_COMMAND_BASE@@IPEAXPEAIPEAU_MDL@@@Z @ 0x1C024D0C8 (-VmBusSendSyncMessage@DXG_VMBUS_CHANNEL_BASE@@QEAAJPEAUDXGKVMB_COMMAND_BASE@@IPEAXPEAIPEAU_MDL@@.c)
 *     ?GetHostProcess@DXGPROCESS@@QEAAIXZ @ 0x1C0284E64 (-GetHostProcess@DXGPROCESS@@QEAAIXZ.c)
 */

int __fastcall DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendQueryClockCalibration(
        DXG_GUEST_VIRTUALGPU_VMBUS *this,
        struct DXGPROCESS *a2,
        struct _D3DKMT_QUERYCLOCKCALIBRATION *a3)
{
  __int128 v5; // xmm1
  int result; // eax
  UINT32 v7; // eax
  ULONGLONG v8; // xmm1_8
  struct _MDL *v9; // [rsp+28h] [rbp-41h]
  unsigned int v10[4]; // [rsp+30h] [rbp-39h] BYREF
  __int64 v11; // [rsp+40h] [rbp-29h] BYREF
  unsigned int HostProcess; // [rsp+48h] [rbp-21h]
  int v13; // [rsp+4Ch] [rbp-1Dh]
  int v14; // [rsp+50h] [rbp-19h]
  __int128 v15; // [rsp+58h] [rbp-11h]
  __int128 v16; // [rsp+68h] [rbp-1h]
  __int64 v17; // [rsp+78h] [rbp+Fh]
  int v18; // [rsp+80h] [rbp+17h] BYREF
  __int128 v19; // [rsp+84h] [rbp+1Bh]
  ULONGLONG v20; // [rsp+94h] [rbp+2Bh]
  UINT32 v21; // [rsp+9Ch] [rbp+33h]

  v11 = 0LL;
  v13 = 0;
  HostProcess = DXGPROCESS::GetHostProcess(a2);
  v14 = 62;
  if ( (unsigned int)Feature_Servicing_WSL2AppsBroken_35674161__private_IsEnabled() )
  {
    v5 = *(_OWORD *)((char *)&a3->ClockData.GpuFrequency + 4);
    v15 = *(_OWORD *)&a3->hAdapter;
    v17 = *(ULONGLONG *)((char *)&a3->ClockData.CpuClockCounter + 4);
    v16 = v5;
  }
  v10[0] = 32;
  result = DXG_VMBUS_CHANNEL_BASE::VmBusSendSyncMessage(this, (struct DXGKVMB_COMMAND_BASE *)&v11, 0x40u, &v18, v10, v9);
  if ( result >= 0 )
  {
    if ( v10[0] >= 0x20 )
    {
      v7 = v21;
      v8 = v20;
      *(_OWORD *)&a3->ClockData.GpuFrequency = v19;
      a3->ClockData.CpuClockCounter = v8;
      a3->ClockData.Flags.Value = v7;
      return v18;
    }
    else
    {
      return -1073741811;
    }
  }
  return result;
}
