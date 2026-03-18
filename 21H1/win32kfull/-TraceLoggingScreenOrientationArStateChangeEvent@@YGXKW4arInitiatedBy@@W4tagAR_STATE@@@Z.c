/*
 * XREFs of ?TraceLoggingScreenOrientationArStateChangeEvent@@YGXKW4arInitiatedBy@@W4tagAR_STATE@@@Z @ 0x186EF4
 * Callers:
 *     ?xxxAutoRotateScreen@CLegacyRotationMgr@@UAEJK@Z @ 0x140E60 (-xxxAutoRotateScreen@CLegacyRotationMgr@@UAEJK@Z.c)
 * Callees:
 *     __tlgKeywordOn@12 @ 0xB223C (__tlgKeywordOn@12.c)
 *     ??$Write@U?$_tlgWrapperByRef@$07@@U?$_tlgWrapperByVal@$03@@U2@U2@U2@@?$_tlgWriteTemplate@$$A6GJPBU_tlgProvider_t@@PBXPBU_GUID@@2IPAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YGJ0122I3@ZPBU2@PBU2@@@SGJPBU_tlgProvider_t@@PBXPBU_GUID@@2ABU?$_tlgWrapperByRef@$07@@ABU?$_tlgWrapperByVal@$03@@444@Z @ 0x14BB32 (--$Write@U-$_tlgWrapperByRef@$07@@U-$_tlgWrapperByVal@$03@@U2@U2@U2@@-$_tlgWriteTemplate@$$A6GJP.c)
 */

void __thiscall TraceLoggingScreenOrientationArStateChangeEvent(void *this, int a2)
{
  int v3; // ecx
  _DWORD v4[2]; // [esp+Ch] [ebp-18h] BYREF
  int v5; // [esp+14h] [ebp-10h] BYREF
  int v6; // [esp+18h] [ebp-Ch] BYREF
  int v7; // [esp+1Ch] [ebp-8h] BYREF
  int v8; // [esp+20h] [ebp-4h] BYREF

  if ( (unsigned int)dword_266280 > 5 && _tlgKeywordOn(&dword_266280, 0x400000000000LL) )
  {
    v5 = (int)v4;
    v4[0] = 0x1000000;
    v4[1] = 0;
    v8 = 0;
    v7 = 0;
    v6 = (int)this;
    _tlgWriteTemplate<long __stdcall (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByRef<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      (int)&dword_266280,
      byte_256347,
      v3,
      v3,
      &v5,
      (int)&v6,
      (int)&v7,
      (int)&v8,
      (int)&a2);
  }
}
