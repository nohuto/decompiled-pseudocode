/*
 * XREFs of PoFxSetComponentResidency @ 0x140569490
 * Callers:
 *     <none>
 * Callees:
 *     PopDiagTraceFxComponentResidency @ 0x140571F6C (PopDiagTraceFxComponentResidency.c)
 *     PopPepComponentSetResidency @ 0x1405745C8 (PopPepComponentSetResidency.c)
 */

__int64 __fastcall PoFxSetComponentResidency(__int64 a1, unsigned int a2, __int64 a3)
{
  PopDiagTraceFxComponentResidency(*(_QWORD *)(a1 + 48));
  return PopPepComponentSetResidency(*(_QWORD *)(a1 + 56), a2, a3);
}
