/*
 * XREFs of ?MidDelayExpired@CScreenRotation@@AEAAJXZ @ 0x1800AC160
 * Callers:
 *     ?OnAnimationComplete@CScreenRotation@@UEAAJI@Z @ 0x1800AC3F0 (-OnAnimationComplete@CScreenRotation@@UEAAJI@Z.c)
 *     ?OnGlobalTimeUpdated@CScreenRotation@@MEAAJXZ @ 0x1800AC560 (-OnGlobalTimeUpdated@CScreenRotation@@MEAAJXZ.c)
 *     ?SkipAnimationDelays@CScreenRotation@@QEAAJXZ @ 0x1800ACA64 (-SkipAnimationDelays@CScreenRotation@@QEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18000432C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180026234 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x1800270B8 (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 *     ?Release@CAnimationEngine@@UEAAKXZ @ 0x180034CD0 (-Release@CAnimationEngine@@UEAAKXZ.c)
 *     ?ScheduleStartAnimation@CAnimationEngine@@QEAAJHAEBV?$DynArray@PEAUIAnimatedVisual@@$0A@@@PEAI@Z @ 0x180034E80 (-ScheduleStartAnimation@CAnimationEngine@@QEAAJHAEBV-$DynArray@PEAUIAnimatedVisual@@$0A@@@PEAI@Z.c)
 *     ?AcquireAnimationEngine@CDesktopManager@@SAPEAVCAnimationEngine@@XZ @ 0x1800355B4 (-AcquireAnimationEngine@CDesktopManager@@SAPEAVCAnimationEngine@@XZ.c)
 *     ?RegisterForAnimationCompleteNotification@CAnimationEngine@@QEAAJPEAUIAnimationListener@@@Z @ 0x180038A68 (-RegisterForAnimationCompleteNotification@CAnimationEngine@@QEAAJPEAUIAnimationListener@@@Z.c)
 *     __security_check_cookie @ 0x180053530 (__security_check_cookie.c)
 *     McGenEventWrite_EtwEventWriteTransfer @ 0x180084818 (McGenEventWrite_EtwEventWriteTransfer.c)
 *     ?CreateLiveDesktopVisual@CScreenRotation@@AEAAJXZ @ 0x1800ABF84 (-CreateLiveDesktopVisual@CScreenRotation@@AEAAJXZ.c)
 */

__int64 __fastcall CScreenRotation::MidDelayExpired(CScreenRotation *this)
{
  int LiveDesktopVisual; // eax
  int v3; // ebx
  CAnimationEngine *v4; // r14
  int v5; // eax
  int v6; // r9d
  __int64 v7; // rax
  __int64 v8; // r8
  __int64 v9; // rcx
  __int64 v10; // rax
  int started; // eax
  int v12; // eax
  __int64 v13; // r8
  void *v14; // rdx
  unsigned int v16; // [rsp+20h] [rbp-50h]
  __int128 v17; // [rsp+30h] [rbp-40h] BYREF
  int v18; // [rsp+40h] [rbp-30h]
  unsigned int v19; // [rsp+44h] [rbp-2Ch]
  unsigned int v20; // [rsp+48h] [rbp-28h]
  _QWORD v21[2]; // [rsp+50h] [rbp-20h] BYREF

  v18 = 0;
  v19 = 0;
  v20 = 0;
  v17 = 0LL;
  LiveDesktopVisual = CScreenRotation::CreateLiveDesktopVisual((struct CAnimatedTransitionVisual **)this);
  v3 = LiveDesktopVisual;
  if ( LiveDesktopVisual < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, LiveDesktopVisual, 0x16Eu);
    goto LABEL_32;
  }
  v4 = CDesktopManager::AcquireAnimationEngine();
  if ( v4 )
  {
    v21[0] = *((_QWORD *)this + 39);
    v5 = DynArrayImpl<0>::AddMultipleAndSet((__int64)&v17, 8u, 1, v21);
    v3 = v5;
    if ( v5 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v5, 0xC0u);
    if ( v3 < 0 )
    {
      v16 = 370;
LABEL_10:
      v6 = v3;
      goto LABEL_11;
    }
    v7 = *((_QWORD *)this + 39);
    *(_DWORD *)(v7 + 728) = 76;
    *(_DWORD *)(v7 + 732) = 2;
    v8 = *((_QWORD *)this + 40);
    v21[0] = v8;
    if ( v20 + 1 < v20 )
    {
      v3 = -2147024362;
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024362, 0xB5u);
LABEL_22:
      v16 = 373;
      goto LABEL_10;
    }
    if ( v20 + 1 > v19 )
    {
      v12 = DynArrayImpl<0>::AddMultipleAndSet((__int64)&v17, 8u, 1, v21);
      v3 = v12;
      if ( v12 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v12, 0xC0u);
      if ( v3 < 0 )
        goto LABEL_22;
    }
    else
    {
      v9 = v20++;
      *(_QWORD *)(v17 + 8 * v9) = v8;
    }
    v10 = *((_QWORD *)this + 40);
    *(_DWORD *)(v10 + 728) = 76;
    *(_DWORD *)(v10 + 732) = 3;
    started = CAnimationEngine::ScheduleStartAnimation(v4, 76, (__int64)&v17, (unsigned int *)this + 90);
    v3 = started;
    if ( started >= 0 )
    {
      started = CAnimationEngine::RegisterForAnimationCompleteNotification(
                  v4,
                  (struct IAnimationListener *)(((unsigned __int64)this + 280) & ((unsigned __int128)-(__int128)(unsigned __int64)this >> 64)));
      v3 = started;
      if ( started >= 0 )
      {
        if ( *((_BYTE *)this + 380) )
        {
          if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) == 0 )
            goto LABEL_31;
          v14 = &UdwmHardwareExpression_PostDelayAnimation_Start;
        }
        else
        {
          if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) == 0 )
            goto LABEL_31;
          v14 = &UdwmScreenRotation_PostDelayAnimation_Start;
        }
        McGenEventWrite_EtwEventWriteTransfer(
          Microsoft_Windows_Dwm_Udwm_Provider_Context,
          (__int64)v14,
          v13,
          1LL,
          (__int64)v21);
        goto LABEL_31;
      }
      v16 = 379;
    }
    else
    {
      v16 = 378;
    }
    v6 = started;
LABEL_11:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v6, v16);
LABEL_31:
    CAnimationEngine::Release(v4);
    goto LABEL_32;
  }
  v3 = -2147024882;
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024882, 0x170u);
LABEL_32:
  DynArrayImpl<0>::~DynArrayImpl<0>(&v17);
  return (unsigned int)v3;
}
