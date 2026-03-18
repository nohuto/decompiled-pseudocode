/*
 * XREFs of ??1?$deque@PEAVCInteractionTracker@@V?$allocator@PEAVCInteractionTracker@@@std@@@std@@QEAA@XZ @ 0x18021F63C
 * Callers:
 *     ?GetConnectedTrackersForAxis@CInteractionTrackerBindingManager@@AEAAXPEAVCInteractionTracker@@W4InteractionTrackerBindingModeFlags@@PEAV?$set@PEAVCInteractionTracker@@U?$less@PEAVCInteractionTracker@@@std@@V?$allocator@PEAVCInteractionTracker@@@3@@std@@PEAPEAV2@@Z @ 0x180220B54 (-GetConnectedTrackersForAxis@CInteractionTrackerBindingManager@@AEAAXPEAVCInteractionTracker@@W4.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800D7338 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 */

void __fastcall std::deque<CInteractionTracker *>::~deque<CInteractionTracker *>(__int64 a1)
{
  __int64 v1; // rax
  __int64 v3; // rdi
  void *v4; // rcx
  void *v5; // rcx
  void *v6; // rcx

  v1 = *(_QWORD *)(a1 + 32);
  while ( v1 )
  {
    *(_QWORD *)(a1 + 32) = --v1;
    if ( !v1 )
      *(_QWORD *)(a1 + 24) = 0LL;
  }
  v3 = *(_QWORD *)(a1 + 16);
  while ( v3 )
  {
    --v3;
    v4 = *(void **)(*(_QWORD *)(a1 + 8) + 8 * v3);
    if ( v4 )
      std::_Deallocate<16,0>(v4, 0x10uLL);
  }
  v5 = *(void **)(a1 + 8);
  if ( v5 )
    std::_Deallocate<16,0>(v5, 8LL * *(_QWORD *)(a1 + 16));
  v6 = *(void **)a1;
  *(_QWORD *)a1 = 0LL;
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_QWORD *)(a1 + 8) = 0LL;
  std::_Deallocate<16,0>(v6, 0x10uLL);
}
