/*
 * XREFs of sub_180084F80 @ 0x180084F80
 * Callers:
 *     <none>
 * Callees:
 *     sub_18002B954 @ 0x18002B954 (sub_18002B954.c)
 */

ULONG __fastcall sub_180084F80(void **Parameter)
{
  ULONG v2; // eax
  ULONG result; // eax
  ULONG Seed; // [rsp+30h] [rbp+8h] BYREF
  ULONG v5; // [rsp+38h] [rbp+10h] BYREF

  Seed = (MEMORY[0x7FFE0320] * (unsigned __int64)MEMORY[0x7FFE0004]) >> 24;
  do
  {
    v5 = RtlRandom(&Seed) & 1;
    sub_18002B954(Parameter, &v5, 4uLL, 0);
    v2 = RtlRandom(&Seed);
    result = WaitForSingleObject(Parameter[8], v2 % 0x64);
  }
  while ( result );
  return result;
}
