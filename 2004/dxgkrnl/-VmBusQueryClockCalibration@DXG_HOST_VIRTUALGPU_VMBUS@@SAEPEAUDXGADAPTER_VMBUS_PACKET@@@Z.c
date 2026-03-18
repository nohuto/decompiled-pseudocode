/*
 * XREFs of ?VmBusQueryClockCalibration@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C0245530
 * Callers:
 *     <none>
 * Callees:
 *     ??0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z @ 0x1C0002B54 (--0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x1C00042D8 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0006D68 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C0024350 (__security_check_cookie.c)
 *     ?Feature_Servicing_WSL2AppsBroken_35674161__private_IsEnabled@@YAHXZ @ 0x1C0025944 (-Feature_Servicing_WSL2AppsBroken_35674161__private_IsEnabled@@YAHXZ.c)
 *     ??$CastToVmBusCommand@UDXGKVMB_COMMAND_ACQUIREKEYEDMUTEXSYNC@@@@YAPEAUDXGKVMB_COMMAND_ACQUIREKEYEDMUTEXSYNC@@PEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C0025A44 (--$CastToVmBusCommand@UDXGKVMB_COMMAND_ACQUIREKEYEDMUTEXSYNC@@@@YAPEAUDXGKVMB_COMMAND_ACQUIREKEY.c)
 *     ?VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z @ 0x1C00409F0 (-VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z.c)
 *     ?DxgkQueryClockCalibrationInternal@@YAJPEAVDXGPROCESS@@PEAU_D3DKMT_QUERYCLOCKCALIBRATION@@PEAVDXGADAPTER@@@Z @ 0x1C00D57F8 (-DxgkQueryClockCalibrationInternal@@YAJPEAVDXGPROCESS@@PEAU_D3DKMT_QUERYCLOCKCALIBRATION@@PEAVDX.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0113030 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     DxgkQueryClockCalibration @ 0x1C0225290 (DxgkQueryClockCalibration.c)
 */

char __fastcall DXG_HOST_VIRTUALGPU_VMBUS::VmBusQueryClockCalibration(struct DXGADAPTER_VMBUS_PACKET *a1)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // rax
  char v5; // di
  __int64 v6; // rax
  __int64 v8; // rbx
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  struct DXGPROCESS *Current; // rax
  int ClockCalibrationInternal; // eax
  struct VMBPACKETCOMPLETION__ *v14; // rcx
  _BYTE v15[8]; // [rsp+20h] [rbp-40h] BYREF
  DXGPUSHLOCK *v16; // [rsp+28h] [rbp-38h]
  int v17; // [rsp+30h] [rbp-30h]
  _OWORD v18[2]; // [rsp+38h] [rbp-28h] BYREF

  DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v15, (struct _KTHREAD **)(*((_QWORD *)a1 + 5) + 232LL), 0);
  DXGPUSHLOCK::AcquireShared(v16);
  v4 = *((_QWORD *)a1 + 5);
  v5 = 1;
  v17 = 1;
  if ( *(_BYTE *)(v4 + 165) )
  {
    v8 = CastToVmBusCommand<DXGKVMB_COMMAND_ACQUIREKEYEDMUTEXSYNC>((__int64)a1);
    if ( v8 )
    {
      memset(v18, 0, sizeof(v18));
      if ( (unsigned int)Feature_Servicing_WSL2AppsBroken_35674161__private_IsEnabled() )
      {
        Current = DXGPROCESS::GetCurrent(v10, v9);
        if ( !Current )
          goto LABEL_3;
        ClockCalibrationInternal = DxgkQueryClockCalibrationInternal(
                                     Current,
                                     (struct _D3DKMT_QUERYCLOCKCALIBRATION *)(v8 + 24),
                                     *(struct DXGADAPTER **)(*((_QWORD *)a1 + 5) + 16LL));
      }
      else
      {
        ClockCalibrationInternal = DxgkQueryClockCalibration(v8 + 24, v9, v11);
      }
      v14 = (struct VMBPACKETCOMPLETION__ *)*((_QWORD *)a1 + 9);
      LODWORD(v18[0]) = ClockCalibrationInternal;
      *(_OWORD *)((char *)v18 + 4) = *(_OWORD *)(v8 + 36);
      *(_QWORD *)((char *)&v18[1] + 4) = *(_QWORD *)(v8 + 52);
      HIDWORD(v18[1]) = *(_DWORD *)(v8 + 60);
      VmBusCompletePacket(v14, v18, 0x20u);
      goto LABEL_4;
    }
  }
  else
  {
    v6 = WdLogNewEntry5_WdError(v3, v2);
    *(_QWORD *)(v6 + 24) = 2816LL;
    WdLogEvent5_WdError(v6);
  }
LABEL_3:
  v5 = 0;
LABEL_4:
  DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v15);
  return v5;
}
