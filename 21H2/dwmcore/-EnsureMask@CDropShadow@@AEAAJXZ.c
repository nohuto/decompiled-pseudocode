/*
 * XREFs of ?EnsureMask@CDropShadow@@AEAAJXZ @ 0x1801BF1BC
 * Callers:
 *     ?GetMaskForLayerVisualNoRef@CDropShadow@@QEAAPEAVCBrush@@XZ @ 0x1801BF2E0 (-GetMaskForLayerVisualNoRef@CDropShadow@@QEAAPEAVCBrush@@XZ.c)
 * Callees:
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180025290 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??0?$com_ptr_t@VCCompositionSurfaceInfo@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAVCCompositionSurfaceInfo@@@Z @ 0x180025B70 (--0-$com_ptr_t@VCCompositionSurfaceInfo@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAVCComposition.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18005D440 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??0CColorBrush@@QEAA@PEAVCComposition@@@Z @ 0x1800B4D08 (--0CColorBrush@@QEAA@PEAVCComposition@@@Z.c)
 *     ??2CColorBrush@@SAPEAX_K@Z @ 0x1800D8924 (--2CColorBrush@@SAPEAX_K@Z.c)
 *     ?SetMask@ShadowIntermediates@CDropShadow@@QEAAJPEAV2@PEAVCBrush@@@Z @ 0x1800E1AE8 (-SetMask@ShadowIntermediates@CDropShadow@@QEAAJPEAV2@PEAVCBrush@@@Z.c)
 *     __security_check_cookie @ 0x1800E6E00 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800F4800 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CDropShadow::EnsureMask(CDropShadow *this)
{
  CColorBrush *v2; // rax
  __int64 v3; // rcx
  struct CBrush *v4; // rbx
  unsigned int v5; // edi
  int v6; // r9d
  int v7; // eax
  unsigned int v9; // [rsp+20h] [rbp-38h]
  struct CBrush *v10; // [rsp+30h] [rbp-28h] BYREF
  __int128 v11; // [rsp+38h] [rbp-20h] BYREF

  if ( *((_QWORD *)this + 18) )
    return 0;
  v2 = (CColorBrush *)CColorBrush::operator new();
  if ( v2 )
    v2 = CColorBrush::CColorBrush(v2, *((struct CComposition **)this + 2));
  wil::com_ptr_t<CCompositionSurfaceInfo,wil::err_returncode_policy>::com_ptr_t<CCompositionSurfaceInfo,wil::err_returncode_policy>(
    &v10,
    (__int64)v2);
  v4 = v10;
  if ( v10 )
  {
    v11 = _xmm;
    v7 = (*(__int64 (__fastcall **)(struct CBrush *, _QWORD, __int64, __int128 *))(*(_QWORD *)v10 + 96LL))(
           v10,
           0LL,
           70LL,
           &v11);
    v5 = v7;
    if ( v7 < 0 )
    {
      v9 = 592;
    }
    else
    {
      v7 = CDropShadow::ShadowIntermediates::SetMask((CDropShadow *)((char *)this + 136), this, v4);
      v5 = v7;
      if ( v7 >= 0 )
      {
        wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v10);
        return 0;
      }
      v9 = 594;
    }
    v6 = v7;
    goto LABEL_6;
  }
  v5 = -2147024882;
  v6 = -2147024882;
  v9 = 585;
LABEL_6:
  MilInstrumentationCheckHR_MaybeFailFast(v3, 0LL, 0, v6, v9, 0LL);
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v10);
  return v5;
}
