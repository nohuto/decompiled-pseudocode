/*
 * XREFs of _RtlInitializeExtendedContext@12 @ 0x4B35BA20
 * Callers:
 *     <none>
 * Callees:
 *     _RtlInitializeExtendedContext2@20 @ 0x4B35B8A0 (_RtlInitializeExtendedContext2@20.c)
 *     _RtlpValidateContextFlags@8 @ 0x4B35C543 (_RtlpValidateContextFlags@8.c)
 */

NTSTATUS __cdecl RtlInitializeExtendedContext(PCONTEXT Context, ULONG ContextFlags, PCONTEXT_EX *ContextEx)
{
  NTSTATUS result; // eax
  int v4; // eax
  int v5; // ecx
  _BYTE v6[4]; // [esp+0h] [ebp-4h] BYREF

  result = RtlpValidateContextFlags(ContextFlags, v6);
  if ( result >= 0 )
  {
    v4 = 0;
    v5 = 0;
    if ( (v6[0] & 2) != 0 )
    {
      v4 = MEMORY[0x7FFE0708] | MEMORY[0x7FFE03D8];
      v5 = MEMORY[0x7FFE070C] | MEMORY[0x7FFE03DC];
    }
    return RtlInitializeExtendedContext2(Context, ContextFlags, ContextEx, __PAIR64__(v5, v4));
  }
  return result;
}
