/*
 * XREFs of ?SampleInitialValueAndFinalValueIfNecessary@CNaturalAnimation@@AEAAJXZ @ 0x1801D8160
 * Callers:
 *     ?SetupAnimationIfNecessary@CNaturalAnimation@@AEAAJXZ @ 0x1801D8920 (-SetupAnimationIfNecessary@CNaturalAnimation@@AEAAJXZ.c)
 * Callees:
 *     ?ResolveTargetNoRef@CBaseExpression@@IEAAPEAVCResource@@XZ @ 0x180027AF4 (-ResolveTargetNoRef@CBaseExpression@@IEAAPEAVCResource@@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180068608 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     __security_check_cookie @ 0x1800E29B0 (__security_check_cookie.c)
 *     memset_0 @ 0x1800E3DCC (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800EE9F0 (_guard_dispatch_icall_nop.c)
 *     ?ApplyMaskToValue@CExpressionValue@@QEAAJPEAVSubchannelMaskInfo@@@Z @ 0x1801B0EAC (-ApplyMaskToValue@CExpressionValue@@QEAAJPEAVSubchannelMaskInfo@@@Z.c)
 */

__int64 __fastcall CNaturalAnimation::SampleInitialValueAndFinalValueIfNecessary(CNaturalAnimation *this)
{
  struct CResource *v2; // rax
  int v3; // eax
  __int64 v4; // rcx
  unsigned int v5; // edi
  __int64 v6; // rdx
  __int64 v7; // rcx
  char v8; // cl
  int v9; // eax
  char v10; // al
  int v11; // xmm0_4
  int v12; // xmm1_4
  char v13; // al
  int v14; // xmm0_4
  __int64 v15; // rcx
  unsigned int v17; // [rsp+20h] [rbp-19h]
  __int64 v18; // [rsp+30h] [rbp-9h] BYREF
  int v19; // [rsp+38h] [rbp-1h]
  __int64 v20; // [rsp+70h] [rbp+37h]
  int v21; // [rsp+78h] [rbp+3Fh]
  char v22; // [rsp+7Ch] [rbp+43h]

  if ( (*((_BYTE *)this + 564) & 0x30) == 0x30 )
    return 0;
  memset_0(&v18, 0, 0x40uLL);
  v20 = 0LL;
  v21 = 18;
  v22 = 0;
  v2 = CBaseExpression::ResolveTargetNoRef(this);
  v3 = (*(__int64 (__fastcall **)(struct CResource *, _QWORD, __int64 *))(*(_QWORD *)v2 + 144LL))(
         v2,
         *((unsigned int *)this + 46),
         &v18);
  v5 = v3;
  if ( v3 < 0 )
  {
    v17 = 685;
    goto LABEL_7;
  }
  v6 = *((_QWORD *)this + 24);
  if ( v6 )
  {
    if ( *(_BYTE *)(v6 + 4) )
    {
      v3 = CExpressionValue::ApplyMaskToValue((CExpressionValue *)&v18, (struct SubchannelMaskInfo *)v6);
      v5 = v3;
      if ( v3 < 0 )
      {
        v17 = 696;
LABEL_7:
        MilInstrumentationCheckHR_MaybeFailFast(v4, 0LL, 0, v3, v17, 0LL);
        goto LABEL_8;
      }
    }
  }
  switch ( *((_DWORD *)this + 36) )
  {
    case 0x11:
LABEL_27:
      v15 = v20;
      if ( v20 )
      {
        v20 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
      }
      return 0;
    case 0x12:
      v13 = *((_BYTE *)this + 564);
      v14 = v18;
      if ( (v13 & 0x10) == 0 )
        *((_DWORD *)this + 78) = v18;
      if ( (v13 & 0x20) == 0 )
        *((_DWORD *)this + 84) = v14;
      goto LABEL_27;
    case 0x23:
      v10 = *((_BYTE *)this + 564);
      v11 = HIDWORD(v18);
      v12 = v18;
      if ( (v10 & 0x10) == 0 )
      {
        *((_DWORD *)this + 78) = v18;
        *((_DWORD *)this + 79) = v11;
      }
      if ( (v10 & 0x20) == 0 )
      {
        *((_DWORD *)this + 84) = v12;
        *((_DWORD *)this + 85) = v11;
      }
      goto LABEL_27;
    case 0x34:
      v8 = *((_BYTE *)this + 564);
      v9 = v19;
      if ( (v8 & 0x10) == 0 )
      {
        *((_QWORD *)this + 39) = v18;
        *((_DWORD *)this + 80) = v9;
      }
      if ( (v8 & 0x20) == 0 )
      {
        *((_QWORD *)this + 42) = v18;
        *((_DWORD *)this + 86) = v9;
      }
      goto LABEL_27;
  }
  v5 = -2147024809;
  MilInstrumentationCheckHR_MaybeFailFast((unsigned int)(*((_DWORD *)this + 36) - 35), 0LL, 0, -2147024809, 0x2E7u, 0LL);
LABEL_8:
  v7 = v20;
  if ( v20 )
  {
    v20 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  }
  return v5;
}
