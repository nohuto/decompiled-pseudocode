/*
 * XREFs of ?VmBusGetInternalAdapterInfo@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C0241C30
 * Callers:
 *     <none>
 * Callees:
 *     ??0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z @ 0x1C0002B94 (--0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C00044A0 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0007018 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C0024910 (__security_check_cookie.c)
 *     memset @ 0x1C0028F00 (memset.c)
 *     ?VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z @ 0x1C0041850 (-VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z.c)
 *     ?FillInternalAdapterInfo@DXGADAPTER@@QEBAXPEAUDXGKVMB_COMMAND_GETINTERNALADAPTERINFO_RETURN@@@Z @ 0x1C023A43C (-FillInternalAdapterInfo@DXGADAPTER@@QEBAXPEAUDXGKVMB_COMMAND_GETINTERNALADAPTERINFO_RETURN@@@Z.c)
 *     ?IsVailEnabled@DXGVIRTUALMACHINE@@QEAAEXZ @ 0x1C028597C (-IsVailEnabled@DXGVIRTUALMACHINE@@QEAAEXZ.c)
 */

char __fastcall DXG_HOST_VIRTUALGPU_VMBUS::VmBusGetInternalAdapterInfo(struct DXGADAPTER_VMBUS_PACKET *a1)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // rsi
  char v5; // di
  __int64 v6; // rax
  __int64 v7; // rcx
  char v8; // al
  unsigned __int8 IsVailEnabled; // al
  unsigned int v10; // r8d
  _BYTE v12[8]; // [rsp+20h] [rbp-E0h] BYREF
  DXGPUSHLOCK *v13; // [rsp+28h] [rbp-D8h]
  int v14; // [rsp+30h] [rbp-D0h]
  _DWORD v15[176]; // [rsp+38h] [rbp-C8h] BYREF

  DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v12, (struct _KTHREAD **)(*((_QWORD *)a1 + 5) + 232LL), 0);
  DXGPUSHLOCK::AcquireShared(v13);
  v4 = *((_QWORD *)a1 + 5);
  v5 = 0;
  v14 = 1;
  if ( *(_BYTE *)(v4 + 165) )
  {
    memset(v15, 0, sizeof(v15));
    DXGADAPTER::FillInternalAdapterInfo(
      *(DXGADAPTER **)(v4 + 16),
      (struct DXGKVMB_COMMAND_GETINTERNALADAPTERINFO_RETURN *)v15);
    v15[3] ^= (LOBYTE(v15[3]) ^ *(_BYTE *)(*((_QWORD *)a1 + 5) + 153LL)) & 1;
    v7 = *(_QWORD *)(*((_QWORD *)a1 + 7) + 496LL);
    v8 = *(_BYTE *)(v7 + 298);
    *(_BYTE *)(v7 + 298) = 0;
    v15[3] ^= (LOBYTE(v15[3]) ^ (unsigned __int8)(2 * v8)) & 2;
    v15[1] = *(_DWORD *)(*(_QWORD *)(*((_QWORD *)a1 + 5) + 16LL) + 2660LL);
    IsVailEnabled = DXGVIRTUALMACHINE::IsVailEnabled(*(DXGVIRTUALMACHINE **)(*((_QWORD *)a1 + 7) + 496LL));
    v10 = 24;
    v15[3] ^= (LOBYTE(v15[3]) ^ (unsigned __int8)(4 * IsVailEnabled)) & 4;
    if ( *(_DWORD *)(*(_QWORD *)(*((_QWORD *)a1 + 7) + 496LL) + 352LL) > 0x10u )
      v10 = 704;
    VmBusCompletePacket(*((struct VMBPACKETCOMPLETION__ **)a1 + 9), v15, v10);
    v5 = 1;
  }
  else
  {
    v6 = WdLogNewEntry5_WdError(v3, v2);
    *(_QWORD *)(v6 + 24) = 4542LL;
    WdLogEvent5_WdError(v6);
  }
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v12);
  return v5;
}
