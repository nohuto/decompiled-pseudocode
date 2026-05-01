/*
 * XREFs of ?RmpEnforcementApplyForegroundBoost@@YAJPEAU_RM_ACTIVITY_HOST@@PEAXK1@Z @ 0x180035240
 * Callers:
 *     <none>
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByVal@$07@@U1@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByVal@$07@@33@Z @ 0x180076DB0 (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapperByVal@$07@@U1@U1@@-$_tlgWriteTemplate@$$A6AJPEBU.c)
 */

__int64 __fastcall RmpEnforcementApplyForegroundBoost(struct _RM_ACTIVITY_HOST *a1, void *a2, int a3, void *a4)
{
  BOOL v6; // edi
  unsigned int v7; // ebx
  int v8; // r8d
  int v9; // r9d
  __int64 v11; // rcx
  BOOL v12; // [rsp+40h] [rbp-28h] BYREF
  int v13; // [rsp+44h] [rbp-24h] BYREF
  unsigned int v14; // [rsp+48h] [rbp-20h] BYREF
  __int64 v15; // [rsp+50h] [rbp-18h] BYREF
  BOOL v16; // [rsp+88h] [rbp+20h] BYREF

  v6 = (_DWORD)a4 != 0;
  v16 = v6;
  v7 = NtSetInformationProcess(a2, ProcessImageFileName|0x40, &v16, 4u);
  if ( (unsigned int)dword_1800B3218 > 4 && (byte_1800B3228 & 0x40) != 0 )
  {
    v11 = qword_1800B3230 & 0x40;
    if ( v11 == qword_1800B3230 )
    {
      v15 = *((_QWORD *)a1 + 4);
      v12 = v6;
      v13 = a3;
      v14 = v7;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        v11,
        (unsigned int)&unk_18009EE34,
        v8,
        v9,
        (__int64)&v14,
        (__int64)&v15,
        (__int64)&v13,
        (__int64)&v12);
    }
  }
  return v7;
}
