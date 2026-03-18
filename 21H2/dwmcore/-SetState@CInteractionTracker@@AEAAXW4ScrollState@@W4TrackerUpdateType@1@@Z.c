/*
 * XREFs of ?SetState@CInteractionTracker@@AEAAXW4ScrollState@@W4TrackerUpdateType@1@@Z @ 0x18021DAAC
 * Callers:
 *     ?TransitionToCustomAnimation@CInteractionTracker@@AEAA_NPEAVCBaseExpression@@W4CustomAnimationTarget@@@Z @ 0x18021E190 (-TransitionToCustomAnimation@CInteractionTracker@@AEAA_NPEAVCBaseExpression@@W4CustomAnimationTa.c)
 *     ?TransitionToIdle@CInteractionTracker@@AEAAXXZ @ 0x18021E304 (-TransitionToIdle@CInteractionTracker@@AEAAXXZ.c)
 *     ?TransitionToInContact@CInteractionTracker@@AEAAXXZ @ 0x18021E39C (-TransitionToInContact@CInteractionTracker@@AEAAXXZ.c)
 *     ?TransitionToInertia@CInteractionTracker@@AEAA_NW4InertiaReason@1@@Z @ 0x18021E3F8 (-TransitionToInertia@CInteractionTracker@@AEAA_NW4InertiaReason@1@@Z.c)
 *     ?BringBoundTrackersStateInSync@CInteractionTrackerBindingManager@@AEAAXPEAVCInteractionTracker@@0W4InteractionTrackerBindingModeFlags@@@Z @ 0x1802202CC (-BringBoundTrackersStateInSync@CInteractionTrackerBindingManager@@AEAAXPEAVCInteractionTracker@@.c)
 *     ?TransitionDisconnectedTrackersToIdle@CInteractionTrackerBindingManager@@AEAAXPEAVCInteractionTracker@@0@Z @ 0x1802213C8 (-TransitionDisconnectedTrackersToIdle@CInteractionTrackerBindingManager@@AEAAXPEAVCInteractionTr.c)
 *     ?UpdateBoundTrackerState@CInteractionTrackerBindingManager@@QEAAXPEAVCInteractionTracker@@W4ScrollState@@@Z @ 0x180221A4C (-UpdateBoundTrackerState@CInteractionTrackerBindingManager@@QEAAXPEAVCInteractionTracker@@W4Scro.c)
 * Callees:
 *     _tlgKeywordOn @ 0x180074108 (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x180100650 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?AreInteractionAnimationsAlive@CInteractionTracker@@QEBA_NXZ @ 0x180113E04 (-AreInteractionAnimationsAlive@CInteractionTracker@@QEBA_NXZ.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@4@Z @ 0x1801F19C4 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U2@@-$_tlgWriteTemplate@$$A6AJPEBU_tl.c)
 *     ?AddMultipleAndSet@?$DynArray@W4ScrollState@@$0A@@@QEAAJPEFBW4ScrollState@@I@Z @ 0x180218D48 (-AddMultipleAndSet@-$DynArray@W4ScrollState@@$0A@@@QEAAJPEFBW4ScrollState@@I@Z.c)
 *     ?AddPendingStateChange@CInteractionTracker@@AEAAXW4ScrollState@@UD2DVector3@@M@Z @ 0x180218F78 (-AddPendingStateChange@CInteractionTracker@@AEAAXW4ScrollState@@UD2DVector3@@M@Z.c)
 *     ?UpdatePositionRoundingSuggestion@CInteractionTracker@@AEAAXXZ @ 0x18021E77C (-UpdatePositionRoundingSuggestion@CInteractionTracker@@AEAAXXZ.c)
 *     ?UpdateBoundTrackerState@CInteractionTrackerBindingManager@@QEAAXPEAVCInteractionTracker@@W4ScrollState@@@Z @ 0x180221A4C (-UpdateBoundTrackerState@CInteractionTrackerBindingManager@@QEAAXPEAVCInteractionTracker@@W4Scro.c)
 *     ?OnInteractionTrackerTransitionToCustomAnimation@InteractionSourceManager@@QEAAXXZ @ 0x18026471C (-OnInteractionTrackerTransitionToCustomAnimation@InteractionSourceManager@@QEAAXXZ.c)
 *     ?OnInteractionTrackerTransitionToIdle@InteractionSourceManager@@QEAAXW4ScrollState@@@Z @ 0x18026473C (-OnInteractionTrackerTransitionToIdle@InteractionSourceManager@@QEAAXW4ScrollState@@@Z.c)
 *     ?OnInteractionTrackerTransitionToInContact@InteractionSourceManager@@QEAAXW4ScrollState@@@Z @ 0x1802648B4 (-OnInteractionTrackerTransitionToInContact@InteractionSourceManager@@QEAAXW4ScrollState@@@Z.c)
 *     ?OnInteractionTrackerTransitionToInertia@InteractionSourceManager@@QEAAXXZ @ 0x180264948 (-OnInteractionTrackerTransitionToInertia@InteractionSourceManager@@QEAAXXZ.c)
 */

void __fastcall CInteractionTracker::SetState(__int64 a1, int a2, int a3)
{
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 *v9; // r14
  unsigned int v10; // esi
  unsigned __int64 v11; // rcx
  int v12; // edi
  int v13; // edx
  float v14; // xmm3_4
  __int64 v15; // rax
  int v16; // eax
  __int64 v17; // rcx
  int v18; // [rsp+40h] [rbp-40h] BYREF
  int v19; // [rsp+48h] [rbp-38h] BYREF
  __int64 v20; // [rsp+50h] [rbp-30h] BYREF
  __int64 v21; // [rsp+58h] [rbp-28h]
  __int64 v22; // [rsp+60h] [rbp-20h]

  if ( a2 )
  {
    switch ( a2 )
    {
      case 1:
        InteractionSourceManager::OnInteractionTrackerTransitionToInContact(a1 + 200, *(unsigned int *)(a1 + 176));
        break;
      case 2:
        InteractionSourceManager::OnInteractionTrackerTransitionToInertia((InteractionSourceManager *)(a1 + 200));
        break;
      case 3:
        InteractionSourceManager::OnInteractionTrackerTransitionToCustomAnimation((InteractionSourceManager *)(a1 + 200));
        break;
    }
  }
  else
  {
    InteractionSourceManager::OnInteractionTrackerTransitionToIdle(a1 + 200, *(unsigned int *)(a1 + 176));
  }
  if ( *(_DWORD *)(a1 + 176) != a2 )
  {
    if ( (unsigned int)dword_1803D0EF0 > 4 && tlgKeywordOn((__int64)&dword_1803D0EF0, 2LL) )
    {
      v19 = a2;
      v18 = v8;
      v20 = a1;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        v6,
        byte_180371412,
        v7,
        v8,
        (__int64)&v20,
        (__int64)&v18,
        (__int64)&v19);
    }
    *(_DWORD *)(a1 + 176) = a2;
    if ( CInteractionTracker::AreInteractionAnimationsAlive((CInteractionTracker *)a1) )
    {
      v9 = &v20;
      v20 = *(_QWORD *)(a1 + 336);
      v10 = 0;
      v21 = *(_QWORD *)(a1 + 344);
      v22 = *(_QWORD *)(a1 + 328);
      do
      {
        v11 = *v9 + 400;
        v18 = a2;
        DynArray<enum ScrollState,0>::AddMultipleAndSet(v11, &v18);
        ++v10;
        ++v9;
      }
      while ( v10 < 3 );
    }
    if ( a2 )
    {
      v12 = a2 - 1;
      if ( !v12 )
      {
        v14 = *(float *)(a1 + 136);
        v13 = 1;
        *(_DWORD *)(a1 + 188) = 0;
        *(float *)(a1 + 528) = v14;
LABEL_28:
        v16 = *(_DWORD *)(a1 + 88);
        v20 = *(_QWORD *)(a1 + 80);
        LODWORD(v21) = v16;
        CInteractionTracker::AddPendingStateChange(a1, v13, &v20, v14);
LABEL_29:
        CInteractionTracker::UpdatePositionRoundingSuggestion((CInteractionTracker *)a1);
        goto LABEL_30;
      }
      if ( v12 != 2 || (*(_BYTE *)(a1 + 540) & 0x40) != 0 )
        goto LABEL_29;
      v13 = 3;
    }
    else
    {
      if ( *(char *)(a1 + 540) >= 0 )
      {
        (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 8LL))(a1);
        v15 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(*(_QWORD *)(a1 + 16) + 656LL) + 112LL))(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 656LL));
        if ( (*(int (__fastcall **)(__int64, __int64 (__fastcall *)(void *), __int64, __int64))(*(_QWORD *)v15 + 152LL))(
               v15,
               CInteractionTracker::s_OnIdleAtFrameBegin,
               a1,
               4LL) < 0 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 16LL))(a1);
        else
          *(_BYTE *)(a1 + 540) |= 0x80u;
      }
      v13 = 0;
    }
    v14 = *(float *)(a1 + 136);
    goto LABEL_28;
  }
LABEL_30:
  v17 = *(_QWORD *)(a1 + 640);
  if ( v17 )
  {
    if ( !a3 )
      CInteractionTrackerBindingManager::UpdateBoundTrackerState(v17, a1, *(unsigned int *)(a1 + 176));
  }
}
