/*
 * XREFs of ?Load@SpatialAudioStateIO@@MEAAJXZ @ 0x180037A70
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180074C80 (_guard_dispatch_icall_nop.c)
 *     ??$Write@U?$_tlgWrapSz@D@@U?$_tlgWrapperByVal@$03@@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapperByVal@$03@@4@Z @ 0x18010A2F8 (--$Write@U-$_tlgWrapSz@D@@U-$_tlgWrapperByVal@$03@@U2@@-$_tlgWriteTemplate@$$A6AJPE_ea_18010A2F8.c)
 */

__int64 __fastcall SpatialAudioStateIO::Load(SpatialAudioStateIO *this)
{
  __int64 *v2; // rcx
  __int64 v3; // rax
  int v4; // eax
  unsigned int v5; // edi
  _OWORD *v7; // rax
  __int128 v8; // [rsp+40h] [rbp-40h] BYREF
  int v9; // [rsp+50h] [rbp-30h]
  PROPVARIANT pvar[2]; // [rsp+60h] [rbp-20h] BYREF
  _OWORD *v11; // [rsp+70h] [rbp-10h]
  __int64 v12; // [rsp+A0h] [rbp+20h] BYREF
  __int64 v13; // [rsp+A8h] [rbp+28h] BYREF
  __int64 v14; // [rsp+B0h] [rbp+30h] BYREF

  v11 = 0LL;
  *(_OWORD *)pvar = 0LL;
  v9 = 2;
  v2 = (__int64 *)*((_QWORD *)this + 66);
  v3 = *v2;
  v8 = PKEY_SpatialAudio_Endpoint_State;
  v4 = (*(__int64 (__fastcall **)(__int64 *, __int128 *, PROPVARIANT *))(v3 + 40))(v2, &v8, pvar);
  v5 = v4;
  if ( v4 < 0 )
  {
    if ( (unsigned int)dword_18019D4B0 > 2 )
    {
      LODWORD(v12) = v4;
      v14 = (__int64)"SpatialAudioStateIO::Load";
      LODWORD(v13) = 28;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        (int)&dword_18019D4B0,
        (__int64)&v14,
        (__int64)&v13,
        (__int64)&v12);
    }
  }
  else if ( LOWORD(pvar[0]) != 65
         || LODWORD(pvar[1]) != 24
         || (v7 = v11,
             *((_OWORD *)this + 34) = *v11,
             *((_QWORD *)this + 70) = *((_QWORD *)v7 + 2),
             *((int *)this + 136) >= 4) )
  {
    *((_OWORD *)this + 34) = 0LL;
    *((_QWORD *)this + 70) = 0LL;
  }
  PropVariantClear(pvar);
  return v5;
}
