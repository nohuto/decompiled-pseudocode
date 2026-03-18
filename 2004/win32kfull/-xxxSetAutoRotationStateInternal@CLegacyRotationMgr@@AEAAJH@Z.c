/*
 * XREFs of ?xxxSetAutoRotationStateInternal@CLegacyRotationMgr@@AEAAJH@Z @ 0x1C01D23D4
 * Callers:
 *     ?RotationLockTogglePressed@CLegacyRotationMgr@@UEAAXXZ @ 0x1C01D1C30 (-RotationLockTogglePressed@CLegacyRotationMgr@@UEAAXXZ.c)
 *     ?xxxApplyDockedOrientation@CLegacyRotationMgr@@AEAAXXZ @ 0x1C01D1E08 (-xxxApplyDockedOrientation@CLegacyRotationMgr@@AEAAXXZ.c)
 *     ?xxxRestoreSlateAutorotationPreferences@CLegacyRotationMgr@@AEAAXXZ @ 0x1C01D2038 (-xxxRestoreSlateAutorotationPreferences@CLegacyRotationMgr@@AEAAXXZ.c)
 *     ?xxxSetAutoRotationState@CLegacyRotationMgr@@UEAAJH@Z @ 0x1C01D23A0 (-xxxSetAutoRotationState@CLegacyRotationMgr@@UEAAJH@Z.c)
 * Callees:
 *     ?CacheRotationInfo@CLegacyRotationMgr@@UEAAXXZ @ 0x1C0055F50 (-CacheRotationInfo@CLegacyRotationMgr@@UEAAXXZ.c)
 *     ?UpdateAutoRotationRegistrySetting@CLegacyRotationMgr@@AEAAJKPEBGK0@Z @ 0x1C0056228 (-UpdateAutoRotationRegistrySetting@CLegacyRotationMgr@@AEAAJKPEBGK0@Z.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@3@Z @ 0x1C01D16A0 (--$Write@U-$_tlgWrapperByVal@$03@@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUI.c)
 */

__int64 __fastcall CLegacyRotationMgr::xxxSetAutoRotationStateInternal(CLegacyRotationMgr *this, int a2)
{
  __int64 v4; // rcx
  int updated; // edi
  __int64 v6; // r8
  __int64 v7; // r9
  int v9; // [rsp+50h] [rbp+18h] BYREF
  int v10; // [rsp+58h] [rbp+20h] BYREF

  updated = CLegacyRotationMgr::UpdateAutoRotationRegistrySetting(
              this,
              a2,
              L"Enable",
              0,
              L"\\Registry\\Machine\\Software\\Microsoft\\Windows\\CurrentVersion\\AutoRotation");
  if ( updated >= 0 )
  {
    dword_1C0336618 = a2;
    if ( (unsigned int)dword_1C032B3F8 > 5
      && (qword_1C032B408 & 0x400000000001LL) != 0
      && (qword_1C032B410 & 0x400000000001LL) == qword_1C032B410 )
    {
      v9 = 0;
      v10 = a2;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        v4,
        (int)&unk_1C02EF51D,
        v6,
        v7,
        (__int64)&v10,
        (__int64)&v9);
    }
    if ( !dword_1C0336618 )
      CLegacyRotationMgr::CacheRotationInfo(this);
  }
  return (unsigned int)updated;
}
