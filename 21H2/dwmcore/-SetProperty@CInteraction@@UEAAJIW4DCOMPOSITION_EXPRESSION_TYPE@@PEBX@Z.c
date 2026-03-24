/*
 * XREFs of ?SetProperty@CInteraction@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x1801C7110
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18005D440 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?SetRailsEnabled_RenderThread@CInteraction@@AEAAJ_NW4RailsAxis@@@Z @ 0x1800D0498 (-SetRailsEnabled_RenderThread@CInteraction@@AEAAJ_NW4RailsAxis@@@Z.c)
 */

__int64 __fastcall CInteraction::SetProperty(__int64 a1, int a2, __int64 a3, char *a4)
{
  int v4; // edx
  unsigned int v5; // ebx
  unsigned int v6; // r8d

  v4 = a2 - 12;
  if ( !v4 )
  {
    v6 = 0;
    goto LABEL_6;
  }
  if ( v4 == 1 )
  {
    v6 = 1;
LABEL_6:
    CInteraction::SetRailsEnabled_RenderThread(a1 - 8, *a4, v6);
    return 0;
  }
  v5 = -2147024809;
  MilInstrumentationCheckHR_MaybeFailFast(a1, 0LL, 0, -2147024809, 0x26Fu, 0LL);
  return v5;
}
