/*
 * XREFs of ?OnBeginTransitionRequest@CAppLaunchSwitch@@UEAAJXZ @ 0x1800AFB70
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800039DC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Create@CImmersiveState@@SAJPEAPEAV1@_K@Z @ 0x18000C5B8 (-Create@CImmersiveState@@SAJPEAPEAV1@_K@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180017894 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?OnBeginTransitionRequestFromStoryboard@CAnimationScheduler@@QEAAJHPEBU_GUID@@PEAVCStoryboard@@PEAU2@@Z @ 0x180033444 (-OnBeginTransitionRequestFromStoryboard@CAnimationScheduler@@QEAAJHPEBU_GUID@@PEAVCStoryboard@@P.c)
 */

__int64 __fastcall CAppLaunchSwitch::OnBeginTransitionRequest(CAppLaunchSwitch *this)
{
  unsigned int v2; // ebx
  int v3; // eax
  CBaseObject *v4; // rdi
  char v5; // cl
  bool v6; // zf
  CAnimationScheduler *v7; // rcx
  int v8; // eax
  int v9; // eax
  CBaseObject *v11; // [rsp+58h] [rbp+10h] BYREF
  unsigned __int64 v12; // [rsp+60h] [rbp+18h] BYREF

  v11 = 0LL;
  if ( (unsigned int)GetDesktopID(1LL, &v12) )
  {
    v3 = CImmersiveState::Create(&v11, v12);
    v4 = v11;
    v2 = v3;
    if ( v3 >= 0 )
    {
      v5 = *((_BYTE *)v11 + 56);
      *((_BYTE *)this + 120) = v5 == 0;
      v6 = v5 == 0;
      v7 = (CAnimationScheduler *)*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 30);
      if ( v6 )
      {
        v8 = CAnimationScheduler::OnBeginTransitionRequestFromStoryboard(v7, 0x3Bu, 0LL, this, 0LL);
        v2 = v8;
        if ( v8 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_1800D2D48, 1LL, v8, 0xA60u);
      }
      else
      {
        v9 = CAnimationScheduler::OnBeginTransitionRequestFromStoryboard(v7, 0x3Au, 0LL, this, 0LL);
        v2 = v9;
        if ( v9 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_1800D2D48, 1LL, v9, 0xA64u);
      }
    }
    else
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_1800D2D48, 1LL, v3, 0xA5Cu);
    }
    if ( v4 )
      CBaseObject::Release(v4);
  }
  else
  {
    v2 = -2147467259;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_1800D2D48, 1LL, -2147467259, 0xA5Au);
  }
  return v2;
}
