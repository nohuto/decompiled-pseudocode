/*
 * XREFs of DbgkInitialize @ 0x140A6E4AC
 * Callers:
 *     InitBootProcessor @ 0x140A3BAF4 (InitBootProcessor.c)
 *     Phase1InitializationDiscard @ 0x140A3C6A4 (Phase1InitializationDiscard.c)
 * Callees:
 *     KeBugCheckEx @ 0x1403FE0D0 (KeBugCheckEx.c)
 *     DbgkpInitializePhase0 @ 0x140A6E4E0 (DbgkpInitializePhase0.c)
 *     DbgkpInitializePhase1 @ 0x140A6E628 (DbgkpInitializePhase1.c)
 */

__int64 DbgkInitialize()
{
  if ( !(_DWORD)InitializationPhase )
    return DbgkpInitializePhase0();
  if ( (_DWORD)InitializationPhase != 1 )
    KeBugCheckEx(0x33u, 3uLL, (unsigned int)InitializationPhase, 0LL, 0LL);
  return DbgkpInitializePhase1();
}
