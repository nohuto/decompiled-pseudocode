/*
 * XREFs of TlgRegisterAggregateProvider @ 0x14078C0A0
 * Callers:
 *     CmFcInitSystem3 @ 0x140A35450 (CmFcInitSystem3.c)
 *     EtwpInitialize @ 0x140A46B98 (EtwpInitialize.c)
 *     IopInitializePlugPlayServices @ 0x140A4AB7C (IopInitializePlugPlayServices.c)
 * Callees:
 *     TlgRegisterAggregateProviderEx @ 0x14078C0BC (TlgRegisterAggregateProviderEx.c)
 */

__int64 __fastcall TlgRegisterAggregateProvider(void *a1)
{
  return TlgRegisterAggregateProviderEx(a1);
}
