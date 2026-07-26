/*
 * XREFs of NdisImmediateWritePortUlong @ 0x1C00BDBF0
 * Callers:
 *     <none>
 * Callees:
 *     ndisImmediateReadWritePort @ 0x1C00BD800 (ndisImmediateReadWritePort.c)
 */

void __fastcall NdisImmediateWritePortUlong(__int64 a1, unsigned int a2, int a3)
{
  int v3; // [rsp+50h] [rbp+18h] BYREF

  v3 = a3;
  ndisImmediateReadWritePort(a1, a2, (unsigned __int8 *)&v3, 4u, 0);
}
