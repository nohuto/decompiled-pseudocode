/*
 * XREFs of NdisImmediateReadPortUlong @ 0x1C00BE190
 * Callers:
 *     <none>
 * Callees:
 *     ndisImmediateReadWritePort @ 0x1C00BDE30 (ndisImmediateReadWritePort.c)
 */

void __fastcall NdisImmediateReadPortUlong(__int64 a1, unsigned int a2, unsigned __int8 *a3)
{
  ndisImmediateReadWritePort(a1, a2, a3, 4u, 1);
}
