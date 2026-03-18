/*
 * XREFs of VfQueryThreadContext @ 0x14059B510
 * Callers:
 *     <none>
 * Callees:
 *     ViIsContextIdValid @ 0x1409C5524 (ViIsContextIdValid.c)
 *     ViQueryObjectContext @ 0x1409C5594 (ViQueryObjectContext.c)
 */

__int64 __fastcall VfQueryThreadContext(__int64 a1, __int64 a2)
{
  unsigned int v2; // edx
  __int64 v3; // r9
  unsigned int v4; // r10d

  if ( ViVerifierEnabled && (unsigned __int8)ViIsContextIdValid(3LL, a2) )
    return ViQueryObjectContext(v3, v4, v2);
  else
    return 0LL;
}
