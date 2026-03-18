/*
 * XREFs of VerifierInitSystem @ 0x140A6BF94
 * Callers:
 *     InitBootProcessor @ 0x140A37A74 (InitBootProcessor.c)
 *     Phase1InitializationDiscard @ 0x140A382A8 (Phase1InitializationDiscard.c)
 * Callees:
 *     KeBugCheckEx @ 0x1403F5E40 (KeBugCheckEx.c)
 *     ViInitSystemPhase0 @ 0x140A6BFC8 (ViInitSystemPhase0.c)
 *     ViInitSystemPhase1 @ 0x140A6C29C (ViInitSystemPhase1.c)
 */

__int64 VerifierInitSystem()
{
  if ( !(_DWORD)InitializationPhase )
    return ViInitSystemPhase0();
  if ( (_DWORD)InitializationPhase != 1 )
    KeBugCheckEx(0x33u, 4uLL, (unsigned int)InitializationPhase, 0LL, 0LL);
  return ViInitSystemPhase1();
}
