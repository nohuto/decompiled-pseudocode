/*
 * XREFs of ?OnEndTransitionRequestFromStoryboard@CAnimationScheduler@@QEAAJHPEAVCStoryboard@@@Z @ 0x180032290
 * Callers:
 *     ?OnEndTransitionRequest@CAnimationScheduler@@QEAAJH@Z @ 0x180032404 (-OnEndTransitionRequest@CAnimationScheduler@@QEAAJH@Z.c)
 *     ?OnEndTransitionRequest@CAppLaunchSwitch@@UEAAJXZ @ 0x1800AF7D0 (-OnEndTransitionRequest@CAppLaunchSwitch@@UEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18000432C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Abandon@CStoryboard@@QEAAXXZ @ 0x180008028 (-Abandon@CStoryboard@@QEAAXXZ.c)
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x180012D2C (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?_RecycleAbandonedStoryboards@CAnimationScheduler@@AEAAXXZ @ 0x18003160C (-_RecycleAbandonedStoryboards@CAnimationScheduler@@AEAAXXZ.c)
 *     ?_ScheduleStoryboardsForAnimationClock@CAnimationScheduler@@AEAAJU_GUID@@@Z @ 0x1800348B8 (-_ScheduleStoryboardsForAnimationClock@CAnimationScheduler@@AEAAJU_GUID@@@Z.c)
 *     ?OnEndAnimationClock@CAnimationClockCoordinator@@QEAAJU_GUID@@@Z @ 0x180035708 (-OnEndAnimationClock@CAnimationClockCoordinator@@QEAAJU_GUID@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180056410 (_guard_dispatch_icall_nop.c)
 *     McTemplateU0q_EtwEventWriteTransfer @ 0x180084878 (McTemplateU0q_EtwEventWriteTransfer.c)
 */

__int64 __fastcall CAnimationScheduler::OnEndTransitionRequestFromStoryboard(
        CAnimationScheduler *this,
        unsigned int a2,
        struct CStoryboard *a3)
{
  __int64 v6; // rdx
  __int64 v7; // rcx
  unsigned int v8; // edi
  __int64 v9; // rcx
  __int64 v10; // rbx
  int v11; // eax
  struct _GUID v12; // xmm6
  int v13; // r9d
  unsigned __int64 v14; // rax
  struct _GUID v16; // [rsp+30h] [rbp-38h] BYREF
  struct _RTL_CRITICAL_SECTION *v17; // [rsp+70h] [rbp+8h] BYREF

  v17 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
    McTemplateU0q_EtwEventWriteTransfer(v7, &UdwmSystemAnimation_EndTransitionRequest, a2);
  v8 = -2147467259;
  v9 = (unsigned int)(*((_DWORD *)this + 10) - 1);
  if ( (int)v9 >= 0 )
  {
    v6 = *((_QWORD *)this + 2);
    while ( 1 )
    {
      v10 = *(_QWORD *)(v6 + 8 * v9);
      if ( !*(_DWORD *)(v10 + 24) && *(_DWORD *)(v10 + 72) == a2 && *(struct CStoryboard **)(v10 + 80) == a3 )
        break;
      v9 = (unsigned int)(v9 - 1);
      if ( (int)v9 < 0 )
        goto LABEL_17;
    }
    v11 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)v10 + 96LL))(*(_QWORD *)(v6 + 8 * v9));
    v8 = v11;
    if ( v11 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_1800C9668, 1LL, v11, 0x132u);
    }
    else
    {
      v12 = *(struct _GUID *)(v10 + 48);
      v8 = -2147024809;
      v13 = -2147024809;
      v14 = *(_QWORD *)(v10 + 48) - *(_QWORD *)&GUID_NULL.Data1;
      if ( !v14 )
        v14 = _mm_srli_si128((__m128i)v12, 8).m128i_u64[0] - *(_QWORD *)GUID_NULL.Data4;
      if ( v14 )
      {
        v16 = *(struct _GUID *)(v10 + 48);
        v13 = CAnimationClockCoordinator::OnEndAnimationClock(
                *((CAnimationClockCoordinator **)CDesktopManager::s_pDesktopManagerInstance + 25),
                &v16);
        if ( v13 == -2147019873 )
        {
          v16 = v12;
          v13 = CAnimationScheduler::_ScheduleStoryboardsForAnimationClock(this, &v16);
        }
        v8 = v13;
        if ( v13 >= 0 )
          goto LABEL_15;
      }
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_1800C9668, 1LL, v13, 0x135u);
    }
LABEL_17:
    if ( *(_DWORD *)(v10 + 72) == a2 && (!*(_DWORD *)(v10 + 24) || !*(_BYTE *)(v10 + 76)) )
      CStoryboard::Abandon((CStoryboard *)v10);
  }
LABEL_15:
  CAnimationScheduler::_RecycleAbandonedStoryboards(this, v6);
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v17);
  return v8;
}
