/*
 * XREFs of NdisImmediateWritePortUshort @ 0x1C00BE250
 * Callers:
 *     <none>
 * Callees:
 *     ndisImmediateReadWritePort @ 0x1C00BDE30 (ndisImmediateReadWritePort.c)
 */

void __fastcall NdisImmediateWritePortUshort(__int64 a1, unsigned int a2, __int16 a3)
{
  __int16 v3; // [rsp+50h] [rbp+18h] BYREF

  v3 = a3;
  ndisImmediateReadWritePort(a1, a2, (unsigned __int8 *)&v3, 2u, 0);
}
