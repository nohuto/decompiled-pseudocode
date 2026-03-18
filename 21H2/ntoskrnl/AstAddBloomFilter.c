/*
 * XREFs of AstAddBloomFilter @ 0x1406CB09C
 * Callers:
 *     AstLogIoctl @ 0x1407305B0 (AstLogIoctl.c)
 * Callees:
 *     AstGetHashedBitNumbers @ 0x1406CB0F0 (AstGetHashedBitNumbers.c)
 */

__int64 __fastcall AstAddBloomFilter(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  __int64 v3; // [rsp+20h] [rbp-18h] BYREF
  unsigned int v4; // [rsp+28h] [rbp-10h]

  v3 = 0LL;
  v4 = 0;
  AstGetHashedBitNumbers(&v3, a2, a2);
  _bittestandset((signed __int32 *)qword_140C46C28, v3);
  _bittestandset((signed __int32 *)qword_140C46C28, HIDWORD(v3));
  result = v4;
  _bittestandset((signed __int32 *)qword_140C46C28, v4);
  return result;
}
