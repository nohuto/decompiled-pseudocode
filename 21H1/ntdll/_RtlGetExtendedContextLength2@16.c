/*
 * XREFs of _RtlGetExtendedContextLength2@16 @ 0x4B35B780
 * Callers:
 *     _RtlGetExtendedContextLength@8 @ 0x4B35B830 (_RtlGetExtendedContextLength@8.c)
 * Callees:
 *     _RtlpGetEntireXStateAreaLength@8 @ 0x4B35C44C (_RtlpGetEntireXStateAreaLength@8.c)
 *     _RtlpGetLegacyContextLength@12 @ 0x4B35C4C3 (_RtlpGetLegacyContextLength@12.c)
 *     _RtlpValidateContextFlags@8 @ 0x4B35C543 (_RtlpValidateContextFlags@8.c)
 */

NTSTATUS __cdecl RtlGetExtendedContextLength2(
        ULONG ContextFlags,
        PULONG ContextLength,
        ULONG64 EnabledExtendedFeatures)
{
  NTSTATUS result; // eax
  int v4; // edi
  int v5; // eax
  int v6; // edx
  int v7; // esi
  unsigned int v8; // eax
  _BYTE v9[4]; // [esp+0h] [ebp-Ch] BYREF
  int v10; // [esp+4h] [ebp-8h] BYREF
  int v11; // [esp+8h] [ebp-4h]

  v10 = 0;
  v11 = 0;
  result = RtlpValidateContextFlags(ContextFlags, v9);
  if ( result >= 0 )
  {
    RtlpGetLegacyContextLength(&v10);
    v4 = v10;
    v5 = v11 + 24;
    if ( (v9[0] & 2) != 0 )
    {
      v6 = EnabledExtendedFeatures;
      v7 = ~(v10 - 1) & (v5 + v10 - 1);
      if ( (MEMORY[0x7FFE03EC] & 2) != 0 )
      {
        v6 = (MEMORY[0x7FFE0708] | MEMORY[0x7FFE03D8]) & EnabledExtendedFeatures;
        v8 = (MEMORY[0x7FFE070C] | MEMORY[0x7FFE03DC] | 0x80000000) & HIDWORD(EnabledExtendedFeatures);
      }
      else
      {
        v8 = HIDWORD(EnabledExtendedFeatures);
      }
      v5 = v7 - v4 - 448 + RtlpGetEntireXStateAreaLength(v6, v8);
    }
    *ContextLength = v5 + v4 - 1;
    return 0;
  }
  return result;
}
