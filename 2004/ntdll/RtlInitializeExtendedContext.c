/*
 * XREFs of RtlInitializeExtendedContext @ 0x180051C00
 * Callers:
 *     <none>
 * Callees:
 *     RtlInitializeExtendedContext2 @ 0x180051F90 (RtlInitializeExtendedContext2.c)
 *     RtlpValidateContextFlags @ 0x1800520DC (RtlpValidateContextFlags.c)
 */

NTSTATUS __cdecl RtlInitializeExtendedContext(PCONTEXT Context, ULONG ContextFlags, PCONTEXT_EX *ContextEx)
{
  NTSTATUS result; // eax
  ULONG v5; // r10d
  PCONTEXT_EX *v6; // r11
  ULONG64 v7; // r9
  char v8; // [rsp+48h] [rbp+20h] BYREF

  result = RtlpValidateContextFlags(ContextFlags, &v8);
  v7 = 0LL;
  if ( result >= 0 )
  {
    if ( (v8 & 2) != 0 )
      v7 = MEMORY[0x7FFE0708] | MEMORY[0x7FFE03D8];
    return RtlInitializeExtendedContext2(Context, v5, v6, v7);
  }
  return result;
}
