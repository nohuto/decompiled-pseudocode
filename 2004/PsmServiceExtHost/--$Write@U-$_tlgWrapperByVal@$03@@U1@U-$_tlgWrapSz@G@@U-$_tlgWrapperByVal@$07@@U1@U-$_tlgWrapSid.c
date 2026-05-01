/*
 * XREFs of ??$Write@U?$_tlgWrapperByVal@$03@@U1@U?$_tlgWrapSz@G@@U?$_tlgWrapperByVal@$07@@U1@U?$_tlgWrapSid@U_SID@@@@U1@U?$_tlgWrapperByRef@$0BA@@@U3@U3@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@3AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByVal@$07@@3AEBU?$_tlgWrapSid@U_SID@@@@3AEBU?$_tlgWrapperByRef@$0BA@@@55@Z @ 0x18002DEA0
 * Callers:
 *     ?HamSrvRegisterProcess@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAX1PEAU_PSM_APP_IDENTITY@@_KK@Z @ 0x18000DB8C (-HamSrvRegisterProcess@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAX1PEAU_PSM_APP_IDENTITY@@_KK@Z.c)
 * Callees:
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x18002DFD8 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x180044E00 (__security_check_cookie.c)
 */

__int64 __fastcall _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapSid<_SID>,_tlgWrapperByVal<4>,_tlgWrapperByRef<16>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>>(
        __int64 a1,
        int a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        void **a7,
        __int64 a8,
        __int64 a9,
        __int64 *a10,
        __int64 a11,
        __int64 *a12,
        __int64 a13,
        __int64 a14)
{
  __int64 v15; // rcx
  int v16; // eax
  _WORD *v17; // rcx
  __int64 v18; // rax
  int v19; // edx
  struct _EVENT_DATA_DESCRIPTOR v21; // [rsp+30h] [rbp-C9h] BYREF
  __int64 v22; // [rsp+50h] [rbp-A9h]
  __int64 v23; // [rsp+58h] [rbp-A1h]
  __int64 v24; // [rsp+60h] [rbp-99h]
  __int64 v25; // [rsp+68h] [rbp-91h]
  _WORD *v26; // [rsp+70h] [rbp-89h]
  int v27; // [rsp+78h] [rbp-81h]
  int v28; // [rsp+7Ch] [rbp-7Dh]
  __int64 v29; // [rsp+80h] [rbp-79h]
  __int64 v30; // [rsp+88h] [rbp-71h]
  __int64 v31; // [rsp+90h] [rbp-69h]
  __int64 v32; // [rsp+98h] [rbp-61h]
  __int64 v33; // [rsp+A0h] [rbp-59h]
  int v34; // [rsp+A8h] [rbp-51h]
  int v35; // [rsp+ACh] [rbp-4Dh]
  __int64 v36; // [rsp+B0h] [rbp-49h]
  __int64 v37; // [rsp+B8h] [rbp-41h]
  __int64 v38; // [rsp+C0h] [rbp-39h]
  __int64 v39; // [rsp+C8h] [rbp-31h]
  __int64 v40; // [rsp+D0h] [rbp-29h]
  __int64 v41; // [rsp+D8h] [rbp-21h]
  __int64 v42; // [rsp+E0h] [rbp-19h]
  __int64 v43; // [rsp+E8h] [rbp-11h]

  v42 = a14;
  v40 = a13;
  v43 = 8LL;
  v41 = 8LL;
  v39 = 16LL;
  v15 = *a12;
  v36 = a11;
  v38 = v15;
  v37 = 4LL;
  v16 = *(unsigned __int8 *)(*a10 + 1);
  v33 = *a10;
  v35 = 0;
  v32 = 4LL;
  v30 = 8LL;
  v34 = 4 * v16 + 8;
  v31 = a9;
  v29 = a8;
  v17 = *a7;
  if ( *a7 )
  {
    v18 = -1LL;
    do
      ++v18;
    while ( v17[v18] );
    v19 = 2 * v18 + 2;
  }
  else
  {
    v17 = &unk_180095550;
    v19 = 2;
  }
  v24 = a6;
  v22 = a5;
  v26 = v17;
  v27 = v19;
  v28 = 0;
  v25 = 4LL;
  v23 = 4LL;
  return tlgWriteTransfer_EventWriteTransfer((int)&dword_1800B3218, a2, 0, 0, 0xCu, &v21);
}
