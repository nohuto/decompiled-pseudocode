/*
 * XREFs of ?EnsureCacheBounds@CExpression@@AEAAJI_K@Z @ 0x18005C408
 * Callers:
 *     ?ReadValueFromCache@CExpression@@AEAAJIPEAVCExpressionValue@@PEA_N@Z @ 0x1800596E4 (-ReadValueFromCache@CExpression@@AEAAJIPEAVCExpressionValue@@PEA_N@Z.c)
 *     ?StoreValueToCache@CExpression@@AEAAJIPEAVCExpressionValue@@@Z @ 0x18005C100 (-StoreValueToCache@CExpression@@AEAAJIPEAVCExpressionValue@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18005D440 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall CExpression::EnsureCacheBounds(CExpression *this, unsigned int a2, unsigned __int64 a3)
{
  unsigned int v3; // ebx
  int v4; // r9d
  unsigned int v6; // [rsp+20h] [rbp-18h]

  if ( !*((_QWORD *)this + 42) )
  {
    v3 = -2147418113;
    v6 = 521;
LABEL_3:
    v4 = v3;
LABEL_12:
    MilInstrumentationCheckHR_MaybeFailFast((unsigned int)this, 0LL, 0, v4, v6, 0LL);
    return v3;
  }
  if ( a3 > 0xFFFFFFFF )
  {
    v6 = 524;
    goto LABEL_11;
  }
  if ( (unsigned int)a3 + a2 < a2 )
  {
    v6 = 526;
LABEL_11:
    v4 = -2147024362;
    v3 = -2147024362;
    goto LABEL_12;
  }
  if ( (unsigned int)a3 + a2 > *((_DWORD *)this + 86) )
  {
    v3 = -2147483637;
    v6 = 531;
    goto LABEL_3;
  }
  return 0;
}
