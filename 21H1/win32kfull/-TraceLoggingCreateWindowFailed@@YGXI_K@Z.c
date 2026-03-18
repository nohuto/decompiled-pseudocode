/*
 * XREFs of ?TraceLoggingCreateWindowFailed@@YGXI_K@Z @ 0x1866D7
 * Callers:
 *     _xxxCreateWindowEx@68 @ 0x2D67C (_xxxCreateWindowEx@68.c)
 * Callees:
 *     __tlgKeywordOn@12 @ 0xB223C (__tlgKeywordOn@12.c)
 *     ??$Write@U?$_tlgWrapperByRef@$07@@U?$_tlgWrapperByVal@$03@@U1@@?$_tlgWriteTemplate@$$A6GJPBU_tlgProvider_t@@PBXPBU_GUID@@2IPAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YGJ0122I3@ZPBU2@PBU2@@@SGJPBU_tlgProvider_t@@PBXPBU_GUID@@2ABU?$_tlgWrapperByRef@$07@@ABU?$_tlgWrapperByVal@$03@@3@Z @ 0x186008 (--$Write@U-$_tlgWrapperByRef@$07@@U-$_tlgWrapperByVal@$03@@U1@@-$_tlgWriteTemplate@$$A6GJPBU_tlg.c)
 */

void __userpurge TraceLoggingCreateWindowFailed(int a1@<ecx>, char a2, unsigned __int64 a3)
{
  int v4; // ecx
  char *v5; // [esp+4h] [ebp-14h] BYREF
  int v6; // [esp+8h] [ebp-10h] BYREF
  _DWORD *v7; // [esp+Ch] [ebp-Ch] BYREF
  _DWORD v8[2]; // [esp+10h] [ebp-8h] BYREF

  if ( (unsigned int)dword_266280 > 5 && _tlgKeywordOn(&dword_266280, 0x400000000000LL) )
  {
    v8[1] = 0;
    v5 = &a2;
    v8[0] = 0x1000000;
    v7 = v8;
    v6 = a1;
    _tlgWriteTemplate<long __stdcall (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByRef<8>,_tlgWrapperByVal<4>,_tlgWrapperByRef<8>>(
      v4,
      byte_255948,
      v4,
      v4,
      (int *)&v7,
      (int)&v6,
      (int *)&v5);
  }
}
