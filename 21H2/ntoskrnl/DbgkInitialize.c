/*
 * XREFs of DbgkInitialize @ 0x140B233CC
 * Callers:
 *     InitBootProcessor @ 0x140AFB264 (InitBootProcessor.c)
 *     Phase1InitializationDiscard @ 0x140AFBDF4 (Phase1InitializationDiscard.c)
 * Callees:
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     DbgkpInitializePhase0 @ 0x140B23400 (DbgkpInitializePhase0.c)
 *     DbgkpInitializePhase1 @ 0x140B23548 (DbgkpInitializePhase1.c)
 */

__int64 DbgkInitialize()
{
  if ( !(_DWORD)InitializationPhase )
    return DbgkpInitializePhase0();
  if ( (_DWORD)InitializationPhase != 1 )
    KeBugCheckEx(0x33u, 3uLL, (unsigned int)InitializationPhase, 0LL, 0LL);
  return DbgkpInitializePhase1();
}
