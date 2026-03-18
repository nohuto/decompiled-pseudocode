/*
 * XREFs of VfCheckNxPagePriority @ 0x14059ABC0
 * Callers:
 *     <none>
 * Callees:
 *     VfCheckPagePriority @ 0x1409C4BF4 (VfCheckPagePriority.c)
 */

__int64 VfCheckNxPagePriority()
{
  __int64 result; // rax

  if ( ViVerifierEnabled )
    return VfCheckPagePriority();
  return result;
}
