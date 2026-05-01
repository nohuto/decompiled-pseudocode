/*
 * XREFs of _lambda_745aa0a15c871b15a946ed0c85a37995_::_lambda_745aa0a15c871b15a946ed0c85a37995_ @ 0x180092574
 * Callers:
 *     ?SubscribeToServices@CApplicationManager@@UEAAJPEAUIServiceProvider@@@Z @ 0x18012DFA0 (-SubscribeToServices@CApplicationManager@@UEAAJPEAUIServiceProvider@@@Z.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@VCApplicationManager@@@WRL@Microsoft@@IEBAXXZ @ 0x1801292A0 (-InternalAddRef@-$ComPtr@VCApplicationManager@@@WRL@Microsoft@@IEBAXXZ.c)
 */

__int64 __fastcall lambda_745aa0a15c871b15a946ed0c85a37995_::_lambda_745aa0a15c871b15a946ed0c85a37995_(
        _QWORD *a1,
        _QWORD *a2)
{
  __int64 v2; // r10

  *a1 = *a2;
  Microsoft::WRL::ComPtr<CApplicationManager>::InternalAddRef();
  return v2;
}
