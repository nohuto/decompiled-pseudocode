/*
 * XREFs of VfCheckNxPoolType @ 0x14059B2F0
 * Callers:
 *     <none>
 * Callees:
 *     VfCheckPoolType @ 0x1409C4D54 (VfCheckPoolType.c)
 */

__int64 VfCheckNxPoolType()
{
  __int64 result; // rax

  if ( ViVerifierEnabled )
    return VfCheckPoolType();
  return result;
}
