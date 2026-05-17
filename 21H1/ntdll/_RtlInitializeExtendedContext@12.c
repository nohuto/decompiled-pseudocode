/*
 * XREFs of _RtlInitializeExtendedContext@12 @ 0x4B35BA20
 * Callers:
 *     <none>
 * Callees:
 *     _RtlInitializeExtendedContext2@20 @ 0x4B35B8A0 (_RtlInitializeExtendedContext2@20.c)
 *     _RtlpValidateContextFlags@8 @ 0x4B35C543 (_RtlpValidateContextFlags@8.c)
 */

int __fastcall RtlInitializeExtendedContext(int a1, int a2, int a3, int a4, _DWORD *a5)
{
  int result; // eax
  int v6; // eax
  unsigned int v7; // ecx
  int v8; // [esp+0h] [ebp-4h] BYREF

  v8 = a1;
  result = RtlpValidateContextFlags(a4, &v8);
  if ( result >= 0 )
  {
    v6 = 0;
    v7 = 0;
    if ( (v8 & 2) != 0 )
    {
      v6 = MEMORY[0x7FFE0708] | MEMORY[0x7FFE03D8];
      v7 = MEMORY[0x7FFE070C] | MEMORY[0x7FFE03DC];
    }
    return RtlInitializeExtendedContext2(a3, a4, a5, v6, v7);
  }
  return result;
}
