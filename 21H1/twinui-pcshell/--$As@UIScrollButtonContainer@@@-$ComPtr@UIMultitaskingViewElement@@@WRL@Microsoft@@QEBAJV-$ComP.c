/*
 * XREFs of ??$As@UIScrollButtonContainer@@@?$ComPtr@UIMultitaskingViewElement@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIScrollButtonContainer@@@WRL@Microsoft@@@Details@12@@Z @ 0x180387BB8
 * Callers:
 *     ?UpdateScrollButtonEnablement@CScrollViewerHost@@UEAAXXZ @ 0x180388710 (-UpdateScrollButtonEnablement@CScrollViewerHost@@UEAAXXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006B0B0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 */

__int64 __fastcall Microsoft::WRL::ComPtr<IMultitaskingViewElement>::As<IScrollButtonContainer>(
        _QWORD *a1,
        __int64 *a2)
{
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(a2);
  return (**(__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *))*a1)(
           *a1,
           &GUID_f1a65999_aef4_4756_bc64_79adacbe9f8b,
           a2);
}
