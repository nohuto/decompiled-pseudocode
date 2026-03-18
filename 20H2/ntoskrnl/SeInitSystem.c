/*
 * XREFs of SeInitSystem @ 0x140A6553C
 * Callers:
 *     InitBootProcessor @ 0x140A3CF64 (InitBootProcessor.c)
 *     Phase1InitializationDiscard @ 0x140A3DB24 (Phase1InitializationDiscard.c)
 * Callees:
 *     KeBugCheckEx @ 0x1403FBCA0 (KeBugCheckEx.c)
 *     SepInitializationPhase1 @ 0x1407A88DC (SepInitializationPhase1.c)
 *     SepInitializationPhase0 @ 0x140A65570 (SepInitializationPhase0.c)
 */

char SeInitSystem()
{
  if ( !(_DWORD)InitializationPhase )
    return SepInitializationPhase0();
  if ( (_DWORD)InitializationPhase != 1 )
    KeBugCheckEx(0x33u, 0LL, (unsigned int)InitializationPhase, 0LL, 0LL);
  return SepInitializationPhase1();
}
