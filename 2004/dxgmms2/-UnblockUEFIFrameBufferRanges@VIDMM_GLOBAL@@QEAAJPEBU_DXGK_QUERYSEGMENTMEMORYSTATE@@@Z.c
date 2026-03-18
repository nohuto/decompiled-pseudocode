/*
 * XREFs of ?UnblockUEFIFrameBufferRanges@VIDMM_GLOBAL@@QEAAJPEBU_DXGK_QUERYSEGMENTMEMORYSTATE@@@Z @ 0x1C00B5600
 * Callers:
 *     VidMmUnblockUEFIFrameBufferRanges @ 0x1C0022DB0 (VidMmUnblockUEFIFrameBufferRanges.c)
 * Callees:
 *     ?UnblockMemoryRanges@VIDMM_SEGMENT@@QEAAJW4_VIDMM_POOL_BLOCK_STATE@@IPEAU_DXGK_MEMORYRANGE@@@Z @ 0x1C00CAF54 (-UnblockMemoryRanges@VIDMM_SEGMENT@@QEAAJW4_VIDMM_POOL_BLOCK_STATE@@IPEAU_DXGK_MEMORYRANGE@@@Z.c)
 */

__int64 __fastcall VIDMM_GLOBAL::UnblockUEFIFrameBufferRanges(
        VIDMM_GLOBAL *this,
        const struct _DXGK_QUERYSEGMENTMEMORYSTATE *a2)
{
  _QWORD *v4; // rax
  __int64 v5; // rax
  __int64 v6; // rcx
  __int64 v7; // rdx

  if ( KeGetCurrentThread() == *(struct _KTHREAD **)(*(_QWORD *)this + 8LL) )
  {
    v4 = (_QWORD *)WdLogNewEntry5_WdCriticalError(this, a2);
    v4[5] = 0LL;
    v4[6] = 0LL;
    v4[7] = 0LL;
    v4[3] = 275LL;
    v4[4] = 23LL;
    WdLogEvent5_WdCriticalError(v4);
  }
  if ( a2->NumInvalidMemoryRanges == 1 )
  {
    v6 = 1584LL * a2->PhysicalAdapterIndex;
    v7 = *(_DWORD *)(v6 + *((_QWORD *)this + 5027) + 20) + (unsigned int)a2->DriverSegmentId;
    if ( (unsigned int)v7 < *((_DWORD *)this + 926) )
    {
      v6 = *(_QWORD *)(*((_QWORD *)this + 464) + 8 * v7);
      if ( v6 )
        return VIDMM_SEGMENT::UnblockMemoryRanges(v6, v7, 1LL, a2->pMemoryRanges);
    }
    v5 = WdLogNewEntry5_WdAssertion(v6, v7, 1LL);
    *(_QWORD *)(v5 + 24) = a2->PhysicalAdapterIndex;
    *(_QWORD *)(v5 + 32) = a2->DriverSegmentId;
  }
  else
  {
    v5 = WdLogNewEntry5_WdAssertion(this, a2, 1LL);
    *(_QWORD *)(v5 + 24) = a2->NumInvalidMemoryRanges;
  }
  WdLogEvent5_WdAssertion(v5);
  return 3221225485LL;
}
