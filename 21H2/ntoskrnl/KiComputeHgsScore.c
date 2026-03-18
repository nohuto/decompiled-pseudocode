/*
 * XREFs of KiComputeHgsScore @ 0x140573A60
 * Callers:
 *     KiConfigureHeteroProcessorsTarget @ 0x140568D20 (KiConfigureHeteroProcessorsTarget.c)
 *     KeConfigureHeteroProcessors @ 0x14095FD08 (KeConfigureHeteroProcessors.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KiComputeHgsScore(unsigned __int8 a1, unsigned __int8 a2)
{
  if ( a2 )
    return (a1 << 8) / (unsigned int)a2;
  else
    return 256LL;
}
