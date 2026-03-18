/*
 * XREFs of ?VmBusCreateHwQueue@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C0369B50
 * Callers:
 *     <none>
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ??0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z @ 0x1C000EF08 (--0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C000FA80 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C000FABC (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??$CastToVmBusCommand@UDXGKVMB_COMMAND_PRESENTHISTORYTOKEN@@@@YAPEAUDXGKVMB_COMMAND_PRESENTHISTORYTOKEN@@PEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C005C6F4 (--$CastToVmBusCommand@UDXGKVMB_COMMAND_PRESENTHISTORYTOKEN@@@@YAPEAUDXGKVMB_COMMAND_PRESENTHISTO.c)
 *     ?VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z @ 0x1C005DE78 (-VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z.c)
 *     DxgkCreateHwQueueInternal @ 0x1C0312760 (DxgkCreateHwQueueInternal.c)
 */

char __fastcall DXG_HOST_VIRTUALGPU_VMBUS::VmBusCreateHwQueue(struct DXGADAPTER_VMBUS_PACKET *a1)
{
  __int64 v2; // rax
  char v3; // r14
  __int64 v5; // rax
  __int64 v6; // r8
  __int64 v7; // rdi
  unsigned __int64 v8; // rcx
  __int64 v9; // rdx
  unsigned int v10; // r15d
  int HwQueueInternal; // eax
  __int64 v12; // rbx
  _BYTE v13[8]; // [rsp+58h] [rbp-9h] BYREF
  DXGPUSHLOCK *v14; // [rsp+60h] [rbp-1h]
  int v15; // [rsp+68h] [rbp+7h]
  __int128 v16; // [rsp+70h] [rbp+Fh] BYREF
  __int128 v17; // [rsp+80h] [rbp+1Fh]
  __int128 v18; // [rsp+90h] [rbp+2Fh]

  DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v13, (struct _KTHREAD **)(*((_QWORD *)a1 + 10) + 248LL), 0);
  DXGPUSHLOCK::AcquireShared(v14);
  v2 = *((_QWORD *)a1 + 10);
  v3 = 1;
  v15 = 1;
  if ( !*(_BYTE *)(v2 + 173) )
  {
    WdLogSingleEntry1(2LL, 1171LL);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"The adapter is already closed by the guest",
      1171LL,
      0LL,
      0LL,
      0LL,
      0LL);
LABEL_3:
    v3 = 0;
    goto LABEL_4;
  }
  v5 = CastToVmBusCommand<DXGKVMB_COMMAND_PRESENTHISTORYTOKEN>((__int64)a1);
  v7 = v5;
  if ( !v5 )
    goto LABEL_3;
  v8 = *(unsigned int *)(v5 + 64);
  v9 = *((unsigned int *)a1 + 36);
  if ( v9 - 71 < v8 )
  {
    WdLogSingleEntry2(2LL, v9, 1177LL);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Invalid packet size: 0x%I64x",
      *((unsigned int *)a1 + 36),
      1177LL,
      0LL,
      0LL,
      0LL);
    goto LABEL_3;
  }
  v10 = v8 + 71;
  v16 = 0LL;
  v17 = 0LL;
  v18 = 0LL;
  *(_QWORD *)&v16 = *(_QWORD *)(v5 + 56);
  if ( *(_DWORD *)(v5 + 64) )
  {
    *(_QWORD *)&v17 = v5 + 68;
    DWORD2(v16) = *(_DWORD *)(v5 + 64);
  }
  HwQueueInternal = DxgkCreateHwQueueInternal((__int64)&v16, 0, v6);
  *(_DWORD *)(v7 + 24) = HwQueueInternal;
  if ( HwQueueInternal < 0 )
  {
    v12 = HwQueueInternal;
    WdLogSingleEntry2(2LL, HwQueueInternal, 1211LL);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Failed to create HwQueue, returning: 0x%I64x",
      v12,
      1211LL,
      0LL,
      0LL,
      0LL);
  }
  else
  {
    *(_QWORD *)(v7 + 28) = *((_QWORD *)&v17 + 1);
    *(_OWORD *)(v7 + 40) = v18;
  }
  VmBusCompletePacket(*((struct VMBPACKETCOMPLETION__ **)a1 + 16), (void *)v7, v10);
LABEL_4:
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v13);
  return v3;
}
