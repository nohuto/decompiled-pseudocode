/*
 * XREFs of ?Decommit@VIDMM_RECYCLE_RANGE@@QEAAXXZ @ 0x1C00C2470
 * Callers:
 *     ?Allocate@VIDMM_RECYCLE_HEAP@@QEAAJ_KIPEAPEAX11PEAEE@Z @ 0x1C0078F40 (-Allocate@VIDMM_RECYCLE_HEAP@@QEAAJ_KIPEAPEAX11PEAEE@Z.c)
 * Callees:
 *     ?RemoveFromDebounce@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z @ 0x1C007A758 (-RemoveFromDebounce@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z.c)
 *     ?AddToUnlockDebounce@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z @ 0x1C007A96C (-AddToUnlockDebounce@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z.c)
 *     ?AddToDecommitDebounce@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z @ 0x1C007C53C (-AddToDecommitDebounce@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z.c)
 *     ?Transition@VIDMM_RECYCLE_RANGE@@QEAAXW4VIDMM_RECYCLE_RANGE_STATE@@@Z @ 0x1C007CC6C (-Transition@VIDMM_RECYCLE_RANGE@@QEAAXW4VIDMM_RECYCLE_RANGE_STATE@@@Z.c)
 */

void __fastcall VIDMM_RECYCLE_RANGE::Decommit(VIDMM_RECYCLE_RANGE *this, __int64 a2)
{
  __int64 v2; // rbx
  __int64 v4; // rcx
  _QWORD *v5; // rax
  VIDMM_RECYCLE_HEAP_MGR *v6; // rcx
  VIDMM_RECYCLE_HEAP_MGR *v7; // rbx
  __int64 v8; // rdx
  __int64 v9; // rcx

  v2 = *((int *)this + 16);
  v4 = (unsigned int)(*((_DWORD *)this + 16) - 1);
  if ( (_DWORD)v4 )
  {
    if ( (_DWORD)v4 != 2 )
    {
      v5 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v4, a2);
      v5[7] = 0LL;
      v5[3] = 270LL;
      v5[4] = 52LL;
      v5[5] = 1LL;
      v5[6] = v2;
      WdLogEvent5_WdCriticalError(v5);
      return;
    }
    v6 = *(VIDMM_RECYCLE_HEAP_MGR **)(*((_QWORD *)this + 9) + 32LL);
    v7 = (VIDMM_RECYCLE_HEAP_MGR *)*((_QWORD *)v6 + 1);
    VIDMM_RECYCLE_HEAP_MGR::RemoveFromDebounce(v6, this);
    VIDMM_RECYCLE_HEAP_MGR::AddToUnlockDebounce(v7, this);
    v8 = 4LL;
  }
  else
  {
    v9 = *(_QWORD *)(*((_QWORD *)this + 9) + 32LL);
    if ( (unsigned int)(*(_DWORD *)v9 - 3) <= 3 || (unsigned int)(*(_DWORD *)v9 - 9) <= 1 )
    {
      v8 = 0LL;
    }
    else
    {
      VIDMM_RECYCLE_HEAP_MGR::AddToDecommitDebounce(*(VIDMM_RECYCLE_HEAP_MGR **)(v9 + 8), this);
      v8 = 5LL;
    }
  }
  VIDMM_RECYCLE_RANGE::Transition((__int64)this, v8);
}
