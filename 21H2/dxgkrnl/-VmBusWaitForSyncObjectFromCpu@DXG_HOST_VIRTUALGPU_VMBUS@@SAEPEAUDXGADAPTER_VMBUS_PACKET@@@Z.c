/*
 * XREFs of ?VmBusWaitForSyncObjectFromCpu@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C03830F0
 * Callers:
 *     <none>
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ??0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z @ 0x1C000EF08 (--0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C000FA80 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C000FABC (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ?AcquireReference@DXG_SIGNAL_GUEST_CPU_EVENT@@SAXPEAU1@@Z @ 0x1C004B9B0 (-AcquireReference@DXG_SIGNAL_GUEST_CPU_EVENT@@SAXPEAU1@@Z.c)
 *     ?ReleaseReference@DXG_SIGNAL_GUEST_CPU_EVENT@@SAXPEAU1@@Z @ 0x1C004BA80 (-ReleaseReference@DXG_SIGNAL_GUEST_CPU_EVENT@@SAXPEAU1@@Z.c)
 *     ??$CastToVmBusCommand@UDXGKVMB_COMMAND_VSYNCREMOTINGCTRL@@@@YAPEAUDXGKVMB_COMMAND_VSYNCREMOTINGCTRL@@PEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C005C634 (--$CastToVmBusCommand@UDXGKVMB_COMMAND_VSYNCREMOTINGCTRL@@@@YAPEAUDXGKVMB_COMMAND_VSYNCREMOTINGC.c)
 *     ?VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z @ 0x1C005DE78 (-VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z.c)
 *     ?DxgkWaitForSynchronizationObjectFromCpuInternal@@YAJPEBU_D3DKMT_WAITFORSYNCHRONIZATIONOBJECTFROMCPU@@HPEAX1@Z @ 0x1C01CD280 (-DxgkWaitForSynchronizationObjectFromCpuInternal@@YAJPEBU_D3DKMT_WAITFORSYNCHRONIZATIONOBJECTFRO.c)
 */

char __fastcall DXG_HOST_VIRTUALGPU_VMBUS::VmBusWaitForSyncObjectFromCpu(struct DXGADAPTER_VMBUS_PACKET *a1)
{
  __int64 v2; // rax
  char v3; // bl
  __int64 v4; // rax
  __int64 v5; // r9
  __int64 v6; // r14
  __int64 Pool2; // rdi
  __int64 v8; // rax
  __int64 v9; // rcx
  unsigned __int64 v10; // rax
  unsigned __int64 v11; // rcx
  unsigned int v12; // eax
  unsigned int v13; // ecx
  __int64 v14; // rax
  _BYTE v16[8]; // [rsp+50h] [rbp-9h] BYREF
  DXGPUSHLOCK *v17; // [rsp+58h] [rbp-1h]
  int v18; // [rsp+60h] [rbp+7h]
  struct _D3DKMT_WAITFORSYNCHRONIZATIONOBJECTFROMCPU v19; // [rsp+68h] [rbp+Fh] BYREF
  int v20; // [rsp+C0h] [rbp+67h] BYREF

  DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v16, (struct _KTHREAD **)(*((_QWORD *)a1 + 10) + 248LL), 0);
  DXGPUSHLOCK::AcquireShared(v17);
  v2 = *((_QWORD *)a1 + 10);
  v3 = 0;
  v18 = 1;
  if ( *(_BYTE *)(v2 + 173) )
  {
    v4 = CastToVmBusCommand<DXGKVMB_COMMAND_VSYNCREMOTINGCTRL>((__int64)a1);
    v6 = v4;
    if ( v4 )
    {
      v20 = -1073741811;
      memset(&v19, 0, sizeof(v19));
      Pool2 = 0LL;
      v8 = *(unsigned int *)(v4 + 28);
      if ( (_DWORD)v8 && (v9 = (unsigned int)v8, v10 = 4 * v8, v10 <= 0xFFFFFFFF) && (v11 = 8 * v9, v11 <= 0xFFFFFFFF) )
      {
        v12 = v10 + 56;
        if ( v12 < 0x38 )
        {
          WdLogSingleEntry1(3LL, 4052LL);
        }
        else
        {
          v13 = v12 + v11;
          if ( v13 < v12 )
          {
            WdLogSingleEntry1(3LL, 4057LL);
          }
          else if ( *((_DWORD *)a1 + 36) >= v13 )
          {
            if ( *(_QWORD *)(v6 + 40) )
            {
              Pool2 = ExAllocatePool2(64LL, 40LL, 1265072196LL, v5);
              if ( Pool2 )
              {
                v14 = *(_QWORD *)(v6 + 40);
                *(_QWORD *)Pool2 = *(_QWORD *)(*((_QWORD *)a1 + 10) + 104LL) + 160LL;
                *(_QWORD *)(Pool2 + 8) = v14;
                *(_BYTE *)(Pool2 + 16) = *(_BYTE *)(v6 + 48);
                *(_BYTE *)(Pool2 + 19) = (*(_DWORD *)(*((_QWORD *)a1 + 11) + 424LL) & 0x10) != 0;
                DXG_SIGNAL_GUEST_CPU_EVENT::AcquireReference((struct DXG_SIGNAL_GUEST_CPU_EVENT *)Pool2);
                v19.ObjectHandleArray = (const D3DKMT_HANDLE *)(v6 + 56);
                v19.FenceValueArray = (const UINT64 *)(v6 + 4 * (*(unsigned int *)(v6 + 28) + 14LL));
                v19.Flags.Value = *(_DWORD *)(v6 + 32);
                v19.hDevice = *(_DWORD *)(v6 + 24);
                v19.ObjectCount = *(_DWORD *)(v6 + 28);
                v19.hAsyncEvent = (HANDLE)Pool2;
                v20 = DxgkWaitForSynchronizationObjectFromCpuInternal(&v19, 0, (void *)Pool2, 0LL);
              }
              else
              {
                WdLogSingleEntry1(6LL, 4078LL);
                DxgkLogInternalTriageEvent(
                  0LL,
                  262145,
                  -1,
                  (__int64)L"Failed to allocate memory for DXG_SIGNAL_GUEST_CPU_EVENT",
                  4078LL,
                  0LL,
                  0LL,
                  0LL,
                  0LL);
                v20 = -1073741801;
              }
            }
            else
            {
              WdLogSingleEntry1(3LL, 4071LL);
            }
          }
          else
          {
            WdLogSingleEntry1(3LL, 4062LL);
          }
        }
      }
      else
      {
        WdLogSingleEntry1(3LL, 4047LL);
      }
      VmBusCompletePacket(*((struct VMBPACKETCOMPLETION__ **)a1 + 16), &v20, 4u);
      if ( v20 < 0 )
      {
        if ( Pool2 )
          DXG_SIGNAL_GUEST_CPU_EVENT::ReleaseReference((struct DXG_SIGNAL_GUEST_CPU_EVENT *)Pool2);
        WdLogSingleEntry1(3LL, 4111LL);
      }
      v3 = 1;
    }
  }
  else
  {
    WdLogSingleEntry1(2LL, 4032LL);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"The adapter is already closed by the guest",
      4032LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v16);
  return v3;
}
