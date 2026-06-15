/*
 * XREFs of sub_1800059B0 @ 0x1800059B0
 * Callers:
 *     <none>
 * Callees:
 *     sub_18002D14C @ 0x18002D14C (sub_18002D14C.c)
 */

__int64 __fastcall sub_1800059B0(__int64 a1, int a2)
{
  __int64 result; // rax
  _QWORD v3[9]; // [rsp+20h] [rbp-48h] BYREF

  result = (unsigned int)(a2 - 1);
  if ( (unsigned int)result <= 1 )
  {
    v3[0] = off_18003E130;
    v3[7] = v3;
    return sub_18002D14C(v3);
  }
  return result;
}
