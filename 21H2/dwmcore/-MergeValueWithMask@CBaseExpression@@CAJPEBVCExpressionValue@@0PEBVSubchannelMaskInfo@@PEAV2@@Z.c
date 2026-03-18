/*
 * XREFs of ?MergeValueWithMask@CBaseExpression@@CAJPEBVCExpressionValue@@0PEBVSubchannelMaskInfo@@PEAV2@@Z @ 0x18011456C
 * Callers:
 *     ?NotifyAnimationStateChanged@CBaseExpression@@AEAAJW4AnimationEventType@@@Z @ 0x1800422CC (-NotifyAnimationStateChanged@CBaseExpression@@AEAAJW4AnimationEventType@@@Z.c)
 * Callees:
 *     ?CopyFrom@CExpressionValue@@QEAAXAEBV1@@Z @ 0x18004F220 (-CopyFrom@CExpressionValue@@QEAAXAEBV1@@Z.c)
 *     ?GetExpressionTypeChannelCount@@YAIW4DCOMPOSITION_EXPRESSION_TYPE@@@Z @ 0x1800525D0 (-GetExpressionTypeChannelCount@@YAIW4DCOMPOSITION_EXPRESSION_TYPE@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?MaskAtIndex@SubchannelMaskInfo@@QEBAII@Z @ 0x180115EB8 (-MaskAtIndex@SubchannelMaskInfo@@QEBAII@Z.c)
 */

__int64 __fastcall CBaseExpression::MergeValueWithMask(
        __int64 a1,
        const struct CExpressionValue *a2,
        const struct SubchannelMaskInfo *a3,
        struct CExpressionValue *a4)
{
  int v5; // r11d
  int *v8; // rdi
  int v9; // r9d
  unsigned __int64 v10; // r11
  unsigned int v11; // edx
  unsigned int ExpressionTypeChannelCount; // eax
  __int64 v13; // rdx
  __int64 v14; // r10
  int v15; // eax
  unsigned int v16; // ebx
  unsigned int v18; // [rsp+20h] [rbp-18h]

  v5 = *(_DWORD *)(a1 + 72);
  v8 = (int *)a1;
  if ( *(_DWORD *)a3 == 1 )
  {
    v10 = (unsigned int)(v5 - 18);
    if ( (unsigned int)v10 > 0x33 || (a1 = 0x8000400020001LL, !_bittest64(&a1, v10)) )
    {
      v18 = 2096;
      goto LABEL_16;
    }
  }
  else
  {
    if ( *(_DWORD *)a3 != 2 )
    {
      v9 = -2147467259;
      v18 = 2115;
LABEL_17:
      v16 = v9;
      MilInstrumentationCheckHR_MaybeFailFast(a1, 0LL, 0LL, v9, v18);
      return v16;
    }
    if ( v5 != 104 && v5 != 265 )
    {
      v18 = 2105;
LABEL_16:
      v9 = -2147024809;
      goto LABEL_17;
    }
  }
  CExpressionValue::CopyFrom(a4, (const struct CExpressionValue *)v8);
  v11 = 0;
  if ( *((_BYTE *)a3 + 4) )
  {
    while ( 1 )
    {
      SubchannelMaskInfo::MaskAtIndex(a3, v11);
      ExpressionTypeChannelCount = GetExpressionTypeChannelCount(v8[18]);
      if ( (unsigned int)v14 >= ExpressionTypeChannelCount || (unsigned int)v14 >= 0x10 )
        break;
      v15 = *((_DWORD *)a2 + v13);
      v11 = v13 + 1;
      *((_DWORD *)a4 + v14) = v15;
      if ( v11 >= *((unsigned __int8 *)a3 + 4) )
        return 0;
    }
    v9 = -2147467259;
    v18 = 2154;
    goto LABEL_17;
  }
  return 0;
}
