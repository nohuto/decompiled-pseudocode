/*
 * XREFs of VfCheckNxPoolType @ 0x14059ED90
 * Callers:
 *     <none>
 * Callees:
 *     VfCheckPoolType @ 0x1409CAD74 (VfCheckPoolType.c)
 */

__int64 VfCheckNxPoolType()
{
  __int64 result; // rax

  if ( ViVerifierEnabled )
    return VfCheckPoolType();
  return result;
}
