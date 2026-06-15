/*
 * XREFs of ?GetTrustLevel@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIProcessSubmixProxy@@UIInspectable@@@Details@WRL@Microsoft@@WBI@EAAJPEAW4TrustLevel@@@Z @ 0x180075160
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,IProcessSubmixProxy,IInspectable>::GetTrustLevel(
        __int64 a1)
{
  return Microsoft::WRL::Module<1,Windows::Internal::ServiceModule>::UnregisterCOMObject(a1 - 24);
}
