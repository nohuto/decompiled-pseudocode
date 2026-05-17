/*
 * XREFs of _RtlExtendedMagicDivide@20 @ 0x4B3083C0
 * Callers:
 *     _RtlpTimeToTimeFieldsNoLeapSeconds@8 @ 0x4B2DCDB3 (_RtlpTimeToTimeFieldsNoLeapSeconds@8.c)
 *     _RtlTimeToSecondsSince1970@8 @ 0x4B344EC0 (_RtlTimeToSecondsSince1970@8.c)
 *     _RtlTimeToSecondsSince1980@8 @ 0x4B344F10 (_RtlTimeToSecondsSince1980@8.c)
 *     TimeToDaysAndFraction @ 0x4B344F4F (TimeToDaysAndFraction.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __stdcall RtlExtendedMagicDivide(__int64 a1, __int64 a2, unsigned __int8 a3)
{
  int v3; // esi
  unsigned __int64 v4; // rax
  unsigned __int64 result; // rax

  v3 = HIDWORD(a1);
  if ( a1 < 0 )
    a1 = -a1;
  v4 = (((unsigned int)(HIDWORD(a1) * a2)
       + __PAIR64__(
           ((((unsigned int)a1 * (unsigned __int64)(unsigned int)a2) >> 32) + (unsigned int)(a1 * HIDWORD(a2))) >> 32,
           (a2 * (unsigned __int64)(unsigned int)a1) >> 32)) >> 32)
     + ((HIDWORD(a1) * (unsigned __int64)(unsigned int)a2) >> 32)
     + (((unsigned int)a1 * (unsigned __int64)HIDWORD(a2)) >> 32)
     + HIDWORD(a1) * (unsigned __int64)HIDWORD(a2);
  while ( a3 > 0x1Fu )
  {
    a3 -= 31;
    v4 >>= 31;
  }
  result = v4 >> (a3 & 0x1F);
  if ( v3 < 0 )
    return -(__int64)result;
  return result;
}
