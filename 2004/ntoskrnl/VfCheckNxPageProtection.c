/*
 * XREFs of VfCheckNxPageProtection @ 0x14059B2D0
 * Callers:
 *     <none>
 * Callees:
 *     VfCheckPageProtection @ 0x1409C4CAC (VfCheckPageProtection.c)
 */

__int64 __fastcall VfCheckNxPageProtection(int a1, int a2)
{
  __int64 result; // rax

  if ( ViVerifierEnabled )
    return VfCheckPageProtection(a1, a2);
  return result;
}
