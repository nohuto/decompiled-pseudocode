/*
 * XREFs of ?_CreateAndAddBlurBehindComponent@CStoryboard@@IEAAJPEAVCWindowData@@HPEAPEAVCAnimationComponent@@@Z @ 0x180003E50
 * Callers:
 *     ?_WindowEnumCallback@CSlideIn@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z @ 0x180003460 (-_WindowEnumCallback@CSlideIn@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z.c)
 *     ?_WindowEnumCallback@CSlideOut@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z @ 0x1800036E0 (-_WindowEnumCallback@CSlideOut@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z.c)
 *     ?_WindowEnumCallback@CFlyoutPopup@@UEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z @ 0x180003B50 (-_WindowEnumCallback@CFlyoutPopup@@UEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z.c)
 * Callees:
 *     ?CreateBlurBehindAnimationComponent@CTransitionVisualController@@QEAAJPEAVCWindowData@@HPEAVCStoryboard@@PEAPEAVCAnimationComponent@@@Z @ 0x180003F0C (-CreateBlurBehindAnimationComponent@CTransitionVisualController@@QEAAJPEAVCWindowData@@HPEAVCSto.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18000432C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180017394 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?_AddAnimationComponent@CStoryboard@@IEAAJPEAVCAnimationComponent@@@Z @ 0x18002F75C (-_AddAnimationComponent@CStoryboard@@IEAAJPEAVCAnimationComponent@@@Z.c)
 *     ?RecordWindowRect@CAnimationComponent@@QEAAXXZ @ 0x180033D78 (-RecordWindowRect@CAnimationComponent@@QEAAXXZ.c)
 */

__int64 __fastcall CStoryboard::_CreateAndAddBlurBehindComponent(
        CStoryboard *this,
        struct CWindowData *a2,
        int a3,
        struct CAnimationComponent **a4)
{
  int v6; // eax
  unsigned int v7; // edi
  volatile signed __int32 *v8; // rbx
  int v10; // eax
  void *v11; // [rsp+28h] [rbp-10h]
  CAnimationComponent *v12; // [rsp+48h] [rbp+10h] BYREF

  v12 = 0LL;
  *a4 = 0LL;
  if ( !*((_QWORD *)a2 + 48) )
  {
    v7 = -2147467259;
    MilInstrumentationCheckHR_MaybeFailFast(
      0x14u,
      &CStoryboard::MILINSTRUMENTATIONHRESULTLIST,
      1u,
      -2147467259,
      0x151Fu,
      v11);
    return v7;
  }
  v6 = CTransitionVisualController::CreateBlurBehindAnimationComponent(
         *((CTransitionVisualController **)CDesktopManager::s_pDesktopManagerInstance + 31),
         a2,
         a3,
         this,
         &v12);
  v7 = v6;
  if ( v6 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, &CStoryboard::MILINSTRUMENTATIONHRESULTLIST, 1u, v6, 0x1522u, v11);
    goto LABEL_7;
  }
  v8 = (volatile signed __int32 *)v12;
  if ( !v12 )
    return v7;
  v10 = CStoryboard::_AddAnimationComponent(this, v12);
  v7 = v10;
  if ( v10 >= 0 )
  {
    CAnimationComponent::RecordWindowRect((CAnimationComponent *)v8);
    *a4 = (struct CAnimationComponent *)v8;
    _InterlockedIncrement(v8 + 2);
LABEL_7:
    v8 = (volatile signed __int32 *)v12;
    goto LABEL_8;
  }
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, &CStoryboard::MILINSTRUMENTATIONHRESULTLIST, 1u, v10, 0x1526u, v11);
LABEL_8:
  if ( v8 )
    CBaseObject::Release((CBaseObject *)v8);
  return v7;
}
