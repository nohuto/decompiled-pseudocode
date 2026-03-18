/*
 * XREFs of ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0001400
 * Callers:
 *     ?FlushTransitions@VIDMM_RECYCLE_HEAP_MGR@@UEAAJXZ @ 0x1C007C8D0 (-FlushTransitions@VIDMM_RECYCLE_HEAP_MGR@@UEAAJXZ.c)
 *     ?GetBackingAddress@VIDMM_RECYCLE_HEAP_MGR@@UEAA_KPEAX@Z @ 0x1C007CF50 (-GetBackingAddress@VIDMM_RECYCLE_HEAP_MGR@@UEAA_KPEAX@Z.c)
 *     ?MarkNoZeroNeed@VIDMM_RECYCLE_HEAP_MGR@@UEAAXPEAX@Z @ 0x1C007D610 (-MarkNoZeroNeed@VIDMM_RECYCLE_HEAP_MGR@@UEAAXPEAX@Z.c)
 *     ?Reset@VIDMM_RECYCLE_HEAP_MGR@@UEAAJPEAU_VIDMM_GLOBAL_ALLOC@@PEAXE@Z @ 0x1C007D680 (-Reset@VIDMM_RECYCLE_HEAP_MGR@@UEAAJPEAU_VIDMM_GLOBAL_ALLOC@@PEAXE@Z.c)
 *     ?ProbeAndLockAllocation@VIDMM_RECYCLE_HEAP_MGR@@UEAAJPEAU_VIDMM_GLOBAL_ALLOC@@_K1W4_LOCK_OPERATION@@PEAVVIDMM_SEGMENT@@E@Z @ 0x1C007DDF0 (-ProbeAndLockAllocation@VIDMM_RECYCLE_HEAP_MGR@@UEAAJPEAU_VIDMM_GLOBAL_ALLOC@@_K1W4_LOCK_OPERATI.c)
 *     ?UnlockAllocation@VIDMM_RECYCLE_HEAP_MGR@@UEAAXPEAX_K1E@Z @ 0x1C007DEB0 (-UnlockAllocation@VIDMM_RECYCLE_HEAP_MGR@@UEAAXPEAX_K1E@Z.c)
 *     ?CurationThread@VIDMM_RECYCLE_HEAP_MGR@@QEAAXXZ @ 0x1C007E9F0 (-CurationThread@VIDMM_RECYCLE_HEAP_MGR@@QEAAXXZ.c)
 *     ?Free@VIDMM_RECYCLE_HEAP_MGR@@UEAAXPEAU_VIDMM_LOCAL_ALLOC@@@Z @ 0x1C007EE40 (-Free@VIDMM_RECYCLE_HEAP_MGR@@UEAAXPEAU_VIDMM_LOCAL_ALLOC@@@Z.c)
 *     ??1VIDMM_RECYCLE_HEAP_MGR@@UEAA@XZ @ 0x1C0081C04 (--1VIDMM_RECYCLE_HEAP_MGR@@UEAA@XZ.c)
 *     ?GetMDLForRange@VIDMM_RECYCLE_HEAP_MGR@@UEAAPEAU_MDL@@PEAX_K1@Z @ 0x1C00A86C0 (-GetMDLForRange@VIDMM_RECYCLE_HEAP_MGR@@UEAAPEAU_MDL@@PEAX_K1@Z.c)
 *     ?Rotate@VIDMM_RECYCLE_HEAP_MGR@@UEAAJPEAVVIDMM_GLOBAL@@PEAXW4_MM_ROTATE_DIRECTION@@PEAU_MDL@@_KP6AJ331@Z1TVIDMM_ROTATE_FLAGS@@PEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C00A8CD0 (-Rotate@VIDMM_RECYCLE_HEAP_MGR@@UEAAJPEAVVIDMM_GLOBAL@@PEAXW4_MM_ROTATE_DIRECTION@@PEAU_MDL@@_KP.c)
 *     ?ProcessDebounceListsGlobally@VIDMM_RECYCLE_HEAP_MGR@@SAX_N@Z @ 0x1C00AA464 (-ProcessDebounceListsGlobally@VIDMM_RECYCLE_HEAP_MGR@@SAX_N@Z.c)
 *     ?MapLocked@VIDMM_RECYCLE_HEAP_MGR@@UEAAPEAXPEAX@Z @ 0x1C00E69F0 (-MapLocked@VIDMM_RECYCLE_HEAP_MGR@@UEAAPEAXPEAX@Z.c)
 *     ?MapViewOfAllocation@VIDMM_RECYCLE_HEAP_MGR@@UEAAPEAXPEAX_K1H@Z @ 0x1C00E6E40 (-MapViewOfAllocation@VIDMM_RECYCLE_HEAP_MGR@@UEAAPEAXPEAX_K1H@Z.c)
 *     ?MapViewOfAllocationExternal@VIDMM_RECYCLE_HEAP_MGR@@UEAAPEAXPEAX_K@Z @ 0x1C00E6EC0 (-MapViewOfAllocationExternal@VIDMM_RECYCLE_HEAP_MGR@@UEAAPEAXPEAX_K@Z.c)
 *     ?ReportHeapStates@VIDMM_RECYCLE_HEAP_MGR@@QEAAXXZ @ 0x1C00E70C4 (-ReportHeapStates@VIDMM_RECYCLE_HEAP_MGR@@QEAAXXZ.c)
 *     ?ResetUndo@VIDMM_RECYCLE_HEAP_MGR@@UEAAJPEAX@Z @ 0x1C00E7300 (-ResetUndo@VIDMM_RECYCLE_HEAP_MGR@@UEAAJPEAX@Z.c)
 *     ?UnmapViewOfAllocation@VIDMM_RECYCLE_HEAP_MGR@@UEAAXPEAX@Z @ 0x1C00E7630 (-UnmapViewOfAllocation@VIDMM_RECYCLE_HEAP_MGR@@UEAAXPEAX@Z.c)
 *     ?UnmapViewOfAllocationExternal@VIDMM_RECYCLE_HEAP_MGR@@UEAAXPEAX0@Z @ 0x1C00E7680 (-UnmapViewOfAllocationExternal@VIDMM_RECYCLE_HEAP_MGR@@UEAAXPEAX0@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C001D930 (_guard_dispatch_icall_nop.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C001E570 (McTemplateK0q_EtwWriteTransfer.c)
 */

void __fastcall DXGAUTOMUTEX::Acquire(DXGAUTOMUTEX *this)
{
  __int64 v2; // rbx
  __int64 v3; // rcx
  int v4; // eax
  int v5; // eax

  if ( *((_BYTE *)this + 8) )
    WdLogSingleEntry5(0LL, 275LL, 4LL, this, 0LL, 0LL);
  v2 = *(_QWORD *)this;
  KeEnterCriticalRegion();
  if ( *(struct _KTHREAD **)(v2 + 24) == KeGetCurrentThread() )
  {
    v5 = *(_DWORD *)(v2 + 32);
    if ( v5 <= 0 )
    {
      WdLogSingleEntry1(1LL, 472LL);
      DxgCoreInterface[85](0LL, 262146LL, 0xFFFFFFFFLL, L"m_OwnerAcquireCount > 0", 472LL, 0LL, 0LL, 0LL, 0LL);
      v5 = *(_DWORD *)(v2 + 32);
    }
    v4 = v5 + 1;
  }
  else
  {
    if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx(v2 + 8, 0LL) )
    {
      if ( bTracingEnabled && *(_DWORD *)(v2 + 36) != -1 && (byte_1C006E941 & 1) != 0 )
        McTemplateK0q_EtwWriteTransfer(v3, &EventBlockThread);
      _InterlockedIncrement64((volatile signed __int64 *)(v2 + 16));
      ExAcquirePushLockExclusiveEx(v2 + 8, 0LL);
    }
    if ( *(_QWORD *)(v2 + 24) )
    {
      WdLogSingleEntry1(1LL, 496LL);
      DxgCoreInterface[85](0LL, 262146LL, 0xFFFFFFFFLL, L"NULL == m_OwningThread", 496LL, 0LL, 0LL, 0LL, 0LL);
    }
    if ( *(_DWORD *)(v2 + 32) )
    {
      WdLogSingleEntry1(1LL, 497LL);
      DxgCoreInterface[85](0LL, 262146LL, 0xFFFFFFFFLL, L"0 == m_OwnerAcquireCount", 497LL, 0LL, 0LL, 0LL, 0LL);
    }
    *(_QWORD *)(v2 + 24) = KeGetCurrentThread();
    v4 = 1;
  }
  *(_DWORD *)(v2 + 32) = v4;
  *((_BYTE *)this + 8) = 1;
}
