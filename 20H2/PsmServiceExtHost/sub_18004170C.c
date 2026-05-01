/*
 * XREFs of sub_18004170C @ 0x18004170C
 * Callers:
 *     sub_180041808 @ 0x180041808 (sub_180041808.c)
 * Callees:
 *     sub_1800417A8 @ 0x1800417A8 (sub_1800417A8.c)
 */

__int64 __fastcall sub_18004170C(__int64 a1)
{
  __int64 v1; // rbx
  __int64 result; // rax
  _QWORD v4[5]; // [rsp+20h] [rbp-28h] BYREF

  v1 = a1 + 336;
  v4[0] = 1LL;
  v4[1] = sub_180081090;
  v4[2] = 0LL;
  result = Pdcv2ActivationClientRegister(100LL, v4, a1 + 352);
  if ( (int)result >= 0 )
  {
    result = TpAllocWork(v1 + 64, sub_1800826B0, v1, 0LL);
    if ( (int)result >= 0 )
      result = 0LL;
    if ( (int)result >= 0 )
    {
      result = sub_1800417A8(a1 + 432);
      if ( (int)result >= 0 )
        return 0LL;
    }
  }
  return result;
}
