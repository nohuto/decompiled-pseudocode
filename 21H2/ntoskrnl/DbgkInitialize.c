/*
 * XREFs of DbgkInitialize @ 0x140A6D4AC
 * Callers:
 *     InitBootProcessor @ 0x140A3AAF4 (InitBootProcessor.c)
 *     Phase1InitializationDiscard @ 0x140A3B6A4 (Phase1InitializationDiscard.c)
 * Callees:
 *     KeBugCheckEx @ 0x1403FDEF0 (KeBugCheckEx.c)
 *     DbgkpInitializePhase0 @ 0x140A6D4E0 (DbgkpInitializePhase0.c)
 *     DbgkpInitializePhase1 @ 0x140A6D628 (DbgkpInitializePhase1.c)
 */

__int64 DbgkInitialize()
{
  if ( !(_DWORD)InitializationPhase )
    return DbgkpInitializePhase0();
  if ( (_DWORD)InitializationPhase != 1 )
    KeBugCheckEx(0x33u, 3uLL, (unsigned int)InitializationPhase, 0LL, 0LL);
  return DbgkpInitializePhase1();
}
