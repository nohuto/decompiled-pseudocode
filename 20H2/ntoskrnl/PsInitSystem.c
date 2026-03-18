/*
 * XREFs of PsInitSystem @ 0x140A4ABB8
 * Callers:
 *     InitBootProcessor @ 0x140A3CF64 (InitBootProcessor.c)
 *     Phase1InitializationDiscard @ 0x140A3DB24 (Phase1InitializationDiscard.c)
 *     Phase1InitializationIoReady @ 0x140A4AA48 (Phase1InitializationIoReady.c)
 * Callees:
 *     KeBugCheckEx @ 0x1403FBCA0 (KeBugCheckEx.c)
 *     PspInitPhase0 @ 0x140A400E8 (PspInitPhase0.c)
 *     PspInitPhase1 @ 0x140A654A0 (PspInitPhase1.c)
 *     PspInitPhase2 @ 0x140A6DE2C (PspInitPhase2.c)
 *     PspInitPhase3 @ 0x140A77164 (PspInitPhase3.c)
 */

char __fastcall PsInitSystem(int a1, void *a2)
{
  int v2; // ecx
  int v3; // ecx

  if ( !a1 )
    return PspInitPhase0(a2);
  v2 = a1 - 1;
  if ( !v2 )
    return PspInitPhase1();
  v3 = v2 - 1;
  if ( !v3 )
    return PspInitPhase2();
  if ( v3 != 1 )
    KeBugCheckEx(0x33u, 1uLL, (unsigned int)InitializationPhase, 0LL, 0LL);
  return PspInitPhase3();
}
