/*
 * XREFs of _TraceLoggingPTPWarpBack@24 @ 0x18757D
 * Callers:
 *     <none>
 * Callees:
 *     __tlgKeywordOn@12 @ 0xB223C (__tlgKeywordOn@12.c)
 *     ??$Write@U?$_tlgWrapperByRef@$07@@U?$_tlgWrapperByVal@$03@@U2@U2@U2@@?$_tlgWriteTemplate@$$A6GJPBU_tlgProvider_t@@PBXPBU_GUID@@2IPAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YGJ0122I3@ZPBU2@PBU2@@@SGJPBU_tlgProvider_t@@PBXPBU_GUID@@2ABU?$_tlgWrapperByRef@$07@@ABU?$_tlgWrapperByVal@$03@@444@Z @ 0x14BB32 (--$Write@U-$_tlgWrapperByRef@$07@@U-$_tlgWrapperByVal@$03@@U2@U2@U2@@-$_tlgWriteTemplate@$$A6GJP.c)
 */

void __stdcall TraceLoggingPTPWarpBack(int a1, int a2, _DWORD *a3, int a4, int a5, int a6)
{
  int v6; // ecx
  _DWORD v7[3]; // [esp+4h] [ebp-10h] BYREF
  int v8; // [esp+10h] [ebp-4h] BYREF

  if ( (unsigned int)dword_266280 > 5 && _tlgKeywordOn(&dword_266280, 0x200000000000LL) )
  {
    v8 = a5 - (_DWORD)a3;
    v7[1] = 0;
    a5 = a4 - a2;
    a3 = v7;
    v7[0] = 0x1000000;
    _tlgWriteTemplate<long __stdcall (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByRef<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      (int)&dword_266280,
      byte_256168,
      v6,
      v6,
      (int *)&a3,
      (int)&a5,
      (int)&v8,
      (int)&a6,
      (int)&a1);
  }
}
