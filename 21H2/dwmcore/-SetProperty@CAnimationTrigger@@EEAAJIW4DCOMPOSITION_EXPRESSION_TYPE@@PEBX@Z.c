/*
 * XREFs of ?SetProperty@CAnimationTrigger@@EEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x1801B6AE0
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18005D440 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?TransitionTrue@CAnimationTrigger@@AEAAXXZ @ 0x1801B6B54 (-TransitionTrue@CAnimationTrigger@@AEAAXXZ.c)
 */

__int64 __fastcall CAnimationTrigger::SetProperty(CAnimationTrigger *a1, int a2, int a3, _BYTE *a4)
{
  unsigned int v4; // ebx
  unsigned int v6; // [rsp+20h] [rbp-18h]

  v4 = 0;
  if ( a3 != 17 )
  {
    v6 = 65;
LABEL_5:
    v4 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast((__int64)a1, 0LL, 0, -2147024809, v6, 0LL);
    return v4;
  }
  if ( a2 )
  {
    v6 = 60;
    goto LABEL_5;
  }
  if ( *a4 != *((_BYTE *)a1 + 104) )
  {
    if ( *a4 )
    {
      *((_BYTE *)a1 + 104) = 1;
      CAnimationTrigger::TransitionTrue(a1);
    }
    else
    {
      *((_BYTE *)a1 + 104) = 0;
    }
  }
  return v4;
}
