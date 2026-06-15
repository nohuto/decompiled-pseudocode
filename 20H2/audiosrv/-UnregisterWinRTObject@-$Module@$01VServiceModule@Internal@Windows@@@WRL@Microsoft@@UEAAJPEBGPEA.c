/*
 * XREFs of ?UnregisterWinRTObject@?$Module@$01VServiceModule@Internal@Windows@@@WRL@Microsoft@@UEAAJPEBGPEAU_unnamed_type_RO_REGISTRATION_COOKIE_@@@Z @ 0x1800BADF0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall Microsoft::WRL::Module<2,Windows::Internal::ServiceModule>::UnregisterWinRTObject(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  RoRevokeActivationFactories(a3);
  return 0LL;
}
