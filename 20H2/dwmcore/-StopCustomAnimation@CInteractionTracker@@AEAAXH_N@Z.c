/*
 * XREFs of ?StopCustomAnimation@CInteractionTracker@@AEAAXH_N@Z @ 0x1801CC488
 * Callers:
 *     ?DemoteToBoundTracker@CInteractionTracker@@AEAAX_N@Z @ 0x1801C8674 (-DemoteToBoundTracker@CInteractionTracker@@AEAAX_N@Z.c)
 *     ?OnChanged@CInteractionTracker@@MEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x1801C9840 (-OnChanged@CInteractionTracker@@MEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?SetCustomAnimation@CInteractionTracker@@AEAA_NPEAVCBaseExpression@@W4CustomAnimationTarget@@@Z @ 0x1801CB3E0 (-SetCustomAnimation@CInteractionTracker@@AEAA_NPEAVCBaseExpression@@W4CustomAnimationTarget@@@Z.c)
 *     ?StopCustomAnimations@CInteractionTracker@@AEAAX_N@Z @ 0x1801CC528 (-StopCustomAnimations@CInteractionTracker@@AEAAX_N@Z.c)
 *     ?TransitionToCustomAnimation@CInteractionTracker@@AEAA_NPEAVCBaseExpression@@W4CustomAnimationTarget@@@Z @ 0x1801CC608 (-TransitionToCustomAnimation@CInteractionTracker@@AEAA_NPEAVCBaseExpression@@W4CustomAnimationTa.c)
 * Callees:
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x180051DB0 (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EE9F0 (_guard_dispatch_icall_nop.c)
 *     ?ClearCustomAnimation@CInteractionTracker@@AEAAXH@Z @ 0x1801C8408 (-ClearCustomAnimation@CInteractionTracker@@AEAAXH@Z.c)
 *     ?SetCustomAnimationFinalValue@CInteractionTrackerBindingManager@@QEAAJPEAVCInteractionTracker@@PEAVCKeyframeAnimation@@W4CustomAnimationTarget@@@Z @ 0x1801CF654 (-SetCustomAnimationFinalValue@CInteractionTrackerBindingManager@@QEAAJPEAVCInteractionTracker@@P.c)
 */

void __fastcall CInteractionTracker::StopCustomAnimation(CInteractionTracker *this, unsigned int a2, char a3)
{
  __int64 v5; // rdi
  struct CResource *v6; // rdi

  if ( a2 < 2 )
  {
    v5 = *((_QWORD *)this + (int)a2 + 43);
    if ( v5 )
    {
      v6 = *(struct CResource **)(v5 + 16);
      if ( v6 )
      {
        if ( *((_QWORD *)this + 79) && a3 )
        {
          if ( (*(unsigned __int8 (__fastcall **)(struct CResource *, __int64))(*(_QWORD *)v6 + 56LL))(v6, 90LL) )
            CInteractionTrackerBindingManager::SetCustomAnimationFinalValue(*((_QWORD *)this + 79), this, v6, a2);
        }
        *((_BYTE *)v6 + 208) &= ~1u;
        CResource::UnRegisterNotifierInternal(this, v6);
      }
      CInteractionTracker::ClearCustomAnimation(this, a2);
    }
  }
}
