/*
 * XREFs of RtlGetExtendedContextLength2 @ 0x180051D60
 * Callers:
 *     RtlUnwindEx @ 0x180030600 (RtlUnwindEx.c)
 *     RtlUnwind @ 0x180050DC0 (RtlUnwind.c)
 *     RtlRaiseException @ 0x180051020 (RtlRaiseException.c)
 *     RtlDispatchException @ 0x180051210 (RtlDispatchException.c)
 *     RtlpWalkFrameChain @ 0x180051660 (RtlpWalkFrameChain.c)
 *     RtlGetExtendedContextLength @ 0x180051BB0 (RtlGetExtendedContextLength.c)
 * Callees:
 *     RtlpGetLegacyContextLength @ 0x180051F44 (RtlpGetLegacyContextLength.c)
 *     RtlpValidateContextFlags @ 0x1800520DC (RtlpValidateContextFlags.c)
 *     RtlpGetEntireXStateAreaLength @ 0x1800521A4 (RtlpGetEntireXStateAreaLength.c)
 */

NTSTATUS __cdecl RtlGetExtendedContextLength2(
        ULONG ContextFlags,
        PULONG ContextLength,
        ULONG64 EnabledExtendedFeatures)
{
  NTSTATUS result; // eax
  unsigned int v5; // r11d
  __int64 v6; // r10
  int v7; // ebx
  int v8; // ecx
  int EntireXStateAreaLength; // eax
  int v10; // r11d
  int v11; // [rsp+20h] [rbp-18h] BYREF
  _BYTE v12[20]; // [rsp+24h] [rbp-14h] BYREF
  int v13; // [rsp+58h] [rbp+20h] BYREF

  v11 = 0;
  v13 = 0;
  result = RtlpValidateContextFlags(ContextFlags, v12);
  if ( result >= 0 )
  {
    RtlpGetLegacyContextLength(v5, &v13, &v11);
    v7 = v11;
    v8 = v13 + 24;
    if ( (v12[0] & 2) != 0 )
    {
      if ( (MEMORY[0x7FFE03EC] & 2) != 0 )
        v6 &= MEMORY[0x7FFE0708] | MEMORY[0x7FFE03D8] | 0x8000000000000000uLL;
      EntireXStateAreaLength = RtlpGetEntireXStateAreaLength(v6);
      v8 = EntireXStateAreaLength + v10 - v7 - 448;
    }
    *ContextLength = v8 + v7 - 1;
    return 0;
  }
  return result;
}
