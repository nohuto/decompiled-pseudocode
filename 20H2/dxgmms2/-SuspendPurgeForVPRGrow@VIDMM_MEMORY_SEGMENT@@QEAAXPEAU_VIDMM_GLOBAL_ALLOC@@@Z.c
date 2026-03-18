/*
 * XREFs of ?SuspendPurgeForVPRGrow@VIDMM_MEMORY_SEGMENT@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C00C67E4
 * Callers:
 *     ?TransferToSegment@VIDMM_MEMORY_SEGMENT@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@PEAU_MDL@@_N@Z @ 0x1C006DBB0 (-TransferToSegment@VIDMM_MEMORY_SEGMENT@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@PEAU_MDL@@_N@Z.c)
 * Callees:
 *     ??0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z @ 0x1C0011A88 (--0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0012350 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C00123C8 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ?RemoveFromPenaltyBoxByListEntry@VIDMM_GLOBAL@@QEAAXPEAU_LIST_ENTRY@@@Z @ 0x1C0012DD8 (-RemoveFromPenaltyBoxByListEntry@VIDMM_GLOBAL@@QEAAXPEAU_LIST_ENTRY@@@Z.c)
 *     ?FaultAllAllocations@VIDMM_DEVICE@@QEAAXXZ @ 0x1C006DFD8 (-FaultAllAllocations@VIDMM_DEVICE@@QEAAXXZ.c)
 *     ?PartiallySuspend@VIDMM_DEVICE@@IEAAXXZ @ 0x1C00B9144 (-PartiallySuspend@VIDMM_DEVICE@@IEAAXXZ.c)
 *     ?FreeSpaceForSecureResource@VIDMM_SEGMENT@@QEAAEPEAU_LIST_ENTRY@@PEAU_VIDMM_GLOBAL_ALLOC@@W4_VIDMM_PLACEMENT_RESTRICTION@@@Z @ 0x1C00C7BE0 (-FreeSpaceForSecureResource@VIDMM_SEGMENT@@QEAAEPEAU_LIST_ENTRY@@PEAU_VIDMM_GLOBAL_ALLOC@@W4_VID.c)
 */

void __fastcall VIDMM_MEMORY_SEGMENT::SuspendPurgeForVPRGrow(
        VIDMM_MEMORY_SEGMENT *this,
        struct _VIDMM_GLOBAL_ALLOC *a2)
{
  __int64 v3; // rdx
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rax
  VIDMM_GLOBAL *v8; // rcx
  struct _LIST_ENTRY *v9; // rdi
  struct _LIST_ENTRY *v10; // rdx
  VIDMM_GLOBAL **p_Blink; // rbx
  struct _LIST_ENTRY *v12[2]; // [rsp+20h] [rbp-30h] BYREF
  _BYTE v13[8]; // [rsp+30h] [rbp-20h] BYREF
  DXGPUSHLOCK *v14; // [rsp+38h] [rbp-18h]
  int v15; // [rsp+40h] [rbp-10h]

  v3 = *((_QWORD *)this + 1);
  v12[1] = (struct _LIST_ENTRY *)v12;
  v12[0] = (struct _LIST_ENTRY *)v12;
  DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v13, (struct _KTHREAD **)(v3 + 44472), 0LL);
  DXGPUSHLOCK::AcquireExclusive(v14);
  v15 = 2;
  if ( (unsigned __int8)VIDMM_SEGMENT::FreeSpaceForSecureResource(this, v12, a2, 6LL) )
  {
    v7 = WdLogNewEntry5_WdWarning(v6, v5);
    WdLogEvent5_WdWarning(v7);
    if ( *((_DWORD *)this + 103) )
    {
      v9 = v12[0];
      while ( v9 != (struct _LIST_ENTRY *)v12 )
      {
        v10 = v9;
        p_Blink = (VIDMM_GLOBAL **)&v9[-12].Blink;
        v9 = v9->Flink;
        VIDMM_GLOBAL::RemoveFromPenaltyBoxByListEntry(v8, v10);
        VIDMM_DEVICE::PartiallySuspend(p_Blink);
        VIDMM_DEVICE::FaultAllAllocations((VIDMM_DEVICE *)p_Blink);
      }
    }
  }
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v13);
}
