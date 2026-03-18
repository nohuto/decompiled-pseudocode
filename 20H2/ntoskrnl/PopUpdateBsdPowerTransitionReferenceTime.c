/*
 * XREFs of PopUpdateBsdPowerTransitionReferenceTime @ 0x1408E3FC4
 * Callers:
 *     PopBsdHandleRequest @ 0x1403F6650 (PopBsdHandleRequest.c)
 * Callees:
 *     RtlComputeCrc32 @ 0x140305E80 (RtlComputeCrc32.c)
 */

__int64 PopUpdateBsdPowerTransitionReferenceTime()
{
  __int64 result; // rax

  *(_QWORD *)&xmmword_140C50418 = MEMORY[0xFFFFF78000000014];
  result = RtlComputeCrc32(0, (char *)&xmmword_140C50418, 8u);
  DWORD2(xmmword_140C50418) = result;
  return result;
}
