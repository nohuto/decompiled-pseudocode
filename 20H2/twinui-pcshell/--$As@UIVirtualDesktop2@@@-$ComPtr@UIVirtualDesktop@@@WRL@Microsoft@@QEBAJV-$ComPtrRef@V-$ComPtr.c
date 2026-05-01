/*
 * XREFs of ??$As@UIVirtualDesktop2@@@?$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIVirtualDesktop2@@@WRL@Microsoft@@@Details@12@@Z @ 0x180377A48
 * Callers:
 *     ?UpdateDesktopIndex@VirtualDesktop@@AEAAJXZ @ 0x180378BD0 (-UpdateDesktopIndex@VirtualDesktop@@AEAAJXZ.c)
 *     ?get_Name@VirtualDesktop@@UEAAJPEAPEAUHSTRING__@@@Z @ 0x180378FE0 (-get_Name@VirtualDesktop@@UEAAJPEAPEAUHSTRING__@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800663F0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 */

__int64 __fastcall Microsoft::WRL::ComPtr<IVirtualDesktop>::As<IVirtualDesktop2>(_QWORD *a1, __int64 *a2)
{
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(a2);
  return (**(__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *))*a1)(
           *a1,
           &GUID_31ebde3f_6ec3_4cbd_b9fb_0ef6d09b41f4,
           a2);
}
