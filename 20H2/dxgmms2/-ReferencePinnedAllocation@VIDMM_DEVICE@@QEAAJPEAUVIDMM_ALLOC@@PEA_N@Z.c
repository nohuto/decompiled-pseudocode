/*
 * XREFs of ?ReferencePinnedAllocation@VIDMM_DEVICE@@QEAAJPEAUVIDMM_ALLOC@@PEA_N@Z @ 0x1C00B922C
 * Callers:
 *     ?PinOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@PEAVVIDMM_PAGING_QUEUE@@K_KPEA_K@Z @ 0x1C00B30C0 (-PinOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@PEAVVIDMM_PAGING_QUEUE@@K_KPEA_K@Z.c)
 * Callees:
 *     ??0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z @ 0x1C0011A88 (--0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0012350 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C00123C8 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ?CommitMemoryUsageChange@VIDMM_PROCESS_ADAPTER_INFO@@QEAAXXZ @ 0x1C006C2D4 (-CommitMemoryUsageChange@VIDMM_PROCESS_ADAPTER_INFO@@QEAAXXZ.c)
 *     ?BeginMemoryUsageChange@VIDMM_PROCESS_ADAPTER_INFO@@QEAAXXZ @ 0x1C006C4D4 (-BeginMemoryUsageChange@VIDMM_PROCESS_ADAPTER_INFO@@QEAAXXZ.c)
 *     ?NotifyAllocationResident@VIDMM_DEVICE@@QEAAXPEAUVIDMM_ALLOC@@@Z @ 0x1C00B90D0 (-NotifyAllocationResident@VIDMM_DEVICE@@QEAAXPEAUVIDMM_ALLOC@@@Z.c)
 */

__int64 __fastcall VIDMM_DEVICE::ReferencePinnedAllocation(
        VIDMM_PROCESS_ADAPTER_INFO **this,
        struct VIDMM_ALLOC *a2,
        bool *a3)
{
  __int64 v6; // rax
  char v8; // al
  bool v9; // si
  int v10; // eax
  __int64 v11; // rdx
  __int64 v12; // r8
  _BYTE v13[8]; // [rsp+20h] [rbp-38h] BYREF
  DXGPUSHLOCK *v14; // [rsp+28h] [rbp-30h]
  int v15; // [rsp+30h] [rbp-28h]
  _BYTE v16[8]; // [rsp+38h] [rbp-20h] BYREF
  DXGPUSHLOCK *v17; // [rsp+40h] [rbp-18h]
  int v18; // [rsp+48h] [rbp-10h]

  if ( *(_BYTE *)(**(_QWORD **)a2 + 88LL) )
  {
    v6 = WdLogNewEntry5_WdAssertion(this, a2, a3);
    *(_QWORD *)(v6 + 24) = a2;
    WdLogEvent5_WdAssertion(v6);
    return 3223191814LL;
  }
  else
  {
    DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v13, (struct _KTHREAD **)*this + 5579, 0LL);
    DXGPUSHLOCK::AcquireExclusive(v14);
    v8 = *((_BYTE *)a2 + 25);
    v9 = 1;
    v15 = 2;
    if ( (v8 & 1) != 0 )
    {
      *((_BYTE *)a2 + 25) = v8 | 4;
    }
    else
    {
      DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v16, (struct _KTHREAD **)this[2] + 45, 0LL);
      DXGPUSHLOCK::AcquireExclusive(v17);
      *((_BYTE *)a2 + 25) |= 1u;
      v10 = *((_DWORD *)a2 + 38);
      v18 = 2;
      if ( !v10 )
      {
        VIDMM_PROCESS_ADAPTER_INFO::BeginMemoryUsageChange(this[2]);
        VIDMM_DEVICE::NotifyAllocationResident((VIDMM_DEVICE ***)this, (__int64 **)a2);
        VIDMM_PROCESS_ADAPTER_INFO::CommitMemoryUsageChange(this[2], v11, v12);
      }
      DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v16);
      DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v13);
      v9 = 0;
    }
    *a3 = v9;
    DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v13);
    return 0LL;
  }
}
