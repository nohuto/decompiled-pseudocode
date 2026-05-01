/*
 * XREFs of CAsyncCallbackWithLambda__lambda_bf65030659e9ce755ba66a91d341de58___::Invoke @ 0x1803705B0
 * Callers:
 *     <none>
 * Callees:
 *     ?NotifySizeApplied@EyeControlApp@@QEAAXIIII@Z @ 0x18047A1B0 (-NotifySizeApplied@EyeControlApp@@QEAAXIIII@Z.c)
 */

__int64 __fastcall CAsyncCallbackWithLambda__lambda_bf65030659e9ce755ba66a91d341de58___::Invoke(__int64 a1)
{
  EyeControlApp *v1; // r10

  v1 = *(EyeControlApp **)(*(_QWORD *)(a1 + 48) + 416LL);
  if ( v1 )
    EyeControlApp::NotifySizeApplied(
      v1,
      *(_DWORD *)(a1 + 56),
      *(_DWORD *)(a1 + 60),
      *(_DWORD *)(a1 + 64),
      *(_DWORD *)(a1 + 68));
  return 0LL;
}
