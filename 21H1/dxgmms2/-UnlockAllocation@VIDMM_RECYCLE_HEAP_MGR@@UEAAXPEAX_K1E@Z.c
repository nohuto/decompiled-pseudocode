/*
 * XREFs of ?UnlockAllocation@VIDMM_RECYCLE_HEAP_MGR@@UEAAXPEAX_K1E@Z @ 0x1C007A8B0
 * Callers:
 *     <none>
 * Callees:
 *     ?IsOverLimits@VIDMM_RECYCLE_HEAP_MGR@@SA_NXZ @ 0x1C0002514 (-IsOverLimits@VIDMM_RECYCLE_HEAP_MGR@@SA_NXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0004B84 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0004BB0 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Unlock@VIDMM_RECYCLE_MULTIRANGE@@QEAAX_K0E@Z @ 0x1C007AA34 (-Unlock@VIDMM_RECYCLE_MULTIRANGE@@QEAAX_K0E@Z.c)
 *     ?ProcessDebounceListsGlobally@VIDMM_RECYCLE_HEAP_MGR@@SAX_N@Z @ 0x1C00C2BA8 (-ProcessDebounceListsGlobally@VIDMM_RECYCLE_HEAP_MGR@@SAX_N@Z.c)
 */

void __fastcall VIDMM_RECYCLE_HEAP_MGR::UnlockAllocation(
        VIDMM_RECYCLE_HEAP_MGR *this,
        VIDMM_RECYCLE_MULTIRANGE *a2,
        unsigned __int64 a3,
        unsigned __int64 a4,
        char a5)
{
  bool v5; // zf
  char *v6; // rcx
  __int64 v10; // rdx
  __int64 v11; // rax
  char *v12; // [rsp+20h] [rbp-18h] BYREF
  char v13; // [rsp+28h] [rbp-10h]

  v5 = (VIDMM_RECYCLE_HEAP_MGR *)((char *)this + 1328) == 0LL;
  v6 = (char *)this + 1328;
  v13 = 0;
  v12 = v6;
  if ( v5 )
  {
    v11 = WdLogNewEntry5_WdAssertion(v6, a2, a3);
    *(_QWORD *)(v11 + 24) = 760LL;
    WdLogEvent5_WdAssertion(v11);
  }
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)&v12, (__int64)a2);
  VIDMM_RECYCLE_MULTIRANGE::Unlock(a2, a3, a4, a5);
  if ( v13 )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)&v12, v10);
  if ( VIDMM_RECYCLE_HEAP_MGR::IsOverLimits() )
    VIDMM_RECYCLE_HEAP_MGR::ProcessDebounceListsGlobally(1);
}
