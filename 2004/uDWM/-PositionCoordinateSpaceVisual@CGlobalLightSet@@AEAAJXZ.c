/*
 * XREFs of ?PositionCoordinateSpaceVisual@CGlobalLightSet@@AEAAJXZ @ 0x180042644
 * Callers:
 *     ?SettingsChange@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_NOTIFYSETTINGSCHANGE@@@Z @ 0x1800266B0 (-SettingsChange@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_NOTIFYSETTINGSCHANGE@@@Z.c)
 *     ?CreateCoordinateSpaceVisual@CGlobalLightSet@@AEAAJXZ @ 0x180048ED8 (-CreateCoordinateSpaceVisual@CGlobalLightSet@@AEAAJXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180006618 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ValidateDevice@UdwmDcompVisual@@QEAAJPEA_N@Z @ 0x180013018 (-ValidateDevice@UdwmDcompVisual@@QEAAJPEA_N@Z.c)
 *     ?SetOffset@CVisual@@QEAAXPEBUtagPOINT@@@Z @ 0x180027A04 (-SetOffset@CVisual@@QEAAXPEBUtagPOINT@@@Z.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x18003DD3C (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIWICBitmapDecoder@@@WRL@Microsoft@@IEAAKXZ @ 0x18003EF44 (-InternalRelease@-$ComPtr@UIWICBitmapDecoder@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?ValidateUdwmDCompVisual@CGlobalLightSet@@AEBA_NPEAVUdwmDcompVisual@@@Z @ 0x1800427C4 (-ValidateUdwmDCompVisual@CGlobalLightSet@@AEBA_NPEAVUdwmDcompVisual@@@Z.c)
 *     ??$As@UIVisual@Composition@UI@Windows@@@?$ComPtr@UISpriteVisual@Composition@UI@Windows@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIVisual@Composition@UI@Windows@@@WRL@Microsoft@@@Details@12@@Z @ 0x1800458CC (--$As@UIVisual@Composition@UI@Windows@@@-$ComPtr@UISpriteVisual@Composition@UI@Windows@@@WRL@Mic.c)
 *     _guard_dispatch_icall_nop @ 0x1800560C0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CGlobalLightSet::PositionCoordinateSpaceVisual(CGlobalLightSet *this)
{
  struct UdwmDcompVisual *v1; // rdx
  UdwmDcompVisual *v3; // rcx
  int v4; // eax
  unsigned int v5; // ebx
  struct tagPOINT v6; // rcx
  int v7; // r14d
  int v8; // esi
  int v9; // r15d
  int v10; // r12d
  __int64 (__fastcall *v11)(__int64, float *); // rax
  int v12; // eax
  unsigned int v13; // eax
  __m128i v14; // xmm0
  int v15; // eax
  __m128 v16; // xmm0
  __int64 v17; // rcx
  __int64 v19; // rdx
  unsigned __int64 v20; // r9
  float v21[4]; // [rsp+20h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+38h]
  bool v23; // [rsp+70h] [rbp+40h] BYREF
  __int64 v24; // [rsp+78h] [rbp+48h] BYREF
  struct tagPOINT v25; // [rsp+80h] [rbp+50h] BYREF

  v1 = (struct UdwmDcompVisual *)*((_QWORD *)this + 12);
  if ( !v1 || !CGlobalLightSet::ValidateUdwmDCompVisual(this, v1) )
    return 0LL;
  v3 = (UdwmDcompVisual *)*((_QWORD *)this + 12);
  v23 = 0;
  v4 = UdwmDcompVisual::ValidateDevice(v3, &v23);
  v5 = v4;
  if ( v4 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1B0,
      (__int64)"clientcore\\windows\\dwm\\udwm\\globallightset.cpp",
      (const char *)(unsigned int)v4);
    return v5;
  }
  if ( !v23 )
  {
    v24 = 0LL;
    v6 = *(struct tagPOINT *)(*((_QWORD *)this + 12) + 24LL);
    v25 = v6;
    if ( v6 )
      (*(void (__fastcall **)(struct tagPOINT))(**(_QWORD **)&v6 + 8LL))(v6);
    v5 = Microsoft::WRL::ComPtr<Windows::UI::Composition::ISpriteVisual>::As<Windows::UI::Composition::IVisual>(
           &v25,
           &v24);
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v25);
    if ( (v5 & 0x80000000) != 0 )
    {
      v20 = v5;
      v19 = 439LL;
    }
    else
    {
      v7 = *((_DWORD *)CDesktopManager::s_pDesktopManagerInstance + 111);
      v8 = *((_DWORD *)CDesktopManager::s_pDesktopManagerInstance + 112);
      v9 = *((_DWORD *)CDesktopManager::s_pDesktopManagerInstance + 113);
      v10 = *((_DWORD *)CDesktopManager::s_pDesktopManagerInstance + 114);
      v11 = *(__int64 (__fastcall **)(__int64, float *))(*(_QWORD *)v24 + 168LL);
      v21[0] = (float)v7;
      v21[2] = 0.0;
      v21[1] = (float)v8;
      v12 = v11(v24, v21);
      v5 = v12;
      if ( v12 < 0 )
      {
        v19 = 445LL;
      }
      else
      {
        v13 = 0;
        if ( v9 >= 0 )
          v13 = v9;
        v14 = _mm_cvtsi32_si128(v13);
        v15 = 0;
        v16 = _mm_cvtepi32_ps(v14);
        if ( v10 >= 0 )
          v15 = v10;
        v12 = (*(__int64 (__fastcall **)(__int64, unsigned __int64))(*(_QWORD *)v24 + 288LL))(
                v24,
                _mm_unpacklo_ps(v16, (__m128)COERCE_UNSIGNED_INT((float)v15)).m128_u64[0]);
        v5 = v12;
        if ( v12 >= 0 )
        {
          v17 = *((_QWORD *)this + 12);
          v25.x = -v7;
          v25.y = -v8;
          CVisual::SetOffset(*(struct tagPOINT **)(v17 + 48), &v25);
          Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease(&v24);
          return 0LL;
        }
        v19 = 447LL;
      }
      v20 = (unsigned int)v12;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v19,
      (__int64)"clientcore\\windows\\dwm\\udwm\\globallightset.cpp",
      (const char *)v20);
    Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease(&v24);
    return v5;
  }
  return 2147947423LL;
}
