/*
 * XREFs of AstGetHashedBitNumbers @ 0x1406CB0F0
 * Callers:
 *     AstAddBloomFilter @ 0x1406CB09C (AstAddBloomFilter.c)
 * Callees:
 *     RtlHashBytes2 @ 0x1402AC180 (RtlHashBytes2.c)
 */

__int64 __fastcall AstGetHashedBitNumbers(unsigned int *a1, __int64 a2, const unsigned __int8 *a3)
{
  unsigned int v4; // edi
  unsigned int v5; // ebx
  unsigned int v6; // ecx
  __int64 result; // rax

  v4 = AstIoctlBloomFilter;
  v5 = a3[11]
     + 37
     * (a3[10]
      + 37
      * (a3[9]
       + 37
       * (a3[8]
        + 37
        * (a3[7]
         + 37
         * (a3[6]
          + 37 * (a3[5] + 37 * (a3[4] + 37 * (a3[3] + 37 * (a3[2] + 37 * (a3[1] + 37 * (*a3 + 37 * dword_140C46C30)))))))))));
  v6 = RtlHashBytes2(a3, 0xCuLL, (unsigned int)dword_140C46C30);
  *a1 = v5 % v4;
  a1[1] = HIWORD(v5) % v4;
  result = v6 / v4;
  a1[2] = v6 % v4;
  return result;
}
