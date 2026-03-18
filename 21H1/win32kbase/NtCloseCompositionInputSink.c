/*
 * XREFs of NtCloseCompositionInputSink @ 0x1C00395E0
 * Callers:
 *     <none>
 * Callees:
 *     _tlgKeywordOn @ 0x1C0069BE0 (_tlgKeywordOn.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@@Z @ 0x1C01697D8 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgPr.c)
 */

NTSTATUS __fastcall NtCloseCompositionInputSink(HANDLE Handle, __int64 a2, __int64 a3, __int64 a4)
{
  int v6; // r8d
  int v7; // r9d
  int v8; // [rsp+48h] [rbp+10h] BYREF
  HANDLE v9; // [rsp+50h] [rbp+18h] BYREF

  if ( (unsigned int)dword_1C024C960 > 5 && (unsigned __int8)tlgKeywordOn(&dword_1C024C960, 4LL, a3, a4) )
  {
    v8 = 0;
    v9 = Handle;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>>(
      (unsigned int)&dword_1C024C960,
      (unsigned int)&unk_1C022051B,
      v6,
      v7,
      (__int64)&v9,
      (__int64)&v8);
  }
  return NtClose(Handle);
}
