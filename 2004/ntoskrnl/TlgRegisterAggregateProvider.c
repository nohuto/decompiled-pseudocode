/*
 * XREFs of TlgRegisterAggregateProvider @ 0x14078DF70
 * Callers:
 *     CmFcInitSystem3 @ 0x140A35450 (CmFcInitSystem3.c)
 *     PnpTraceInitialize @ 0x140A51640 (PnpTraceInitialize.c)
 *     EtwpInitialize @ 0x140A61950 (EtwpInitialize.c)
 * Callees:
 *     TlgRegisterAggregateProviderEx @ 0x14078DF8C (TlgRegisterAggregateProviderEx.c)
 */

__int64 __fastcall TlgRegisterAggregateProvider(void *a1)
{
  return TlgRegisterAggregateProviderEx(a1);
}
