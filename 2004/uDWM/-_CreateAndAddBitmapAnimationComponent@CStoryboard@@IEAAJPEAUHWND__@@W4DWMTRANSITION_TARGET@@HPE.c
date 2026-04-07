/*
 * XREFs of ?_CreateAndAddBitmapAnimationComponent@CStoryboard@@IEAAJPEAUHWND__@@W4DWMTRANSITION_TARGET@@HPEAPEAVCAnimationComponent@@@Z @ 0x1800B0E64
 * Callers:
 *     ?_WindowEnumCallback@CAppArrangementDelayed@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z @ 0x1800B2620 (-_WindowEnumCallback@CAppArrangementDelayed@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboar.c)
 *     ?_WindowEnumCallback@CAppArrangementImmediate@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z @ 0x1800B3100 (-_WindowEnumCallback@CAppArrangementImmediate@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStorybo.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800039DC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180017894 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?_AddAnimationComponent@CStoryboard@@IEAAJPEAVCAnimationComponent@@@Z @ 0x180031DBC (-_AddAnimationComponent@CStoryboard@@IEAAJPEAVCAnimationComponent@@@Z.c)
 *     ?CreateBitmapAnimationComponent@CTransitionVisualController@@QEAAJPEAUHWND__@@W4DWMTRANSITION_TARGET@@HPEAVCStoryboard@@PEAPEAVCAnimationComponent@@@Z @ 0x1800AA178 (-CreateBitmapAnimationComponent@CTransitionVisualController@@QEAAJPEAUHWND__@@W4DWMTRANSITION_TA.c)
 */

__int64 __fastcall CStoryboard::_CreateAndAddBitmapAnimationComponent(
        CStoryboard *a1,
        HWND a2,
        int a3,
        int a4,
        volatile signed __int32 **a5)
{
  int BitmapAnimationComponent; // eax
  unsigned int v7; // edi
  volatile signed __int32 *v8; // rbx
  int v9; // eax
  CBaseObject *v11; // [rsp+30h] [rbp-18h] BYREF

  v11 = 0LL;
  BitmapAnimationComponent = CTransitionVisualController::CreateBitmapAnimationComponent(
                               *((CTransitionVisualController **)CDesktopManager::s_pDesktopManagerInstance + 31),
                               a2,
                               a3,
                               a4,
                               (__int64)a1,
                               (__int64 *)&v11);
  v7 = BitmapAnimationComponent;
  if ( BitmapAnimationComponent >= 0 )
  {
    v8 = (volatile signed __int32 *)v11;
    v9 = CStoryboard::_AddAnimationComponent(a1, v11);
    v7 = v9;
    if ( v9 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, &CStoryboard::MILINSTRUMENTATIONHRESULTLIST, 1LL, v9, 0x1551u);
      goto LABEL_8;
    }
    *a5 = v8;
    if ( !v8 )
      return v7;
    _InterlockedIncrement(v8 + 2);
  }
  else
  {
    MilInstrumentationCheckHR_MaybeFailFast(
      0x14u,
      &CStoryboard::MILINSTRUMENTATIONHRESULTLIST,
      1LL,
      BitmapAnimationComponent,
      0x1550u);
  }
  v8 = (volatile signed __int32 *)v11;
LABEL_8:
  if ( v8 )
    CBaseObject::Release((CBaseObject *)v8);
  return v7;
}
