/*
 * XREFs of VfCheckNxPagePriority @ 0x14059ED50
 * Callers:
 *     <none>
 * Callees:
 *     VfCheckPagePriority @ 0x1409CAC24 (VfCheckPagePriority.c)
 */

__int64 VfCheckNxPagePriority()
{
  __int64 result; // rax

  if ( ViVerifierEnabled )
    return VfCheckPagePriority();
  return result;
}
