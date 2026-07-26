/*
 * XREFs of _lambda_f57a5082c6497a0052959e1defd60ec1_::_lambda_invoker_cdecl_ @ 0x1C0067890
 * Callers:
 *     <none>
 * Callees:
 *     ?ApplyBindChanges@BindEngine@Ndis@@QEAAXW4CallRunMode@@_N@Z @ 0x1C00FDE60 (-ApplyBindChanges@BindEngine@Ndis@@QEAAXW4CallRunMode@@_N@Z.c)
 */

void __fastcall lambda_f57a5082c6497a0052959e1defd60ec1_::_lambda_invoker_cdecl_(struct NDIS_BIND_LINK_BASE *a1)
{
  Ndis::BindEngine::ApplyBindChanges(&a1->BindState.Miniport->BindEngine, RunSynchronous, 0);
}
