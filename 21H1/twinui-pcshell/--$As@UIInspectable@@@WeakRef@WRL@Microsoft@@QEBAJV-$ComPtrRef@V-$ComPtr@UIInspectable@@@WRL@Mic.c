/*
 * XREFs of ??$As@UIInspectable@@@WeakRef@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIInspectable@@@WRL@Microsoft@@@Details@12@@Z @ 0x180012EDC
 * Callers:
 *     ??$AsStrong@UIInspectable@@@ExperienceManagerUtils@@YA?AV?$ComPtr@UIInspectable@@@WRL@Microsoft@@AEAVWeakRef@23@@Z @ 0x180012EB0 (--$AsStrong@UIInspectable@@@ExperienceManagerUtils@@YA-AV-$ComPtr@UIInspectable@@@WRL@Microsoft@.c)
 *     ??$WeakRefAs@V?$ComPtrRef@V?$ComPtr@UIDWMStoryboardListener@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@@YAJAEBVWeakRef@WRL@Microsoft@@V?$ComPtrRef@V?$ComPtr@UIDWMStoryboardListener@@@WRL@Microsoft@@@Details@12@@Z @ 0x18001383C (--$WeakRefAs@V-$ComPtrRef@V-$ComPtr@UIDWMStoryboardListener@@@WRL@Microsoft@@@Details@WRL@Micros.c)
 *     ??R?$__func@V_lambda_8fb2622e9c399703a82f01481760af57_@@$$A6AJI_K_J@Z@__function@wistd@@UEAAJ$$QEAI$$QEA_K$$QEA_J@Z @ 0x180087C60 (--R-$__func@V_lambda_8fb2622e9c399703a82f01481760af57_@@$$A6AJI_K_J@Z@__function@wistd@@UEAAJ$$Q.c)
 *     _lambda_20739887fac96c8d37711a9156cbc9f0_::operator() @ 0x18009E230 (_lambda_20739887fac96c8d37711a9156cbc9f0_--operator().c)
 *     _lambda_2a6490a8cf13452a213c8a59fbbd282a_::operator() @ 0x1800A0F80 (_lambda_2a6490a8cf13452a213c8a59fbbd282a_--operator().c)
 *     _lambda_62c9f7536e76f85d48c474b5f2f194d8_::operator() @ 0x1800A1590 (_lambda_62c9f7536e76f85d48c474b5f2f194d8_--operator().c)
 *     _lambda_6cb9c82818ac450c49952f27b766afb5_::operator() @ 0x1800A16DC (_lambda_6cb9c82818ac450c49952f27b766afb5_--operator().c)
 *     _lambda_77ff76289f7bbfebb9a2250fa767bd8c_::operator() @ 0x1800A19B0 (_lambda_77ff76289f7bbfebb9a2250fa767bd8c_--operator().c)
 *     _lambda_95a8ea034506ab1e4f4125e3936ae1b3_::operator() @ 0x1800A1BE8 (_lambda_95a8ea034506ab1e4f4125e3936ae1b3_--operator().c)
 *     _lambda_ae8220f02ed2a4c19b01bc805f2788a4_::operator() @ 0x1800A1D34 (_lambda_ae8220f02ed2a4c19b01bc805f2788a4_--operator().c)
 *     _lambda_e446c7c5fc519c205d2c977b283b134b_::operator() @ 0x1800A1F70 (_lambda_e446c7c5fc519c205d2c977b283b134b_--operator().c)
 *     ??$WeakRefAs@V?$ComPtrRef@V?$ComPtr@UIInspectable@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@@YAJAEBVWeakRef@WRL@Microsoft@@V?$ComPtrRef@V?$ComPtr@UIInspectable@@@WRL@Microsoft@@@Details@12@@Z @ 0x180167728 (--$WeakRefAs@V-$ComPtrRef@V-$ComPtr@UIInspectable@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@@YAJ.c)
 *     _lambda_54f720c39265b6e0938de84e9800a38e_::operator() @ 0x180180FEC (_lambda_54f720c39265b6e0938de84e9800a38e_--operator().c)
 *     ??R?$__func@V_lambda_548464be655e837fe70a6c635a8d08fa_@@$$A6AJI_K_J@Z@__function@wistd@@UEAAJ$$QEAI$$QEA_K$$QEA_J@Z @ 0x180193D70 (--R-$__func@V_lambda_548464be655e837fe70a6c635a8d08fa_@@$$A6AJI_K_J@Z@__function@wistd@@UEAAJ$$Q.c)
 *     ?RequestPrivilegedHotkeys@PrivilegedHotkeyOperations@@UEAAJIQEBUIMMERSIVE_WINDOW_MESSAGE_SERVICE_HOTKEY_REGISTRATION@@PEAUIImmersiveWindowMessageNotification@@PEAK@Z @ 0x180208BE0 (-RequestPrivilegedHotkeys@PrivilegedHotkeyOperations@@UEAAJIQEBUIMMERSIVE_WINDOW_MESSAGE_SERVICE.c)
 *     ?UnrequestPrivilegedHotkeys@PrivilegedHotkeyOperations@@UEAAJK@Z @ 0x180209F20 (-UnrequestPrivilegedHotkeys@PrivilegedHotkeyOperations@@UEAAJK@Z.c)
 *     _lambda_8544889e135cbd1c1aef237cf455c7c2_::operator() @ 0x18036FD54 (_lambda_8544889e135cbd1c1aef237cf455c7c2_--operator().c)
 *     ?RuntimeClassInitialize@CSwitchItemElement@@QEAAJAEBUSwitchItemElementInitializeArgs@1@@Z @ 0x180380274 (-RuntimeClassInitialize@CSwitchItemElement@@QEAAJAEBUSwitchItemElementInitializeArgs@1@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006B0B0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 */

__int64 __fastcall Microsoft::WRL::WeakRef::As<IInspectable>(Microsoft::WRL::WeakRef *this, struct IInspectable **a2)
{
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(a2);
  return Microsoft::WRL::WeakRef::InternalResolve(this, &GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90, a2);
}
