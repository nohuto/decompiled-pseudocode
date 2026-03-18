/*
 * XREFs of ?DeliverRawInput@Mouse@InputTraceLogging@@SGX_K_N@Z @ 0x1469E1
 * Callers:
 *     _EditionPostRawMouseInputMessage@24 @ 0xACE78 (_EditionPostRawMouseInputMessage@24.c)
 * Callees:
 *     __tlgKeywordOn@12 @ 0xB223C (__tlgKeywordOn@12.c)
 *     ??$Write@U?$_tlgWrapperByRef@$07@@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6GJPBU_tlgProvider_t@@PBXPBU_GUID@@2IPAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YGJ0122I3@ZPBU2@PBU2@@@SGJPBU_tlgProvider_t@@PBXPBU_GUID@@2ABU?$_tlgWrapperByRef@$07@@ABU?$_tlgWrapperByVal@$03@@@Z @ 0x146906 (--$Write@U-$_tlgWrapperByRef@$07@@U-$_tlgWrapperByVal@$03@@@-$_tlgWriteTemplate@$$A6GJPBU_tlgPro.c)
 */

void __userpurge InputTraceLogging::Mouse::DeliverRawInput(unsigned __int8 a1@<cl>, unsigned __int64 a2, bool a3)
{
  int v4; // ecx
  unsigned __int64 v5; // [esp+8h] [ebp-10h] BYREF
  int v6; // [esp+14h] [ebp-4h] BYREF

  if ( (unsigned int)dword_2689E8 > 4 && _tlgKeywordOn(&dword_2689E8, 64LL) )
  {
    v5 = a2;
    HIDWORD(a2) = a1;
    v6 = (int)&v5;
    _tlgWriteTemplate<long __stdcall (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByRef<8>,_tlgWrapperByVal<4>>(
      (int)&dword_2689E8,
      byte_25409E,
      v4,
      v4,
      &v6,
      (int)&a2 + 4);
  }
}
