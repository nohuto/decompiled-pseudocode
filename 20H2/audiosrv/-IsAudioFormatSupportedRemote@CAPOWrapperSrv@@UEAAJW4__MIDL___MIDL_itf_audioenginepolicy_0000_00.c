/*
 * XREFs of ?IsAudioFormatSupportedRemote@CAPOWrapperSrv@@UEAAJW4__MIDL___MIDL_itf_audioenginepolicy_0000_0009_0001@@PEBUtWAVEFORMATEX@@1PEAPEAU3@@Z @ 0x18012EEE0
 * Callers:
 *     <none>
 * Callees:
 *     ?Create@CAudioMediaType@@SAJPEBUtWAVEFORMATEX@@IPEAPEAUIAudioMediaType@@MH@Z @ 0x18001F460 (-Create@CAudioMediaType@@SAJPEBUtWAVEFORMATEX@@IPEAPEAUIAudioMediaType@@MH@Z.c)
 *     ?CloneWaveFormat@@YAJPEBUtWAVEFORMATEX@@PEAPEAU1@@Z @ 0x180048844 (-CloneWaveFormat@@YAJPEBUtWAVEFORMATEX@@PEAPEAU1@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800741C0 (_guard_dispatch_icall_nop.c)
 *     ??$Write@U?$_tlgWrapSz@D@@U?$_tlgWrapperByVal@$03@@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapperByVal@$03@@4@Z @ 0x180109668 (--$Write@U-$_tlgWrapSz@D@@U-$_tlgWrapperByVal@$03@@U2@@-$_tlgWriteTemplate@$$A6AJPE_ea_180109668.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CAPOWrapperSrv::IsAudioFormatSupportedRemote(
        __int64 a1,
        int a2,
        const struct tWAVEFORMATEX *a3,
        const struct tWAVEFORMATEX *a4,
        struct tWAVEFORMATEX **a5)
{
  struct IAudioMediaType *v8; // rbx
  struct IAudioMediaType *v9; // rdi
  struct tWAVEFORMATEX *v10; // rsi
  __int64 v11; // r8
  __int64 v12; // r9
  int v13; // r14d
  __int64 v14; // rcx
  __int64 v15; // rax
  int v16; // eax
  int v17; // r15d
  int v18; // r12d
  const struct tWAVEFORMATEX *v19; // rax
  struct IAudioMediaType *v21; // [rsp+40h] [rbp-20h] BYREF
  __int64 v22; // [rsp+48h] [rbp-18h] BYREF
  struct tWAVEFORMATEX *v23[2]; // [rsp+50h] [rbp-10h] BYREF
  struct IAudioMediaType *v24; // [rsp+A0h] [rbp+40h] BYREF

  v8 = 0LL;
  v24 = 0LL;
  v9 = 0LL;
  v21 = 0LL;
  v22 = 0LL;
  v10 = 0LL;
  v23[0] = 0LL;
  if ( a3 )
  {
    v13 = CAudioMediaType::Create(a3, (unsigned int)a3->cbSize + 18, &v24, 0.0, 1);
    v8 = v24;
    if ( v13 < 0 )
      goto LABEL_17;
  }
  if ( a4 && (v13 = CAudioMediaType::Create(a4, (unsigned int)a4->cbSize + 18, &v21, 0.0, 1), v9 = v21, v13 < 0)
    || ((v14 = a1 + 8, v15 = *(_QWORD *)(a1 + 8), a2)
      ? (v16 = (*(__int64 (__fastcall **)(__int64, struct IAudioMediaType *, struct IAudioMediaType *, __int64 *))(v15 + 64))(
                 v14,
                 v8,
                 v9,
                 &v22))
      : (v16 = (*(__int64 (__fastcall **)(__int64, struct IAudioMediaType *, struct IAudioMediaType *, __int64 *))(v15 + 56))(
                 v14,
                 v8,
                 v9,
                 &v22)),
        v13 = v16,
        v17 = v16,
        v16 < 0) )
  {
LABEL_17:
    if ( (unsigned int)dword_18019C4B8 > 2 )
    {
      LODWORD(v24) = v13;
      LODWORD(v21) = 231;
      v23[0] = (struct tWAVEFORMATEX *)"CAPOWrapperSrv::IsAudioFormatSupportedRemote";
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        (__int64)&dword_18019C4B8,
        byte_18016C14C,
        v11,
        v12,
        (const CHAR **)v23,
        (__int64)&v21,
        (__int64)&v24);
    }
    goto LABEL_19;
  }
  v18 = v16;
  if ( !v22 )
    goto LABEL_14;
  v19 = (const struct tWAVEFORMATEX *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v22 + 40LL))(v22);
  if ( !v19 )
  {
    v13 = -2004287480;
    goto LABEL_17;
  }
  v13 = CloneWaveFormat(v19, v23);
  if ( v13 < 0 )
  {
    v10 = v23[0];
    goto LABEL_17;
  }
  *a5 = v23[0];
LABEL_14:
  if ( !v18 )
    v17 = v13;
  v13 = v17;
  if ( v17 < 0 )
    goto LABEL_17;
LABEL_19:
  CoTaskMemFree(v10);
  if ( v22 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v22 + 16LL))(v22);
  if ( v9 )
    ((void (__fastcall *)(struct IAudioMediaType *))v9->lpVtbl->Release)(v9);
  if ( v8 )
    ((void (__fastcall *)(struct IAudioMediaType *))v8->lpVtbl->Release)(v8);
  return (unsigned int)v13;
}
