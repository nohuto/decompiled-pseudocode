/*
 * XREFs of PoFxSetComponentLatency @ 0x140563700
 * Callers:
 *     <none>
 * Callees:
 *     PopDiagTraceFxComponentLatency @ 0x14056C1AC (PopDiagTraceFxComponentLatency.c)
 *     PopPepComponentSetLatency @ 0x14056E80C (PopPepComponentSetLatency.c)
 */

__int64 __fastcall PoFxSetComponentLatency(__int64 a1, unsigned int a2, __int64 a3)
{
  PopDiagTraceFxComponentLatency(*(_QWORD *)(a1 + 48));
  return PopPepComponentSetLatency(*(_QWORD *)(a1 + 56), a2, a3);
}
