/*
 * XREFs of sub_18000F990 @ 0x18000F990
 * Callers:
 *     sub_18000FAA0 @ 0x18000FAA0 (sub_18000FAA0.c)
 *     sub_180027DE0 @ 0x180027DE0 (sub_180027DE0.c)
 *     sub_18003489C @ 0x18003489C (sub_18003489C.c)
 *     sub_18003504C @ 0x18003504C (sub_18003504C.c)
 * Callees:
 *     sub_180078DEC @ 0x180078DEC (sub_180078DEC.c)
 */

__int64 __fastcall sub_18000F990(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        int a5,
        __int64 a6,
        __int64 a7,
        __int64 a8)
{
  __int64 result; // rax

  if ( (unsigned int)dword_1800B3218 > 4 && (byte_1800B3228 & 8) != 0 )
  {
    result = qword_1800B3230 & 8;
    if ( result == qword_1800B3230 )
      return sub_180078DEC(a8, &unk_18009FC59);
  }
  return result;
}
