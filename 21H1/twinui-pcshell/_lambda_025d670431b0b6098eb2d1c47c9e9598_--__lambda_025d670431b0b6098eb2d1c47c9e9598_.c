/*
 * XREFs of _lambda_025d670431b0b6098eb2d1c47c9e9598_::__lambda_025d670431b0b6098eb2d1c47c9e9598_ @ 0x18009CA00
 * Callers:
 *     ?PortFromHolographic@Win32BackedViewHostItem@Holographic@Shell@Internal@Windows@@UEAAJPEAE@Z @ 0x18022E6C0 (-PortFromHolographic@Win32BackedViewHostItem@Holographic@Shell@Internal@Windows@@UEAAJPEAE@Z.c)
 *     ?PortToHolographic@Win32BackedViewHostItem@Holographic@Shell@Internal@Windows@@UEAAJPEAE@Z @ 0x18022E860 (-PortToHolographic@Win32BackedViewHostItem@Holographic@Shell@Internal@Windows@@UEAAJPEAE@Z.c)
 *     _ConnectedStandbyHelper::Initialize_::_1_::dtor$1 @ 0x1802A73D3 (_ConnectedStandbyHelper--Initialize_--_1_--dtor$1.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18005A6F0 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 */

void __fastcall lambda_025d670431b0b6098eb2d1c47c9e9598_::__lambda_025d670431b0b6098eb2d1c47c9e9598_(__int64 a1)
{
  std::_Ref_count_base *v1; // rcx

  v1 = *(std::_Ref_count_base **)(a1 + 8);
  if ( v1 )
    std::_Ref_count_base::_Decref(v1);
}
