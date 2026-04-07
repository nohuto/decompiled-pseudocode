/*
 * XREFs of ?UpdateAcrylicBlurBehind@CAccentAcrylicBlurBehind@@QEAAJAEBUACCENT_POLICY@@@Z @ 0x18004B364
 * Callers:
 *     ?_UpdateAcrylicBlurBehind@CAccent@@IEAAJXZ @ 0x1800458A0 (-_UpdateAcrylicBlurBehind@CAccent@@IEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18000432C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?InternalRelease@?$ComPtr@UIWICBitmapDecoder@@@WRL@Microsoft@@IEAAKXZ @ 0x18003F0C4 (-InternalRelease@-$ComPtr@UIWICBitmapDecoder@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$As@UIVisual@Composition@UI@Windows@@@?$ComPtr@UISpriteVisual@Composition@UI@Windows@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIVisual@Composition@UI@Windows@@@WRL@Microsoft@@@Details@12@@Z @ 0x18004576C (--$As@UIVisual@Composition@UI@Windows@@@-$ComPtr@UISpriteVisual@Composition@UI@Windows@@@WRL@Mic.c)
 *     ?EnsureAcrylicBrushForAccent@CAccentAcrylicBlurBehind@@AEAAJK@Z @ 0x18004B4F4 (-EnsureAcrylicBrushForAccent@CAccentAcrylicBlurBehind@@AEAAJK@Z.c)
 *     ?ValidateDevice@CAccentAcrylicBlurBehind@@AEAAJXZ @ 0x18004B728 (-ValidateDevice@CAccentAcrylicBlurBehind@@AEAAJXZ.c)
 *     _guard_dispatch_icall_nop @ 0x180056410 (_guard_dispatch_icall_nop.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800809C4 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall CAccentAcrylicBlurBehind::UpdateAcrylicBlurBehind(
        CAccentAcrylicBlurBehind *this,
        const struct ACCENT_POLICY *a2)
{
  int v4; // eax
  unsigned int v5; // ebx
  int v6; // eax
  int v7; // eax
  int v8; // esi
  int v9; // ebp
  int v10; // eax
  int v11; // eax
  __int64 v12; // rcx
  int v13; // eax
  __int64 v14; // rax
  int v15; // eax
  int v16; // eax
  int v17; // eax
  unsigned int v19; // [rsp+20h] [rbp-28h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  __int64 v21; // [rsp+60h] [rbp+18h] BYREF
  int v22; // [rsp+68h] [rbp+20h] BYREF
  int v23; // [rsp+6Ch] [rbp+24h]

  v21 = 0LL;
  v4 = CAccentAcrylicBlurBehind::ValidateDevice(this);
  v5 = v4;
  if ( v4 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v4, 0x6F5u);
  }
  else
  {
    v6 = CAccentAcrylicBlurBehind::EnsureAcrylicBrushForAccent(this, *((_DWORD *)a2 + 2));
    v5 = v6;
    if ( v6 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v6, 0x6F8u);
    }
    else
    {
      v7 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 41) + 56LL))(
             *((_QWORD *)this + 41),
             *((_QWORD *)this + 39));
      v5 = v7;
      if ( v7 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v7, 0x6FBu);
      }
      else
      {
        v8 = 0;
        v9 = 0;
        if ( *((_DWORD *)this + 86) - *((_DWORD *)this + 84) >= 0 )
          v8 = *((_DWORD *)this + 86) - *((_DWORD *)this + 84);
        if ( *((_DWORD *)this + 87) - *((_DWORD *)this + 85) >= 0 )
          v9 = *((_DWORD *)this + 87) - *((_DWORD *)this + 85);
        v10 = Microsoft::WRL::ComPtr<Windows::UI::Composition::ISpriteVisual>::As<Windows::UI::Composition::IVisual>(
                (_QWORD *)this + 41,
                &v21);
        v5 = v10;
        if ( v10 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v10, 0x701u);
        }
        else
        {
          v11 = (*(__int64 (__fastcall **)(__int64, unsigned __int64))(*(_QWORD *)v21 + 288LL))(
                  v21,
                  _mm_unpacklo_ps((__m128)COERCE_UNSIGNED_INT((float)v8), (__m128)COERCE_UNSIGNED_INT((float)v9)).m128_u64[0]);
          v5 = v11;
          if ( v11 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v11, 0x702u);
          }
          else
          {
            v12 = *((_QWORD *)this + 35);
            v22 = v8;
            v23 = v9;
            v13 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v12 + 96LL))(v12, &v22);
            v5 = v13;
            if ( v13 < 0 )
            {
              MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v13, 0x704u);
            }
            else
            {
              v14 = *(_QWORD *)this;
              v22 = v8;
              v23 = v9;
              v15 = (*(__int64 (__fastcall **)(CAccentAcrylicBlurBehind *, int *))(v14 + 96))(this, &v22);
              v5 = v15;
              if ( v15 < 0 )
              {
                MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v15, 0x705u);
              }
              else
              {
                v16 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 36) + 24LL))(*((_QWORD *)this + 36));
                v5 = v16;
                if ( v16 < 0 )
                {
                  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v16, 0x707u);
                }
                else
                {
                  v17 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 36) + 32LL))(*((_QWORD *)this + 36));
                  if ( v17 < 0 )
                    wil::details::in1diag3::_Log_Hr(
                      retaddr,
                      (void *)0x70C,
                      (unsigned int)"clientcore\\windows\\dwm\\udwm\\accent.cpp",
                      (const char *)(unsigned int)v17,
                      v19);
                }
              }
            }
          }
        }
      }
    }
  }
  Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease(&v21);
  return v5;
}
