/*
 * XREFs of ?PositionProjectedShadowReceiverVisual@CProjectedShadowScene@@AEAAJXZ @ 0x1800BBA44
 * Callers:
 *     ?SettingsChange@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_NOTIFYSETTINGSCHANGE@@@Z @ 0x180014C94 (-SettingsChange@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_NOTIFYSETTINGSCHANGE@@@Z.c)
 *     ?CreateProjectedShadowReceiverVisual@CProjectedShadowScene@@AEAAJ_K@Z @ 0x1800BB4F8 (-CreateProjectedShadowReceiverVisual@CProjectedShadowScene@@AEAAJ_K@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180006658 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIWICBitmapDecoder@@@WRL@Microsoft@@IEAAKXZ @ 0x18003F0C4 (-InternalRelease@-$ComPtr@UIWICBitmapDecoder@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$As@UIVisual@Composition@UI@Windows@@@?$ComPtr@UISpriteVisual@Composition@UI@Windows@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIVisual@Composition@UI@Windows@@@WRL@Microsoft@@@Details@12@@Z @ 0x18004576C (--$As@UIVisual@Composition@UI@Windows@@@-$ComPtr@UISpriteVisual@Composition@UI@Windows@@@WRL@Mic.c)
 *     _guard_dispatch_icall_nop @ 0x180056410 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CProjectedShadowScene::PositionProjectedShadowReceiverVisual(CProjectedShadowScene *this)
{
  int v1; // eax
  unsigned int v2; // ebx
  __int64 v3; // rdx
  int v4; // edi
  int v5; // esi
  __int64 (__fastcall *v6)(__int64, int *); // rax
  float v7; // xmm1_4
  unsigned int v8; // eax
  __m128i v9; // xmm0
  int v10; // eax
  __m128 v11; // xmm0
  int v13[6]; // [rsp+20h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v15; // [rsp+40h] [rbp+8h] BYREF

  if ( *((_QWORD *)this + 7) )
  {
    v15 = 0LL;
    v1 = Microsoft::WRL::ComPtr<Windows::UI::Composition::ISpriteVisual>::As<Windows::UI::Composition::IVisual>(
           (_QWORD *)this + 5,
           &v15);
    v2 = v1;
    if ( v1 < 0 )
    {
      v3 = 136LL;
LABEL_12:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v3,
        (__int64)"clientcore\\windows\\dwm\\udwm\\projectedshadowscene.cpp",
        (const char *)(unsigned int)v1);
      Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease(&v15);
      return v2;
    }
    v4 = *((_DWORD *)CDesktopManager::s_pDesktopManagerInstance + 113);
    v5 = *((_DWORD *)CDesktopManager::s_pDesktopManagerInstance + 114);
    v6 = *(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v15 + 168LL);
    v7 = (float)*((int *)CDesktopManager::s_pDesktopManagerInstance + 112);
    *(float *)v13 = (float)*((int *)CDesktopManager::s_pDesktopManagerInstance + 111);
    v13[2] = 0;
    *(float *)&v13[1] = v7;
    v1 = v6(v15, v13);
    v2 = v1;
    if ( v1 < 0 )
    {
      v3 = 142LL;
      goto LABEL_12;
    }
    v8 = 0;
    if ( v4 >= 0 )
      v8 = v4;
    v9 = _mm_cvtsi32_si128(v8);
    v10 = 0;
    v11 = _mm_cvtepi32_ps(v9);
    if ( v5 >= 0 )
      v10 = v5;
    v1 = (*(__int64 (__fastcall **)(__int64, unsigned __int64))(*(_QWORD *)v15 + 288LL))(
           v15,
           _mm_unpacklo_ps(v11, (__m128)COERCE_UNSIGNED_INT((float)v10)).m128_u64[0]);
    v2 = v1;
    if ( v1 < 0 )
    {
      v3 = 144LL;
      goto LABEL_12;
    }
    Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease(&v15);
  }
  return 0LL;
}
