/*
 * XREFs of ?TrackAPOFailureUnhandled@CSystemEffectWrapper@@UEAAJM@Z @ 0x180130D10
 * Callers:
 *     <none>
 * Callees:
 *     ?TrackSystemEffectBehavior@@YAJPEBGW4APO_TYPE@@_N2AEBU_GUID@@M@Z @ 0x18012E208 (-TrackSystemEffectBehavior@@YAJPEBGW4APO_TYPE@@_N2AEBU_GUID@@M@Z.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByRef@$0BA@@@U?$_tlgWrapSz@G@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByRef@$0BA@@@AEBU?$_tlgWrapSz@G@@@Z @ 0x18012F28C (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapperByRef@$0BA@@@U-$_tlgWrapSz@G@@@-$_tlgWriteTempla.c)
 */

__int64 __fastcall CSystemEffectWrapper::TrackAPOFailureUnhandled(
        CSystemEffectWrapper *this,
        float a2,
        __int64 a3,
        __int64 a4)
{
  int v4; // edx
  char *v6; // rdi
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v10; // [rsp+50h] [rbp+8h] BYREF
  __int64 v11; // [rsp+60h] [rbp+18h] BYREF
  __int64 v12; // [rsp+68h] [rbp+20h] BYREF

  v4 = *((_DWORD *)this + 12);
  if ( (unsigned int)(v4 - 1) <= 2 )
  {
    v6 = (char *)this + 24;
    TrackSystemEffectBehavior(*((_QWORD *)this + 5), v4, a3, a4, (__int64)this + 24, a2);
    if ( **(_DWORD **)&g_SysFxUtilTlp > 2u )
    {
      v11 = *((_QWORD *)this + 5);
      LODWORD(v10) = *((_DWORD *)this + 12);
      v12 = (__int64)v6;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByRef<16>,_tlgWrapSz<unsigned short>>(
        *(__int64 *)&g_SysFxUtilTlp,
        (unsigned __int8 *)dword_18016C309,
        v7,
        v8,
        (__int64)&v10,
        &v12,
        (void **)&v11);
    }
  }
  return 0LL;
}
