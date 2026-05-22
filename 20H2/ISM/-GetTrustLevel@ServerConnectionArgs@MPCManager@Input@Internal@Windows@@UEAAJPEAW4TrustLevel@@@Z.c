/*
 * XREFs of ?GetTrustLevel@ServerConnectionArgs@MPCManager@Input@Internal@Windows@@UEAAJPEAW4TrustLevel@@@Z @ 0x18001C470
 * Callers:
 *     ?GetTrustLevel@MPCManagerClient@@WBI@EAAJPEAW4TrustLevel@@@Z @ 0x18004B780 (-GetTrustLevel@MPCManagerClient@@WBI@EAAJPEAW4TrustLevel@@@Z.c)
 *     ?GetTrustLevel@MPCManagerClient@@WCA@EAAJPEAW4TrustLevel@@@Z @ 0x18004B790 (-GetTrustLevel@MPCManagerClient@@WCA@EAAJPEAW4TrustLevel@@@Z.c)
 *     ?GetTrustLevel@MPCManagerClientFactory@@WCI@EAAJPEAW4TrustLevel@@@Z @ 0x18004B7A0 (-GetTrustLevel@MPCManagerClientFactory@@WCI@EAAJPEAW4TrustLevel@@@Z.c)
 *     ?GetTrustLevel@?$Vector@PEAUHSTRING__@@U?$DefaultEqualityPredicate@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@3456@U?$DefaultVectorOptions@PEAUHSTRING__@@@3456@@Internal@Collections@Foundation@Windows@@WBA@EAAJPEAW4TrustLevel@@@Z @ 0x18004BC20 (-GetTrustLevel@-$Vector@PEAUHSTRING__@@U-$DefaultEqualityPredicate@PEAUHSTRING__@@@Internal@Coll.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Windows::Internal::Input::MPCManager::ServerConnectionArgs::GetTrustLevel(
        Windows::Internal::Input::MPCManager::ServerConnectionArgs *this,
        enum TrustLevel *a2)
{
  *a2 = BaseTrust;
  return 0LL;
}
