/*
 * XREFs of ?xxxUserReinitializeAutoRotation@CLegacyRotationMgr@@UAEXXZ @ 0xE7672
 * Callers:
 *     <none>
 * Callees:
 *     ?xxxApplyOrientationPreference@CLegacyRotationMgr@@AAEXXZ @ 0xB2190 (-xxxApplyOrientationPreference@CLegacyRotationMgr@@AAEXXZ.c)
 *     __tlgKeywordOn@12 @ 0xB223C (__tlgKeywordOn@12.c)
 *     ?QueryAutoRotationRegistrySetting@CLegacyRotationMgr@@AAEKPBGK0@Z @ 0xE775A (-QueryAutoRotationRegistrySetting@CLegacyRotationMgr@@AAEKPBGK0@Z.c)
 *     ?IsNativeOrientationPortrait@@YGHXZ @ 0xE781A (-IsNativeOrientationPortrait@@YGHXZ.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@@?$_tlgWriteTemplate@$$A6GJPBU_tlgProvider_t@@PBXPBU_GUID@@2IPAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YGJ0122I3@ZPBU2@PBU2@@@SGJPBU_tlgProvider_t@@PBXPBU_GUID@@2ABU?$_tlgWrapperByVal@$03@@3@Z @ 0x140661 (--$Write@U-$_tlgWrapperByVal@$03@@U1@@-$_tlgWriteTemplate@$$A6GJPBU_tlgProvider_t@@PBXPBU_GUID@@.c)
 */

void __thiscall CLegacyRotationMgr::xxxUserReinitializeAutoRotation(CLegacyRotationMgr *this)
{
  CLegacyRotationMgr *v2; // ecx
  int AutoRotationRegistrySetting; // esi
  CLegacyRotationMgr *v4; // ecx
  CLegacyRotationMgr *v5; // ecx
  unsigned int v6; // eax
  unsigned int v7; // eax
  int v8; // [esp+10h] [ebp-8h] BYREF
  int v9; // [esp+14h] [ebp-4h] BYREF

  AutoRotationRegistrySetting = CLegacyRotationMgr::QueryAutoRotationRegistrySetting(
                                  this,
                                  L"Enable",
                                  1u,
                                  L"\\Registry\\Machine\\Software\\Microsoft\\Windows\\CurrentVersion\\AutoRotation");
  dword_2738D0 = AutoRotationRegistrySetting;
  if ( (unsigned int)dword_266280 > 5 && _tlgKeywordOn(&dword_266280, 0x400000000001LL) )
  {
    v8 = 1;
    v9 = AutoRotationRegistrySetting;
    _tlgWriteTemplate<long __stdcall (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      (int)&dword_266280,
      (int)&unk_253A05,
      (int)v2,
      (int)v2,
      (int)&v9,
      (int)&v8);
  }
  *(_DWORD *)dword_273900 = CLegacyRotationMgr::QueryAutoRotationRegistrySetting(
                              v2,
                              L"SlateEnable",
                              1u,
                              L"\\Registry\\Machine\\Software\\Microsoft\\Windows\\CurrentVersion\\AutoRotation");
  dword_2738D4 = CLegacyRotationMgr::QueryAutoRotationRegistrySetting(
                   v4,
                   L"SensorPresent",
                   0,
                   L"\\Registry\\Machine\\Software\\Microsoft\\Windows\\CurrentVersion\\AutoRotation") == 1;
  v6 = CLegacyRotationMgr::QueryAutoRotationRegistrySetting(
         v5,
         L"LastAutoRequest",
         0xFFFFFFFF,
         L"\\Registry\\Machine\\Software\\Microsoft\\Windows\\CurrentVersion\\AutoRotation\\NonPreserve");
  *(_DWORD *)gAutoRotationInfo = v6 <= 3 ? v6 : 0;
  dword_2738F0 = v6 != -1;
  v7 = CLegacyRotationMgr::QueryAutoRotationRegistrySetting(
         (CLegacyRotationMgr *)(v6 != -1),
         L"LastOrientation",
         0,
         L"\\Registry\\Machine\\Software\\Microsoft\\Windows\\CurrentVersion\\AutoRotation");
  *(_DWORD *)Data = v7 <= 3 ? v7 : 0;
  dword_2738E0 = IsNativeOrientationPortrait();
  dword_2738E4 = 0;
  CLegacyRotationMgr::xxxApplyOrientationPreference(this);
}
