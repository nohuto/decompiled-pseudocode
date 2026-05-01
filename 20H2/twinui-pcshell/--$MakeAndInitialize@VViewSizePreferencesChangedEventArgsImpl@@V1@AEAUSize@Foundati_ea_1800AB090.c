/*
 * XREFs of ??$MakeAndInitialize@VViewSizePreferencesChangedEventArgsImpl@@V1@AEAUSize@Foundation@Windows@@@Details@WRL@Microsoft@@YAJV?$ComPtrRef@V?$ComPtr@VViewSizePreferencesChangedEventArgsImpl@@@WRL@Microsoft@@@012@AEAUSize@Foundation@Windows@@@Z @ 0x1800AB090
 * Callers:
 *     ?RaiseSizePreferencesChanged@Win32BackedViewHostItem@Holographic@Shell@Internal@Windows@@UEAAJUSize@Foundation@5@@Z @ 0x180250D80 (-RaiseSizePreferencesChanged@Win32BackedViewHostItem@Holographic@Shell@Internal@Windows@@UEAAJUS.c)
 *     ?RaiseSizePreferencesChanged@ApplicationViewBackedViewHostItem@@UEAAJUSize@Foundation@Windows@@@Z @ 0x180259EC0 (-RaiseSizePreferencesChanged@ApplicationViewBackedViewHostItem@@UEAAJUSize@Foundation@Windows@@@.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VViewSizePreferencesChangedEventArgsImpl@@@WRL@Microsoft@@IEAAKXZ @ 0x1800AC3C8 (-InternalRelease@-$ComPtr@VViewSizePreferencesChangedEventArgsImpl@@@WRL@Microsoft@@IEAAKXZ.c)
 */

__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<ViewSizePreferencesChangedEventArgsImpl,ViewSizePreferencesChangedEventArgsImpl,Windows::Foundation::Size &>(
        _QWORD *a1,
        _QWORD *a2)
{
  Microsoft::WRL::ComPtr<ViewSizePreferencesChangedEventArgsImpl>::InternalRelease(a1);
  return Microsoft::WRL::Details::MakeAndInitialize<ViewSizePreferencesChangedEventArgsImpl,ViewSizePreferencesChangedEventArgsImpl,Windows::Foundation::Size &>(
           a1,
           a2);
}
