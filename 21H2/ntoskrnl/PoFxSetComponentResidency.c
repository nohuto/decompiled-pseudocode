/*
 * XREFs of PoFxSetComponentResidency @ 0x140569250
 * Callers:
 *     <none>
 * Callees:
 *     PopDiagTraceFxComponentResidency @ 0x140571D2C (PopDiagTraceFxComponentResidency.c)
 *     PopPepComponentSetResidency @ 0x140574388 (PopPepComponentSetResidency.c)
 */

__int64 __fastcall PoFxSetComponentResidency(__int64 a1, unsigned int a2, __int64 a3)
{
  PopDiagTraceFxComponentResidency(*(_QWORD *)(a1 + 48));
  return PopPepComponentSetResidency(*(_QWORD *)(a1 + 56), a2, a3);
}
