/*
 * XREFs of ?EnsureMask@CDropShadow@@AEAAJXZ @ 0x180212604
 * Callers:
 *     ?GetMaskForLayerVisualNoRef@CDropShadow@@QEAAPEAVCBrush@@XZ @ 0x1800D0448 (-GetMaskForLayerVisualNoRef@CDropShadow@@QEAAPEAVCBrush@@XZ.c)
 * Callees:
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18001EB80 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??0CColorBrush@@QEAA@PEAVCComposition@@@Z @ 0x180041A78 (--0CColorBrush@@QEAA@PEAVCComposition@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?SetMask@ShadowIntermediates@CDropShadow@@QEAAJPEAV2@PEAVCBrush@@@Z @ 0x1800ED2FC (-SetMask@ShadowIntermediates@CDropShadow@@QEAAJPEAV2@PEAVCBrush@@@Z.c)
 *     ??2CColorBrush@@SAPEAX_K@Z @ 0x1800ED454 (--2CColorBrush@@SAPEAX_K@Z.c)
 *     __security_check_cookie @ 0x180100650 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??0?$com_ptr_t@VCColorBrush@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAVCColorBrush@@@Z @ 0x1801F67FC (--0-$com_ptr_t@VCColorBrush@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAVCColorBrush@@@Z.c)
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

  if ( *((_QWORD *)this + 17) )
    return 0;
  v2 = (CColorBrush *)CColorBrush::operator new();
  if ( v2 )
    v2 = CColorBrush::CColorBrush(v2, *((struct CComposition **)this + 2));
  wil::com_ptr_t<CColorBrush,wil::err_returncode_policy>::com_ptr_t<CColorBrush,wil::err_returncode_policy>(
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
      v9 = 630;
    }
    else
    {
      v7 = CDropShadow::ShadowIntermediates::SetMask((CDropShadow *)((char *)this + 128), this, v4);
      v5 = v7;
      if ( v7 >= 0 )
      {
        wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v10);
        return 0;
      }
      v9 = 632;
    }
    v6 = v7;
    goto LABEL_6;
  }
  v5 = -2147024882;
  v6 = -2147024882;
  v9 = 623;
LABEL_6:
  MilInstrumentationCheckHR_MaybeFailFast(v3, 0LL, 0LL, v6, v9);
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v10);
  return v5;
}
