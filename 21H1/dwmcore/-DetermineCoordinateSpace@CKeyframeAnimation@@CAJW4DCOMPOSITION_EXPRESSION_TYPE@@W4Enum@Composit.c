/*
 * XREFs of ?DetermineCoordinateSpace@CKeyframeAnimation@@CAJW4DCOMPOSITION_EXPRESSION_TYPE@@W4Enum@CompositionColorSpace@@PEAW4KeyframeAnimationCoordinateSpace@@@Z @ 0x180099FA4
 * Callers:
 *     ?SetKeyFrameData@CKeyframeAnimation@@AEAAJW4Enum@KeyframeAnimationDelayBehavior@@W42CompositionColorSpace@@PEAUKeyframeData@@@Z @ 0x180098078 (-SetKeyFrameData@CKeyframeAnimation@@AEAAJW4Enum@KeyframeAnimationDelayBehavior@@W42CompositionC.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18002E8BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall CKeyframeAnimation::DetermineCoordinateSpace(int a1, int a2, int *a3)
{
  int v3; // ecx
  int v4; // eax
  int v5; // ecx
  int v6; // ecx
  unsigned int v7; // ebx
  int v9; // ecx
  int v10; // ecx
  int v11; // ecx
  __int64 v12; // rcx
  unsigned int v13; // [rsp+20h] [rbp-18h]

  v3 = a1 - 11;
  if ( !v3 )
    goto LABEL_4;
  v4 = 6;
  v5 = v3 - 6;
  if ( !v5 )
    goto LABEL_5;
  v6 = v5 - 1;
  if ( !v6 || (v9 = v6 - 17) == 0 || (v10 = v9 - 17) == 0 || (v11 = v10 - 17) == 0 )
  {
LABEL_4:
    v4 = 0;
    goto LABEL_5;
  }
  v12 = (unsigned int)(v11 - 1);
  if ( (_DWORD)v12 )
  {
    if ( (_DWORD)v12 == 1 )
    {
      v4 = 1;
      goto LABEL_5;
    }
    v13 = 1382;
LABEL_21:
    v7 = -2003303421;
    MilInstrumentationCheckHR_MaybeFailFast(v12, 0LL, 0, -2003303421, v13, 0LL);
    return v7;
  }
  if ( a2 < 0 )
    goto LABEL_20;
  v4 = 2;
  if ( a2 > 1 )
  {
    if ( a2 == 2 )
    {
      v4 = 4;
      goto LABEL_5;
    }
    v4 = 3;
    if ( a2 == 3 )
    {
      v4 = 5;
      goto LABEL_5;
    }
    if ( a2 != 4 )
    {
LABEL_20:
      v13 = 1372;
      goto LABEL_21;
    }
  }
LABEL_5:
  *a3 = v4;
  return 0;
}
