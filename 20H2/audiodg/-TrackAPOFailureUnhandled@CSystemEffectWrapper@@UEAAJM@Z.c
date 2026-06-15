/*
 * XREFs of ?TrackAPOFailureUnhandled@CSystemEffectWrapper@@UEAAJM@Z @ 0x140053230
 * Callers:
 *     <none>
 * Callees:
 *     ?TrackSystemEffectBehavior@@YAJPEBGW4APO_TYPE@@_N2AEBU_GUID@@M@Z @ 0x140009E30 (-TrackSystemEffectBehavior@@YAJPEBGW4APO_TYPE@@_N2AEBU_GUID@@M@Z.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByRef@$0BA@@@U?$_tlgWrapSz@G@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByRef@$0BA@@@AEBU?$_tlgWrapSz@G@@@Z @ 0x1400522FC (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapperByRef@$0BA@@@U-$_tlgWrapSz@G@@@-$_tlgWriteTempla.c)
 */

__int64 __fastcall CSystemEffectWrapper::TrackAPOFailureUnhandled(CSystemEffectWrapper *this, float a2)
{
  unsigned int v2; // edx
  char *v4; // rdi
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 v8; // [rsp+50h] [rbp+8h] BYREF
  __int64 v9; // [rsp+60h] [rbp+18h] BYREF
  __int64 v10; // [rsp+68h] [rbp+20h] BYREF

  v2 = *((_DWORD *)this + 12);
  if ( v2 - 1 <= 2 )
  {
    v4 = (char *)this + 24;
    TrackSystemEffectBehavior(*((_QWORD *)this + 5), v2, 0, 1u);
    if ( **(_DWORD **)&g_SysFxUtilTlp > 2u )
    {
      v9 = *((_QWORD *)this + 5);
      LODWORD(v8) = *((_DWORD *)this + 12);
      v10 = (__int64)v4;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByRef<16>,_tlgWrapSz<unsigned short>>(
        *(__int64 *)&g_SysFxUtilTlp,
        (unsigned __int8 *)dword_14007C5FE,
        v5,
        v6,
        (__int64)&v8,
        &v10,
        (void **)&v9);
    }
  }
  return 0LL;
}
