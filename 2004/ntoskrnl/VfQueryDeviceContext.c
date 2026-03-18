/*
 * XREFs of VfQueryDeviceContext @ 0x14059B450
 * Callers:
 *     <none>
 * Callees:
 *     ViIsContextIdValid @ 0x1409C5524 (ViIsContextIdValid.c)
 *     ViQueryObjectContext @ 0x1409C5594 (ViQueryObjectContext.c)
 */

__int64 __fastcall VfQueryDeviceContext(__int64 a1, __int64 a2)
{
  unsigned int v2; // edx
  __int64 v3; // r9

  if ( ViVerifierEnabled && (unsigned __int8)ViIsContextIdValid(0LL, a2) )
    return ViQueryObjectContext(v3, 0LL, v2);
  else
    return 0LL;
}
