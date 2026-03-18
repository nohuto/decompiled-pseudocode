/*
 * XREFs of ?CreateGpadlFromMdl@DXG_GUEST_GLOBAL_VMBUS@@QEAAJPEAU_MDL@@PEAI@Z @ 0x1C0236D14
 * Callers:
 *     ?VmBusSendCreateAllocation@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJIIIPEBU_D3DKMT_CREATEALLOCATION@@PEAU_D3DDDI_ALLOCATIONINFO2@@PEAPEAXPEBX3EEPEAPEAE@Z @ 0x1C024567C (-VmBusSendCreateAllocation@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJIIIPEBU_D3DKMT_CREATEALLOCATION@@PEA.c)
 *     ?EnsureVmBusInterface@DXGGLOBAL@@QEAAJXZ @ 0x1C0268208 (-EnsureVmBusInterface@DXGGLOBAL@@QEAAJXZ.c)
 * Callees:
 *     ??0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z @ 0x1C0002B54 (--0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C00042F0 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0006D68 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0027100 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DXG_GUEST_GLOBAL_VMBUS::CreateGpadlFromMdl(
        struct _KTHREAD **this,
        struct _MDL *a2,
        unsigned int *a3)
{
  struct _KTHREAD *v6; // rcx
  _BYTE v8[8]; // [rsp+40h] [rbp-28h] BYREF
  DXGPUSHLOCK *v9; // [rsp+48h] [rbp-20h]
  int v10; // [rsp+50h] [rbp-18h]

  DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v8, this + 1, 0);
  DXGPUSHLOCK::AcquireShared(v9);
  v6 = *this;
  v10 = 1;
  LODWORD(a3) = ((__int64 (__fastcall *)(struct _KTHREAD *, _QWORD, struct _MDL *, _QWORD, _DWORD, unsigned int *))qword_1C00B2068)(
                  v6,
                  0LL,
                  a2,
                  0LL,
                  0,
                  a3);
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v8);
  return (unsigned int)a3;
}
