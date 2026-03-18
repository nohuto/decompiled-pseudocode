/*
 * XREFs of ?TraceLoggingScreenOrientationChangeEvent@@YGXKW4arInitiatedBy@@HW4arFailureReason@@@Z @ 0x186F6A
 * Callers:
 *     ?xxxApplyOrientationPreference@CLegacyRotationMgr@@AAEXXZ @ 0xB2190 (-xxxApplyOrientationPreference@CLegacyRotationMgr@@AAEXXZ.c)
 *     ?xxxApplyDockedOrientation@CLegacyRotationMgr@@AAEXXZ @ 0x140D98 (-xxxApplyDockedOrientation@CLegacyRotationMgr@@AAEXXZ.c)
 *     ?xxxAutoRotateScreen@CLegacyRotationMgr@@UAEJK@Z @ 0x140E60 (-xxxAutoRotateScreen@CLegacyRotationMgr@@UAEJK@Z.c)
 * Callees:
 *     __tlgKeywordOn@12 @ 0xB223C (__tlgKeywordOn@12.c)
 *     ??$Write@U?$_tlgWrapperByRef@$07@@U?$_tlgWrapperByVal@$03@@U2@U2@U2@@?$_tlgWriteTemplate@$$A6GJPBU_tlgProvider_t@@PBXPBU_GUID@@2IPAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YGJ0122I3@ZPBU2@PBU2@@@SGJPBU_tlgProvider_t@@PBXPBU_GUID@@2ABU?$_tlgWrapperByRef@$07@@ABU?$_tlgWrapperByVal@$03@@444@Z @ 0x14BB32 (--$Write@U-$_tlgWrapperByRef@$07@@U-$_tlgWrapperByVal@$03@@U2@U2@U2@@-$_tlgWriteTemplate@$$A6GJP.c)
 */

void __fastcall TraceLoggingScreenOrientationChangeEvent(int a1, int a2, int a3, int a4)
{
  int v6; // ecx
  _DWORD v7[3]; // [esp+Ch] [ebp-18h] BYREF
  int v8; // [esp+18h] [ebp-Ch] BYREF
  int v9; // [esp+1Ch] [ebp-8h] BYREF
  int v10; // [esp+20h] [ebp-4h] BYREF

  if ( (unsigned int)dword_266280 > 5 && _tlgKeywordOn(&dword_266280, 0x400000000001LL) )
  {
    v7[1] = 0;
    v8 = (int)v7;
    v7[0] = 0x1000000;
    v10 = a2;
    v9 = a1;
    _tlgWriteTemplate<long __stdcall (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByRef<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      (int)&dword_266280,
      byte_2563AB,
      v6,
      v6,
      &v8,
      (int)&v9,
      (int)&v10,
      (int)&a3,
      (int)&a4);
  }
}
