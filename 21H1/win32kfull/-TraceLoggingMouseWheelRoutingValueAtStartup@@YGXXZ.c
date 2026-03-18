/*
 * XREFs of ?TraceLoggingMouseWheelRoutingValueAtStartup@@YGXXZ @ 0xD57B0
 * Callers:
 *     _RawInputThread@4 @ 0xD57F4 (_RawInputThread@4.c)
 * Callees:
 *     __tlgKeywordOn@12 @ 0xB223C (__tlgKeywordOn@12.c)
 *     ??$Write@U?$_tlgWrapperByRef@$07@@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6GJPBU_tlgProvider_t@@PBXPBU_GUID@@2IPAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YGJ0122I3@ZPBU2@PBU2@@@SGJPBU_tlgProvider_t@@PBXPBU_GUID@@2ABU?$_tlgWrapperByRef@$07@@ABU?$_tlgWrapperByVal@$03@@@Z @ 0x146906 (--$Write@U-$_tlgWrapperByRef@$07@@U-$_tlgWrapperByVal@$03@@@-$_tlgWriteTemplate@$$A6GJPBU_tlgPro.c)
 */

void __stdcall TraceLoggingMouseWheelRoutingValueAtStartup()
{
  int v0; // esi
  int v1; // ecx
  _DWORD v2[2]; // [esp+8h] [ebp-10h] BYREF
  int v3; // [esp+10h] [ebp-8h] BYREF
  int v4; // [esp+14h] [ebp-4h] BYREF

  v0 = *(_DWORD *)UPDWORDPointer(8220);
  if ( (unsigned int)dword_266280 > 5 && _tlgKeywordOn(&dword_266280, 0x200000000000LL) )
  {
    v2[1] = 0;
    v3 = (int)v2;
    v2[0] = 0x1000000;
    v4 = v0;
    _tlgWriteTemplate<long __stdcall (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByRef<8>,_tlgWrapperByVal<4>>(
      (int)&dword_266280,
      (int)&unk_255EA1,
      v1,
      v1,
      (int)&v3,
      (int)&v4);
  }
}
