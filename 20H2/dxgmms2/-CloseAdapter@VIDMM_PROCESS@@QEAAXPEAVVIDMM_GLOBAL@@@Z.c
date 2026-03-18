/*
 * XREFs of ?CloseAdapter@VIDMM_PROCESS@@QEAAXPEAVVIDMM_GLOBAL@@@Z @ 0x1C006A764
 * Callers:
 *     VidMmCloseAdapter @ 0x1C00114E0 (VidMmCloseAdapter.c)
 *     ??1VIDMM_SCH_LOG@@AEAA@XZ @ 0x1C003E304 (--1VIDMM_SCH_LOG@@AEAA@XZ.c)
 *     ??1VIDMM_DEVICE@@QEAA@XZ @ 0x1C0080CBC (--1VIDMM_DEVICE@@QEAA@XZ.c)
 *     ?MapGpuVA@VIDMM_FENCE_STORAGE_PAGE@@QEAAJPEAVVIDMM_GLOBAL@@PEAVVIDMM_DEVICE@@PEAVVIDMM_PROCESS@@PEAUVIDMM_MONITORED_FENCE_STORAGE@@PEA_KI_N@Z @ 0x1C00865A0 (-MapGpuVA@VIDMM_FENCE_STORAGE_PAGE@@QEAAJPEAVVIDMM_GLOBAL@@PEAVVIDMM_DEVICE@@PEAVVIDMM_PROCESS@@.c)
 *     ?UnmapGpuVA@VIDMM_FENCE_STORAGE_PAGE@@QEAAXPEAVVIDMM_GLOBAL@@PEAVVIDMM_PROCESS@@I_N@Z @ 0x1C0086EDC (-UnmapGpuVA@VIDMM_FENCE_STORAGE_PAGE@@QEAAXPEAVVIDMM_GLOBAL@@PEAVVIDMM_PROCESS@@I_N@Z.c)
 *     ??1VIDMM_GLOBAL@@QEAA@XZ @ 0x1C00AE7FC (--1VIDMM_GLOBAL@@QEAA@XZ.c)
 * Callees:
 *     ??0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z @ 0x1C0011A88 (--0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0012350 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C00123C8 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     memset @ 0x1C00185C0 (memset.c)
 *     ?DestroyAdapterInfo@VIDMM_PROCESS@@QEAAXK@Z @ 0x1C006A068 (-DestroyAdapterInfo@VIDMM_PROCESS@@QEAAXK@Z.c)
 *     ?ComputeNewWorkingSet@VIDMM_SEGMENT@@QEAAXK@Z @ 0x1C006A924 (-ComputeNewWorkingSet@VIDMM_SEGMENT@@QEAAXK@Z.c)
 *     ?QueueSystemCleanupCommandAndWait@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N@Z @ 0x1C0070990 (-QueueSystemCleanupCommandAndWait@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N@Z.c)
 */

void __fastcall VIDMM_PROCESS::CloseAdapter(struct _KTHREAD **this, struct VIDMM_GLOBAL *a2)
{
  unsigned int v2; // ebx
  __int64 v5; // r15
  struct _KTHREAD *v6; // rax
  __int64 v7; // rsi
  _DWORD *v8; // rsi
  bool v9; // r8
  __int64 v10; // rax
  _BYTE v11[8]; // [rsp+20h] [rbp-98h] BYREF
  DXGPUSHLOCK *v12; // [rsp+28h] [rbp-90h]
  int v13; // [rsp+30h] [rbp-88h]
  _QWORD v14[12]; // [rsp+40h] [rbp-78h] BYREF

  v2 = 0;
  if ( g_IsInternalReleaseOrDbg )
  {
    v10 = WdLogNewEntry5_WdTrace(this);
    *(_QWORD *)(v10 + 24) = a2;
    *(_QWORD *)(v10 + 32) = this;
  }
  v5 = *(unsigned int *)(*((_QWORD *)a2 + 3) + 232LL);
  DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v11, this + 32, 0LL);
  DXGPUSHLOCK::AcquireExclusive(v12);
  v6 = this[2];
  v13 = 2;
  v7 = *((_QWORD *)v6 + v5);
  if ( v7 && _InterlockedExchangeAdd((volatile signed __int32 *)(v7 + 8), 0xFFFFFFFF) <= 1 )
  {
    if ( *(_QWORD *)(v7 + 504) )
    {
      memset(v14, 0, 0x58uLL);
      v14[5] = *((_QWORD *)a2 + 5048);
      v14[0] = -4294967181LL;
      v14[6] = v7;
      VIDMM_GLOBAL::QueueSystemCleanupCommandAndWait(a2, (struct _VIDMM_SYSTEM_COMMAND *)v14, v9);
    }
    VIDMM_PROCESS::DestroyAdapterInfo((VIDMM_PROCESS *)this, v5);
    _InterlockedDecrement((volatile signed __int32 *)VIDMM_PROCESS::_pDxProcessPerAdapterCount + v5);
    if ( *((_DWORD *)a2 + 926) )
    {
      v8 = VIDMM_PROCESS::_pDxProcessPerAdapterCount;
      do
        VIDMM_SEGMENT::ComputeNewWorkingSet(*(VIDMM_SEGMENT **)(*((_QWORD *)a2 + 464) + 8LL * v2++), v8[v5]);
      while ( v2 < *((_DWORD *)a2 + 926) );
    }
  }
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v11);
}
