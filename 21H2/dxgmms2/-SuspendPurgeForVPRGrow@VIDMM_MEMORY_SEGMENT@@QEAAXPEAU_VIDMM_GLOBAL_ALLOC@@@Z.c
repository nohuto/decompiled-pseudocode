/*
 * XREFs of ?SuspendPurgeForVPRGrow@VIDMM_MEMORY_SEGMENT@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C00E95DC
 * Callers:
 *     ?TransferToSegment@VIDMM_MEMORY_SEGMENT@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@PEAU_MDL@@_N@Z @ 0x1C0084964 (-TransferToSegment@VIDMM_MEMORY_SEGMENT@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@PEAU_MDL@@_N@Z.c)
 * Callees:
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C000209C (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C000242C (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z @ 0x1C00024A4 (--0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z.c)
 *     ?RemoveFromPenaltyBoxByListEntry@VIDMM_GLOBAL@@QEAAXPEAU_LIST_ENTRY@@@Z @ 0x1C0014F18 (-RemoveFromPenaltyBoxByListEntry@VIDMM_GLOBAL@@QEAAXPEAU_LIST_ENTRY@@@Z.c)
 *     ?FaultAllAllocations@VIDMM_DEVICE@@QEAAXXZ @ 0x1C00A08E8 (-FaultAllAllocations@VIDMM_DEVICE@@QEAAXXZ.c)
 *     ?PartiallySuspend@VIDMM_DEVICE@@IEAAXXZ @ 0x1C00DDA2C (-PartiallySuspend@VIDMM_DEVICE@@IEAAXXZ.c)
 *     ?FreeSpaceForSecureResource@VIDMM_SEGMENT@@QEAAEPEAU_LIST_ENTRY@@PEAU_VIDMM_GLOBAL_ALLOC@@W4_VIDMM_PLACEMENT_RESTRICTION@@@Z @ 0x1C00EA9AC (-FreeSpaceForSecureResource@VIDMM_SEGMENT@@QEAAEPEAU_LIST_ENTRY@@PEAU_VIDMM_GLOBAL_ALLOC@@W4_VID.c)
 */

void __fastcall VIDMM_MEMORY_SEGMENT::SuspendPurgeForVPRGrow(
        VIDMM_MEMORY_SEGMENT *this,
        struct _VIDMM_GLOBAL_ALLOC *a2)
{
  __int64 v3; // rdx
  VIDMM_GLOBAL *v5; // rcx
  struct _LIST_ENTRY *v6; // rdi
  struct _LIST_ENTRY *v7; // rdx
  VIDMM_GLOBAL **v8; // rbx
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r9
  struct _LIST_ENTRY *v12[2]; // [rsp+20h] [rbp-30h] BYREF
  _BYTE v13[8]; // [rsp+30h] [rbp-20h] BYREF
  DXGPUSHLOCK *v14; // [rsp+38h] [rbp-18h]
  int v15; // [rsp+40h] [rbp-10h]

  v3 = *((_QWORD *)this + 1);
  v12[1] = (struct _LIST_ENTRY *)v12;
  v12[0] = (struct _LIST_ENTRY *)v12;
  DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v13, (struct _KTHREAD **)(v3 + 44480), 0);
  DXGPUSHLOCK::AcquireExclusive(v14);
  v15 = 2;
  if ( (unsigned __int8)VIDMM_SEGMENT::FreeSpaceForSecureResource(this, v12, a2, 6LL) )
  {
    WdLogSingleEntry0(3LL);
    if ( *((_DWORD *)this + 103) )
    {
      v6 = v12[0];
      while ( v6 != (struct _LIST_ENTRY *)v12 )
      {
        v7 = v6;
        v8 = (VIDMM_GLOBAL **)&v6[-12];
        v6 = v6->Flink;
        VIDMM_GLOBAL::RemoveFromPenaltyBoxByListEntry(v5, v7);
        VIDMM_DEVICE::PartiallySuspend(v8);
        VIDMM_DEVICE::FaultAllAllocations((VIDMM_DEVICE *)v8, v9, v10, v11);
      }
    }
  }
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v13);
}
