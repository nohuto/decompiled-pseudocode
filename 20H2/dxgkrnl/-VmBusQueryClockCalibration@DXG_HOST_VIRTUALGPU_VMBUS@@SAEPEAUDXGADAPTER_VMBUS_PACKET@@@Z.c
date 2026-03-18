/*
 * XREFs of ?VmBusQueryClockCalibration@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C02444A0
 * Callers:
 *     <none>
 * Callees:
 *     ??0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z @ 0x1C0002B54 (--0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x1C00042D8 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0006D68 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C00243B0 (__security_check_cookie.c)
 *     ??$CastToVmBusCommand@UDXGKVMB_COMMAND_ACQUIREKEYEDMUTEXSYNC@@@@YAPEAUDXGKVMB_COMMAND_ACQUIREKEYEDMUTEXSYNC@@PEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C0025A3C (--$CastToVmBusCommand@UDXGKVMB_COMMAND_ACQUIREKEYEDMUTEXSYNC@@@@YAPEAUDXGKVMB_COMMAND_ACQUIREKEY.c)
 *     ?VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z @ 0x1C00408F0 (-VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z.c)
 *     ?DxgkQueryClockCalibrationInternal@@YAJPEAVDXGPROCESS@@PEAU_D3DKMT_QUERYCLOCKCALIBRATION@@PEAVDXGADAPTER@@@Z @ 0x1C00D47F8 (-DxgkQueryClockCalibrationInternal@@YAJPEAVDXGPROCESS@@PEAU_D3DKMT_QUERYCLOCKCALIBRATION@@PEAVDX.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0111EB0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

char __fastcall DXG_HOST_VIRTUALGPU_VMBUS::VmBusQueryClockCalibration(struct DXGADAPTER_VMBUS_PACKET *a1)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // rax
  char v5; // bl
  __int64 v6; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rsi
  struct DXGPROCESS *Current; // rax
  int ClockCalibrationInternal; // eax
  struct VMBPACKETCOMPLETION__ *v13; // rcx
  _BYTE v14[8]; // [rsp+20h] [rbp-48h] BYREF
  DXGPUSHLOCK *v15; // [rsp+28h] [rbp-40h]
  int v16; // [rsp+30h] [rbp-38h]
  _OWORD v17[2]; // [rsp+38h] [rbp-30h] BYREF

  DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v14, (struct _KTHREAD **)(*((_QWORD *)a1 + 5) + 232LL), 0);
  DXGPUSHLOCK::AcquireShared(v15);
  v4 = *((_QWORD *)a1 + 5);
  v5 = 1;
  v16 = 1;
  if ( *(_BYTE *)(v4 + 165) )
  {
    v10 = CastToVmBusCommand<DXGKVMB_COMMAND_ACQUIREKEYEDMUTEXSYNC>((__int64)a1);
    if ( v10 )
    {
      memset(v17, 0, sizeof(v17));
      Current = DXGPROCESS::GetCurrent(v9, v8);
      if ( Current )
      {
        ClockCalibrationInternal = DxgkQueryClockCalibrationInternal(
                                     Current,
                                     (struct _D3DKMT_QUERYCLOCKCALIBRATION *)(v10 + 24),
                                     *(struct DXGADAPTER **)(*((_QWORD *)a1 + 5) + 16LL));
        v13 = (struct VMBPACKETCOMPLETION__ *)*((_QWORD *)a1 + 9);
        LODWORD(v17[0]) = ClockCalibrationInternal;
        *(_OWORD *)((char *)v17 + 4) = *(_OWORD *)(v10 + 36);
        *(_QWORD *)((char *)&v17[1] + 4) = *(_QWORD *)(v10 + 52);
        HIDWORD(v17[1]) = *(_DWORD *)(v10 + 60);
        VmBusCompletePacket(v13, v17, 0x20u);
        goto LABEL_4;
      }
    }
  }
  else
  {
    v6 = WdLogNewEntry5_WdError(v3, v2);
    *(_QWORD *)(v6 + 24) = 2816LL;
    WdLogEvent5_WdError(v6);
  }
  v5 = 0;
LABEL_4:
  DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v14);
  return v5;
}
