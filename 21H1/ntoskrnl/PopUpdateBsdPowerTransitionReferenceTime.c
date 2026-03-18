/*
 * XREFs of PopUpdateBsdPowerTransitionReferenceTime @ 0x1408DCE14
 * Callers:
 *     PopBsdHandleRequest @ 0x1403F0DDC (PopBsdHandleRequest.c)
 * Callees:
 *     RtlComputeCrc32 @ 0x1402F5E90 (RtlComputeCrc32.c)
 */

__int64 PopUpdateBsdPowerTransitionReferenceTime()
{
  __int64 result; // rax

  *(_QWORD *)&xmmword_140C504D8 = MEMORY[0xFFFFF78000000014];
  result = RtlComputeCrc32(0, (char *)&xmmword_140C504D8, 8u);
  DWORD2(xmmword_140C504D8) = result;
  return result;
}
