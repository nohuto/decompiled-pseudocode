/*
 * XREFs of ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByRef@$0BA@@@U?$_tlgWrapSz@G@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByRef@$0BA@@@AEBU?$_tlgWrapSz@G@@@Z @ 0x140047C7C
 * Callers:
 *     ?TrackAPOFailureUnhandled@CSystemEffectWrapper@@UEAAJM@Z @ 0x140048BB0 (-TrackAPOFailureUnhandled@CSystemEffectWrapper@@UEAAJM@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x14001CC60 (__security_check_cookie.c)
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x140047768 (_tlgWriteTransfer_EventWriteTransfer.c)
 */

ULONG __fastcall _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByRef<16>,_tlgWrapSz<unsigned short>>(
        __int64 a1,
        unsigned __int8 *a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 *a6,
        void **a7)
{
  _WORD *v9; // rcx
  __int64 v10; // rax
  int v11; // edx
  __int64 v12; // r8
  struct _EVENT_DATA_DESCRIPTOR v14; // [rsp+30h] [rbp-68h] BYREF
  __int64 v15; // [rsp+50h] [rbp-48h]
  __int64 v16; // [rsp+58h] [rbp-40h]
  __int64 v17; // [rsp+60h] [rbp-38h]
  __int64 v18; // [rsp+68h] [rbp-30h]
  _WORD *v19; // [rsp+70h] [rbp-28h]
  int v20; // [rsp+78h] [rbp-20h]
  int v21; // [rsp+7Ch] [rbp-1Ch]

  v9 = *a7;
  if ( *a7 )
  {
    v10 = -1LL;
    do
      ++v10;
    while ( v9[v10] );
    v11 = 2 * v10 + 2;
  }
  else
  {
    v9 = &unk_140070AE8;
    v11 = 2;
  }
  v19 = v9;
  v20 = v11;
  v21 = 0;
  v12 = *a6;
  v15 = a5;
  v17 = v12;
  v18 = 16LL;
  v16 = 4LL;
  return tlgWriteTransfer_EventWriteTransfer(a1, a2, 0LL, 0LL, 5u, &v14);
}
