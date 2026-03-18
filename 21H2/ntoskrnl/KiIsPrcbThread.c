/*
 * XREFs of KiIsPrcbThread @ 0x1402916EC
 * Callers:
 *     KiGroupSchedulingGenerationEnd @ 0x140291380 (KiGroupSchedulingGenerationEnd.c)
 *     KiUpdateThreadHgsFeedback @ 0x140575600 (KiUpdateThreadHgsFeedback.c)
 *     KeTransitionProcessorParkState @ 0x14057C888 (KeTransitionProcessorParkState.c)
 * Callees:
 *     <none>
 */

char __fastcall KiIsPrcbThread(__int64 a1)
{
  char result; // al

  result = 0;
  if ( a1 )
  {
    if ( *(_UNKNOWN **)(a1 + 544) == &KiInitialProcess )
      return 1;
  }
  return result;
}
