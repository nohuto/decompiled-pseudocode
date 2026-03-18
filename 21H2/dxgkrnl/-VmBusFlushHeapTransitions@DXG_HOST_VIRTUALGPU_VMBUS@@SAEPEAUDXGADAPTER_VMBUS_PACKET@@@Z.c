/*
 * XREFs of ?VmBusFlushHeapTransitions@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C036D810
 * Callers:
 *     <none>
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ??0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z @ 0x1C000EF08 (--0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C000F3A0 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C000F3FC (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C000FA80 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C000FABC (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C002CCC0 (_guard_dispatch_icall_nop.c)
 *     ?VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z @ 0x1C005DE78 (-VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z.c)
 */

char __fastcall DXG_HOST_VIRTUALGPU_VMBUS::VmBusFlushHeapTransitions(struct DXGADAPTER_VMBUS_PACKET *a1)
{
  __int64 v2; // rbx
  char v3; // di
  __int64 v4; // rbx
  __int64 v5; // rcx
  _BYTE v7[8]; // [rsp+50h] [rbp-38h] BYREF
  __int64 v8; // [rsp+58h] [rbp-30h]
  char v9; // [rsp+60h] [rbp-28h]
  _BYTE v10[8]; // [rsp+68h] [rbp-20h] BYREF
  DXGPUSHLOCK *v11; // [rsp+70h] [rbp-18h]
  int v12; // [rsp+78h] [rbp-10h]
  int v13; // [rsp+90h] [rbp+8h] BYREF

  DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v10, (struct _KTHREAD **)(*((_QWORD *)a1 + 10) + 248LL), 0);
  DXGPUSHLOCK::AcquireShared(v11);
  v2 = *((_QWORD *)a1 + 10);
  v3 = 1;
  v12 = 1;
  if ( *(_BYTE *)(v2 + 173) )
  {
    v13 = 0;
    v4 = *(_QWORD *)(v2 + 16);
    v8 = v4;
    v9 = 0;
    DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v7);
    if ( *(_DWORD *)(v4 + 200) == 1 )
    {
      v5 = *(_QWORD *)(v4 + 2800);
      if ( v5 )
        (*(void (__fastcall **)(_QWORD))(*(_QWORD *)(*(_QWORD *)(v5 + 648) + 8LL) + 1104LL))(*(_QWORD *)(v5 + 656));
    }
    VmBusCompletePacket(*((struct VMBPACKETCOMPLETION__ **)a1 + 16), &v13, 4u);
    if ( v9 )
      DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v7);
  }
  else
  {
    WdLogSingleEntry1(2LL, 5003LL);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"The adapter is already closed by the guest",
      5003LL,
      0LL,
      0LL,
      0LL,
      0LL);
    v3 = 0;
  }
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v10);
  return v3;
}
