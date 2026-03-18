/*
 * XREFs of VerifierInitSystem @ 0x140A6C224
 * Callers:
 *     InitBootProcessor @ 0x140A36F64 (InitBootProcessor.c)
 *     Phase1InitializationDiscard @ 0x140A37B24 (Phase1InitializationDiscard.c)
 * Callees:
 *     KeBugCheckEx @ 0x1403F70D0 (KeBugCheckEx.c)
 *     ViInitSystemPhase0 @ 0x140A6C258 (ViInitSystemPhase0.c)
 *     ViInitSystemPhase1 @ 0x140A6C52C (ViInitSystemPhase1.c)
 */

__int64 VerifierInitSystem()
{
  if ( !(_DWORD)InitializationPhase )
    return ViInitSystemPhase0();
  if ( (_DWORD)InitializationPhase != 1 )
    KeBugCheckEx(0x33u, 4uLL, (unsigned int)InitializationPhase, 0LL, 0LL);
  return ViInitSystemPhase1();
}
