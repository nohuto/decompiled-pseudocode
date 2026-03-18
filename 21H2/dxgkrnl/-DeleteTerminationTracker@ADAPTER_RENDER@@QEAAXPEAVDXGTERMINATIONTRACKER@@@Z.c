/*
 * XREFs of ?DeleteTerminationTracker@ADAPTER_RENDER@@QEAAXPEAVDXGTERMINATIONTRACKER@@@Z @ 0x1C018BCD0
 * Callers:
 *     ?DxgkpDeferredDestructionWork@@YAXPEAX@Z @ 0x1C018BA90 (-DxgkpDeferredDestructionWork@@YAXPEAX@Z.c)
 *     ?TerminateAllocations@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@HPEAVDXGALLOCATION@@PEAVCOREDEVICEACCESS@@U_D3DDDICB_DESTROYALLOCATION2FLAGS@@@Z @ 0x1C019CBB0 (-TerminateAllocations@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@HPEAVDXGALLOCATION@@PEAVCOREDEVICEACCESS@.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     _guard_dispatch_icall_nop @ 0x1C002CCC0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall ADAPTER_RENDER::DeleteTerminationTracker(ADAPTER_RENDER *this, struct _SLIST_ENTRY *a2)
{
  char *v3; // rbx

  if ( a2 )
  {
    v3 = (char *)this + 1408;
    ++*((_DWORD *)this + 359);
    if ( ExQueryDepthSList((PSLIST_HEADER)this + 88) >= *((_WORD *)this + 712) )
    {
      ++*((_DWORD *)v3 + 8);
      (*((void (__fastcall **)(struct _SLIST_ENTRY *))v3 + 7))(a2);
    }
    else
    {
      ExpInterlockedPushEntrySList((PSLIST_HEADER)v3, a2);
    }
  }
  else
  {
    WdLogSingleEntry1(1LL, 4523LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"pTracker", 4523LL, 0LL, 0LL, 0LL, 0LL);
  }
}
