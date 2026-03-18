/*
 * XREFs of ?TransitionToCustomAnimation@CInteractionTracker@@AEAA_NPEAVCBaseExpression@@W4CustomAnimationTarget@@@Z @ 0x1801CE470
 * Callers:
 *     ?SetCustomAnimation@CInteractionTracker@@AEAA_NPEAVCBaseExpression@@W4CustomAnimationTarget@@@Z @ 0x1801CD1F0 (-SetCustomAnimation@CInteractionTracker@@AEAA_NPEAVCBaseExpression@@W4CustomAnimationTarget@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800393BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Get@CWeakResourceReference@@KAJPEAVCResource@@PEAPEAV1@@Z @ 0x18009C3EC (-Get@CWeakResourceReference@@KAJPEAVCResource@@PEAPEAV1@@Z.c)
 *     ?RegisterNotifier@CResource@@QEAAJPEAV1@@Z @ 0x1800A0618 (-RegisterNotifier@CResource@@QEAAJPEAV1@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EED40 (_guard_dispatch_icall_nop.c)
 *     ?DestroyDefaultAnimations@CInteractionTracker@@AEAAX_N@Z @ 0x1801CA504 (-DestroyDefaultAnimations@CInteractionTracker@@AEAAX_N@Z.c)
 *     ?DestroyInteractionAnimations@CInteractionTracker@@AEAAXXZ @ 0x1801CA63C (-DestroyInteractionAnimations@CInteractionTracker@@AEAAXXZ.c)
 *     ?RegisterIndirectTargetsForBoundTrackers@CInteractionTracker@@QEAAJPEAVCBaseExpression@@W4Enum@InteractionTrackerProperty@@@Z @ 0x1801CC398 (-RegisterIndirectTargetsForBoundTrackers@CInteractionTracker@@QEAAJPEAVCBaseExpression@@W4Enum@I.c)
 *     ?SetState@CInteractionTracker@@AEAAXW4ScrollState@@W4TrackerUpdateType@1@@Z @ 0x1801CDD5C (-SetState@CInteractionTracker@@AEAAXW4ScrollState@@W4TrackerUpdateType@1@@Z.c)
 *     ?StopCustomAnimation@CInteractionTracker@@AEAAXH_N@Z @ 0x1801CE2F0 (-StopCustomAnimation@CInteractionTracker@@AEAAXH_N@Z.c)
 *     ModuleFailFastForHRESULT @ 0x18020EDB4 (ModuleFailFastForHRESULT.c)
 */

char __fastcall CInteractionTracker::TransitionToCustomAnimation(
        CInteractionTracker *a1,
        struct CResource *a2,
        unsigned int a3)
{
  __int64 v3; // r14
  char v4; // bl
  int v7; // ecx
  int v8; // ecx
  int v9; // eax
  __int64 v10; // rcx
  int v11; // ebp
  int v12; // eax
  __int64 v13; // r9
  int v14; // eax
  void *retaddr; // [rsp+48h] [rbp+0h]
  struct CWeakResourceReference *v17; // [rsp+68h] [rbp+20h] BYREF

  v3 = (int)a3;
  v4 = 0;
  if ( a3 >= 2 )
    ModuleFailFastForHRESULT(2147549183LL, retaddr);
  if ( !a2 )
    ModuleFailFastForHRESULT(2147549183LL, retaddr);
  v7 = *((_DWORD *)a1 + 42);
  if ( v7 )
  {
    v8 = v7 - 2;
    if ( v8 )
    {
      if ( v8 != 1 )
      {
        *((_BYTE *)a2 + 208) &= ~1u;
        return v4;
      }
      CInteractionTracker::StopCustomAnimation(a1, a3, 0);
    }
    else
    {
      CInteractionTracker::DestroyInteractionAnimations(a1);
      CInteractionTracker::DestroyDefaultAnimations(a1, 0);
    }
  }
  v17 = 0LL;
  v9 = CWeakResourceReference::Get(a2, &v17);
  v11 = v9;
  if ( v9 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, v9, 0x97u, 0LL);
    if ( v17 )
      (*(void (__fastcall **)(struct CWeakResourceReference *))(*(_QWORD *)v17 + 8LL))(v17);
  }
  else
  {
    *((_QWORD *)a1 + v3 + 43) = v17;
  }
  if ( v11 < 0 )
    ModuleFailFastForHRESULT((unsigned int)v11, retaddr);
  v12 = CResource::RegisterNotifier(a1, a2);
  if ( v12 < 0 )
    ModuleFailFastForHRESULT((unsigned int)v12, retaddr);
  CInteractionTracker::SetState((__int64)a1, 3, 0LL, v13);
  v14 = CInteractionTracker::RegisterIndirectTargetsForBoundTrackers(
          (__int64)a1,
          (__int64)a2,
          (unsigned int)((_DWORD)v3 != 0) + 1);
  if ( v14 < 0 )
    ModuleFailFastForHRESULT((unsigned int)v14, retaddr);
  return 1;
}
