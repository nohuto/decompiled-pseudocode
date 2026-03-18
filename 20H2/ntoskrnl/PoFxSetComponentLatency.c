/*
 * XREFs of PoFxSetComponentLatency @ 0x140567730
 * Callers:
 *     <none>
 * Callees:
 *     PopDiagTraceFxComponentLatency @ 0x14057022C (PopDiagTraceFxComponentLatency.c)
 *     PopPepComponentSetLatency @ 0x14057288C (PopPepComponentSetLatency.c)
 */

__int64 __fastcall PoFxSetComponentLatency(__int64 a1, unsigned int a2, __int64 a3)
{
  PopDiagTraceFxComponentLatency(*(_QWORD *)(a1 + 48));
  return PopPepComponentSetLatency(*(_QWORD *)(a1 + 56), a2, a3);
}
