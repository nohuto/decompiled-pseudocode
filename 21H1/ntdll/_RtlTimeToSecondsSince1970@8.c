/*
 * XREFs of _RtlTimeToSecondsSince1970@8 @ 0x4B344EC0
 * Callers:
 *     <none>
 * Callees:
 *     _RtlExtendedMagicDivide@20 @ 0x4B3083C0 (_RtlExtendedMagicDivide@20.c)
 */

BOOLEAN __stdcall RtlTimeToSecondsSince1970(PLARGE_INTEGER Time, PULONG ElapsedSeconds)
{
  unsigned __int64 v2; // kr00_8

  v2 = RtlExtendedMagicDivide(Time->QuadPart, (unsigned int)Magic10000000 | 0xD6BF94D500000000uLL, 0x17u)
     - ((unsigned int)SecondsToStartOf1970 | 0x200000000LL);
  if ( HIDWORD(v2) )
    return 0;
  *ElapsedSeconds = v2;
  return 1;
}
