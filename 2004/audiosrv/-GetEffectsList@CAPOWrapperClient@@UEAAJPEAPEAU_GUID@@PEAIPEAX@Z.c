/*
 * XREFs of ?GetEffectsList@CAPOWrapperClient@@UEAAJPEAPEAU_GUID@@PEAIPEAX@Z @ 0x180131C20
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180074C80 (_guard_dispatch_icall_nop.c)
 *     ??$Write@U?$_tlgWrapSz@D@@U?$_tlgWrapperByVal@$03@@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapperByVal@$03@@4@Z @ 0x18010A2F8 (--$Write@U-$_tlgWrapSz@D@@U-$_tlgWrapperByVal@$03@@U2@@-$_tlgWriteTemplate@$$A6AJPE_ea_18010A2F8.c)
 */

__int64 __fastcall CAPOWrapperClient::GetEffectsList(
        CAPOWrapperClient *this,
        struct _GUID **a2,
        unsigned int *a3,
        void *a4)
{
  void *v8; // rbx
  HANDLE CurrentProcess; // rax
  signed int LastError; // eax
  __int64 v11; // r8
  __int64 v12; // r9
  signed int v13; // ebx
  __int64 v15; // [rsp+40h] [rbp-38h] BYREF
  HANDLE TargetHandle; // [rsp+48h] [rbp-30h] BYREF
  __int64 v17; // [rsp+50h] [rbp-28h] BYREF
  __int64 v18; // [rsp+80h] [rbp+8h] BYREF

  TargetHandle = 0LL;
  if ( !*((_QWORD *)this + 5) || !g_ADGProcess )
    return 2147942487LL;
  if ( !a4
    || (v8 = *(void **)&g_ADGProcess[2].LockCount,
        CurrentProcess = GetCurrentProcess(),
        DuplicateHandle(CurrentProcess, a4, v8, &TargetHandle, 0, 0, 2u)) )
  {
    v13 = (*(__int64 (__fastcall **)(_QWORD, struct _GUID **, unsigned int *))(**((_QWORD **)this + 5) + 48LL))(
            *((_QWORD *)this + 5),
            a2,
            a3);
  }
  else
  {
    LastError = GetLastError();
    v13 = LastError;
    if ( LastError > 0 )
      v13 = (unsigned __int16)LastError | 0x80070000;
  }
  if ( v13 < 0 && (unsigned int)dword_18019D4E8 > 2 )
  {
    LODWORD(v18) = v13;
    v17 = (__int64)"CAPOWrapperClient::GetEffectsList";
    LODWORD(v15) = 226;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      (__int64)&dword_18019D4E8,
      byte_18016D3ED,
      v11,
      v12,
      (const CHAR **)&v17,
      (__int64)&v15,
      (__int64)&v18);
  }
  return (unsigned int)v13;
}
