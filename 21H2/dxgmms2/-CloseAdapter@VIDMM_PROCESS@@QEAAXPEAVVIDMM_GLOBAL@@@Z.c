/*
 * XREFs of ?CloseAdapter@VIDMM_PROCESS@@QEAAXPEAVVIDMM_GLOBAL@@@Z @ 0x1C0098DD4
 * Callers:
 *     VidMmCloseAdapter @ 0x1C0018D60 (VidMmCloseAdapter.c)
 *     ??1VIDMM_SCH_LOG@@AEAA@XZ @ 0x1C0047164 (--1VIDMM_SCH_LOG@@AEAA@XZ.c)
 *     ??1VIDMM_DEVICE@@QEAA@XZ @ 0x1C0099084 (--1VIDMM_DEVICE@@QEAA@XZ.c)
 *     ?MapGpuVA@VIDMM_FENCE_STORAGE_PAGE@@QEAAJPEAVVIDMM_GLOBAL@@PEAVVIDMM_DEVICE@@PEAVVIDMM_PROCESS@@PEAUVIDMM_MONITORED_FENCE_STORAGE@@PEA_KI_N@Z @ 0x1C009ABBC (-MapGpuVA@VIDMM_FENCE_STORAGE_PAGE@@QEAAJPEAVVIDMM_GLOBAL@@PEAVVIDMM_DEVICE@@PEAVVIDMM_PROCESS@@.c)
 *     ?UnmapGpuVA@VIDMM_FENCE_STORAGE_PAGE@@QEAAXPEAVVIDMM_GLOBAL@@PEAVVIDMM_PROCESS@@I_N@Z @ 0x1C009B884 (-UnmapGpuVA@VIDMM_FENCE_STORAGE_PAGE@@QEAAXPEAVVIDMM_GLOBAL@@PEAVVIDMM_PROCESS@@I_N@Z.c)
 *     ??1VIDMM_GLOBAL@@QEAA@XZ @ 0x1C00D4CC4 (--1VIDMM_GLOBAL@@QEAA@XZ.c)
 * Callees:
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C000209C (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C000242C (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z @ 0x1C00024A4 (--0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z.c)
 *     memset @ 0x1C001DC40 (memset.c)
 *     ?ComputeNewWorkingSet@VIDMM_SEGMENT@@QEAAXK@Z @ 0x1C009A720 (-ComputeNewWorkingSet@VIDMM_SEGMENT@@QEAAXK@Z.c)
 *     ?QueueSystemCleanupCommandAndWait@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N@Z @ 0x1C009BAE4 (-QueueSystemCleanupCommandAndWait@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N@Z.c)
 *     ?DestroyAdapterInfo@VIDMM_PROCESS@@QEAAXK@Z @ 0x1C009D96C (-DestroyAdapterInfo@VIDMM_PROCESS@@QEAAXK@Z.c)
 */

void __fastcall VIDMM_PROCESS::CloseAdapter(struct _KTHREAD **this, struct VIDMM_GLOBAL *a2, __int64 a3, __int64 a4)
{
  unsigned int v4; // ebx
  __int64 v7; // r15
  struct _KTHREAD *v8; // rax
  __int64 v9; // rsi
  bool v10; // r8
  _DWORD *v11; // rsi
  __int64 v12; // rax
  _BYTE v13[8]; // [rsp+20h] [rbp-98h] BYREF
  DXGPUSHLOCK *v14; // [rsp+28h] [rbp-90h]
  int v15; // [rsp+30h] [rbp-88h]
  _QWORD v16[12]; // [rsp+40h] [rbp-78h] BYREF

  v4 = 0;
  if ( g_IsInternalReleaseOrDbg )
  {
    v12 = WdLogNewEntry5_WdTrace(this, a2, a3, a4);
    *(_QWORD *)(v12 + 24) = a2;
    *(_QWORD *)(v12 + 32) = this;
  }
  v7 = *(unsigned int *)(*((_QWORD *)a2 + 3) + 240LL);
  DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v13, this + 32, 0);
  DXGPUSHLOCK::AcquireExclusive(v14);
  v8 = this[2];
  v15 = 2;
  v9 = *((_QWORD *)v8 + v7);
  if ( v9 && _InterlockedExchangeAdd((volatile signed __int32 *)(v9 + 8), 0xFFFFFFFF) <= 1 )
  {
    if ( *(_QWORD *)(v9 + 504) )
    {
      memset(v16, 0, 0x58uLL);
      v16[5] = *((_QWORD *)a2 + 5048);
      v16[0] = -4294967181LL;
      v16[6] = v9;
      VIDMM_GLOBAL::QueueSystemCleanupCommandAndWait(a2, (struct _VIDMM_SYSTEM_COMMAND *)v16, v10);
    }
    VIDMM_PROCESS::DestroyAdapterInfo((VIDMM_PROCESS *)this, v7);
    _InterlockedDecrement((volatile signed __int32 *)VIDMM_PROCESS::_pDxProcessPerAdapterCount + v7);
    if ( *((_DWORD *)a2 + 926) )
    {
      v11 = VIDMM_PROCESS::_pDxProcessPerAdapterCount;
      do
        VIDMM_SEGMENT::ComputeNewWorkingSet(*(VIDMM_SEGMENT **)(*((_QWORD *)a2 + 464) + 8LL * v4++), v11[v7]);
      while ( v4 < *((_DWORD *)a2 + 926) );
    }
  }
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v13);
}
