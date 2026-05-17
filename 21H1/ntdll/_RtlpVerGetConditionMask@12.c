/*
 * XREFs of _RtlpVerGetConditionMask@12 @ 0x4B2AE80E
 * Callers:
 *     _RtlSwitchedVVI@16 @ 0x4B2B0060 (_RtlSwitchedVVI@16.c)
 *     _RtlVerifyVersionInfo@16 @ 0x4B363DF0 (_RtlVerifyVersionInfo@16.c)
 * Callees:
 *     __aullshr @ 0x4B2F6840 (__aullshr.c)
 */

int __fastcall RtlpVerGetConditionMask(unsigned int a1, int a2, int a3, int a4)
{
  int v4; // eax
  char v5; // dl
  unsigned __int64 v6; // rax
  int v7; // ecx

  v4 = 0;
  do
  {
    v5 = v4++;
    a1 >>= 1;
  }
  while ( a1 );
  LODWORD(v6) = a3;
  v7 = (unsigned __int8)(3 * v5);
  HIDWORD(v6) = a4;
  return (v6 >> v7) & 7;
}
