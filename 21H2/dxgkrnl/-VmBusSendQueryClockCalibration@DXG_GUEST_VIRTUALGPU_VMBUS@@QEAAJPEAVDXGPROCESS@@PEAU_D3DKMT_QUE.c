/*
 * XREFs of ?VmBusSendQueryClockCalibration@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAU_D3DKMT_QUERYCLOCKCALIBRATION@@@Z @ 0x1C037B71C
 * Callers:
 *     ?DxgkQueryClockCalibrationInternal@@YAJPEAVDXGPROCESS@@PEAU_D3DKMT_QUERYCLOCKCALIBRATION@@PEAVDXGADAPTER@@@Z @ 0x1C02CF06C (-DxgkQueryClockCalibrationInternal@@YAJPEAVDXGPROCESS@@PEAU_D3DKMT_QUERYCLOCKCALIBRATION@@PEAVDX.c)
 * Callees:
 *     __security_check_cookie @ 0x1C002B170 (__security_check_cookie.c)
 *     ??1DXGVMBUSMESSAGE@@QEAA@XZ @ 0x1C005CCCC (--1DXGVMBUSMESSAGE@@QEAA@XZ.c)
 *     ?GetHostProcess@DXGPROCESS@@QEAAIXZ @ 0x1C033633C (-GetHostProcess@DXGPROCESS@@QEAAIXZ.c)
 *     ?InitializeMessage@DXGVMBUSMESSAGE@@QEAAXPEAUDXG_VMBUS_CHANNEL_BASE@@IPEAI11@Z @ 0x1C0364EA8 (-InitializeMessage@DXGVMBUSMESSAGE@@QEAAXPEAUDXG_VMBUS_CHANNEL_BASE@@IPEAI11@Z.c)
 *     ?VmBusSendSyncMessage@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAUDXGVMBUSMESSAGE@@PEAXPEAI@Z @ 0x1C037E5E0 (-VmBusSendSyncMessage@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAUDXGVMBUSMESSAGE@@PEAXPEAI@Z.c)
 */

__int64 __fastcall DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendQueryClockCalibration(
        DXG_GUEST_VIRTUALGPU_VMBUS *this,
        struct DXGPROCESS *a2,
        struct _D3DKMT_QUERYCLOCKCALIBRATION *a3)
{
  __int64 v6; // rbx
  int v7; // ebx
  int HostProcess; // eax
  UINT32 v9; // eax
  ULONGLONG v10; // xmm1_8
  unsigned int v12[4]; // [rsp+30h] [rbp-D0h] BYREF
  __int128 v13; // [rsp+40h] [rbp-C0h] BYREF
  int v14; // [rsp+50h] [rbp-B0h]
  int v15; // [rsp+160h] [rbp+60h] BYREF
  __int128 v16; // [rsp+164h] [rbp+64h]
  ULONGLONG v17; // [rsp+174h] [rbp+74h]
  UINT32 v18; // [rsp+17Ch] [rbp+7Ch]

  v14 = 0;
  v13 = 0LL;
  DXGVMBUSMESSAGE::InitializeMessage((DXGVMBUSMESSAGE *)&v13, this, 0x40u, 0LL, 0LL, 0LL);
  v6 = v13;
  if ( (_QWORD)v13 )
  {
    HostProcess = DXGPROCESS::GetHostProcess(a2);
    *(_QWORD *)v6 = 0LL;
    *(_DWORD *)(v6 + 20) = 0;
    *(_BYTE *)(v6 + 12) = 0;
    *(_DWORD *)(v6 + 12) &= 0x1FFu;
    *(_DWORD *)(v6 + 8) = HostProcess;
    *(_DWORD *)(v6 + 16) = 62;
    v12[0] = 32;
    v7 = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendSyncMessage(this, (struct DXGVMBUSMESSAGE *)&v13, &v15, v12);
    if ( v7 >= 0 )
    {
      if ( v12[0] >= 0x20 )
      {
        v9 = v18;
        v10 = v17;
        v7 = v15;
        *(_OWORD *)&a3->ClockData.GpuFrequency = v16;
        a3->ClockData.CpuClockCounter = v10;
        a3->ClockData.Flags.Value = v9;
      }
      else
      {
        v7 = -1073741811;
      }
    }
  }
  else
  {
    v7 = -1073741801;
  }
  DXGVMBUSMESSAGE::~DXGVMBUSMESSAGE((DXGVMBUSMESSAGE *)&v13);
  return (unsigned int)v7;
}
