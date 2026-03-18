/*
 * XREFs of ?WaitFence@BLTQUEUE@@QEAAJ_KPEAVDXGDEVICE@@@Z @ 0x1C02FBD50
 * Callers:
 *     ?Blt@BLTENTRY@@QEAAJXZ @ 0x1C02F8184 (-Blt@BLTENTRY@@QEAAJXZ.c)
 * Callees:
 *     ?VmBusSendWaitForSyncObjectFromCpu@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@IPEBU_D3DKMT_WAITFORSYNCHRONIZATIONOBJECTFROMCPU@@E@Z @ 0x1C02498BC (-VmBusSendWaitForSyncObjectFromCpu@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@IPEBU_D3DKMT.c)
 */

__int64 __fastcall BLTQUEUE::WaitFence(BLTQUEUE *this, __int64 a2, struct DXGDEVICE *a3)
{
  D3DKMT_HANDLE v4; // eax
  struct DXGPROCESS *v5; // rdx
  __int64 v6; // r8
  __int64 v7; // rdx
  __int64 v8; // rcx
  int v9; // ebx
  __int64 v10; // rax
  struct _D3DKMT_WAITFORSYNCHRONIZATIONOBJECTFROMCPU v12; // [rsp+30h] [rbp-38h] BYREF
  __int64 v13; // [rsp+78h] [rbp+10h] BYREF

  v13 = a2;
  *(_OWORD *)&v12.hAsyncEvent = 0LL;
  v12.FenceValueArray = (const UINT64 *)&v13;
  v4 = *((_DWORD *)a3 + 109);
  v5 = (struct DXGPROCESS *)*((_QWORD *)a3 + 5);
  v6 = *((unsigned int *)a3 + 110);
  v12.hDevice = v4;
  v12.ObjectCount = 1;
  v12.ObjectHandleArray = (const D3DKMT_HANDLE *)((char *)this + 2800);
  v9 = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendWaitForSyncObjectFromCpu(
         (DXG_GUEST_VIRTUALGPU_VMBUS *)(*(_QWORD *)(*((_QWORD *)a3 + 2) + 16LL) + 4208LL),
         v5,
         v6,
         &v12,
         1u);
  if ( v9 < 0 )
  {
    v10 = WdLogNewEntry5_WdError(v8, v7);
    *(_QWORD *)(v10 + 24) = 564LL;
    WdLogEvent5_WdError(v10);
  }
  return (unsigned int)v9;
}
