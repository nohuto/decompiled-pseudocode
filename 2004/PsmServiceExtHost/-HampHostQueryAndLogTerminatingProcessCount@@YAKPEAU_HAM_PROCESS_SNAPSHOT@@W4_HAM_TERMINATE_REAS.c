/*
 * XREFs of ?HampHostQueryAndLogTerminatingProcessCount@@YAKPEAU_HAM_PROCESS_SNAPSHOT@@W4_HAM_TERMINATE_REASON@@@Z @ 0x180005584
 * Callers:
 *     ?HampHostTerminateWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x1800058F0 (-HampHostTerminateWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z.c)
 * Callees:
 *     _tlgKeywordOn @ 0x180010200 (_tlgKeywordOn.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@3@Z @ 0x18006A72C (--$Write@U-$_tlgWrapperByVal@$07@@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUI.c)
 */

__int64 __fastcall HampHostQueryAndLogTerminatingProcessCount(__int64 a1, int a2)
{
  unsigned int v2; // edi
  __int64 i; // rsi
  unsigned int v6; // ebx
  unsigned int v7; // r15d
  int v8; // ecx
  int v9; // r8d
  unsigned int v10; // r9d
  _BYTE ProcessInformation[64]; // [rsp+30h] [rbp-68h] BYREF
  __int64 v13; // [rsp+A0h] [rbp+8h] BYREF
  __int64 v14; // [rsp+B0h] [rbp+18h] BYREF

  v2 = 0;
  for ( i = 0LL; (unsigned int)i < *(_DWORD *)(a1 + 16); i = (unsigned int)(i + 1) )
  {
    NtQueryInformationProcess(
      *(HANDLE *)(*(_QWORD *)a1 + 8 * i),
      ProcessBasicInformation,
      ProcessInformation,
      0x40u,
      0LL);
    if ( (ProcessInformation[56] & 4) != 0 )
    {
      ++v2;
    }
    else
    {
      if ( a2 == 256 )
      {
        v6 = 0;
      }
      else if ( a2 == 512 )
      {
        v6 = 4;
      }
      else
      {
        v6 = 2;
        if ( a2 != 2048 )
          v6 = 4;
      }
      v7 = *(_DWORD *)(*(_QWORD *)(a1 + 8) + 4 * i);
      if ( (int)WerpAddTerminationReason(v7, v6, L"HAM", 0LL) < 0 )
        WerpAddTerminationReason(v7, v6, L"HAM", 0LL);
    }
  }
  if ( (unsigned int)dword_1800B3218 > 4 && (unsigned __int8)tlgKeywordOn(&dword_1800B3218, 64LL) )
  {
    v13 = v10;
    v14 = v2;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>>(
      v8,
      (unsigned int)&unk_1800A0B0F,
      v9,
      v10,
      (__int64)&v14,
      (__int64)&v13);
  }
  return v2;
}
