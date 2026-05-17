/*
 * XREFs of RtlInitializeExtendedContext @ 0x180051C50
 * Callers:
 *     <none>
 * Callees:
 *     RtlInitializeExtendedContext2 @ 0x180051FE0 (RtlInitializeExtendedContext2.c)
 *     RtlpValidateContextFlags @ 0x18005212C (RtlpValidateContextFlags.c)
 */

__int64 __fastcall RtlInitializeExtendedContext(__int64 a1, unsigned int a2)
{
  __int64 result; // rax
  unsigned int v4; // r10d
  __int64 v5; // r11
  __int64 v6; // r9
  char v7; // [rsp+48h] [rbp+20h] BYREF

  result = RtlpValidateContextFlags(a2, &v7);
  v6 = 0LL;
  if ( (int)result >= 0 )
  {
    if ( (v7 & 2) != 0 )
      v6 = MEMORY[0x7FFE0708] | MEMORY[0x7FFE03D8];
    return RtlInitializeExtendedContext2(a1, v4, v5, v6);
  }
  return result;
}
