/*
 * XREFs of ?SampleStartingValue@CKeyframeAnimation@@AEAAJXZ @ 0x1800279D8
 * Callers:
 *     ?CalculateValueWorker@CKeyframeAnimation@@UEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x180025CC0 (-CalculateValueWorker@CKeyframeAnimation@@UEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 *     ?Calculate@KeyframeSequence@@QEAAXPEAVCExpressionValueStack@@@Z @ 0x180026630 (-Calculate@KeyframeSequence@@QEAAXPEAVCExpressionValueStack@@@Z.c)
 *     ?SampleExpressionsAndStartingValue@CKeyframeAnimation@@IEAAJPEAVCExpressionValueStack@@@Z @ 0x1800274B4 (-SampleExpressionsAndStartingValue@CKeyframeAnimation@@IEAAJPEAVCExpressionValueStack@@@Z.c)
 *     ?GetValue@KeyframeValue@@QEBAJPEAVCExpressionValueStack@@PEAVCExpressionValue@@@Z @ 0x18020374C (-GetValue@KeyframeValue@@QEBAJPEAVCExpressionValueStack@@PEAVCExpressionValue@@@Z.c)
 * Callees:
 *     ?ResolveTargetNoRef@CBaseExpression@@IEAAPEAVCResource@@XZ @ 0x180027AF4 (-ResolveTargetNoRef@CBaseExpression@@IEAAPEAVCResource@@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180068608 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     __security_check_cookie @ 0x1800E29B0 (__security_check_cookie.c)
 *     memset_0 @ 0x1800E3DCC (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800EE9F0 (_guard_dispatch_icall_nop.c)
 *     ??4?$ComPtr@VCPathData@@@WRL@Microsoft@@QEAAAEAV012@PEAVCPathData@@@Z @ 0x1801B0E18 (--4-$ComPtr@VCPathData@@@WRL@Microsoft@@QEAAAEAV012@PEAVCPathData@@@Z.c)
 *     ?ApplyMaskToValue@CExpressionValue@@QEAAJPEAVSubchannelMaskInfo@@@Z @ 0x1801B0EAC (-ApplyMaskToValue@CExpressionValue@@QEAAJPEAVSubchannelMaskInfo@@@Z.c)
 */

__int64 __fastcall CKeyframeAnimation::SampleStartingValue(CKeyframeAnimation *this)
{
  __int64 v2; // rbx
  struct CResource *v3; // rax
  int v4; // eax
  unsigned int v5; // ecx
  unsigned int v6; // edi
  __int64 v7; // rdx
  int v8; // ecx
  int v9; // ecx
  int v10; // ecx
  int v11; // ecx
  __int64 v12; // rcx
  unsigned int v14; // ecx
  int v15; // ecx
  int v16; // ecx
  int v17; // ecx
  unsigned int v18; // [rsp+28h] [rbp-19h]
  __int128 v19; // [rsp+38h] [rbp-9h] BYREF
  __int128 v20; // [rsp+48h] [rbp+7h]
  __int128 v21; // [rsp+58h] [rbp+17h]
  __int128 v22; // [rsp+68h] [rbp+27h]
  __int64 v23; // [rsp+78h] [rbp+37h]
  int v24; // [rsp+80h] [rbp+3Fh]
  char v25; // [rsp+84h] [rbp+43h]

  memset_0(&v19, 0, 0x40uLL);
  v2 = *((_QWORD *)this + 44);
  v23 = 0LL;
  v24 = 18;
  v25 = 0;
  if ( *(_DWORD *)v2 )
    return 0;
  v3 = CBaseExpression::ResolveTargetNoRef(this);
  v4 = (*(__int64 (__fastcall **)(struct CResource *, _QWORD, __int128 *))(*(_QWORD *)v3 + 144LL))(
         v3,
         *((unsigned int *)this + 46),
         &v19);
  v6 = v4;
  if ( v4 < 0 )
  {
    v18 = 1954;
    goto LABEL_35;
  }
  v7 = *((_QWORD *)this + 24);
  if ( !v7
    || !*(_BYTE *)(v7 + 4)
    || (v4 = CExpressionValue::ApplyMaskToValue((CExpressionValue *)&v19, (struct SubchannelMaskInfo *)v7),
        v6 = v4,
        v4 >= 0) )
  {
    v8 = *((_DWORD *)this + 36);
    *(_DWORD *)v2 = v8;
    if ( v8 > 52 )
    {
      v15 = v8 - 69;
      if ( !v15 || (v16 = v15 - 1) == 0 || (v17 = v16 - 1) == 0 )
      {
        *(_OWORD *)(v2 + 8) = v19;
        goto LABEL_10;
      }
      v14 = v17 - 33;
      if ( !v14 )
      {
        *(_OWORD *)(v2 + 8) = v19;
        *(_QWORD *)(v2 + 24) = v20;
        goto LABEL_10;
      }
      if ( v14 == 161 )
      {
        *(_OWORD *)(v2 + 8) = v19;
        *(_OWORD *)(v2 + 24) = v20;
        *(_OWORD *)(v2 + 40) = v21;
        *(_OWORD *)(v2 + 56) = v22;
        goto LABEL_10;
      }
    }
    else
    {
      if ( v8 == 52 )
      {
        *(_QWORD *)(v2 + 8) = v19;
        *(_DWORD *)(v2 + 16) = DWORD2(v19);
        goto LABEL_10;
      }
      v9 = v8 - 11;
      if ( !v9 )
      {
        Microsoft::WRL::ComPtr<CPathData>::operator=(v2 + 8, v23);
        goto LABEL_10;
      }
      v10 = v9 - 6;
      if ( !v10 )
      {
        *(_BYTE *)(v2 + 8) = v19;
        goto LABEL_10;
      }
      v11 = v10 - 1;
      if ( !v11 )
      {
        *(_DWORD *)(v2 + 8) = v19;
LABEL_10:
        v6 = 0;
        goto LABEL_11;
      }
      v14 = v11 - 17;
      if ( !v14 )
      {
        *(_QWORD *)(v2 + 8) = v19;
        goto LABEL_10;
      }
      if ( v14 == 7 )
      {
        *(_DWORD *)(v2 + 8) = v19;
        goto LABEL_10;
      }
    }
    v6 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast(v14, 0LL, 0, -2147024809, 0x7EAu, 0LL);
    goto LABEL_11;
  }
  v18 = 1968;
LABEL_35:
  MilInstrumentationCheckHR_MaybeFailFast(v5, 0LL, 0, v4, v18, 0LL);
LABEL_11:
  v12 = v23;
  if ( v23 )
  {
    v23 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
  }
  return v6;
}
