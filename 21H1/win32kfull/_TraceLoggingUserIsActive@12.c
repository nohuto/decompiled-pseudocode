/*
 * XREFs of _TraceLoggingUserIsActive@12 @ 0xF438A
 * Callers:
 *     <none>
 * Callees:
 *     __tlgKeywordOn@12 @ 0xB223C (__tlgKeywordOn@12.c)
 *     ??$Write@U?$_tlgWrapperByRef@$07@@U1@U?$_tlgWrapperByVal@$03@@U2@U2@@?$_tlgWriteTemplate@$$A6GJPBU_tlgProvider_t@@PBXPBU_GUID@@2IPAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YGJ0122I3@ZPBU2@PBU2@@@SGJPBU_tlgProvider_t@@PBXPBU_GUID@@2ABU?$_tlgWrapperByRef@$07@@3ABU?$_tlgWrapperByVal@$03@@44@Z @ 0x185B65 (--$Write@U-$_tlgWrapperByRef@$07@@U1@U-$_tlgWrapperByVal@$03@@U2@U2@@-$_tlgWriteTemplate@$$A6GJP.c)
 */

void __stdcall TraceLoggingUserIsActive(int a1, char a2, int a3)
{
  int v3; // ecx
  _DWORD v4[2]; // [esp+0h] [ebp-18h] BYREF
  _DWORD *v5; // [esp+8h] [ebp-10h] BYREF
  char *v6; // [esp+Ch] [ebp-Ch] BYREF
  int v7; // [esp+10h] [ebp-8h] BYREF
  int v8; // [esp+14h] [ebp-4h] BYREF

  if ( (unsigned int)dword_266280 > 5 && _tlgKeywordOn(&dword_266280, 0x200000000000LL) )
  {
    v8 = _gSessionId;
    v4[1] = 0;
    v6 = &a2;
    v5 = v4;
    v4[0] = 50331648;
    v7 = 12;
    _tlgWriteTemplate<long __stdcall (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByRef<8>,_tlgWrapperByRef<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      v3,
      v3,
      &v5,
      &v6,
      &a1,
      &v7,
      &v8);
  }
}
