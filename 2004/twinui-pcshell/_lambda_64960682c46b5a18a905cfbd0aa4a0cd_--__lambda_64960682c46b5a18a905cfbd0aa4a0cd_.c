/*
 * XREFs of _lambda_64960682c46b5a18a905cfbd0aa4a0cd_::__lambda_64960682c46b5a18a905cfbd0aa4a0cd_ @ 0x1802F4EDC
 * Callers:
 *     _Windows::UI::Core::DispatchedHandler::DispatchedHandler__lambda_64960682c46b5a18a905cfbd0aa4a0cd____::_1_::dtor$0 @ 0x1802F4C24 (_Windows--UI--Core--DispatchedHandler--DispatchedHandler__lambda_64960682c46b5a18a905cfbd0aa4a0c.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006B7D0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 */

__int64 __fastcall lambda_64960682c46b5a18a905cfbd0aa4a0cd_::__lambda_64960682c46b5a18a905cfbd0aa4a0cd_(__int64 a1)
{
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)(a1 + 16));
  return Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)(a1 + 8));
}
