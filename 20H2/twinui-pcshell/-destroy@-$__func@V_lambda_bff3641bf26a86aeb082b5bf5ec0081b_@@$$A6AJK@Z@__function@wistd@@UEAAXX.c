/*
 * XREFs of ?destroy@?$__func@V_lambda_bff3641bf26a86aeb082b5bf5ec0081b_@@$$A6AJK@Z@__function@wistd@@UEAAXXZ @ 0x1800CF5D0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800663F0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall wistd::__function::__func<_lambda_bff3641bf26a86aeb082b5bf5ec0081b_,long (unsigned long)>::destroy(
        __int64 a1)
{
  return Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)(a1 + 8));
}
