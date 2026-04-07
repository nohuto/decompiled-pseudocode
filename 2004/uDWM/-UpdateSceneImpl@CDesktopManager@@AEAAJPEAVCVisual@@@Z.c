/*
 * XREFs of ?UpdateSceneImpl@CDesktopManager@@AEAAJPEAVCVisual@@@Z @ 0x18002C4A0
 * Callers:
 *     ?EnsureSnapshot@CTransitionVisualController@@QEAAJPEAVCWindowData@@@Z @ 0x1800013B4 (-EnsureSnapshot@CTransitionVisualController@@QEAAJPEAVCWindowData@@@Z.c)
 *     ?ForceDisconnectClientNode@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x18000F420 (-ForceDisconnectClientNode@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 *     ?UpdateScene@CWindowList@@UEAAJXZ @ 0x18001B420 (-UpdateScene@CWindowList@@UEAAJXZ.c)
 *     ?ForceUpdateScene@CWindowList@@QEAAJXZ @ 0x1800978F0 (-ForceUpdateScene@CWindowList@@QEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800039DC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?ImmediateDestroySprite@CWindowList@@AEAAXPEAVCWindowData@@@Z @ 0x1800299D0 (-ImmediateDestroySprite@CWindowList@@AEAAXPEAVCWindowData@@@Z.c)
 *     ?SendRoundTripRequest@CDesktopManager@@QEAAJPEAI@Z @ 0x18002C564 (-SendRoundTripRequest@CDesktopManager@@QEAAJPEAI@Z.c)
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x18003A790 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800560C0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CDesktopManager::UpdateSceneImpl(CDesktopManager *this, struct CVisual *a2)
{
  CDesktopManager *v2; // rbx
  int v3; // esi
  __int64 i; // rdi
  int v6; // eax

  v2 = CDesktopManager::s_pDesktopManagerInstance;
  v3 = (*(__int64 (__fastcall **)(struct CVisual *))(*(_QWORD *)a2 + 64LL))(a2);
  if ( v3 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v3, 0x6B6u);
  }
  else
  {
    for ( i = *((_QWORD *)v2 + 61);
          *(_DWORD *)(i + 272);
          CWindowList::ImmediateDestroySprite((CWindowList *)i, **(struct CWindowData ***)(i + 248)) )
    {
      ;
    }
    *(_DWORD *)(i + 272) = 0;
    DynArrayImpl<0>::ShrinkToSize(i + 248, 8LL);
    if ( !*((_BYTE *)v2 + 18) )
    {
      if ( *((_DWORD *)v2 + 150) )
      {
        if ( !*((_BYTE *)v2 + 19) )
        {
          *((_BYTE *)v2 + 19) = 1;
          v6 = CDesktopManager::SendRoundTripRequest(v2, 0LL);
          v3 = v6;
          if ( v6 < 0 )
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v6, 0x6C7u);
        }
      }
    }
  }
  return (unsigned int)v3;
}
