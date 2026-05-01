/*
 * XREFs of ?RmpActivityHostDecommitOfferedMemoryCommitSaveCallback@@YAJPEAU_RM_ACTIVITY_HOST@@PEAXK1@Z @ 0x18006AFB0
 * Callers:
 *     <none>
 * Callees:
 *     _tlgKeywordOn @ 0x180010200 (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x180044E00 (__security_check_cookie.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByVal@$07@@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByVal@$07@@3@Z @ 0x180062780 (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapperByVal@$07@@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tl.c)
 */

__int64 __fastcall RmpActivityHostDecommitOfferedMemoryCommitSaveCallback(
        struct _RM_ACTIVITY_HOST *a1,
        void *a2,
        int a3,
        _BYTE *a4)
{
  int v6; // eax
  NTSTATUS v7; // ebx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rcx
  int v12; // [rsp+40h] [rbp-40h] BYREF
  NTSTATUS v13; // [rsp+44h] [rbp-3Ch] BYREF
  __int64 v14; // [rsp+48h] [rbp-38h] BYREF
  _OWORD ProcessInformation[2]; // [rsp+50h] [rbp-30h] BYREF

  memset(ProcessInformation, 0, sizeof(ProcessInformation));
  LODWORD(ProcessInformation[0]) = 3;
  if ( (a4[16] & 2) != 0 )
    v6 = 3;
  else
    v6 = 5;
  DWORD1(ProcessInformation[0]) = v6;
  v7 = NtSetInformationProcess(a2, (PROCESSINFOCLASS)65, ProcessInformation, 0x20u);
  if ( v7 >= 0 )
    v7 = 0;
  if ( (unsigned int)dword_1800B31E0 > 5 && tlgKeywordOn((__int64)&dword_1800B31E0, 17LL) )
  {
    v10 = *((_QWORD *)a1 + 4);
    v12 = a3;
    v14 = v10;
    v13 = v7;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>>(
      v10,
      byte_18009BEE2,
      v8,
      v9,
      (__int64)&v13,
      (__int64)&v14,
      (__int64)&v12);
  }
  return (unsigned int)v7;
}
