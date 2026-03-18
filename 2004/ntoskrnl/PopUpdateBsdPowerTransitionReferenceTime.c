/*
 * XREFs of PopUpdateBsdPowerTransitionReferenceTime @ 0x1408DE184
 * Callers:
 *     PopBsdHandleRequest @ 0x1403F21A4 (PopBsdHandleRequest.c)
 * Callees:
 *     RtlComputeCrc32 @ 0x140332D30 (RtlComputeCrc32.c)
 */

__int64 PopUpdateBsdPowerTransitionReferenceTime()
{
  __int64 result; // rax

  *(_QWORD *)&xmmword_140C50398 = MEMORY[0xFFFFF78000000014];
  result = RtlComputeCrc32(0, (char *)&xmmword_140C50398, 8u);
  DWORD2(xmmword_140C50398) = result;
  return result;
}
