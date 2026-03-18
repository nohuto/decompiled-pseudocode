/*
 * XREFs of DbgkInitialize @ 0x140A69C20
 * Callers:
 *     InitBootProcessor @ 0x140A36F64 (InitBootProcessor.c)
 *     Phase1InitializationDiscard @ 0x140A37B24 (Phase1InitializationDiscard.c)
 * Callees:
 *     KeBugCheckEx @ 0x1403F70D0 (KeBugCheckEx.c)
 *     DbgkpInitializePhase0 @ 0x140A69C54 (DbgkpInitializePhase0.c)
 *     DbgkpInitializePhase1 @ 0x140A69D9C (DbgkpInitializePhase1.c)
 */

__int64 DbgkInitialize()
{
  if ( !(_DWORD)InitializationPhase )
    return DbgkpInitializePhase0();
  if ( (_DWORD)InitializationPhase != 1 )
    KeBugCheckEx(0x33u, 3uLL, (unsigned int)InitializationPhase, 0LL, 0LL);
  return DbgkpInitializePhase1();
}
