/*
 * XREFs of VfInitSetVerifyDriverTargets @ 0x140A96A30
 * Callers:
 *     ViInitSystemPhase0 @ 0x140A72B38 (ViInitSystemPhase0.c)
 *     ViMakeVerifierSettings @ 0x140A96D20 (ViMakeVerifierSettings.c)
 * Callees:
 *     memmove @ 0x140411040 (memmove.c)
 */

void *__fastcall VfInitSetVerifyDriverTargets(void *Src, unsigned int a2)
{
  int v2; // ebx
  void *result; // rax

  if ( a2 > 0x1800 )
  {
    word_140D5B35E = 0;
    a2 = 6142;
  }
  v2 = a2;
  result = memmove(MmVerifyDriverBuffer, Src, a2);
  VfOptionFlags &= ~1u;
  MmVerifyDriverBufferLength = v2;
  return result;
}
