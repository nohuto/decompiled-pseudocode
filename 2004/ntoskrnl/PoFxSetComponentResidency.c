/*
 * XREFs of PoFxSetComponentResidency @ 0x140563DA0
 * Callers:
 *     <none>
 * Callees:
 *     PopDiagTraceFxComponentResidency @ 0x14056C8EC (PopDiagTraceFxComponentResidency.c)
 *     PopPepComponentSetResidency @ 0x14056EF48 (PopPepComponentSetResidency.c)
 */

__int64 __fastcall PoFxSetComponentResidency(__int64 a1, unsigned int a2, __int64 a3)
{
  PopDiagTraceFxComponentResidency(*(_QWORD *)(a1 + 48));
  return PopPepComponentSetResidency(*(_QWORD *)(a1 + 56), a2, a3);
}
