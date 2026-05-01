/*
 * XREFs of ?RmpEnforcementEmptyProcessAndLog@@YAKPEAU_RM_ACTIVITY_HOST@@PEAXKKK@Z @ 0x180070EE8
 * Callers:
 *     ?RmpEnforcementEmptyProcess@@YAJPEAU_RM_ACTIVITY_HOST@@PEAXK1@Z @ 0x180070E50 (-RmpEnforcementEmptyProcess@@YAJPEAU_RM_ACTIVITY_HOST@@PEAXK1@Z.c)
 * Callees:
 *     _tlgKeywordOn @ 0x180010200 (_tlgKeywordOn.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@G@@U1@U?$_tlgWrapperByVal@$07@@U1@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@G@@3AEBU?$_tlgWrapperByVal@$07@@33@Z @ 0x1800709B8 (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@G@@U1@U-$_tlgWrapperByVal@$07@@U1@U1@@-$_tlgWrit.c)
 *     MemUtilEmptyProcess @ 0x180085ABC (MemUtilEmptyProcess.c)
 */

__int64 __fastcall RmpEnforcementEmptyProcessAndLog(
        struct _RM_ACTIVITY_HOST *a1,
        void *a2,
        int a3,
        unsigned int a4,
        unsigned int a5)
{
  unsigned int v8; // ebx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rcx
  int v13; // [rsp+50h] [rbp-20h] BYREF
  int v14; // [rsp+54h] [rbp-1Ch] BYREF
  unsigned int v15; // [rsp+58h] [rbp-18h] BYREF
  __int64 v16; // [rsp+60h] [rbp-10h] BYREF
  void *v17; // [rsp+68h] [rbp-8h] BYREF

  v8 = MemUtilEmptyProcess(a2);
  if ( (unsigned int)dword_1800B31E0 > 4 && tlgKeywordOn((__int64)&dword_1800B31E0, 17LL) )
  {
    v11 = *((_QWORD *)a1 + 4);
    v14 = *((_DWORD *)a1 + 156);
    v17 = (char *)a1 + 88;
    a5 = a4;
    v13 = a3;
    v16 = v11;
    v15 = v8;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      v11,
      byte_18009CE7B,
      v9,
      v10,
      (__int64)&v15,
      &v17,
      (__int64)&v14,
      (__int64)&v16,
      (__int64)&v13,
      (__int64)&a5);
  }
  return v8;
}
