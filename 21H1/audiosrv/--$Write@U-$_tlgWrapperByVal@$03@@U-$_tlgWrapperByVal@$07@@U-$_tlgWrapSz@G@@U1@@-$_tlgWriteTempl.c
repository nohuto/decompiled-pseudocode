/*
 * XREFs of ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapSz@G@@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapSz@G@@3@Z @ 0x18000263C
 * Callers:
 *     ?SetPolicyVolume@CAudioStream@@QEAAJM_J_N@Z @ 0x180002538 (-SetPolicyVolume@CAudioStream@@QEAAJM_J_N@Z.c)
 *     ?AddStream@CPerStreamVolumeAudioSession@@EEAAJPEAVCAudioStream@@@Z @ 0x18002D620 (-AddStream@CPerStreamVolumeAudioSession@@EEAAJPEAVCAudioStream@@@Z.c)
 *     ?RecalculateVolume@CAudioStream@@UEAAJ_N_J@Z @ 0x180033980 (-RecalculateVolume@CAudioStream@@UEAAJ_N_J@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x18006A480 (__security_check_cookie.c)
 */

__int64 __fastcall _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>>(
        __int64 a1,
        unsigned __int8 *a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        void **a7,
        __int64 a8)
{
  _WORD *v10; // rcx
  __int64 v11; // rax
  int v12; // edx
  __int64 v13; // rcx
  _DWORD v15[2]; // [rsp+38h] [rbp-51h] BYREF
  __int64 v16; // [rsp+40h] [rbp-49h]
  unsigned __int16 *v17; // [rsp+50h] [rbp-39h]
  int v18; // [rsp+58h] [rbp-31h]
  int v19; // [rsp+5Ch] [rbp-2Dh]
  unsigned __int8 *v20; // [rsp+60h] [rbp-29h]
  int v21; // [rsp+68h] [rbp-21h]
  int v22; // [rsp+6Ch] [rbp-1Dh]
  __int64 v23; // [rsp+70h] [rbp-19h]
  __int64 v24; // [rsp+78h] [rbp-11h]
  __int64 v25; // [rsp+80h] [rbp-9h]
  __int64 v26; // [rsp+88h] [rbp-1h]
  _WORD *v27; // [rsp+90h] [rbp+7h]
  int v28; // [rsp+98h] [rbp+Fh]
  int v29; // [rsp+9Ch] [rbp+13h]
  __int64 v30; // [rsp+A0h] [rbp+17h]
  __int64 v31; // [rsp+A8h] [rbp+1Fh]

  v30 = a8;
  v31 = 4LL;
  v10 = *a7;
  if ( *a7 )
  {
    v11 = -1LL;
    do
      ++v11;
    while ( v10[v11] );
    v12 = 2 * v11 + 2;
  }
  else
  {
    v10 = &unk_18015D744;
    v12 = 2;
  }
  v25 = a6;
  v23 = a5;
  v15[0] = *a2 << 24;
  v28 = v12;
  v15[1] = *(unsigned __int16 *)(a2 + 1);
  v16 = *(_QWORD *)(a2 + 3);
  v17 = *(unsigned __int16 **)(a1 + 8);
  v27 = v10;
  v29 = 0;
  v26 = 8LL;
  v24 = 4LL;
  v18 = *v17;
  v21 = *(unsigned __int16 *)(a2 + 11);
  v20 = a2 + 11;
  v13 = *(_QWORD *)(a1 + 32);
  v19 = 2;
  v22 = 1;
  return EtwEventWriteTransfer(v13, v15, 0LL);
}
