/*
 * XREFs of HalpHpetAcknowledgeInterrupt @ 0x1404D09B0
 * Callers:
 *     <none>
 * Callees:
 *     HalSetTimerProblem @ 0x1404D01E0 (HalSetTimerProblem.c)
 *     HalpHpetSetMatchValue @ 0x1404D0A3C (HalpHpetSetMatchValue.c)
 */

void __fastcall HalpHpetAcknowledgeInterrupt(__int64 a1, __int64 a2, __int64 a3)
{
  if ( *(_DWORD *)(a1 + 8) == 1 )
  {
    LOBYTE(a3) = 1;
    HalpHpetSetMatchValue(a1, *(unsigned int *)(a1 + 20), a3);
  }
  else if ( *(_DWORD *)(a1 + 8) == 2 && !*(_BYTE *)(a1 + 12) )
  {
    HalSetTimerProblem(a1, 2, 0);
  }
}
