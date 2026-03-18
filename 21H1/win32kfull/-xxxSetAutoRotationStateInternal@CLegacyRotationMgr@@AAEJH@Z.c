/*
 * XREFs of ?xxxSetAutoRotationStateInternal@CLegacyRotationMgr@@AAEJH@Z @ 0x1412C3
 * Callers:
 *     ?RotationLockTogglePressed@CLegacyRotationMgr@@UAEXXZ @ 0x140B88 (-RotationLockTogglePressed@CLegacyRotationMgr@@UAEXXZ.c)
 *     ?xxxApplyDockedOrientation@CLegacyRotationMgr@@AAEXXZ @ 0x140D98 (-xxxApplyDockedOrientation@CLegacyRotationMgr@@AAEXXZ.c)
 *     ?xxxRestoreSlateAutorotationPreferences@CLegacyRotationMgr@@AAEXXZ @ 0x140FCE (-xxxRestoreSlateAutorotationPreferences@CLegacyRotationMgr@@AAEXXZ.c)
 *     ?xxxSetAutoRotationState@CLegacyRotationMgr@@UAEJH@Z @ 0x141298 (-xxxSetAutoRotationState@CLegacyRotationMgr@@UAEJH@Z.c)
 * Callees:
 *     ?CacheRotationInfo@CLegacyRotationMgr@@UAEXXZ @ 0xAC666 (-CacheRotationInfo@CLegacyRotationMgr@@UAEXXZ.c)
 *     ?UpdateAutoRotationRegistrySetting@CLegacyRotationMgr@@AAEJKPBGK0@Z @ 0xAC6E8 (-UpdateAutoRotationRegistrySetting@CLegacyRotationMgr@@AAEJKPBGK0@Z.c)
 *     __tlgKeywordOn@12 @ 0xB223C (__tlgKeywordOn@12.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@@?$_tlgWriteTemplate@$$A6GJPBU_tlgProvider_t@@PBXPBU_GUID@@2IPAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YGJ0122I3@ZPBU2@PBU2@@@SGJPBU_tlgProvider_t@@PBXPBU_GUID@@2ABU?$_tlgWrapperByVal@$03@@3@Z @ 0x140661 (--$Write@U-$_tlgWrapperByVal@$03@@U1@@-$_tlgWriteTemplate@$$A6GJPBU_tlgProvider_t@@PBXPBU_GUID@@.c)
 */

NTSTATUS __thiscall CLegacyRotationMgr::xxxSetAutoRotationStateInternal(CLegacyRotationMgr *this, int Data)
{
  int v2; // esi
  NTSTATUS updated; // edi
  int v5; // ecx
  int v7; // [esp+10h] [ebp-4h] BYREF

  v2 = Data;
  updated = CLegacyRotationMgr::UpdateAutoRotationRegistrySetting(
              this,
              Data,
              L"Enable",
              0,
              L"\\Registry\\Machine\\Software\\Microsoft\\Windows\\CurrentVersion\\AutoRotation");
  if ( updated >= 0 )
  {
    dword_2738D0 = v2;
    if ( (unsigned int)dword_266280 > 5 && _tlgKeywordOn(&dword_266280, 0x400000000001LL) )
    {
      Data = 0;
      v7 = v2;
      _tlgWriteTemplate<long __stdcall (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        (int)&dword_266280,
        byte_253A05,
        v5,
        v5,
        (int)&v7,
        (int)&Data);
    }
    if ( !dword_2738D0 )
      CLegacyRotationMgr::CacheRotationInfo(this);
  }
  return updated;
}
