/*
 * XREFs of ?VmBusAdapterStop@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C0237920
 * Callers:
 *     <none>
 * Callees:
 *     ??0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z @ 0x1C000A800 (--0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C000A89C (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C000EB8C (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 */

unsigned __int8 __fastcall DXG_HOST_VIRTUALGPU_VMBUS::VmBusAdapterStop(struct DXGADAPTER_VMBUS_PACKET *a1)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // rax
  __int64 v5; // rax
  _BYTE v7[8]; // [rsp+20h] [rbp-28h] BYREF
  DXGPUSHLOCK *v8; // [rsp+28h] [rbp-20h]
  int v9; // [rsp+30h] [rbp-18h]

  DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v7, (struct _KTHREAD **)(*((_QWORD *)a1 + 5) + 232LL), 0);
  DXGPUSHLOCK::AcquireShared(v8);
  v4 = *((_QWORD *)a1 + 5);
  v9 = 1;
  if ( *(_BYTE *)(v4 + 165) )
  {
    *(_BYTE *)(v4 + 165) = 0;
  }
  else
  {
    v5 = WdLogNewEntry5_WdError(v3, v2);
    *(_QWORD *)(v5 + 24) = 932LL;
    WdLogEvent5_WdError(v5);
  }
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v7);
  return 0;
}
