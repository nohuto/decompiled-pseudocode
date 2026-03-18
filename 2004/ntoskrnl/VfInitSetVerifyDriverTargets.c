/*
 * XREFs of VfInitSetVerifyDriverTargets @ 0x140A90DCC
 * Callers:
 *     ViInitSystemPhase0 @ 0x140A6C258 (ViInitSystemPhase0.c)
 *     ViMakeVerifierSettings @ 0x140A910BC (ViMakeVerifierSettings.c)
 * Callees:
 *     memmove @ 0x140409FC0 (memmove.c)
 */

void *__fastcall VfInitSetVerifyDriverTargets(void *Src, unsigned int a2)
{
  int v2; // ebx
  void *result; // rax

  if ( a2 > 0x1800 )
  {
    word_140D5935E = 0;
    a2 = 6142;
  }
  v2 = a2;
  result = memmove(MmVerifyDriverBuffer, Src, a2);
  VfOptionFlags &= ~1u;
  MmVerifyDriverBufferLength = v2;
  return result;
}
