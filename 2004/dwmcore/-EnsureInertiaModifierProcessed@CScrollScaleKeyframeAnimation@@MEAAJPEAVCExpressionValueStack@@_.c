/*
 * XREFs of ?EnsureInertiaModifierProcessed@CScrollScaleKeyframeAnimation@@MEAAJPEAVCExpressionValueStack@@_K@Z @ 0x180204270
 * Callers:
 *     <none>
 * Callees:
 *     ?CopyFrom@CExpressionValue@@QEAAXAEBV1@@Z @ 0x18008B730 (-CopyFrom@CExpressionValue@@QEAAXAEBV1@@Z.c)
 *     memset_0 @ 0x1800E3ABC (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800EED40 (_guard_dispatch_icall_nop.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18014E4E4 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18014FC08 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?TryProcessInertiaModifier@CScrollKeyframeAnimation@@IEAAJPEAVCExpressionValueStack@@_KW4ModifierType@1@W4ScrollAxis@@PEAVCExpressionValue@@@Z @ 0x18020E29C (-TryProcessInertiaModifier@CScrollKeyframeAnimation@@IEAAJPEAVCExpressionValueStack@@_KW4Modifie.c)
 */

__int64 __fastcall CScrollScaleKeyframeAnimation::EnsureInertiaModifierProcessed(
        CScrollScaleKeyframeAnimation *this,
        struct CExpressionValueStack *a2,
        __int64 a3)
{
  char v3; // al
  __int64 v7; // rsi
  int v8; // eax
  unsigned int v9; // edi
  int v10; // eax
  int v11; // eax
  const char *v13; // r9
  __int64 v14; // rdx
  __int64 v15; // rax
  _DWORD *v16; // rcx
  char v17; // al
  __int64 v18; // rcx
  _DWORD v19[16]; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v20; // [rsp+70h] [rbp-90h]
  int v21; // [rsp+78h] [rbp-88h]
  char v22; // [rsp+7Ch] [rbp-84h]
  _DWORD v23[16]; // [rsp+80h] [rbp-80h] BYREF
  __int64 v24; // [rsp+C0h] [rbp-40h]
  int v25; // [rsp+C8h] [rbp-38h]
  char v26; // [rsp+CCh] [rbp-34h]
  _DWORD v27[16]; // [rsp+D0h] [rbp-30h] BYREF
  __int64 v28; // [rsp+110h] [rbp+10h]
  int v29; // [rsp+118h] [rbp+18h]
  char v30; // [rsp+11Ch] [rbp+1Ch]
  _DWORD v31[16]; // [rsp+120h] [rbp+20h] BYREF
  __int64 v32; // [rsp+160h] [rbp+60h]
  int v33; // [rsp+168h] [rbp+68h]
  char v34; // [rsp+16Ch] [rbp+6Ch]
  wil::details::in1diag3 *retaddr; // [rsp+188h] [rbp+88h]

  v3 = *((_BYTE *)this + 712);
  if ( (v3 & 4) != 0 )
    return 0LL;
  *((_BYTE *)this + 712) = v3 | 4;
  memset_0(v27, 0, sizeof(v27));
  v28 = 0LL;
  v29 = 18;
  v30 = 0;
  memset_0(v19, 0, sizeof(v19));
  v7 = 0LL;
  v21 = 18;
  v20 = 0LL;
  v22 = 0;
  memset_0(v23, 0, sizeof(v23));
  v24 = 0LL;
  v25 = 18;
  v26 = 0;
  v8 = CScrollKeyframeAnimation::TryProcessInertiaModifier(this, a2, a3, 0LL, 2, v27);
  v9 = v8;
  if ( v8 >= 0 )
  {
    v10 = CScrollKeyframeAnimation::TryProcessInertiaModifier(this, a2, a3, 1LL, 0, v19);
    v9 = v10;
    if ( v10 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x67,
        (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\scrollscalekeyframeanimation.cpp",
        (const char *)(unsigned int)v10);
LABEL_9:
      v7 = v20;
      goto LABEL_10;
    }
    v11 = CScrollKeyframeAnimation::TryProcessInertiaModifier(this, a2, a3, 1LL, 1, v23);
    v9 = v11;
    if ( v11 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x6E,
        (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\scrollscalekeyframeanimation.cpp",
        (const char *)(unsigned int)v11);
      if ( v24 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v24 + 16LL))(v24);
      goto LABEL_9;
    }
    if ( v30 && v29 == 18 )
    {
      memset_0(v31, 0, sizeof(v31));
      v14 = *((_QWORD *)this + 45);
      v32 = 0LL;
      v31[0] = v27[0];
      v15 = (unsigned int)(*(_DWORD *)(v14 + 112) - 1);
      v33 = 18;
      v34 = 1;
      v16 = *(_DWORD **)(*(_QWORD *)(v14 + 104) + 24 * v15 + 8);
      if ( v16[5] != 1 )
      {
        wil::details::in1diag3::_FailFast_Unexpected(
          retaddr,
          (void *)0x6F,
          (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\keyframevalue.cpp",
          v13);
        __debugbreak();
      }
      if ( v16[4] != 18 )
      {
        wil::details::in1diag3::_FailFast_Unexpected(
          retaddr,
          (void *)0x72,
          (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\keyframevalue.cpp",
          v13);
        __debugbreak();
      }
      CExpressionValue::CopyFrom((CExpressionValue *)(v16 + 6), (const struct CExpressionValue *)v31);
      *((_BYTE *)this + 712) |= 8u;
    }
    v17 = v26;
    if ( v22 )
    {
      if ( v21 == 18 )
        *((_DWORD *)this + 180) = v19[0] ^ _xmm;
    }
    else if ( !v26 )
    {
LABEL_30:
      v18 = v24;
      *(_QWORD *)(*((_QWORD *)this + 68) + 140LL) = *((_QWORD *)this + 90);
      if ( v18 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 16LL))(v18);
      if ( v20 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 16LL))(v20);
      if ( v28 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v28 + 16LL))(v28);
      return 0LL;
    }
    if ( v17 && v25 == 18 )
      *((_DWORD *)this + 181) = v23[0] ^ _xmm;
    goto LABEL_30;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x60,
    (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\scrollscalekeyframeanimation.cpp",
    (const char *)(unsigned int)v8);
LABEL_10:
  if ( v7 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  if ( v28 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v28 + 16LL))(v28);
  return v9;
}
