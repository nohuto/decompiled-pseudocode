/*
 * XREFs of ?TryUpdateBoundTrackerInertiaCallbackValues@CInteractionTrackerBindingManager@@QEAAXPEAVCInteractionTracker@@@Z @ 0x1801D4134
 * Callers:
 *     ?UpdateExpressions@CExpressionManager@@QEAAJ_K0@Z @ 0x180042060 (-UpdateExpressions@CExpressionManager@@QEAAJ_K0@Z.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800BE77C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?_Tidy@?$vector@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@QEAVCInteractionTracker@@W4InteractionTrackerBindingModeFlags@@@std@@@std@@@std@@@std@@V?$allocator@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@QEAVCInteractionTracker@@W4InteractionTrackerBindingModeFlags@@@std@@@std@@@std@@@std@@@2@@std@@AEAAXXZ @ 0x1800CE23C (-_Tidy@-$vector@V-$_List_unchecked_iterator@V-$_List_val@U-$_List_simple_types@U-$pair@QEAVCInte.c)
 *     ?CalculateInertiaCallbackValues@CInteractionTracker@@AEAA?AUInertiaCallbackValues@@XZ @ 0x1801CC1A4 (-CalculateInertiaCallbackValues@CInteractionTracker@@AEAA-AUInertiaCallbackValues@@XZ.c)
 *     ?GetCurrentValue@CInteractionTracker@@QEBAMW4ScrollAxis@@@Z @ 0x1801CD430 (-GetCurrentValue@CInteractionTracker@@QEBAMW4ScrollAxis@@@Z.c)
 *     ??0?$unordered_map@PEAVCInteractionTracker@@W4InteractionTrackerBindingModeFlags@@U?$hash@PEAVCInteractionTracker@@@std@@U?$equal_to@PEAVCInteractionTracker@@@4@V?$allocator@U?$pair@QEAVCInteractionTracker@@W4InteractionTrackerBindingModeFlags@@@std@@@4@@std@@QEAA@XZ @ 0x1801D1E60 (--0-$unordered_map@PEAVCInteractionTracker@@W4InteractionTrackerBindingModeFlags@@U-$hash@PEAVCI.c)
 *     ?CalculateBoundTrackerInertiaCallbackValues@CInteractionTrackerBindingManager@@AEAA?AUInertiaCallbackValues@@PEAVCInteractionTracker@@0W4InteractionTrackerBindingModeFlags@@@Z @ 0x1801D2E94 (-CalculateBoundTrackerInertiaCallbackValues@CInteractionTrackerBindingManager@@AEAA-AUInertiaCal.c)
 *     ?GetConnectedTrackersAndUpdatedAxes@CInteractionTrackerBindingManager@@AEAAXPEAVCInteractionTracker@@W4InteractionTrackerBindingModeFlags@@PEAV?$unordered_map@PEAVCInteractionTracker@@W4InteractionTrackerBindingModeFlags@@U?$hash@PEAVCInteractionTracker@@@std@@U?$equal_to@PEAVCInteractionTracker@@@4@V?$allocator@U?$pair@QEAVCInteractionTracker@@W4InteractionTrackerBindingModeFlags@@@std@@@4@@std@@@Z @ 0x1801D3110 (-GetConnectedTrackersAndUpdatedAxes@CInteractionTrackerBindingManager@@AEAAXPEAVCInteractionTrac.c)
 */

void __fastcall CInteractionTrackerBindingManager::TryUpdateBoundTrackerInertiaCallbackValues(
        CInteractionTrackerBindingManager *this,
        struct CInteractionTracker *a2,
        __int64 a3)
{
  int v4; // esi
  float CurrentValue; // xmm0_4
  float v6; // xmm6_4
  float v7; // xmm0_4
  float v8; // xmm7_4
  float v9; // xmm0_4
  char v10; // bl
  __int64 v11; // rcx
  _QWORD **v12; // rax
  _QWORD *i; // rbx
  __int64 v14; // r9
  __int64 v15; // rax
  __int128 v16; // xmm1
  __int128 v17; // xmm2
  __int128 v18; // xmm3
  __int64 v19; // xmm0_8
  __int64 v20; // rax
  _QWORD **v21; // rcx
  _QWORD *v22; // rcx
  _QWORD *v23; // rbx
  _BYTE v24[16]; // [rsp+38h] [rbp-49h] BYREF
  float v25; // [rsp+48h] [rbp-39h]
  float v26; // [rsp+4Ch] [rbp-35h]
  float v27; // [rsp+54h] [rbp-2Dh]
  _BYTE v28[8]; // [rsp+78h] [rbp-9h] BYREF
  _QWORD **v29; // [rsp+80h] [rbp-1h]
  _BYTE v30[72]; // [rsp+90h] [rbp+Fh] BYREF

  v4 = (int)this;
  if ( (*((_BYTE *)a2 + 533) & 1) != 0 )
  {
    std::unordered_map<CInteractionTracker *,enum InteractionTrackerBindingModeFlags>::unordered_map<CInteractionTracker *,enum InteractionTrackerBindingModeFlags>(
      (__int64)v28,
      (__int64)a2,
      a3);
    CInteractionTracker::CalculateInertiaCallbackValues((__int64)a2, (__int64)v24);
    CurrentValue = CInteractionTracker::GetCurrentValue((__int64)a2, 0);
    v6 = v25 - CurrentValue;
    v7 = CInteractionTracker::GetCurrentValue((__int64)a2, 1);
    v8 = v26 - v7;
    v9 = CInteractionTracker::GetCurrentValue((__int64)a2, 2);
    v10 = v6 != 0.0;
    if ( v8 != 0.0 )
      v10 |= 2u;
    if ( (float)(v27 / v9) != 1.0 )
      v10 |= 4u;
    CInteractionTrackerBindingManager::GetConnectedTrackersAndUpdatedAxes(v4, (int)a2, v10, (__int64)v28);
    v12 = v29;
    for ( i = *v29; i != v12; i = (_QWORD *)*i )
    {
      v14 = i[2];
      if ( (*(_BYTE *)(v14 + 533) & 1) == 0 )
      {
        v15 = CInteractionTrackerBindingManager::CalculateBoundTrackerInertiaCallbackValues(
                v11,
                (__int64)v24,
                a2,
                (_DWORD *)v14,
                *((_DWORD *)i + 6));
        v16 = *(_OWORD *)v15;
        v17 = *(_OWORD *)(v15 + 16);
        v18 = *(_OWORD *)(v15 + 32);
        v19 = *(_QWORD *)(v15 + 48);
        v20 = i[2];
        *(_OWORD *)(v20 + 572) = v16;
        *(_OWORD *)(v20 + 588) = v17;
        *(_OWORD *)(v20 + 604) = v18;
        *(_QWORD *)(v20 + 620) = v19;
        v12 = v29;
      }
    }
    std::vector<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<CInteractionTracker * const,enum InteractionTrackerBindingModeFlags>>>>>::_Tidy((__int64)v30);
    v21 = v29;
    *v29[1] = 0LL;
    v22 = *v21;
    if ( v22 )
    {
      do
      {
        v23 = (_QWORD *)*v22;
        std::_Deallocate<16,0>(v22, 0x20uLL);
        v22 = v23;
      }
      while ( v23 );
    }
    std::_Deallocate<16,0>(v29, 0x20uLL);
  }
}
