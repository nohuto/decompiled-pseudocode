/*
 * XREFs of ?xxxRefreshDisplayOrientation@CLegacyRotationMgr@@UAEXXZ @ 0xB20A4
 * Callers:
 *     <none>
 * Callees:
 *     ?xxxApplyOrientationPreference@CLegacyRotationMgr@@AAEXXZ @ 0xB2190 (-xxxApplyOrientationPreference@CLegacyRotationMgr@@AAEXXZ.c)
 *     __tlgKeywordOn@12 @ 0xB223C (__tlgKeywordOn@12.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6GJPBU_tlgProvider_t@@PBXPBU_GUID@@2IPAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YGJ0122I3@ZPBU2@PBU2@@@SGJPBU_tlgProvider_t@@PBXPBU_GUID@@2ABU?$_tlgWrapperByVal@$03@@@Z @ 0x14061B (--$Write@U-$_tlgWrapperByVal@$03@@@-$_tlgWriteTemplate@$$A6GJPBU_tlgProvider_t@@PBXPBU_GUID@@2IP.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@@?$_tlgWriteTemplate@$$A6GJPBU_tlgProvider_t@@PBXPBU_GUID@@2IPAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YGJ0122I3@ZPBU2@PBU2@@@SGJPBU_tlgProvider_t@@PBXPBU_GUID@@2ABU?$_tlgWrapperByVal@$03@@3@Z @ 0x140661 (--$Write@U-$_tlgWrapperByVal@$03@@U1@@-$_tlgWriteTemplate@$$A6GJPBU_tlgProvider_t@@PBXPBU_GUID@@.c)
 *     ?xxxApplyDockedOrientation@CLegacyRotationMgr@@AAEXXZ @ 0x140D98 (-xxxApplyDockedOrientation@CLegacyRotationMgr@@AAEXXZ.c)
 *     ?xxxRestoreSlateAutorotationPreferences@CLegacyRotationMgr@@AAEXXZ @ 0x140FCE (-xxxRestoreSlateAutorotationPreferences@CLegacyRotationMgr@@AAEXXZ.c)
 */

void __thiscall CLegacyRotationMgr::xxxRefreshDisplayOrientation(CLegacyRotationMgr *this)
{
  int v2; // ecx
  int v3; // edi
  int v4; // ecx
  int v5; // edi
  int v6; // ecx
  int v7; // [esp+Ch] [ebp-Ch] BYREF
  int v8; // [esp+10h] [ebp-8h] BYREF
  int v9; // [esp+14h] [ebp-4h] BYREF

  if ( (unsigned int)dword_266280 > 5 && (unsigned __int8)_tlgKeywordOn(1, 0x2000) )
  {
    v7 = dword_2738D4;
    _tlgWriteTemplate<long __stdcall (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>>(
      (int)&dword_266280,
      (int)&unk_253A9A,
      v2,
      v2,
      (int)&v7);
  }
  v3 = *(_DWORD *)(_gpsi + 1836) & 8;
  if ( (unsigned int)dword_266280 > 5 && (unsigned __int8)_tlgKeywordOn(1, 0x2000) )
  {
    v9 = dword_2738DC;
    v8 = v3 != 0;
    _tlgWriteTemplate<long __stdcall (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      (int)&dword_266280,
      (int)&unk_253AE1,
      v4,
      v4,
      (int)&v9,
      (int)&v8);
  }
  if ( dword_2738DC && !v3 && !dword_2738D8 )
    CLegacyRotationMgr::xxxRestoreSlateAutorotationPreferences(this);
  dword_2738DC = v3 != 0;
  v5 = *(_DWORD *)(_gpsi + 1836) & 0x10;
  if ( (unsigned int)dword_266280 > 5 && (unsigned __int8)_tlgKeywordOn(1, 0x2000) )
  {
    v8 = dword_2738D8;
    v9 = v5 != 0;
    _tlgWriteTemplate<long __stdcall (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      (int)&dword_266280,
      (int)&unk_253B3A,
      v6,
      v6,
      (int)&v8,
      (int)&v9);
  }
  if ( dword_2738D8 && !v5 && !dword_2738DC )
    CLegacyRotationMgr::xxxRestoreSlateAutorotationPreferences(this);
  dword_2738D8 = v5 != 0;
  if ( dword_2738DC || v5 )
    CLegacyRotationMgr::xxxApplyDockedOrientation(this);
  else
    CLegacyRotationMgr::xxxApplyOrientationPreference(this);
}
