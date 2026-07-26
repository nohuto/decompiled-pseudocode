/*
 * XREFs of _lambda_f04dbbba9fe6a1cf15f4fb42f8ba953a_::_lambda_invoker_cdecl_ @ 0x1C0107D30
 * Callers:
 *     <none>
 * Callees:
 *     ?ApplyBindChanges@BindEngine@Ndis@@QEAAXW4CallRunMode@@_N@Z @ 0x1C00FDE60 (-ApplyBindChanges@BindEngine@Ndis@@QEAAXW4CallRunMode@@_N@Z.c)
 *     ?DisableIfNeeded@Initmode@Ndis@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4CallRunMode@@@Z @ 0x1C0107D6C (-DisableIfNeeded@Initmode@Ndis@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4CallRunMode@@@Z.c)
 */

void __fastcall lambda_f04dbbba9fe6a1cf15f4fb42f8ba953a_::_lambda_invoker_cdecl_(struct NDIS_BIND_LINK_BASE *a1)
{
  enum CallRunMode v2; // r8d

  Ndis::BindEngine::ApplyBindChanges(&a1->BindState.Miniport->BindEngine, RunAsynchronous, 0);
  Ndis::Initmode::DisableIfNeeded((Ndis::Initmode *)a1->BindState.Miniport, (struct _NDIS_MINIPORT_BLOCK *)1, v2);
}
