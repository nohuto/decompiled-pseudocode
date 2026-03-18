/*
 * XREFs of VfSetVerifierRunningMode @ 0x1409D67F0
 * Callers:
 *     VfSetVerifierInformationEx @ 0x1409E9CD4 (VfSetVerifierInformationEx.c)
 *     ViInitSystemPhase0 @ 0x140A6C258 (ViInitSystemPhase0.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall VfSetVerifierRunningMode(int a1)
{
  __int64 result; // rax

  if ( (unsigned int)(a1 - 1) > 3 )
    return 3221225485LL;
  VfVerifyMode = a1;
  result = 0LL;
  dword_140C2A65C = a1;
  return result;
}
