/*
 * XREFs of ?Free@VIDMM_RECYCLE_HEAP_MGR@@UEAAXPEAU_VIDMM_LOCAL_ALLOC@@@Z @ 0x1C007EE40
 * Callers:
 *     <none>
 * Callees:
 *     ?IsOverLimits@VIDMM_RECYCLE_HEAP_MGR@@SA_NXZ @ 0x1C00013C4 (-IsOverLimits@VIDMM_RECYCLE_HEAP_MGR@@SA_NXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0001400 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0003A80 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     DxgkLogInternalTriageEvent @ 0x1C001CE40 (DxgkLogInternalTriageEvent.c)
 *     ?Decommit@VIDMM_RECYCLE_MULTIRANGE@@QEAAXXZ @ 0x1C007F02C (-Decommit@VIDMM_RECYCLE_MULTIRANGE@@QEAAXXZ.c)
 *     ?ProcessDebounceListsGlobally@VIDMM_RECYCLE_HEAP_MGR@@SAX_N@Z @ 0x1C00AA464 (-ProcessDebounceListsGlobally@VIDMM_RECYCLE_HEAP_MGR@@SAX_N@Z.c)
 */

void __fastcall VIDMM_RECYCLE_HEAP_MGR::Free(VIDMM_RECYCLE_HEAP_MGR *this, struct _VIDMM_LOCAL_ALLOC *a2)
{
  __int64 v4; // rcx
  __int64 v5; // rcx
  DXGFASTMUTEX *v6; // [rsp+50h] [rbp-18h] BYREF
  char v7; // [rsp+58h] [rbp-10h]

  v7 = 0;
  v6 = (VIDMM_RECYCLE_HEAP_MGR *)((char *)this + 1328);
  if ( this == (VIDMM_RECYCLE_HEAP_MGR *)-1328LL )
  {
    WdLogSingleEntry1(1LL, 573LL);
    DxgkLogInternalTriageEvent(v5, 262146LL);
  }
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)&v6);
  v4 = *((_QWORD *)a2 + 3);
  *(_QWORD *)(*((_QWORD *)this + 1) + 136LL) += *(_QWORD *)(v4 + 32) - *(_QWORD *)(v4 + 40);
  VIDMM_RECYCLE_MULTIRANGE::Decommit((PSLIST_ENTRY)v4);
  if ( v7 )
  {
    v7 = 0;
    DXGFASTMUTEX::Release((struct _KTHREAD **)v6);
  }
  if ( VIDMM_RECYCLE_HEAP_MGR::IsOverLimits() )
    VIDMM_RECYCLE_HEAP_MGR::ProcessDebounceListsGlobally(1);
}
