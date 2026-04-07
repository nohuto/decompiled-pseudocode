/*
 * XREFs of ?CleanupTimeline@CScreenRotation@@AEAAXXZ @ 0x1800AC534
 * Callers:
 *     ?OnGlobalTimeUpdated@CScreenRotation@@MEAAJXZ @ 0x1800ACC40 (-OnGlobalTimeUpdated@CScreenRotation@@MEAAJXZ.c)
 *     ?SetupTimeline@CScreenRotation@@AEAAJW4RotationTimelineReason@1@@Z @ 0x1800ACF54 (-SetupTimeline@CScreenRotation@@AEAAJW4RotationTimelineReason@1@@Z.c)
 *     ?SkipAnimationDelays@CScreenRotation@@QEAAJXZ @ 0x1800AD144 (-SkipAnimationDelays@CScreenRotation@@QEAAJXZ.c)
 *     ?Start@CScreenRotation@@QEAAJXZ @ 0x1800AD23C (-Start@CScreenRotation@@QEAAJXZ.c)
 *     ?Stop@CScreenRotation@@QEAAX_N@Z @ 0x1800AD2AC (-Stop@CScreenRotation@@QEAAX_N@Z.c)
 * Callees:
 *     ?UnregisterForGlobalTimeChangeNotification@CDesktopManager@@SA_NPEAVCVisual@@@Z @ 0x18003E2D4 (-UnregisterForGlobalTimeChangeNotification@CDesktopManager@@SA_NPEAVCVisual@@@Z.c)
 *     __security_check_cookie @ 0x180053520 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800560C0 (_guard_dispatch_icall_nop.c)
 *     McGenEventWrite_EtwEventWriteTransfer @ 0x180085078 (McGenEventWrite_EtwEventWriteTransfer.c)
 */

void __fastcall CScreenRotation::CleanupTimeline(CScreenRotation *this)
{
  __int64 v2; // r8
  __int64 v3; // rax
  __int64 v4; // r9
  bool v5; // zf
  char v6; // al
  char v7; // al
  void *v8; // rdx
  _BYTE v9[16]; // [rsp+30h] [rbp-28h] BYREF

  if ( *((_BYTE *)this + 288) )
  {
    CDesktopManager::UnregisterForGlobalTimeChangeNotification(this);
    v3 = *((_QWORD *)this + 37);
    v4 = 1LL;
    if ( v3 )
    {
      v5 = (*(_DWORD *)(v3 + 8))-- == 1;
      v6 = CDesktopManager::s_fTimelineDirty;
      if ( v5 )
        v6 = 1;
      *((_QWORD *)this + 37) = 0LL;
      CDesktopManager::s_fTimelineDirty = v6;
    }
    v7 = *((_BYTE *)this + 380);
    *((_BYTE *)this + 288) = 0;
    if ( *((_DWORD *)this + 76) == 1 )
    {
      if ( v7 )
      {
        if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
        {
          v8 = &UdwmHardwareExpression_Delay_Stop;
LABEL_17:
          McGenEventWrite_EtwEventWriteTransfer(
            Microsoft_Windows_Dwm_Udwm_Provider_Context,
            (__int64)v8,
            v2,
            1LL,
            (__int64)v9);
        }
      }
      else if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
      {
        v8 = &UdwmScreenRotation_Delay_Stop;
        goto LABEL_17;
      }
    }
    else if ( v7 )
    {
      if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
      {
        v8 = &UdwmHardwareExpression_HintDelay_Stop;
        goto LABEL_17;
      }
    }
    else if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
    {
      v8 = &UdwmScreenRotation_HintDelay_Stop;
      goto LABEL_17;
    }
    (*(void (__fastcall **)(_QWORD, __int128 *, unsigned __int64, __int64))(**(_QWORD **)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance
                                                                                          + 5)
                                                                                        + 16LL)
                                                                          + 224LL))(
      *(_QWORD *)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 5) + 16LL),
      &xmmword_1800CD1E8,
      (unsigned __int64)this | 0xD100000000000000uLL,
      v4);
    *((_DWORD *)this + 76) = 0;
  }
}
