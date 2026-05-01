/*
 * XREFs of ??1_lambda_88fc7155b3915cd74e6d1f1f1c627343_@@QEAA@XZ @ 0x1800AB90C
 * Callers:
 *     ??$AsyncInvokeAll@PEAVWin32BackedViewHostItem@Holographic@Shell@Internal@Windows@@PEAVViewSizePreferencesChangedEventArgsImpl@@@?$AsyncEventSourceT@U?$ITypedEventHandler@PEAUIViewHostItem@Holographic@Shell@Internal@Windows@@PEAUIViewSizePreferencesChangedEventArgs@2345@@Foundation@Windows@@VGitEventSourceSupportsAgile@Internal@3@U?$InvokeModeOptions@$01@WRL@Microsoft@@$00Uerr_returncode_policy@wil@@@wil@@QEAAJAEBQEAVWin32BackedViewHostItem@Holographic@Shell@Internal@Windows@@AEBQEAVViewSizePreferencesChangedEventArgsImpl@@@Z @ 0x1800AAC88 (--$AsyncInvokeAll@PEAVWin32BackedViewHostItem@Holographic@Shell@Internal@Windows@@PEAVViewSizePr.c)
 *     ??_G?$__func@V_lambda_88fc7155b3915cd74e6d1f1f1c627343_@@$$A6AJPEAU?$ITypedEventHandler@PEAUIViewHostItem@Holographic@Shell@Internal@Windows@@PEAUIViewSizePreferencesChangedEventArgs@2345@@Foundation@Windows@@@Z@__function@wistd@@UEAAPEAXI@Z @ 0x1800ABD30 (--_G-$__func@V_lambda_88fc7155b3915cd74e6d1f1f1c627343_@@$$A6AJPEAU-$ITypedEventHandler@PEAUIVie.c)
 *     ?destroy@?$__func@V_lambda_88fc7155b3915cd74e6d1f1f1c627343_@@$$A6AJPEAU?$ITypedEventHandler@PEAUIViewHostItem@Holographic@Shell@Internal@Windows@@PEAUIViewSizePreferencesChangedEventArgs@2345@@Foundation@Windows@@@Z@__function@wistd@@UEAAXXZ @ 0x1800AC940 (-destroy@-$__func@V_lambda_88fc7155b3915cd74e6d1f1f1c627343_@@$$A6AJPEAU-$ITypedEventHandler@PEA.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VViewSizePreferencesChangedEventArgsImpl@@@WRL@Microsoft@@IEAAKXZ @ 0x1800AC3C8 (-InternalRelease@-$ComPtr@VViewSizePreferencesChangedEventArgsImpl@@@WRL@Microsoft@@IEAAKXZ.c)
 */

void __fastcall _lambda_88fc7155b3915cd74e6d1f1f1c627343_::~_lambda_88fc7155b3915cd74e6d1f1f1c627343_(
        _lambda_88fc7155b3915cd74e6d1f1f1c627343_ *this)
{
  Microsoft::WRL::ComPtr<ViewSizePreferencesChangedEventArgsImpl>::InternalRelease((char *)this + 8);
  Microsoft::WRL::ComPtr<Windows::Internal::Shell::Holographic::Win32BackedViewHostItem>::~ComPtr<Windows::Internal::Shell::Holographic::Win32BackedViewHostItem>(this);
}
