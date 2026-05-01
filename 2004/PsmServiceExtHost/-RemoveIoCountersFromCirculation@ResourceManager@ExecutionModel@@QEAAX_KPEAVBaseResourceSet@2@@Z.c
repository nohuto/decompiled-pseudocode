/*
 * XREFs of ?RemoveIoCountersFromCirculation@ResourceManager@ExecutionModel@@QEAAX_KPEAVBaseResourceSet@2@@Z @ 0x180067520
 * Callers:
 *     ?RmpSystemNotificationPowerCallback@@YAKPEAXK0@Z @ 0x18003E320 (-RmpSystemNotificationPowerCallback@@YAKPEAXK0@Z.c)
 * Callees:
 *     _tlgKeywordOn @ 0x180010200 (_tlgKeywordOn.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@U1@U1@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@3333@Z @ 0x1800671F0 (--$Write@U-$_tlgWrapperByVal@$07@@U1@U1@U1@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEB.c)
 */

void __fastcall ExecutionModel::ResourceManager::RemoveIoCountersFromCirculation(
        ExecutionModel::ResourceManager *this,
        unsigned __int64 a2,
        struct ExecutionModel::BaseResourceSet *a3)
{
  __int64 v3; // r10
  unsigned __int64 v4; // rax
  unsigned __int64 v5; // r11
  unsigned __int64 v6; // rbx
  struct ExecutionModel::BaseResourceSet *v7; // rdi
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // r10
  __int64 v12; // r11
  __int64 v13[5]; // [rsp+50h] [rbp-28h] BYREF
  __int64 v14; // [rsp+80h] [rbp+8h] BYREF
  unsigned __int64 v15; // [rsp+88h] [rbp+10h] BYREF
  struct ExecutionModel::BaseResourceSet *v16; // [rsp+90h] [rbp+18h] BYREF
  __int64 v17; // [rsp+98h] [rbp+20h] BYREF

  v16 = a3;
  v3 = *((_QWORD *)this + 4);
  *((_QWORD *)this + 6) += a2;
  if ( (*(_BYTE *)(v3 + 1272) & 4) == 0 )
  {
    v4 = *(_QWORD *)(v3 + 128);
    v5 = v4;
    if ( a2 < v4 )
      v5 = a2;
    v6 = a2 - v5;
    *(_QWORD *)(v3 + 128) = v4 - v5;
    *((_QWORD *)this + 7) += a2 - v5;
    v7 = (struct ExecutionModel::BaseResourceSet *)*((_QWORD *)this + 7);
    if ( (unsigned int)dword_1800B31E0 > 4 )
    {
      if ( tlgKeywordOn((__int64)&dword_1800B31E0, 1LL) )
      {
        v14 = *(_QWORD *)(v11 + 128);
        v16 = v7;
        v15 = v6;
        v17 = v12;
        v13[0] = v10;
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>>(
          v8,
          byte_18009ACB0,
          v9,
          v10,
          (__int64)v13,
          (__int64)&v17,
          (__int64)&v15,
          (__int64)&v14,
          (__int64)&v16);
      }
    }
  }
}
