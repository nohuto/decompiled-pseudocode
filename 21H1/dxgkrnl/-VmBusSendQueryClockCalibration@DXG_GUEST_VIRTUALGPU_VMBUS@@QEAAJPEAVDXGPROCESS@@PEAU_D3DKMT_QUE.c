/*
 * XREFs of ?VmBusSendQueryClockCalibration@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAU_D3DKMT_QUERYCLOCKCALIBRATION@@@Z @ 0x1C0246AA4
 * Callers:
 *     DxgkQueryClockCalibration @ 0x1C0221040 (DxgkQueryClockCalibration.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0024300 (__security_check_cookie.c)
 *     ?VmBusSendSyncMessage@DXG_VMBUS_CHANNEL_BASE@@QEAAJPEAUDXGKVMB_COMMAND_BASE@@IPEAXPEAIPEAU_MDL@@@Z @ 0x1C0248DD4 (-VmBusSendSyncMessage@DXG_VMBUS_CHANNEL_BASE@@QEAAJPEAUDXGKVMB_COMMAND_BASE@@IPEAXPEAIPEAU_MDL@@.c)
 *     ?GetHostProcess@DXGPROCESS@@QEAAIXZ @ 0x1C02809D4 (-GetHostProcess@DXGPROCESS@@QEAAIXZ.c)
 */

int __fastcall DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendQueryClockCalibration(
        DXG_GUEST_VIRTUALGPU_VMBUS *this,
        struct DXGPROCESS *a2,
        struct _D3DKMT_QUERYCLOCKCALIBRATION *a3)
{
  int result; // eax
  UINT32 v6; // eax
  ULONGLONG v7; // xmm1_8
  struct _MDL *v8; // [rsp+28h] [rbp-41h]
  unsigned int v9[4]; // [rsp+30h] [rbp-39h] BYREF
  __int64 v10; // [rsp+40h] [rbp-29h] BYREF
  unsigned int HostProcess; // [rsp+48h] [rbp-21h]
  int v12; // [rsp+4Ch] [rbp-1Dh]
  int v13; // [rsp+50h] [rbp-19h]
  int v14; // [rsp+80h] [rbp+17h] BYREF
  __int128 v15; // [rsp+84h] [rbp+1Bh]
  ULONGLONG v16; // [rsp+94h] [rbp+2Bh]
  UINT32 v17; // [rsp+9Ch] [rbp+33h]

  v10 = 0LL;
  v12 = 0;
  HostProcess = DXGPROCESS::GetHostProcess(a2);
  v13 = 62;
  v9[0] = 32;
  result = DXG_VMBUS_CHANNEL_BASE::VmBusSendSyncMessage(this, (struct DXGKVMB_COMMAND_BASE *)&v10, 0x40u, &v14, v9, v8);
  if ( result >= 0 )
  {
    if ( v9[0] >= 0x20 )
    {
      v6 = v17;
      v7 = v16;
      *(_OWORD *)&a3->ClockData.GpuFrequency = v15;
      a3->ClockData.CpuClockCounter = v7;
      a3->ClockData.Flags.Value = v6;
      return v14;
    }
    else
    {
      return -1073741811;
    }
  }
  return result;
}
