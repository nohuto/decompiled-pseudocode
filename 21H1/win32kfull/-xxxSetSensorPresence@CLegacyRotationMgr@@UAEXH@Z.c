/*
 * XREFs of ?xxxSetSensorPresence@CLegacyRotationMgr@@UAEXH@Z @ 0x141347
 * Callers:
 *     <none>
 * Callees:
 *     ?UpdateAutoRotationRegistrySetting@CLegacyRotationMgr@@AAEJKPBGK0@Z @ 0xAC6E8 (-UpdateAutoRotationRegistrySetting@CLegacyRotationMgr@@AAEJKPBGK0@Z.c)
 *     __tlgKeywordOn@12 @ 0xB223C (__tlgKeywordOn@12.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6GJPBU_tlgProvider_t@@PBXPBU_GUID@@2IPAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YGJ0122I3@ZPBU2@PBU2@@@SGJPBU_tlgProvider_t@@PBXPBU_GUID@@2ABU?$_tlgWrapperByVal@$03@@@Z @ 0x14061B (--$Write@U-$_tlgWrapperByVal@$03@@@-$_tlgWriteTemplate@$$A6GJPBU_tlgProvider_t@@PBXPBU_GUID@@2IP.c)
 */

void __thiscall CLegacyRotationMgr::xxxSetSensorPresence(CLegacyRotationMgr *this, int Data)
{
  int v2; // esi
  int v3; // ecx

  v2 = Data;
  if ( CLegacyRotationMgr::UpdateAutoRotationRegistrySetting(
         this,
         Data,
         L"SensorPresent",
         0,
         L"\\Registry\\Machine\\Software\\Microsoft\\Windows\\CurrentVersion\\AutoRotation") >= 0 )
  {
    dword_2738D4 = v2;
    if ( !dword_2738F4 )
      dword_2738F4 = v2 != 0;
    if ( (unsigned int)dword_266280 > 5 && _tlgKeywordOn(&dword_266280, 0x400000000001LL) )
    {
      Data = v2;
      _tlgWriteTemplate<long __stdcall (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>>(
        (int)&dword_266280,
        byte_253B8E,
        v3,
        v3,
        (int)&Data);
    }
  }
}
