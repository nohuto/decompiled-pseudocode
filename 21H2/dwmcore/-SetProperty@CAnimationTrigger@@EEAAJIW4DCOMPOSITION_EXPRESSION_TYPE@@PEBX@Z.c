/*
 * XREFs of ?SetProperty@CAnimationTrigger@@EEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x180209CD0
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?TransitionTrue@CAnimationTrigger@@AEAAXXZ @ 0x180209D44 (-TransitionTrue@CAnimationTrigger@@AEAAXXZ.c)
 */

__int64 __fastcall CAnimationTrigger::SetProperty(CAnimationTrigger *a1, int a2, int a3, _BYTE *a4)
{
  unsigned int v4; // ebx
  unsigned int v6; // [rsp+20h] [rbp-18h]

  v4 = 0;
  if ( a3 != 17 )
  {
    v6 = 58;
LABEL_5:
    v4 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast((__int64)a1, 0LL, 0LL, -2147024809, v6);
    return v4;
  }
  if ( a2 )
  {
    v6 = 53;
    goto LABEL_5;
  }
  if ( *a4 != *((_BYTE *)a1 + 112) )
  {
    if ( *a4 )
    {
      *((_BYTE *)a1 + 112) = 1;
      CAnimationTrigger::TransitionTrue(a1);
    }
    else
    {
      *((_BYTE *)a1 + 112) = 0;
    }
  }
  return v4;
}
