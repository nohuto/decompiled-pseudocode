/*
 * XREFs of ?SetState@CInteractionTracker@@AEAAXW4ScrollState@@W4TrackerUpdateType@1@@Z @ 0x1801CDD5C
 * Callers:
 *     ?TransitionToCustomAnimation@CInteractionTracker@@AEAA_NPEAVCBaseExpression@@W4CustomAnimationTarget@@@Z @ 0x1801CE470 (-TransitionToCustomAnimation@CInteractionTracker@@AEAA_NPEAVCBaseExpression@@W4CustomAnimationTa.c)
 *     ?TransitionToIdle@CInteractionTracker@@AEAAXXZ @ 0x1801CE5D4 (-TransitionToIdle@CInteractionTracker@@AEAAXXZ.c)
 *     ?TransitionToInContact@CInteractionTracker@@AEAAXXZ @ 0x1801CE660 (-TransitionToInContact@CInteractionTracker@@AEAAXXZ.c)
 *     ?TransitionToInertia@CInteractionTracker@@AEAA_NW4InertiaReason@1@@Z @ 0x1801CE6B0 (-TransitionToInertia@CInteractionTracker@@AEAA_NW4InertiaReason@1@@Z.c)
 *     ?BringBoundTrackersStateInSync@CInteractionTrackerBindingManager@@AEAAXPEAVCInteractionTracker@@0W4InteractionTrackerBindingModeFlags@@@Z @ 0x1801D0234 (-BringBoundTrackersStateInSync@CInteractionTrackerBindingManager@@AEAAXPEAVCInteractionTracker@@.c)
 *     ?TransitionDisconnectedTrackersToIdle@CInteractionTrackerBindingManager@@AEAAXPEAVCInteractionTracker@@0@Z @ 0x1801D15E8 (-TransitionDisconnectedTrackersToIdle@CInteractionTrackerBindingManager@@AEAAXPEAVCInteractionTr.c)
 *     ?UpdateBoundTrackerState@CInteractionTrackerBindingManager@@QEAAXPEAVCInteractionTracker@@W4ScrollState@@@Z @ 0x1801D1C6C (-UpdateBoundTrackerState@CInteractionTrackerBindingManager@@QEAAXPEAVCInteractionTracker@@W4Scro.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800393BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x1800AC2C0 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     __security_check_cookie @ 0x1800E26A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800EED40 (_guard_dispatch_icall_nop.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@4@Z @ 0x1801C7088 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U2@@-$_tlgWriteTemplate@$$A6AJPEBU_tl.c)
 *     ?AddPendingStateChange@CInteractionTracker@@AEAAXW4ScrollState@@UD2DVector3@@M@Z @ 0x1801C91BC (-AddPendingStateChange@CInteractionTracker@@AEAAXW4ScrollState@@UD2DVector3@@M@Z.c)
 *     ?AreInteractionAnimationsAlive@CInteractionTracker@@QEBA_NXZ @ 0x1801C9648 (-AreInteractionAnimationsAlive@CInteractionTracker@@QEBA_NXZ.c)
 *     ?UpdatePositionRoundingSuggestion@CInteractionTracker@@AEAAXXZ @ 0x1801CEA24 (-UpdatePositionRoundingSuggestion@CInteractionTracker@@AEAAXXZ.c)
 *     ?UpdateBoundTrackerState@CInteractionTrackerBindingManager@@QEAAXPEAVCInteractionTracker@@W4ScrollState@@@Z @ 0x1801D1C6C (-UpdateBoundTrackerState@CInteractionTrackerBindingManager@@QEAAXPEAVCInteractionTracker@@W4Scro.c)
 *     ?OnInteractionTrackerTransitionToCustomAnimation@InteractionSourceManager@@QEAAXXZ @ 0x180212A2C (-OnInteractionTrackerTransitionToCustomAnimation@InteractionSourceManager@@QEAAXXZ.c)
 *     ?OnInteractionTrackerTransitionToIdle@InteractionSourceManager@@QEAAXW4ScrollState@@@Z @ 0x180212A50 (-OnInteractionTrackerTransitionToIdle@InteractionSourceManager@@QEAAXW4ScrollState@@@Z.c)
 *     ?OnInteractionTrackerTransitionToInContact@InteractionSourceManager@@QEAAXW4ScrollState@@@Z @ 0x180212BC8 (-OnInteractionTrackerTransitionToInContact@InteractionSourceManager@@QEAAXW4ScrollState@@@Z.c)
 *     ?OnInteractionTrackerTransitionToInertia@InteractionSourceManager@@QEAAXXZ @ 0x180212C2C (-OnInteractionTrackerTransitionToInertia@InteractionSourceManager@@QEAAXXZ.c)
 */

void __fastcall CInteractionTracker::SetState(__int64 a1, int a2, __int64 a3, __int64 a4)
{
  int v5; // r15d
  __int64 v7; // rcx
  __int64 v8; // rcx
  __int64 *v9; // r14
  unsigned int v10; // esi
  __int64 v11; // r10
  unsigned int v12; // eax
  unsigned int v13; // edx
  int v14; // eax
  int v15; // edi
  int v16; // edx
  float v17; // xmm3_4
  __int64 v18; // rax
  int v19; // eax
  __int64 v20; // rcx
  int v21; // [rsp+40h] [rbp-40h] BYREF
  int v22; // [rsp+48h] [rbp-38h] BYREF
  __int64 v23; // [rsp+50h] [rbp-30h] BYREF
  __int64 v24; // [rsp+58h] [rbp-28h]
  __int64 v25; // [rsp+60h] [rbp-20h]

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
    if ( (unsigned int)dword_180342EF0 > 4 && (qword_180342F00 & 2) != 0 && (qword_180342F08 & 2) == qword_180342F08 )
    {
      v21 = *(_DWORD *)(a1 + 168);
      v22 = a2;
      v23 = a1;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        v7,
        byte_1802E6D56,
        a3,
        a4,
        (__int64)&v23,
        (__int64)&v21,
        (__int64)&v22);
    }
    *(_DWORD *)(a1 + 168) = a2;
    if ( CInteractionTracker::AreInteractionAnimationsAlive((CInteractionTracker *)a1) )
    {
      v9 = &v23;
      v23 = *(_QWORD *)(a1 + 328);
      v10 = 0;
      v24 = *(_QWORD *)(a1 + 336);
      v25 = *(_QWORD *)(a1 + 320);
      do
      {
        v11 = *v9;
        v21 = a2;
        v12 = *(_DWORD *)(v11 + 400);
        v13 = v12 + 1;
        if ( v12 + 1 < v12 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, -2147024362, 0xB5u, 0LL);
        }
        else if ( v13 > *(_DWORD *)(v11 + 396) )
        {
          v14 = DynArrayImpl<0>::AddMultipleAndSet(v11 + 376, 4, 1, &v21);
          if ( v14 < 0 )
            MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, v14, 0xC0u, 0LL);
        }
        else
        {
          v8 = v12;
          *(_DWORD *)(*(_QWORD *)(v11 + 376) + 4LL * v12) = a2;
          *(_DWORD *)(v11 + 400) = v13;
        }
        ++v10;
        ++v9;
      }
      while ( v10 < 3 );
    }
    if ( a2 )
    {
      v15 = a2 - 1;
      if ( !v15 )
      {
        v17 = *(float *)(a1 + 128);
        v16 = 1;
        *(_DWORD *)(a1 + 180) = 0;
        *(float *)(a1 + 520) = v17;
LABEL_33:
        v19 = *(_DWORD *)(a1 + 80);
        v23 = *(_QWORD *)(a1 + 72);
        LODWORD(v24) = v19;
        CInteractionTracker::AddPendingStateChange(a1, v16, &v23, v17);
LABEL_34:
        CInteractionTracker::UpdatePositionRoundingSuggestion((CInteractionTracker *)a1);
        goto LABEL_35;
      }
      if ( v15 != 2 || (*(_BYTE *)(a1 + 532) & 0x40) != 0 )
        goto LABEL_34;
      v16 = 3;
    }
    else
    {
      if ( *(char *)(a1 + 532) >= 0 )
      {
        v18 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(*(_QWORD *)(a1 + 16) + 504LL) + 88LL))(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 504LL));
        (*(void (__fastcall **)(__int64, __int64 (__fastcall *)(void *), __int64, __int64))(*(_QWORD *)v18 + 144LL))(
          v18,
          CInteractionTracker::s_OnIdleAtFrameBegin,
          a1,
          4LL);
        (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 8LL))(a1);
        *(_BYTE *)(a1 + 532) |= 0x80u;
      }
      v16 = 0;
    }
    v17 = *(float *)(a1 + 128);
    goto LABEL_33;
  }
LABEL_35:
  v20 = *(_QWORD *)(a1 + 632);
  if ( v20 )
  {
    if ( !v5 )
      CInteractionTrackerBindingManager::UpdateBoundTrackerState(v20, a1, *(unsigned int *)(a1 + 168));
  }
}
