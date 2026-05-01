/*
 * XREFs of RmgrSrv_RmRegisterResource @ 0x180037ED0
 * Callers:
 *     <none>
 * Callees:
 *     _tlgKeywordOn @ 0x180010200 (_tlgKeywordOn.c)
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x18002DFD8 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x180044E00 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180046540 (_guard_dispatch_icall_nop.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@33@Z @ 0x18006259C (--$Write@U-$_tlgWrapperByVal@$03@@U1@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_.c)
 */

__int64 __fastcall RmgrSrv_RmRegisterResource(__int64 a1, unsigned int a2, unsigned int a3, __int64 a4)
{
  int v4; // ebx
  int v7; // r8d
  int v8; // ebx
  int v10; // [rsp+40h] [rbp-9h] BYREF
  int v11; // [rsp+44h] [rbp-5h] BYREF
  unsigned int v12; // [rsp+48h] [rbp-1h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v13; // [rsp+50h] [rbp+7h] BYREF
  int *v14; // [rsp+70h] [rbp+27h]
  __int64 v15; // [rsp+78h] [rbp+2Fh]

  v4 = a4;
  if ( (unsigned int)dword_1800B31E0 > 4 && tlgKeywordOn((__int64)&dword_1800B31E0, 2LL) )
  {
    v11 = v4;
    v12 = a3;
    v10 = a2;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      (unsigned int)&dword_1800B31E0,
      (unsigned int)&unk_18009A68F,
      v7,
      a4,
      (__int64)&v10,
      (__int64)&v12,
      (__int64)&v11);
  }
  LOBYTE(a4) = v4 != 0;
  v8 = (*(__int64 (__fastcall **)(ExecutionModel::ResourceManager *, _QWORD, _QWORD, __int64))(*(_QWORD *)g_pResourceManager
                                                                                             + 24LL))(
         g_pResourceManager,
         a2,
         a3,
         a4);
  if ( v8 >= 0 )
    v8 = 0;
  if ( (unsigned int)dword_1800B31E0 > 4 && tlgKeywordOn((__int64)&dword_1800B31E0, 2LL) )
  {
    v10 = v8;
    v14 = &v10;
    v15 = 4LL;
    tlgWriteTransfer_EventWriteTransfer(
      (__int64)&dword_1800B31E0,
      (unsigned __int8 *)dword_18009A5AD,
      0LL,
      0LL,
      3u,
      &v13);
  }
  return (unsigned int)v8;
}
