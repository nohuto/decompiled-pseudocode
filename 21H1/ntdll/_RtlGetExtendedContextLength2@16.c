/*
 * XREFs of _RtlGetExtendedContextLength2@16 @ 0x4B35B780
 * Callers:
 *     _RtlGetExtendedContextLength@8 @ 0x4B35B830 (_RtlGetExtendedContextLength@8.c)
 * Callees:
 *     _RtlpGetEntireXStateAreaLength@8 @ 0x4B35C44C (_RtlpGetEntireXStateAreaLength@8.c)
 *     _RtlpGetLegacyContextLength@12 @ 0x4B35C4C3 (_RtlpGetLegacyContextLength@12.c)
 *     _RtlpValidateContextFlags@8 @ 0x4B35C543 (_RtlpValidateContextFlags@8.c)
 */

int __stdcall RtlGetExtendedContextLength2(int a1, _DWORD *a2, int a3, unsigned int a4)
{
  int result; // eax
  int v5; // edi
  int v6; // eax
  int v7; // edx
  int v8; // esi
  unsigned int v9; // eax
  _BYTE v10[4]; // [esp+0h] [ebp-Ch] BYREF
  int v11; // [esp+4h] [ebp-8h] BYREF
  int v12; // [esp+8h] [ebp-4h]

  v11 = 0;
  v12 = 0;
  result = RtlpValidateContextFlags(a1, v10);
  if ( result >= 0 )
  {
    RtlpGetLegacyContextLength(&v11);
    v5 = v11;
    v6 = v12 + 24;
    if ( (v10[0] & 2) != 0 )
    {
      v7 = a3;
      v8 = ~(v11 - 1) & (v6 + v11 - 1);
      if ( (MEMORY[0x7FFE03EC] & 2) != 0 )
      {
        v7 = (MEMORY[0x7FFE0708] | MEMORY[0x7FFE03D8]) & a3;
        v9 = (MEMORY[0x7FFE070C] | MEMORY[0x7FFE03DC] | 0x80000000) & a4;
      }
      else
      {
        v9 = a4;
      }
      v6 = v8 - v5 - 448 + RtlpGetEntireXStateAreaLength(v7, v9);
    }
    *a2 = v6 + v5 - 1;
    return 0;
  }
  return result;
}
