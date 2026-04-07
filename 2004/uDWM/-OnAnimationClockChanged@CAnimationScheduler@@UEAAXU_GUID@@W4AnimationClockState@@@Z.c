/*
 * XREFs of ?OnAnimationClockChanged@CAnimationScheduler@@UEAAXU_GUID@@W4AnimationClockState@@@Z @ 0x180032840
 * Callers:
 *     <none>
 * Callees:
 *     ?Abandon@CStoryboard@@QEAAXXZ @ 0x180008088 (-Abandon@CStoryboard@@QEAAXXZ.c)
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x180011FE8 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?Release@CStoryboard@@QEAAKXZ @ 0x180031D90 (-Release@CStoryboard@@QEAAKXZ.c)
 *     ?_RecycleAbandonedStoryboards@CAnimationScheduler@@AEAAXXZ @ 0x180033E6C (-_RecycleAbandonedStoryboards@CAnimationScheduler@@AEAAXXZ.c)
 *     ?_SetStoryboardTriggerForAnimationClock@CAnimationScheduler@@AEAAJU_GUID@@@Z @ 0x180034328 (-_SetStoryboardTriggerForAnimationClock@CAnimationScheduler@@AEAAJU_GUID@@@Z.c)
 *     ?_ScheduleStoryboardsForAnimationClock@CAnimationScheduler@@AEAAJU_GUID@@@Z @ 0x180035E54 (-_ScheduleStoryboardsForAnimationClock@CAnimationScheduler@@AEAAJU_GUID@@@Z.c)
 *     ?OnAnimationComplete@CAnimationScheduler@@UEAAJI@Z @ 0x180037120 (-OnAnimationComplete@CAnimationScheduler@@UEAAJI@Z.c)
 *     ?_ScheduleBlockedStoryboards@CAnimationScheduler@@AEAAXH@Z @ 0x1800379F4 (-_ScheduleBlockedStoryboards@CAnimationScheduler@@AEAAXH@Z.c)
 *     __security_check_cookie @ 0x180053520 (__security_check_cookie.c)
 *     ?OnStoryboardTimeout@CStoryboard@@QEAAJXZ @ 0x1800B0194 (-OnStoryboardTimeout@CStoryboard@@QEAAJXZ.c)
 */

void __fastcall CAnimationScheduler::OnAnimationClockChanged(__int64 a1, struct _GUID *a2, int a3)
{
  int v6; // ebx
  int v7; // ebx
  int v8; // ebx
  int v9; // ebx
  int v10; // ebx
  __int64 i; // rbx
  __int64 v12; // rdx
  __int64 v13; // rax
  __int64 j; // rbx
  __int64 v15; // rcx
  __int64 v16; // rax
  __int64 k; // r14
  __int64 v18; // rbx
  __int64 v19; // rax
  struct _RTL_CRITICAL_SECTION *v20; // [rsp+20h] [rbp-29h] BYREF
  struct _GUID v21; // [rsp+30h] [rbp-19h] BYREF
  struct _GUID v22; // [rsp+40h] [rbp-9h] BYREF
  __int128 v23; // [rsp+50h] [rbp+7h]
  __int128 v24; // [rsp+60h] [rbp+17h]
  __int128 v25; // [rsp+70h] [rbp+27h]

  v20 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v6 = a3 - 2;
  if ( v6 )
  {
    v7 = v6 - 1;
    if ( v7 )
    {
      v8 = v7 - 1;
      if ( v8 )
      {
        v9 = v8 - 1;
        if ( v9 )
        {
          v10 = v9 - 1;
          if ( v10 )
          {
            if ( v10 == 1 )
              CAnimationScheduler::_RecycleAbandonedStoryboards((CAnimationScheduler *)(a1 - 8));
          }
          else
          {
            for ( i = 0LL; (unsigned int)i < *(_DWORD *)(a1 + 32); i = (unsigned int)(i + 1) )
            {
              v12 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 8 * i);
              v23 = *(_OWORD *)(v12 + 48);
              v13 = v23 - *(_QWORD *)&a2->Data1;
              if ( (_QWORD)v23 == *(_QWORD *)&a2->Data1 )
                v13 = *((_QWORD *)&v23 + 1) - *(_QWORD *)a2->Data4;
              if ( !v13 )
                CAnimationScheduler::OnAnimationComplete((CAnimationScheduler *)(a1 - 8), *(_DWORD *)(v12 + 72));
            }
          }
        }
        else
        {
          for ( j = 0LL; (unsigned int)j < *(_DWORD *)(a1 + 32); j = (unsigned int)(j + 1) )
          {
            v15 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 8 * j);
            v24 = *(_OWORD *)(v15 + 48);
            v16 = v24 - *(_QWORD *)&a2->Data1;
            if ( (_QWORD)v24 == *(_QWORD *)&a2->Data1 )
              v16 = *((_QWORD *)&v24 + 1) - *(_QWORD *)a2->Data4;
            if ( !v16 && *(_DWORD *)(v15 + 24) != 4 )
              CStoryboard::Abandon((CStoryboard *)v15);
          }
        }
      }
      else
      {
        v21 = *a2;
        CAnimationScheduler::_ScheduleStoryboardsForAnimationClock((CAnimationScheduler *)(a1 - 8), &v21);
      }
    }
    else
    {
      for ( k = 0LL; (unsigned int)k < *(_DWORD *)(a1 + 32); k = (unsigned int)(k + 1) )
      {
        v18 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 8 * k);
        if ( v18 )
          _InterlockedIncrement((volatile signed __int32 *)(v18 + 8));
        v25 = *(_OWORD *)(v18 + 48);
        v19 = v25 - *(_QWORD *)&a2->Data1;
        if ( (_QWORD)v25 == *(_QWORD *)&a2->Data1 )
          v19 = *((_QWORD *)&v25 + 1) - *(_QWORD *)a2->Data4;
        if ( !v19
          && !*(_DWORD *)(v18 + 24)
          && (int)CStoryboard::OnStoryboardTimeout((CStoryboard *)v18) >= 0
          && *(_DWORD *)(v18 + 24) == 4 )
        {
          CAnimationScheduler::_ScheduleBlockedStoryboards((CAnimationScheduler *)(a1 - 8), *(_DWORD *)(v18 + 64));
        }
        CStoryboard::Release((CStoryboard *)v18);
      }
    }
  }
  else
  {
    v22 = *a2;
    CAnimationScheduler::_SetStoryboardTriggerForAnimationClock((CAnimationScheduler *)(a1 - 8), &v22);
  }
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v20);
}
