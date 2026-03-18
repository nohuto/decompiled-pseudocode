/*
 * XREFs of ?TraceLoggingGDIScaledAppEvent@@YGXXZ @ 0x186798
 * Callers:
 *     _SetAppCompatFlags@4 @ 0x7C302 (_SetAppCompatFlags@4.c)
 * Callees:
 *     __tlgKeywordOn@12 @ 0xB223C (__tlgKeywordOn@12.c)
 *     ??$Write@U?$_tlgWrapperByRef@$07@@@?$_tlgWriteTemplate@$$A6GJPBU_tlgProvider_t@@PBXPBU_GUID@@2IPAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YGJ0122I3@ZPBU2@PBU2@@@SGJPBU_tlgProvider_t@@PBXPBU_GUID@@2ABU?$_tlgWrapperByRef@$07@@@Z @ 0x185B1B (--$Write@U-$_tlgWrapperByRef@$07@@@-$_tlgWriteTemplate@$$A6GJPBU_tlgProvider_t@@PBXPBU_GUID@@2IP.c)
 */

void __stdcall TraceLoggingGDIScaledAppEvent()
{
  int v0; // ecx
  _DWORD *v1; // [esp+4h] [ebp-Ch] BYREF
  _DWORD v2[2]; // [esp+8h] [ebp-8h] BYREF

  if ( (unsigned int)dword_266280 > 5 && _tlgKeywordOn(&dword_266280, 0x400000000000LL) )
  {
    v2[1] = 0;
    v1 = v2;
    v2[0] = 0x1000000;
    _tlgWriteTemplate<long __stdcall (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByRef<8>>(
      v0,
      byte_256134,
      v0,
      v0,
      (int *)&v1);
  }
}
