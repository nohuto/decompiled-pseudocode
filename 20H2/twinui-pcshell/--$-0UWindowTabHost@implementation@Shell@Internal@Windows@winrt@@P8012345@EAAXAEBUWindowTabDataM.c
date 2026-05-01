/*
 * XREFs of ??$?0UWindowTabHost@implementation@Shell@Internal@Windows@winrt@@P8012345@EAAXAEBUWindowTabDataModel@2UI@345@AEBUWindowTabDataModelActiveTabChangedEventArgs@27345@@Z@?$TypedEventHandler@UWindowTabDataModel@Shell@UI@Internal@Windows@winrt@@UWindowTabDataModelActiveTabChangedEventArgs@23456@@Foundation@Windows@winrt@@QEAA@PEAUWindowTabHost@implementation@Shell@Internal@23@P8456723@EAAXAEBUWindowTabDataModel@6UI@723@AEBUWindowTabDataModelActiveTabChangedEventArgs@69723@@Z@Z @ 0x1800C5720
 * Callers:
 *     ??0WindowTabHost@implementation@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x1800C8AD8 (--0WindowTabHost@implementation@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x18008D5BC (--2@YAPEAX_K@Z.c)
 */

_QWORD *__fastcall winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Internal::UI::Shell::WindowTabDataModel,winrt::Windows::Internal::UI::Shell::WindowTabDataModelActiveTabChangedEventArgs>::TypedEventHandler<winrt::Windows::Internal::UI::Shell::WindowTabDataModel,winrt::Windows::Internal::UI::Shell::WindowTabDataModelActiveTabChangedEventArgs>(
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
  *(_QWORD *)v7 = &winrt::impl::delegate<winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Internal::UI::Shell::WindowTabDataModel,winrt::Windows::Internal::UI::Shell::WindowTabDataModelActiveTabChangedEventArgs>,_lambda_bd0895ad6d8416644174f66c64660633_>::`vftable';
  *a1 = v7;
  return a1;
}
