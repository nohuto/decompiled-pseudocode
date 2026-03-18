/*
 * XREFs of ?EnsureInertiaModifierProcessed@CScrollPositionKeyframeAnimation@@MEAAJPEAVCExpressionValueStack@@_K@Z @ 0x180255340
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180024060 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?CopyFrom@CExpressionValue@@QEAAXAEBV1@@Z @ 0x18004F220 (-CopyFrom@CExpressionValue@@QEAAXAEBV1@@Z.c)
 *     ?InternalRelease@?$ComPtr@UID2D1PathGeometry@@@WRL@Microsoft@@IEAAKXZ @ 0x1800D2E54 (-InternalRelease@-$ComPtr@UID2D1PathGeometry@@@WRL@Microsoft@@IEAAKXZ.c)
 *     memset_0 @ 0x1801019AC (memset_0.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180177B90 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?GetNaturalEndpoint@CScrollPositionKeyframeAnimation@@QEBA?AUD2DVector3@@XZ @ 0x180255680 (-GetNaturalEndpoint@CScrollPositionKeyframeAnimation@@QEBA-AUD2DVector3@@XZ.c)
 *     ?TryProcessInertiaModifier@CScrollKeyframeAnimation@@IEAAJPEAVCExpressionValueStack@@_KW4ModifierType@1@W4ScrollAxis@@PEAVCExpressionValue@@@Z @ 0x18025F910 (-TryProcessInertiaModifier@CScrollKeyframeAnimation@@IEAAJPEAVCExpressionValueStack@@_KW4Modifie.c)
 */

__int64 __fastcall CScrollPositionKeyframeAnimation::EnsureInertiaModifierProcessed(
        CScrollPositionKeyframeAnimation *this,
        struct CExpressionValueStack *a2,
        __int64 a3)
{
  char v4; // al
  char v7; // r14
  char v8; // si
  int v9; // r13d
  float v10; // xmm0_4
  int v11; // eax
  unsigned int v12; // edi
  __int64 v13; // rdx
  int v15; // xmm0_4
  int v16; // xmm0_4
  const char *v17; // r9
  __int64 v18; // rdx
  __int64 v19; // rax
  _DWORD *v20; // rcx
  __int64 v21; // [rsp+38h] [rbp-D0h] BYREF
  int v22; // [rsp+40h] [rbp-C8h]
  _DWORD v23[16]; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v24; // [rsp+88h] [rbp-80h] BYREF
  int v25; // [rsp+90h] [rbp-78h]
  char v26; // [rsp+94h] [rbp-74h]
  _DWORD v27[16]; // [rsp+98h] [rbp-70h] BYREF
  __int64 v28; // [rsp+D8h] [rbp-30h] BYREF
  int v29; // [rsp+E0h] [rbp-28h]
  char v30; // [rsp+E4h] [rbp-24h]
  __int64 v31; // [rsp+E8h] [rbp-20h] BYREF
  int v32; // [rsp+F0h] [rbp-18h]
  __int64 v33; // [rsp+128h] [rbp+20h] BYREF
  int v34; // [rsp+130h] [rbp+28h]
  char v35; // [rsp+134h] [rbp+2Ch]
  wil::details::in1diag3 *retaddr; // [rsp+170h] [rbp+68h]

  v4 = *((_BYTE *)this + 744);
  if ( (v4 & 4) == 0 )
  {
    *((_BYTE *)this + 744) = v4 | 4;
    memset_0(v27, 0, sizeof(v27));
    v28 = 0LL;
    v30 = 0;
    v7 = 0;
    v8 = 0;
    v29 = 18;
    memset_0(v23, 0, sizeof(v23));
    v9 = 18;
    LODWORD(v10) = *((_DWORD *)this + 188) & _xmm;
    v25 = 18;
    v24 = 0LL;
    v26 = 0;
    if ( v10 >= 0.0000011920929 )
    {
      v11 = CScrollKeyframeAnimation::TryProcessInertiaModifier(this, a2, a3, 0LL, 0, v27);
      v12 = v11;
      if ( v11 < 0 )
      {
        v13 = 93LL;
LABEL_9:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v13,
          (int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\scrollpositionkeyframeanimation.cpp",
          (const char *)(unsigned int)v11);
        Microsoft::WRL::ComPtr<ID2D1PathGeometry>::InternalRelease(&v24);
        Microsoft::WRL::ComPtr<ID2D1PathGeometry>::InternalRelease(&v28);
        return v12;
      }
      v7 = v30;
    }
    if ( COERCE_FLOAT(*((_DWORD *)this + 189) & _xmm) >= 0.0000011920929 )
    {
      v11 = CScrollKeyframeAnimation::TryProcessInertiaModifier(this, a2, a3, 0LL, 1, v23);
      v12 = v11;
      if ( v11 < 0 )
      {
        v13 = 103LL;
        goto LABEL_9;
      }
      v8 = v26;
      v9 = v25;
    }
    if ( v7 || v8 )
    {
      CScrollPositionKeyframeAnimation::GetNaturalEndpoint(this, &v21);
      if ( v7 && v29 == 18 )
      {
        v15 = v27[0];
        *((_BYTE *)this + 744) |= 8u;
        LODWORD(v21) = v15;
      }
      if ( v8 && v9 == 18 )
      {
        v16 = v23[0];
        *((_BYTE *)this + 744) |= 8u;
        HIDWORD(v21) = v16;
      }
      if ( (*((_BYTE *)this + 744) & 8) != 0 )
      {
        memset_0(&v31, 0, 0x40uLL);
        v18 = *((_QWORD *)this + 48);
        v33 = 0LL;
        v32 = v22;
        v19 = (unsigned int)(*(_DWORD *)(v18 + 112) - 1);
        v34 = 52;
        v31 = v21;
        v35 = 1;
        v20 = *(_DWORD **)(*(_QWORD *)(v18 + 104) + 24 * v19 + 8);
        if ( v20[5] != 1 )
          wil::details::in1diag3::_FailFast_Unexpected(
            retaddr,
            111LL,
            (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\keyframevalue.cpp",
            v17);
        if ( v20[4] != 52 )
          wil::details::in1diag3::_FailFast_Unexpected(
            retaddr,
            114LL,
            (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\keyframevalue.cpp",
            v17);
        CExpressionValue::CopyFrom((CExpressionValue *)(v20 + 6), (const struct CExpressionValue *)&v31);
        Microsoft::WRL::ComPtr<ID2D1PathGeometry>::InternalRelease(&v33);
      }
    }
    Microsoft::WRL::ComPtr<ID2D1PathGeometry>::InternalRelease(&v24);
    Microsoft::WRL::ComPtr<ID2D1PathGeometry>::InternalRelease(&v28);
  }
  return 0LL;
}
