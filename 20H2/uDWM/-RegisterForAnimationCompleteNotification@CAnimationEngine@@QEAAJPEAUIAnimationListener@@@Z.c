/*
 * XREFs of ?RegisterForAnimationCompleteNotification@CAnimationEngine@@QEAAJPEAUIAnimationListener@@@Z @ 0x180038A68
 * Callers:
 *     ?StartAnimation@CLoginTransition@@QEAAJHPEAVCVisual@@0_K@Z @ 0x18000A8A8 (-StartAnimation@CLoginTransition@@QEAAJHPEAVCVisual@@0_K@Z.c)
 *     ?_ScheduleStartAnimations@CAnimationScheduler@@AEAAJXZ @ 0x180034A24 (-_ScheduleStartAnimations@CAnimationScheduler@@AEAAJXZ.c)
 *     ?MidDelayExpired@CScreenRotation@@AEAAJXZ @ 0x1800AC160 (-MidDelayExpired@CScreenRotation@@AEAAJXZ.c)
 *     ?PreDelayExpired@CScreenRotation@@AEAAJXZ @ 0x1800AC5FC (-PreDelayExpired@CScreenRotation@@AEAAJXZ.c)
 *     ?StartAnimation@CAccentTransition@@QEAAJPEBUACCENT_POLICY@@PEAVCAccent@@@Z @ 0x1800B5294 (-StartAnimation@CAccentTransition@@QEAAJPEBUACCENT_POLICY@@PEAVCAccent@@@Z.c)
 *     ?StartAnimation@CThumbnailTransition@@QEAAJPEAVCThumbnailAnimatedVisual@@H@Z @ 0x1800B7760 (-StartAnimation@CThumbnailTransition@@QEAAJPEAVCThumbnailAnimatedVisual@@H@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18000432C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x180012D2C (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180026234 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 */

__int64 __fastcall CAnimationEngine::RegisterForAnimationCompleteNotification(
        CAnimationEngine *this,
        struct IAnimationListener *a2)
{
  unsigned int v3; // ebx
  __int64 v4; // rdx
  unsigned int v5; // ecx
  __int64 v6; // r9
  char *v7; // r10
  unsigned int v9; // eax
  unsigned int v10; // edx
  int v11; // edi
  int v12; // eax
  struct _RTL_CRITICAL_SECTION *v13; // [rsp+40h] [rbp+8h] BYREF
  struct IAnimationListener *v14; // [rsp+48h] [rbp+10h] BYREF

  v14 = a2;
  v13 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v3 = 0;
  if ( *((_BYTE *)this + 120) )
  {
    v4 = 0xFFFFFFFFLL;
    v5 = 0;
    if ( *((_DWORD *)this + 24) )
    {
      v6 = *((_QWORD *)this + 9);
      while ( *(struct IAnimationListener **)(v6 + 8LL * v5) != v14 )
      {
        if ( (int)v4 < 0 && !*(_QWORD *)(v6 + 8LL * v5) )
          v4 = v5;
        if ( ++v5 >= *((_DWORD *)this + 24) )
          goto LABEL_9;
      }
    }
    else
    {
LABEL_9:
      v7 = (char *)this + 72;
      if ( (int)v4 < 0 )
      {
        v9 = *((_DWORD *)this + 24);
        v10 = v9 + 1;
        if ( v9 + 1 < v9 )
        {
          v11 = -2147024362;
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024362, 0xB5u);
        }
        else
        {
          v11 = 0;
          if ( v10 <= *((_DWORD *)v7 + 5) )
          {
            *(_QWORD *)(*(_QWORD *)v7 + 8LL * *((unsigned int *)v7 + 6)) = v14;
            *((_DWORD *)v7 + 6) = v10;
          }
          else
          {
            v12 = DynArrayImpl<0>::AddMultipleAndSet((__int64)v7, 8u, 1, &v14);
            v11 = v12;
            if ( v12 < 0 )
              MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v12, 0xC0u);
          }
        }
        v3 = v11;
      }
      else
      {
        *(_QWORD *)(*(_QWORD *)v7 + 8 * v4) = v14;
      }
    }
  }
  else
  {
    v3 = -2147221008;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147221008, 0x226u);
  }
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v13);
  return v3;
}
