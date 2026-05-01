/*
 * XREFs of ??$AsAgile@UIActivatedEventArgs@Activation@ApplicationModel@Windows@@@WRL@Microsoft@@YAJPEAUIActivatedEventArgs@Activation@ApplicationModel@Windows@@PEAVAgileRef@01@@Z @ 0x18004A5D8
 * Callers:
 *     ??R_lambda_c8b199a0feb076873244f725fed1af37_@@QEBAXXZ @ 0x180049C00 (--R_lambda_c8b199a0feb076873244f725fed1af37_@@QEBAXXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006B7D0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 */

__int64 __fastcall Microsoft::WRL::AsAgile<Windows::ApplicationModel::Activation::IActivatedEventArgs>(
        __int64 a1,
        __int64 *a2)
{
  unsigned int v2; // ebx
  __int64 v6; // [rsp+30h] [rbp+8h] BYREF
  __int64 v7; // [rsp+40h] [rbp+18h] BYREF

  v2 = 0;
  if ( a1 )
  {
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(a2);
    return (unsigned int)RoGetAgileReference(0LL, &GUID_cf651713_cd08_4fd8_b697_a281b6544e2e, a1, a2);
  }
  else
  {
    v6 = *a2;
    v7 = 0LL;
    *a2 = 0LL;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v6);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v7);
  }
  return v2;
}
