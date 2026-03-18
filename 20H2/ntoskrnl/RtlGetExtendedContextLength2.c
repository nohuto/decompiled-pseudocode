/*
 * XREFs of RtlGetExtendedContextLength2 @ 0x1402E6680
 * Callers:
 *     RtlRaiseException @ 0x1402E5480 (RtlRaiseException.c)
 *     RtlDispatchException @ 0x1402E5630 (RtlDispatchException.c)
 *     RtlUnwindEx @ 0x1402E5AF0 (RtlUnwindEx.c)
 *     RtlGetExtendedContextLength @ 0x1402E6530 (RtlGetExtendedContextLength.c)
 *     KiDispatchException @ 0x1402E7710 (KiDispatchException.c)
 *     RtlUnwind @ 0x14032EAB0 (RtlUnwind.c)
 *     NtCreateUserProcess @ 0x140690C20 (NtCreateUserProcess.c)
 *     NtCreateThreadEx @ 0x140692890 (NtCreateThreadEx.c)
 * Callees:
 *     RtlpGetLegacyContextLength @ 0x1402E6730 (RtlpGetLegacyContextLength.c)
 *     RtlpValidateContextFlags @ 0x1402E6DF0 (RtlpValidateContextFlags.c)
 *     RtlpGetEntireXStateAreaLength @ 0x140325500 (RtlpGetEntireXStateAreaLength.c)
 */

__int64 __fastcall RtlGetExtendedContextLength2(__int64 a1, _DWORD *a2, __int64 a3)
{
  unsigned int v5; // ebx
  __int64 result; // rax
  int v7; // edi
  int v8; // eax
  int v9; // [rsp+20h] [rbp-18h] BYREF
  _DWORD v10[5]; // [rsp+24h] [rbp-14h] BYREF
  int v11; // [rsp+58h] [rbp+20h] BYREF

  v10[0] = 0;
  v9 = 0;
  v11 = 0;
  v5 = a1;
  result = RtlpValidateContextFlags(a1, v10);
  if ( (int)result >= 0 )
  {
    RtlpGetLegacyContextLength(v5, &v11, &v9);
    v7 = v9;
    v8 = v11 + 24;
    if ( (v10[0] & 2) != 0 )
    {
      if ( (MEMORY[0xFFFFF780000003EC] & 2) != 0 )
        a3 &= MEMORY[0xFFFFF780000003D8] | MEMORY[0xFFFFF78000000708] | 0x8000000000000000uLL;
      v8 = (~(v7 - 1) & (v8 + v7 - 1)) - v7 - 448 + RtlpGetEntireXStateAreaLength(a3);
    }
    *a2 = v7 + v8 - 1;
    return 0LL;
  }
  return result;
}
