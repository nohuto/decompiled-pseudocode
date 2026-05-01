/*
 * XREFs of ??$Unmarshal@U?$ITypedEventHandler@PEAUIClientWindowState@ViewManagerInterop@Shell@Internal@Windows@@PEAUIClientWindowReadyForPresentationChangedEventArgs@2345@@Foundation@Windows@@@CMarshaledInterface@@QEAAJV?$ComPtrRef@V?$ComPtr@U?$ITypedEventHandler@PEAUIClientWindowState@ViewManagerInterop@Shell@Internal@Windows@@PEAUIClientWindowReadyForPresentationChangedEventArgs@2345@@Foundation@Windows@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x1800132B0
 * Callers:
 *     _lambda_bfb8cbc897ca7eaa5c992f00bdd4bfa8_::operator() @ 0x18001317C (_lambda_bfb8cbc897ca7eaa5c992f00bdd4bfa8_--operator().c)
 *     _lambda_f6fd16dc6abf918068135dd93a107128_::operator() @ 0x18009F4C0 (_lambda_f6fd16dc6abf918068135dd93a107128_--operator().c)
 *     _lambda_5933e4d366f7a096799d9848b20fb22a_::operator() @ 0x1801DC964 (_lambda_5933e4d366f7a096799d9848b20fb22a_--operator().c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006B7D0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 */

int __fastcall CMarshaledInterface::Unmarshal<Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::ViewManagerInterop::IClientWindowState *,Windows::Internal::Shell::ViewManagerInterop::IClientWindowReadyForPresentationChangedEventArgs *>>(
        CMarshaledInterface *this,
        void **a2)
{
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(a2);
  return CMarshaledInterface::_Unmarshal(this, &GUID_8cecdf70_ced8_5bc7_84a7_d80615fedcdd, a2, 0);
}
