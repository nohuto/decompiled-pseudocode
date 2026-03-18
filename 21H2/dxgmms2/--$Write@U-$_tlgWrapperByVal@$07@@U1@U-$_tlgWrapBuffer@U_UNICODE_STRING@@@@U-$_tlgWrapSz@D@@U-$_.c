/*
 * XREFs of ??$Write@U?$_tlgWrapperByVal@$07@@U1@U?$_tlgWrapBuffer@U_UNICODE_STRING@@@@U?$_tlgWrapSz@D@@U?$_tlgWrapperByVal@$03@@U4@U4@U4@U4@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@3AEBU?$_tlgWrapBuffer@U_UNICODE_STRING@@@@AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapperByVal@$03@@6666@Z @ 0x1C0033830
 * Callers:
 *     VidSchiCloseProcessAdapterInfo @ 0x1C0097E38 (VidSchiCloseProcessAdapterInfo.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C001A708 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1C001CD70 (__security_check_cookie.c)
 */

NTSTATUS __fastcall _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapBuffer<_UNICODE_STRING>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        __int64 a1,
        unsigned __int8 *a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        unsigned __int16 **a7,
        void **a8,
        __int64 a9,
        __int64 a10,
        __int64 a11,
        __int64 a12,
        __int64 a13)
{
  _BYTE *v13; // rcx
  __int64 v14; // rax
  int v15; // eax
  int v16; // ecx
  struct _EVENT_DATA_DESCRIPTOR v18; // [rsp+30h] [rbp-C1h] BYREF
  __int64 v19; // [rsp+50h] [rbp-A1h]
  __int64 v20; // [rsp+58h] [rbp-99h]
  __int64 v21; // [rsp+60h] [rbp-91h]
  __int64 v22; // [rsp+68h] [rbp-89h]
  _DWORD *v23; // [rsp+70h] [rbp-81h]
  __int64 v24; // [rsp+78h] [rbp-79h]
  __int64 v25; // [rsp+80h] [rbp-71h]
  _DWORD v26[2]; // [rsp+88h] [rbp-69h] BYREF
  _BYTE *v27; // [rsp+90h] [rbp-61h]
  int v28; // [rsp+98h] [rbp-59h]
  int v29; // [rsp+9Ch] [rbp-55h]
  __int64 v30; // [rsp+A0h] [rbp-51h]
  __int64 v31; // [rsp+A8h] [rbp-49h]
  __int64 v32; // [rsp+B0h] [rbp-41h]
  __int64 v33; // [rsp+B8h] [rbp-39h]
  __int64 v34; // [rsp+C0h] [rbp-31h]
  __int64 v35; // [rsp+C8h] [rbp-29h]
  __int64 v36; // [rsp+D0h] [rbp-21h]
  __int64 v37; // [rsp+D8h] [rbp-19h]
  __int64 v38; // [rsp+E0h] [rbp-11h]
  __int64 v39; // [rsp+E8h] [rbp-9h]

  v38 = a13;
  v36 = a12;
  v34 = a11;
  v32 = a10;
  v30 = a9;
  v39 = 4LL;
  v37 = 4LL;
  v35 = 4LL;
  v13 = *a8;
  v33 = 4LL;
  v31 = 4LL;
  if ( v13 )
  {
    v14 = -1LL;
    do
      ++v14;
    while ( v13[v14] );
    v15 = v14 + 1;
  }
  else
  {
    v13 = &unk_1C005BC91;
    v15 = 1;
  }
  v28 = v15;
  v27 = v13;
  v23 = v26;
  v29 = 0;
  v24 = 2LL;
  v16 = **a7;
  v25 = *((_QWORD *)*a7 + 1);
  v21 = a6;
  v19 = a5;
  v26[0] = v16;
  v26[1] = 0;
  v22 = 8LL;
  v20 = 8LL;
  return tlgWriteTransfer_EtwWriteTransfer((__int64)&dword_1C006E048, a2, 0LL, 0LL, 0xCu, &v18);
}
