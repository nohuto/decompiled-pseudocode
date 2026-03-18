/*
 * XREFs of DbgkInitialize @ 0x140A7052C
 * Callers:
 *     InitBootProcessor @ 0x140A3CF64 (InitBootProcessor.c)
 *     Phase1InitializationDiscard @ 0x140A3DB24 (Phase1InitializationDiscard.c)
 * Callees:
 *     KeBugCheckEx @ 0x1403FBCA0 (KeBugCheckEx.c)
 *     DbgkpInitializePhase0 @ 0x140A70560 (DbgkpInitializePhase0.c)
 *     DbgkpInitializePhase1 @ 0x140A706A8 (DbgkpInitializePhase1.c)
 */

__int64 DbgkInitialize()
{
  if ( !(_DWORD)InitializationPhase )
    return DbgkpInitializePhase0();
  if ( (_DWORD)InitializationPhase != 1 )
    KeBugCheckEx(0x33u, 3uLL, (unsigned int)InitializationPhase, 0LL, 0LL);
  return DbgkpInitializePhase1();
}
