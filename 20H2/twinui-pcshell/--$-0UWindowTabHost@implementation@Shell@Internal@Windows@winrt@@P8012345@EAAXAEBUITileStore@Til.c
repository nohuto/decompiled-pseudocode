/*
 * XREFs of ??$?0UWindowTabHost@implementation@Shell@Internal@Windows@winrt@@P8012345@EAAXAEBUITileStore@Tiles@345@AEBUITileStoreChangedEventArgs@7345@@Z@?$TypedEventHandler@UTileStore@Tiles@Internal@Windows@winrt@@UTileStoreChangedEventArgs@2345@@Foundation@Windows@winrt@@QEAA@PEAUWindowTabHost@implementation@Shell@Internal@23@P8456723@EAAXAEBUITileStore@Tiles@723@AEBUITileStoreChangedEventArgs@9723@@Z@Z @ 0x1800C56B8
 * Callers:
 *     ?subscribe_to_services@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@UEAAXPEAUIServiceProvider@@@Z @ 0x1800D0590 (-subscribe_to_services@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@UEAAXPEAUIServ.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x18008D5BC (--2@YAPEAX_K@Z.c)
 */

_QWORD *__fastcall winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Internal::Tiles::TileStore,winrt::Windows::Internal::Tiles::TileStoreChangedEventArgs>::TypedEventHandler<winrt::Windows::Internal::Tiles::TileStore,winrt::Windows::Internal::Tiles::TileStoreChangedEventArgs>(
        _QWORD *a1,
        __int64 a2,
        __m128d *a3)
{
  __m128d v4; // xmm6
  _BYTE v6[24]; // [rsp+20h] [rbp-38h]
  char *v7; // [rsp+60h] [rbp+8h]

  v4 = *a3;
  *(_QWORD *)v6 = a2;
  *(__m128d *)&v6[8] = *a3;
  v7 = (char *)operator new(0x28uLL);
  *(_OWORD *)(v7 + 8) = *(_OWORD *)v6;
  *((_QWORD *)v7 + 3) = *(_OWORD *)&_mm_unpackhi_pd(v4, v4);
  *((_DWORD *)v7 + 8) = 1;
  *(_QWORD *)v7 = &winrt::impl::delegate<winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Internal::Tiles::TileStore,winrt::Windows::Internal::Tiles::TileStoreChangedEventArgs>,_lambda_ae2144ca514bc0fccfa4c87b511bcbf7_>::`vftable';
  *a1 = v7;
  return a1;
}
