/*
 * XREFs of ?VmBusSendQueryClockCalibration@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAU_D3DKMT_QUERYCLOCKCALIBRATION@@@Z @ 0x1C0249CD4
 * Callers:
 *     ?DxgkQueryClockCalibrationInternal@@YAJPEAVDXGPROCESS@@PEAU_D3DKMT_QUERYCLOCKCALIBRATION@@PEAVDXGADAPTER@@@Z @ 0x1C00D47F8 (-DxgkQueryClockCalibrationInternal@@YAJPEAVDXGPROCESS@@PEAU_D3DKMT_QUERYCLOCKCALIBRATION@@PEAVDX.c)
 *     DxgkQueryClockCalibration @ 0x1C02240E0 (DxgkQueryClockCalibration.c)
 * Callees:
 *     __security_check_cookie @ 0x1C00243B0 (__security_check_cookie.c)
 *     ?VmBusSendSyncMessage@DXG_VMBUS_CHANNEL_BASE@@QEAAJPEAUDXGKVMB_COMMAND_BASE@@IPEAXPEAIPEAU_MDL@@@Z @ 0x1C024C01C (-VmBusSendSyncMessage@DXG_VMBUS_CHANNEL_BASE@@QEAAJPEAUDXGKVMB_COMMAND_BASE@@IPEAXPEAIPEAU_MDL@@.c)
 *     ?GetHostProcess@DXGPROCESS@@QEAAIXZ @ 0x1C0283E84 (-GetHostProcess@DXGPROCESS@@QEAAIXZ.c)
 */

int __fastcall DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendQueryClockCalibration(
        DXG_GUEST_VIRTUALGPU_VMBUS *this,
        struct DXGPROCESS *a2,
        struct _D3DKMT_QUERYCLOCKCALIBRATION *a3)
{
  unsigned int HostProcess; // eax
  __int128 v6; // xmm0
  __int128 v7; // xmm1
  int result; // eax
  UINT32 v9; // eax
  ULONGLONG v10; // xmm1_8
  struct _MDL *v11; // [rsp+28h] [rbp-41h]
  unsigned int v12[4]; // [rsp+30h] [rbp-39h] BYREF
  __int64 v13; // [rsp+40h] [rbp-29h] BYREF
  unsigned int v14; // [rsp+48h] [rbp-21h]
  int v15; // [rsp+4Ch] [rbp-1Dh]
  int v16; // [rsp+50h] [rbp-19h]
  __int128 v17; // [rsp+58h] [rbp-11h]
  __int128 v18; // [rsp+68h] [rbp-1h]
  __int64 v19; // [rsp+78h] [rbp+Fh]
  int v20; // [rsp+80h] [rbp+17h] BYREF
  __int128 v21; // [rsp+84h] [rbp+1Bh]
  ULONGLONG v22; // [rsp+94h] [rbp+2Bh]
  UINT32 v23; // [rsp+9Ch] [rbp+33h]

  HostProcess = DXGPROCESS::GetHostProcess(a2);
  v6 = *(_OWORD *)&a3->hAdapter;
  v13 = 0LL;
  v7 = *(_OWORD *)((char *)&a3->ClockData.GpuFrequency + 4);
  v15 = 0;
  v17 = v6;
  v14 = HostProcess;
  v19 = *(ULONGLONG *)((char *)&a3->ClockData.CpuClockCounter + 4);
  v16 = 62;
  v18 = v7;
  v12[0] = 32;
  result = DXG_VMBUS_CHANNEL_BASE::VmBusSendSyncMessage(
             this,
             (struct DXGKVMB_COMMAND_BASE *)&v13,
             0x40u,
             &v20,
             v12,
             v11);
  if ( result >= 0 )
  {
    if ( v12[0] >= 0x20 )
    {
      v9 = v23;
      v10 = v22;
      *(_OWORD *)&a3->ClockData.GpuFrequency = v21;
      a3->ClockData.CpuClockCounter = v10;
      a3->ClockData.Flags.Value = v9;
      return v20;
    }
    else
    {
      return -1073741811;
    }
  }
  return result;
}
