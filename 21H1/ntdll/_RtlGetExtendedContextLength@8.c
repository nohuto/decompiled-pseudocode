/*
 * XREFs of _RtlGetExtendedContextLength@8 @ 0x4B35B830
 * Callers:
 *     _PsspCaptureThreadInformation@16 @ 0x4B388568 (_PsspCaptureThreadInformation@16.c)
 * Callees:
 *     _RtlGetExtendedContextLength2@16 @ 0x4B35B780 (_RtlGetExtendedContextLength2@16.c)
 *     _RtlpValidateContextFlags@8 @ 0x4B35C543 (_RtlpValidateContextFlags@8.c)
 */

int __fastcall RtlGetExtendedContextLength(int a1, int a2, int a3, _DWORD *a4)
{
  int result; // eax
  int v5; // eax
  unsigned int v6; // ecx
  int v7; // [esp+0h] [ebp-4h] BYREF

  v7 = a1;
  result = RtlpValidateContextFlags(a3, &v7);
  if ( result >= 0 )
  {
    v5 = 0;
    v6 = 0;
    if ( (v7 & 2) != 0 )
    {
      v5 = MEMORY[0x7FFE0708] | MEMORY[0x7FFE03D8];
      v6 = MEMORY[0x7FFE070C] | MEMORY[0x7FFE03DC];
    }
    return RtlGetExtendedContextLength2(a3, a4, v5, v6);
  }
  return result;
}
