/*
 * XREFs of TlgRegisterAggregateProvider @ 0x14079A6B0
 * Callers:
 *     CmFcInitSystem3 @ 0x140A3B450 (CmFcInitSystem3.c)
 *     PnpTraceInitialize @ 0x140A51CC0 (PnpTraceInitialize.c)
 *     EtwpInitialize @ 0x140A68D10 (EtwpInitialize.c)
 * Callees:
 *     TlgRegisterAggregateProviderEx @ 0x14079A6CC (TlgRegisterAggregateProviderEx.c)
 */

__int64 __fastcall TlgRegisterAggregateProvider(void *a1)
{
  return TlgRegisterAggregateProviderEx(a1);
}
