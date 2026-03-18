/*
 * XREFs of PoFxSetComponentResidency @ 0x140563750
 * Callers:
 *     <none>
 * Callees:
 *     PopDiagTraceFxComponentResidency @ 0x14056C29C (PopDiagTraceFxComponentResidency.c)
 *     PopPepComponentSetResidency @ 0x14056E8F8 (PopPepComponentSetResidency.c)
 */

__int64 __fastcall PoFxSetComponentResidency(__int64 a1, unsigned int a2, __int64 a3)
{
  PopDiagTraceFxComponentResidency(*(_QWORD *)(a1 + 48));
  return PopPepComponentSetResidency(*(_QWORD *)(a1 + 56), a2, a3);
}
