/*
 * XREFs of ??$Write@U?$_tlgWrapSz@G@@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$00@@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSid@U_SID@@@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$00@@AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSid@U_SID@@@@@Z @ 0x18007C9B8
 * Callers:
 *     ?HampHostInitialize@@YAXKPEAU_RM_PSM_HOST_INFO@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18000D468 (-HampHostInitialize@@YAXKPEAU_RM_PSM_HOST_INFO@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 * Callees:
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x18002DFD8 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x180044E00 (__security_check_cookie.c)
 */

ULONG __fastcall _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapperByVal<8>,_tlgWrapperByVal<1>,_tlgWrapperByVal<4>,_tlgWrapSid<_SID>>(
        __int64 a1,
        unsigned __int8 *a2,
        __int64 a3,
        __int64 a4,
        void **a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        __int64 *a9)
{
  int v10; // eax
  _WORD *v11; // rcx
  __int64 v12; // rax
  int v13; // edx
  struct _EVENT_DATA_DESCRIPTOR v15; // [rsp+30h] [rbp-51h] BYREF
  _WORD *v16; // [rsp+50h] [rbp-31h]
  int v17; // [rsp+58h] [rbp-29h]
  int v18; // [rsp+5Ch] [rbp-25h]
  __int64 v19; // [rsp+60h] [rbp-21h]
  __int64 v20; // [rsp+68h] [rbp-19h]
  __int64 v21; // [rsp+70h] [rbp-11h]
  __int64 v22; // [rsp+78h] [rbp-9h]
  __int64 v23; // [rsp+80h] [rbp-1h]
  __int64 v24; // [rsp+88h] [rbp+7h]
  __int64 v25; // [rsp+90h] [rbp+Fh]
  int v26; // [rsp+98h] [rbp+17h]
  int v27; // [rsp+9Ch] [rbp+1Bh]

  v10 = *(unsigned __int8 *)(*a9 + 1);
  v25 = *a9;
  v27 = 0;
  v24 = 4LL;
  v22 = 1LL;
  v26 = 4 * v10 + 8;
  v23 = a8;
  v21 = a7;
  v19 = a6;
  v20 = 8LL;
  v11 = *a5;
  if ( *a5 )
  {
    v12 = -1LL;
    do
      ++v12;
    while ( v11[v12] );
    v13 = 2 * v12 + 2;
  }
  else
  {
    v11 = &unk_180095550;
    v13 = 2;
  }
  v16 = v11;
  v17 = v13;
  v18 = 0;
  return tlgWriteTransfer_EventWriteTransfer((__int64)&dword_1800B3218, a2, 0LL, 0LL, 7u, &v15);
}
