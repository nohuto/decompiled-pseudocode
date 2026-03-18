/*
 * XREFs of ?xxxSetSlateAutoRotationState@CLegacyRotationMgr@@AAEJH@Z @ 0x1413BE
 * Callers:
 *     ?RotationLockTogglePressed@CLegacyRotationMgr@@UAEXXZ @ 0x140B88 (-RotationLockTogglePressed@CLegacyRotationMgr@@UAEXXZ.c)
 *     ?xxxSetAutoRotationState@CLegacyRotationMgr@@UAEJH@Z @ 0x141298 (-xxxSetAutoRotationState@CLegacyRotationMgr@@UAEJH@Z.c)
 * Callees:
 *     ?UpdateAutoRotationRegistrySetting@CLegacyRotationMgr@@AAEJKPBGK0@Z @ 0xAC6E8 (-UpdateAutoRotationRegistrySetting@CLegacyRotationMgr@@AAEJKPBGK0@Z.c)
 *     __tlgKeywordOn@12 @ 0xB223C (__tlgKeywordOn@12.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6GJPBU_tlgProvider_t@@PBXPBU_GUID@@2IPAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YGJ0122I3@ZPBU2@PBU2@@@SGJPBU_tlgProvider_t@@PBXPBU_GUID@@2ABU?$_tlgWrapperByVal@$03@@@Z @ 0x14061B (--$Write@U-$_tlgWrapperByVal@$03@@@-$_tlgWriteTemplate@$$A6GJPBU_tlgProvider_t@@PBXPBU_GUID@@2IP.c)
 */

NTSTATUS __thiscall CLegacyRotationMgr::xxxSetSlateAutoRotationState(CLegacyRotationMgr *this, int Data)
{
  int v2; // esi
  NTSTATUS updated; // edi
  int v4; // ecx

  v2 = Data;
  updated = CLegacyRotationMgr::UpdateAutoRotationRegistrySetting(
              this,
              Data,
              L"SlateEnable",
              0,
              L"\\Registry\\Machine\\Software\\Microsoft\\Windows\\CurrentVersion\\AutoRotation");
  if ( updated >= 0 )
  {
    *(_DWORD *)dword_273900 = v2;
    if ( (unsigned int)dword_266280 > 5 && _tlgKeywordOn(&dword_266280, 0x200000000001LL) )
    {
      Data = v2;
      _tlgWriteTemplate<long __stdcall (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>>(
        (int)&dword_266280,
        byte_253A51,
        v4,
        v4,
        (int)&Data);
    }
  }
  return updated;
}
