/*
 * XREFs of IntpAdvanceProcessorInPartition @ 0x1C009FBF0
 * Callers:
 *     IntPartArbInit @ 0x1C009D7C4 (IntPartArbInit.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall IntpAdvanceProcessorInPartition(__int64 a1, unsigned __int8 a2, _BYTE *a3)
{
  unsigned int v3; // ecx
  unsigned int v4; // eax
  __int64 result; // rax
  int v6; // edx

  v3 = *(unsigned __int8 *)(a1 + 1);
  v4 = a2 + (unsigned __int8)*a3;
  v6 = v4 % v3;
  result = v4 / v3;
  *a3 = v6;
  return result;
}
