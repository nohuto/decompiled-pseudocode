/*
 * XREFs of ?MorphForStoryboard@CTransitionVisualController@@QEAAJPEAVCStoryboard@@@Z @ 0x1800346D4
 * Callers:
 *     ?_ScheduleStoryboard@CAnimationScheduler@@AEAAJPEAVCStoryboard@@@Z @ 0x180034650 (-_ScheduleStoryboard@CAnimationScheduler@@AEAAJPEAVCStoryboard@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18000432C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?CopyVisual@CAnimatedTransitionVisual@@QEAAJPEAV1@@Z @ 0x1800090C0 (-CopyVisual@CAnimatedTransitionVisual@@QEAAJPEAV1@@Z.c)
 *     ?SetGhost@CAnimationComponent@@QEAAXXZ @ 0x180009B1C (-SetGhost@CAnimationComponent@@QEAAXXZ.c)
 *     ?_LogEvent@CAnimationComponent@@IEAAXW4AnimationComponentEvent@1@@Z @ 0x18000C254 (-_LogEvent@CAnimationComponent@@IEAAXW4AnimationComponentEvent@1@@Z.c)
 *     ?_UpdateClipping@CTransitionVisualController@@IEAAXPEAVCAnimationComponent@@@Z @ 0x18003294C (-_UpdateClipping@CTransitionVisualController@@IEAAXPEAVCAnimationComponent@@@Z.c)
 *     ?_CanMorph@CTransitionVisualController@@IEAA_NPEAVCAnimationComponent@@@Z @ 0x180034890 (-_CanMorph@CTransitionVisualController@@IEAA_NPEAVCAnimationComponent@@@Z.c)
 *     __security_check_cookie @ 0x180053530 (__security_check_cookie.c)
 *     McTemplateU0p_EtwEventWriteTransfer @ 0x180095010 (McTemplateU0p_EtwEventWriteTransfer.c)
 */

__int64 __fastcall CTransitionVisualController::MorphForStoryboard(
        CTransitionVisualController *this,
        struct CStoryboard *a2)
{
  unsigned int v4; // r15d
  unsigned int i; // ebp
  __int64 v6; // rsi
  unsigned int j; // r14d
  __int64 v8; // rax
  __int64 v9; // rdi
  __int64 v11; // rcx
  RECT v12; // xmm1
  HMONITOR v13; // rbx
  int v14; // eax
  CTransitionVisualController *v15; // rcx
  __int64 v16; // rcx
  RECT rc; // [rsp+30h] [rbp-68h] BYREF
  RECT v18; // [rsp+40h] [rbp-58h] BYREF

  v4 = 0;
  for ( i = 0; i < *((_DWORD *)a2 + 28); ++i )
  {
    v6 = *(_QWORD *)(*((_QWORD *)a2 + 11) + 8LL * i);
    if ( CTransitionVisualController::_CanMorph((CTransitionVisualController *)i, (struct CAnimationComponent *)v6) )
    {
      for ( j = 0; j < *((_DWORD *)this + 34); ++j )
      {
        v8 = *((_QWORD *)this + 14);
        v9 = *(_QWORD *)(v8 + 8LL * j);
        if ( v6 != v9
          && CTransitionVisualController::_CanMorph(
               (CTransitionVisualController *)j,
               *(struct CAnimationComponent **)(v8 + 8LL * j))
          && (*(_BYTE *)(*(_QWORD *)(v9 + 40) + 967LL) || !*(_BYTE *)(*(_QWORD *)(v6 + 40) + 967LL)) )
        {
          v11 = *(_QWORD *)(v9 + 16);
          if ( (unsigned __int64)(v11 + 1) > 1
            && v11 == *(_QWORD *)(v6 + 16)
            && *(_QWORD *)(v9 + 128) != *(_QWORD *)(v6 + 128)
            && *(_BYTE *)(v9 + 74) == *(_BYTE *)(v6 + 74) )
          {
            v12 = *(RECT *)(v6 + 88);
            v18 = *(RECT *)(v9 + 88);
            rc = v12;
            v13 = MonitorFromRect(&rc, 2u);
            if ( MonitorFromRect(&v18, 2u) == v13 && !*(_BYTE *)(v9 + 72) && !*(_BYTE *)(v6 + 72) )
            {
              v14 = CAnimatedTransitionVisual::CopyVisual(
                      *(CAnimatedTransitionVisual **)(v6 + 40),
                      *(struct CAnimatedTransitionVisual **)(v9 + 40));
              v4 = v14;
              if ( v14 < 0 )
              {
                MilInstrumentationCheckHR_MaybeFailFast(
                  0x14u,
                  &CTransitionVisualController::MILINSTRUMENTATIONHRESULTLIST,
                  2LL,
                  v14,
                  0xA35u);
                return v4;
              }
              CTransitionVisualController::_UpdateClipping(v15, (struct CAnimationComponent *)v6);
              if ( !*(_BYTE *)(v9 + 66) )
              {
                CAnimationComponent::SetGhost((CAnimationComponent *)v9);
                CAnimationComponent::_LogEvent(v9, 2);
                *(_BYTE *)(v9 + 66) = 1;
                if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
                  McTemplateU0p_EtwEventWriteTransfer(v16, &UdwmSystemAnimation_Morph, *(_QWORD *)(v9 + 16));
              }
            }
          }
        }
      }
    }
  }
  return v4;
}
