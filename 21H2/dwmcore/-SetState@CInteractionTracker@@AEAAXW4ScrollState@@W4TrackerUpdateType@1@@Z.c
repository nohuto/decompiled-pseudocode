/*
 * XREFs of ?SetState@CInteractionTracker@@AEAAXW4ScrollState@@W4TrackerUpdateType@1@@Z @ 0x1801CCACC
 * Callers:
 *     ?TransitionToCustomAnimation@CInteractionTracker@@AEAA_NPEAVCBaseExpression@@W4CustomAnimationTarget@@@Z @ 0x1801CD188 (-TransitionToCustomAnimation@CInteractionTracker@@AEAA_NPEAVCBaseExpression@@W4CustomAnimationTa.c)
 *     ?TransitionToIdle@CInteractionTracker@@AEAAXXZ @ 0x1801CD304 (-TransitionToIdle@CInteractionTracker@@AEAAXXZ.c)
 *     ?TransitionToInContact@CInteractionTracker@@AEAAXXZ @ 0x1801CD390 (-TransitionToInContact@CInteractionTracker@@AEAAXXZ.c)
 *     ?TransitionToInertia@CInteractionTracker@@AEAA_NW4InertiaReason@1@@Z @ 0x1801CD3E0 (-TransitionToInertia@CInteractionTracker@@AEAA_NW4InertiaReason@1@@Z.c)
 *     ?BringBoundTrackersStateInSync@CInteractionTrackerBindingManager@@AEAAXPEAVCInteractionTracker@@0W4InteractionTrackerBindingModeFlags@@@Z @ 0x1801CEF64 (-BringBoundTrackersStateInSync@CInteractionTrackerBindingManager@@AEAAXPEAVCInteractionTracker@@.c)
 *     ?TransitionDisconnectedTrackersToIdle@CInteractionTrackerBindingManager@@AEAAXPEAVCInteractionTracker@@0@Z @ 0x1801D0318 (-TransitionDisconnectedTrackersToIdle@CInteractionTrackerBindingManager@@AEAAXPEAVCInteractionTr.c)
 *     ?UpdateBoundTrackerState@CInteractionTrackerBindingManager@@QEAAXPEAVCInteractionTracker@@W4ScrollState@@@Z @ 0x1801D099C (-UpdateBoundTrackerState@CInteractionTrackerBindingManager@@QEAAXPEAVCInteractionTracker@@W4Scro.c)
 * Callees:
 *     __security_check_cookie @ 0x1800E6E00 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800F4800 (_guard_dispatch_icall_nop.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@4@Z @ 0x1801C5D24 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U2@@-$_tlgWriteTemplate@$$A6AJPEBU_tl.c)
 *     ?AddMultipleAndSet@?$DynArray@W4ScrollState@@$0A@@@QEAAJPEFBW4ScrollState@@I@Z @ 0x1801C7CD4 (-AddMultipleAndSet@-$DynArray@W4ScrollState@@$0A@@@QEAAJPEFBW4ScrollState@@I@Z.c)
 *     ?AddPendingStateChange@CInteractionTracker@@AEAAXW4ScrollState@@UD2DVector3@@M@Z @ 0x1801C7F04 (-AddPendingStateChange@CInteractionTracker@@AEAAXW4ScrollState@@UD2DVector3@@M@Z.c)
 *     ?AreInteractionAnimationsAlive@CInteractionTracker@@QEBA_NXZ @ 0x1801C8390 (-AreInteractionAnimationsAlive@CInteractionTracker@@QEBA_NXZ.c)
 *     ?UpdatePositionRoundingSuggestion@CInteractionTracker@@AEAAXXZ @ 0x1801CD754 (-UpdatePositionRoundingSuggestion@CInteractionTracker@@AEAAXXZ.c)
 *     ?UpdateBoundTrackerState@CInteractionTrackerBindingManager@@QEAAXPEAVCInteractionTracker@@W4ScrollState@@@Z @ 0x1801D099C (-UpdateBoundTrackerState@CInteractionTrackerBindingManager@@QEAAXPEAVCInteractionTracker@@W4Scro.c)
 *     ?OnInteractionTrackerTransitionToCustomAnimation@InteractionSourceManager@@QEAAXXZ @ 0x1802137E8 (-OnInteractionTrackerTransitionToCustomAnimation@InteractionSourceManager@@QEAAXXZ.c)
 *     ?OnInteractionTrackerTransitionToIdle@InteractionSourceManager@@QEAAXW4ScrollState@@@Z @ 0x18021380C (-OnInteractionTrackerTransitionToIdle@InteractionSourceManager@@QEAAXW4ScrollState@@@Z.c)
 *     ?OnInteractionTrackerTransitionToInContact@InteractionSourceManager@@QEAAXW4ScrollState@@@Z @ 0x180213984 (-OnInteractionTrackerTransitionToInContact@InteractionSourceManager@@QEAAXW4ScrollState@@@Z.c)
 *     ?OnInteractionTrackerTransitionToInertia@InteractionSourceManager@@QEAAXXZ @ 0x1802139E8 (-OnInteractionTrackerTransitionToInertia@InteractionSourceManager@@QEAAXXZ.c)
 */

void __fastcall CInteractionTracker::SetState(__int64 a1, int a2, __int64 a3, __int64 a4)
{
  int v5; // r15d
  __int64 v7; // rcx
  __int64 *v8; // r14
  unsigned int v9; // esi
  __int64 v10; // rcx
  int v11; // edi
  int v12; // edx
  float v13; // xmm3_4
  __int64 v14; // rax
  int v15; // eax
  __int64 v16; // rcx
  int v17; // [rsp+40h] [rbp-40h] BYREF
  int v18; // [rsp+48h] [rbp-38h] BYREF
  __int64 v19; // [rsp+50h] [rbp-30h] BYREF
  __int64 v20; // [rsp+58h] [rbp-28h]
  __int64 v21; // [rsp+60h] [rbp-20h]

  v5 = a3;
  if ( a2 )
  {
    if ( a2 == 1 )
    {
      InteractionSourceManager::OnInteractionTrackerTransitionToInContact(a1 + 192, *(unsigned int *)(a1 + 168));
    }
    else
    {
      v7 = (unsigned int)(a2 - 2);
      if ( a2 == 2 )
      {
        InteractionSourceManager::OnInteractionTrackerTransitionToInertia((InteractionSourceManager *)(a1 + 192));
      }
      else if ( a2 == 3 )
      {
        InteractionSourceManager::OnInteractionTrackerTransitionToCustomAnimation((InteractionSourceManager *)(a1 + 192));
      }
    }
  }
  else
  {
    InteractionSourceManager::OnInteractionTrackerTransitionToIdle(a1 + 192, *(unsigned int *)(a1 + 168));
  }
  if ( *(_DWORD *)(a1 + 168) != a2 )
  {
    if ( (unsigned int)dword_180344EF0 > 4 && (qword_180344F00 & 2) != 0 && (qword_180344F08 & 2) == qword_180344F08 )
    {
      v17 = *(_DWORD *)(a1 + 168);
      v18 = a2;
      v19 = a1;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        v7,
        byte_1802E8D1C,
        a3,
        a4,
        (__int64)&v19,
        (__int64)&v17,
        (__int64)&v18);
    }
    *(_DWORD *)(a1 + 168) = a2;
    if ( CInteractionTracker::AreInteractionAnimationsAlive((CInteractionTracker *)a1) )
    {
      v8 = &v19;
      v19 = *(_QWORD *)(a1 + 328);
      v9 = 0;
      v20 = *(_QWORD *)(a1 + 336);
      v21 = *(_QWORD *)(a1 + 320);
      do
      {
        v10 = *v8 + 376;
        v17 = a2;
        DynArray<enum ScrollState,0>::AddMultipleAndSet(v10, &v17);
        ++v9;
        ++v8;
      }
      while ( v9 < 3 );
    }
    if ( a2 )
    {
      v11 = a2 - 1;
      if ( !v11 )
      {
        v13 = *(float *)(a1 + 128);
        v12 = 1;
        *(_DWORD *)(a1 + 180) = 0;
        *(float *)(a1 + 520) = v13;
LABEL_29:
        v15 = *(_DWORD *)(a1 + 80);
        v19 = *(_QWORD *)(a1 + 72);
        LODWORD(v20) = v15;
        CInteractionTracker::AddPendingStateChange(a1, v12, &v19, v13);
LABEL_30:
        CInteractionTracker::UpdatePositionRoundingSuggestion((CInteractionTracker *)a1);
        goto LABEL_31;
      }
      if ( v11 != 2 || (*(_BYTE *)(a1 + 532) & 0x40) != 0 )
        goto LABEL_30;
      v12 = 3;
    }
    else
    {
      if ( *(char *)(a1 + 532) >= 0 )
      {
        (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 8LL))(a1);
        v14 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(*(_QWORD *)(a1 + 16) + 504LL) + 88LL))(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 504LL));
        if ( (*(int (__fastcall **)(__int64, __int64 (__fastcall *)(void *), __int64, __int64))(*(_QWORD *)v14 + 144LL))(
               v14,
               CInteractionTracker::s_OnIdleAtFrameBegin,
               a1,
               4LL) < 0 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 16LL))(a1);
        else
          *(_BYTE *)(a1 + 532) |= 0x80u;
      }
      v12 = 0;
    }
    v13 = *(float *)(a1 + 128);
    goto LABEL_29;
  }
LABEL_31:
  v16 = *(_QWORD *)(a1 + 632);
  if ( v16 )
  {
    if ( !v5 )
      CInteractionTrackerBindingManager::UpdateBoundTrackerState(v16, a1, *(unsigned int *)(a1 + 168));
  }
}
