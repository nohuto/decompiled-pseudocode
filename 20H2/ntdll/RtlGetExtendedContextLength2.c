/*
 * XREFs of RtlGetExtendedContextLength2 @ 0x180051DB0
 * Callers:
 *     RtlUnwindEx @ 0x180030600 (RtlUnwindEx.c)
 *     RtlUnwind @ 0x180050E10 (RtlUnwind.c)
 *     RtlRaiseException @ 0x180051070 (RtlRaiseException.c)
 *     RtlDispatchException @ 0x180051260 (RtlDispatchException.c)
 *     RtlpWalkFrameChain @ 0x1800516B0 (RtlpWalkFrameChain.c)
 *     RtlGetExtendedContextLength @ 0x180051C00 (RtlGetExtendedContextLength.c)
 * Callees:
 *     RtlpGetLegacyContextLength @ 0x180051F94 (RtlpGetLegacyContextLength.c)
 *     RtlpValidateContextFlags @ 0x18005212C (RtlpValidateContextFlags.c)
 *     RtlpGetEntireXStateAreaLength @ 0x1800521F4 (RtlpGetEntireXStateAreaLength.c)
 */

__int64 __fastcall RtlGetExtendedContextLength2(__int64 a1, _DWORD *a2)
{
  __int64 result; // rax
  unsigned int v4; // r11d
  __int64 v5; // r10
  int v6; // ebx
  int v7; // ecx
  int EntireXStateAreaLength; // eax
  int v9; // r11d
  int v10; // [rsp+20h] [rbp-18h] BYREF
  _BYTE v11[20]; // [rsp+24h] [rbp-14h] BYREF
  int v12; // [rsp+58h] [rbp+20h] BYREF

  v10 = 0;
  v12 = 0;
  result = RtlpValidateContextFlags(a1, v11);
  if ( (int)result >= 0 )
  {
    RtlpGetLegacyContextLength(v4, &v12, &v10);
    v6 = v10;
    v7 = v12 + 24;
    if ( (v11[0] & 2) != 0 )
    {
      if ( (MEMORY[0x7FFE03EC] & 2) != 0 )
        v5 &= MEMORY[0x7FFE0708] | MEMORY[0x7FFE03D8] | 0x8000000000000000uLL;
      EntireXStateAreaLength = RtlpGetEntireXStateAreaLength(v5);
      v7 = EntireXStateAreaLength + v9 - v6 - 448;
    }
    *a2 = v7 + v6 - 1;
    return 0LL;
  }
  return result;
}
