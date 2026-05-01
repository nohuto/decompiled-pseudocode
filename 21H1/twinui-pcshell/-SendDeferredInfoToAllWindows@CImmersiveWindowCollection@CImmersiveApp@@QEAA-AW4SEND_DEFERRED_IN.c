/*
 * XREFs of ?SendDeferredInfoToAllWindows@CImmersiveWindowCollection@CImmersiveApp@@QEAA?AW4SEND_DEFERRED_INFO_RESULTS@12@XZ @ 0x180023AA4
 * Callers:
 *     ?GetWindowAndPrepareForActivation@CImmersiveApp@@UEAAJW4IAM_ACTIVATE_APPLICATION_OPTION@@PEAPEAUHWND__@@@Z @ 0x18001EC70 (-GetWindowAndPrepareForActivation@CImmersiveApp@@UEAAJW4IAM_ACTIVATE_APPLICATION_OPTION@@PEAPEAU.c)
 *     ?SetViewPosition@CImmersiveApp@@UEAAJPEAUIApplicationViewPosition@@PEBUAPPLICATION_VIEW_DATA_UPDATE@@PEAUIApplicationViewTitlebarConfiguration@@W4SET_IMM_APP_POS@@W4SESSION_IDLE_STATE@@PEAPEAXPEAUAPPLICATION_FRAME_CHROME_CHANGE_DATA@@W4APPLICATION_VIEW_CLOAK_TYPE@@W4ZBID@@@Z @ 0x1800211F0 (-SetViewPosition@CImmersiveApp@@UEAAJPEAUIApplicationViewPosition@@PEBUAPPLICATION_VIEW_DATA_UPD.c)
 *     ?HandleActivation@CImmersiveApp@@UEAAJPEAUHWND__@@_N@Z @ 0x180023310 (-HandleActivation@CImmersiveApp@@UEAAJPEAUHWND__@@_N@Z.c)
 *     ?_UpdateApplication@CImmersiveApp@@AEAA?AW4UPDATE_APP_RESULT@1@PEAUIApplicationViewPosition@@QEBUAPPLICATION_VIEW_DATA_UPDATE@@W4POSITION_APP_WINDOWS@@@Z @ 0x1800239BC (-_UpdateApplication@CImmersiveApp@@AEAA-AW4UPDATE_APP_RESULT@1@PEAUIApplicationViewPosition@@QEB.c)
 *     ?HandleSessionIdleStateChanged@CImmersiveApp@@UEAAXW4SESSION_IDLE_STATE@@@Z @ 0x180159E50 (-HandleSessionIdleStateChanged@CImmersiveApp@@UEAAXW4SESSION_IDLE_STATE@@@Z.c)
 *     ?SetApplicationWindow@CImmersiveApp@@UEAAJPEAUHWND__@@W4SET_APP_REQUEST_ORIGINATOR@@W4APP_TRANSITION_TYPE@@@Z @ 0x18015D150 (-SetApplicationWindow@CImmersiveApp@@UEAAJPEAUHWND__@@W4SET_APP_REQUEST_ORIGINATOR@@W4APP_TRANSI.c)
 *     ?_OnDeferredGhostBitsClear@CImmersiveWindowCollection@CImmersiveApp@@AEAAXXZ @ 0x18015F290 (-_OnDeferredGhostBitsClear@CImmersiveWindowCollection@CImmersiveApp@@AEAAXXZ.c)
 *     ?_UpdateZOrderActivation@CImmersiveWindowCollection@CImmersiveApp@@AEAAJ_K_N@Z @ 0x18015F96C (-_UpdateZOrderActivation@CImmersiveWindowCollection@CImmersiveApp@@AEAAJ_K_N@Z.c)
 * Callees:
 *     ?OnSizeChanged@CSplashScreen@@QEAAXPEBUtagRECT@@@Z @ 0x180022044 (-OnSizeChanged@CSplashScreen@@QEAAXPEBUtagRECT@@@Z.c)
 *     ?AreAppViewDataEqual@ImmersiveApplicationLayout@@YA_NPEBUAPPLICATION_VIEW_DATA@@0@Z @ 0x180022A4C (-AreAppViewDataEqual@ImmersiveApplicationLayout@@YA_NPEBUAPPLICATION_VIEW_DATA@@0@Z.c)
 *     __security_check_cookie @ 0x18008C840 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800CA4C0 (_guard_dispatch_icall_nop.c)
 *     McTemplateU0qq_EventWriteTransfer @ 0x18013D8D0 (McTemplateU0qq_EventWriteTransfer.c)
 *     McTemplateU0q_EventWriteTransfer @ 0x18013D9E4 (McTemplateU0q_EventWriteTransfer.c)
 *     ?HasNewPositionInfo@CAppLocalCache@CImmersiveWindowCollection@CImmersiveApp@@QEBA_NXZ @ 0x18015A0E4 (-HasNewPositionInfo@CAppLocalCache@CImmersiveWindowCollection@CImmersiveApp@@QEBA_NXZ.c)
 */

__int64 __fastcall CImmersiveApp::CImmersiveWindowCollection::SendDeferredInfoToAllWindows(__int64 a1)
{
  unsigned int v1; // r14d
  const RECT *v3; // rdi
  const struct APPLICATION_VIEW_DATA *v4; // r8
  unsigned __int64 v6; // rsi
  __int128 v7; // xmm1
  __int128 v8; // xmm0
  __int64 v9; // rcx
  __int64 v10; // rcx
  __int64 v11; // rax
  __int64 v12; // rcx
  __int64 v13; // rcx
  unsigned int v14; // r15d
  int v15; // r8d
  __int128 v16; // xmm1
  __int64 v17; // xmm0_8
  __int128 v18; // [rsp+20h] [rbp-58h] BYREF
  __int128 v19; // [rsp+30h] [rbp-48h]
  __int128 i; // [rsp+40h] [rbp-38h]

  v1 = 0;
  if ( *(_QWORD *)(a1 + 176) )
  {
    if ( (v3 = (const RECT *)(a1 + 16), !EqualRect((const RECT *)a1, (const RECT *)(a1 + 16)))
      && v3->left <= v3->right
      && v3->top <= v3->bottom
      || !ImmersiveApplicationLayout::AreAppViewDataEqual(
            (ImmersiveApplicationLayout *)(a1 + 32),
            (const struct APPLICATION_VIEW_DATA *)(a1 + 76),
            v4) )
    {
      if ( v3->left <= v3->right && v3->top <= v3->bottom )
      {
        v1 = 1;
        if ( CImmersiveApp::CImmersiveWindowCollection::CAppLocalCache::HasNewPositionInfo((CImmersiveApp::CImmersiveWindowCollection::CAppLocalCache *)a1) )
          CSplashScreen::OnSizeChanged(*(CSplashScreen **)(a1 + 248), v3);
        v6 = 0LL;
        v7 = *(_OWORD *)(a1 + 92);
        v18 = *(_OWORD *)(a1 + 76);
        v8 = *(_OWORD *)(a1 + 108);
        v19 = v7;
        for ( i = v8; v6 < *(_QWORD *)(a1 + 176); ++v6 )
        {
          v9 = *(_QWORD *)(*(_QWORD *)(a1 + 168) + 8 * v6);
          (*(void (__fastcall **)(__int64, const RECT *, __int128 *))(*(_QWORD *)v9 + 64LL))(v9, v3, &v18);
          if ( CImmersiveApp::CImmersiveWindowCollection::CAppLocalCache::HasNewPositionInfo((CImmersiveApp::CImmersiveWindowCollection::CAppLocalCache *)a1)
            && (Microsoft_Windows_Immersive_ShellEnableBits & 4) != 0 )
          {
            v10 = *(_QWORD *)(*(_QWORD *)(a1 + 168) + 8 * v6);
            v11 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v10 + 32LL))(v10);
            McTemplateU0q_EventWriteTransfer(v12, &WindowLayoutChange_Start, v11);
            if ( (Microsoft_Windows_Immersive_ShellEnableBits & 4) != 0 )
            {
              v13 = *(_QWORD *)(*(_QWORD *)(a1 + 168) + 8 * v6);
              v14 = ~(*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v13 + 32LL))(v13);
              if ( (Microsoft_Windows_Immersive_ShellEnableBits & 4) != 0 )
              {
                McTemplateU0qq_EventWriteTransfer(
                  (unsigned int)Microsoft_Windows_Immersive_ShellEnableBits,
                  &PerfTrack_ModernApp_ResizeVisibleComplete_Start,
                  0LL,
                  v14,
                  v18,
                  *((_QWORD *)&v18 + 1),
                  v19,
                  *((_QWORD *)&v19 + 1),
                  i,
                  *((_QWORD *)&i + 1));
                if ( (Microsoft_Windows_Immersive_ShellEnableBits & 4) != 0 )
                  McTemplateU0qq_EventWriteTransfer(
                    (unsigned int)Microsoft_Windows_Immersive_ShellEnableBits,
                    &PerfTrack_ModernApp_ResizeResponsive_Start,
                    0LL,
                    v14,
                    v18,
                    *((_QWORD *)&v18 + 1),
                    v19,
                    *((_QWORD *)&v19 + 1),
                    i,
                    *((_QWORD *)&i + 1));
              }
            }
          }
        }
        v15 = *(_DWORD *)(a1 + 116);
        v16 = *(_OWORD *)(a1 + 92);
        *(_OWORD *)(a1 + 32) = *(_OWORD *)(a1 + 76);
        v17 = *(_QWORD *)(a1 + 108);
        *(_OWORD *)(a1 + 48) = v16;
        *(_QWORD *)(a1 + 64) = v17;
        *(_DWORD *)(a1 + 72) = v15;
        CopyRect((LPRECT)a1, v3);
      }
    }
  }
  return v1;
}
