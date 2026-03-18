/*
 * XREFs of ?VmBusQueryClockCalibration@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C0372DF0
 * Callers:
 *     <none>
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ??0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z @ 0x1C000EF08 (--0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C000FA80 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C000FABC (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C002B170 (__security_check_cookie.c)
 *     ??$CastToVmBusCommand@UDXGKVMB_COMMAND_ACQUIREKEYEDMUTEXSYNC@@@@YAPEAUDXGKVMB_COMMAND_ACQUIREKEYEDMUTEXSYNC@@PEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C005C5D4 (--$CastToVmBusCommand@UDXGKVMB_COMMAND_ACQUIREKEYEDMUTEXSYNC@@@@YAPEAUDXGKVMB_COMMAND_ACQUIREKEY.c)
 *     ?VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z @ 0x1C005DE78 (-VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0186AA0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?DxgkQueryClockCalibrationInternal@@YAJPEAVDXGPROCESS@@PEAU_D3DKMT_QUERYCLOCKCALIBRATION@@PEAVDXGADAPTER@@@Z @ 0x1C02CF06C (-DxgkQueryClockCalibrationInternal@@YAJPEAVDXGPROCESS@@PEAU_D3DKMT_QUERYCLOCKCALIBRATION@@PEAVDX.c)
 */

char __fastcall DXG_HOST_VIRTUALGPU_VMBUS::VmBusQueryClockCalibration(struct DXGADAPTER_VMBUS_PACKET *a1)
{
  __int64 v2; // rax
  char v3; // bl
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rsi
  __int64 v8; // r8
  __int64 v9; // r9
  struct DXGPROCESS *Current; // rax
  int ClockCalibrationInternal; // eax
  struct VMBPACKETCOMPLETION__ *v12; // rcx
  _BYTE v13[8]; // [rsp+50h] [rbp-48h] BYREF
  DXGPUSHLOCK *v14; // [rsp+58h] [rbp-40h]
  int v15; // [rsp+60h] [rbp-38h]
  _OWORD v16[2]; // [rsp+68h] [rbp-30h] BYREF

  DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v13, (struct _KTHREAD **)(*((_QWORD *)a1 + 10) + 248LL), 0);
  DXGPUSHLOCK::AcquireShared(v14);
  v2 = *((_QWORD *)a1 + 10);
  v3 = 1;
  v15 = 1;
  if ( *(_BYTE *)(v2 + 173) )
  {
    v7 = CastToVmBusCommand<DXGKVMB_COMMAND_ACQUIREKEYEDMUTEXSYNC>((__int64)a1);
    if ( v7 )
    {
      memset(v16, 0, sizeof(v16));
      Current = DXGPROCESS::GetCurrent(v6, v5, v8, v9);
      if ( Current )
      {
        ClockCalibrationInternal = DxgkQueryClockCalibrationInternal(
                                     Current,
                                     (struct _D3DKMT_QUERYCLOCKCALIBRATION *)(v7 + 24),
                                     *(struct DXGADAPTER **)(*((_QWORD *)a1 + 10) + 16LL));
        v12 = (struct VMBPACKETCOMPLETION__ *)*((_QWORD *)a1 + 16);
        LODWORD(v16[0]) = ClockCalibrationInternal;
        *(_OWORD *)((char *)v16 + 4) = *(_OWORD *)(v7 + 36);
        *(_QWORD *)((char *)&v16[1] + 4) = *(_QWORD *)(v7 + 52);
        HIDWORD(v16[1]) = *(_DWORD *)(v7 + 60);
        VmBusCompletePacket(v12, v16, 0x20u);
        goto LABEL_4;
      }
    }
  }
  else
  {
    WdLogSingleEntry1(2LL, 3153LL);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"The adapter is already closed by the guest",
      3153LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  v3 = 0;
LABEL_4:
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v13);
  return v3;
}
