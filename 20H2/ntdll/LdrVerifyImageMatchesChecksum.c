/*
 * XREFs of LdrVerifyImageMatchesChecksum @ 0x1800CE7D0
 * Callers:
 *     <none>
 * Callees:
 *     LdrVerifyImageMatchesChecksumEx @ 0x18008AB90 (LdrVerifyImageMatchesChecksumEx.c)
 */

__int64 __fastcall LdrVerifyImageMatchesChecksum(__int64 a1, __int64 a2, __int64 a3, _WORD *a4)
{
  int v4; // eax
  __int64 result; // rax
  _QWORD v7[7]; // [rsp+20h] [rbp-48h] BYREF
  __int16 v8; // [rsp+58h] [rbp-10h]

  v4 = 0;
  v7[0] = 64LL;
  if ( a2 )
  {
    v4 = 1;
    v7[1] = a2;
    HIDWORD(v7[0]) = 1;
    v7[2] = a3;
  }
  if ( a4 )
    HIDWORD(v7[0]) = v4 | 4;
  result = LdrVerifyImageMatchesChecksumEx(a1, (__int64)v7);
  if ( (int)result >= 0 )
  {
    if ( a4 )
      *a4 = v8;
  }
  return result;
}
