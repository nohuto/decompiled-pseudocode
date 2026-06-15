/*
 * XREFs of ?IsAudioFormatSupportedRemote@CAPOWrapperSrv@@UEAAJW4__MIDL___MIDL_itf_audioenginepolicy_0000_0009_0001@@PEBUtWAVEFORMATEX@@1PEAPEAU3@@Z @ 0x14000B6D0
 * Callers:
 *     <none>
 * Callees:
 *     ?Create@CAudioMediaType@@SAJPEBUtWAVEFORMATEX@@IPEAPEAUIAudioMediaType@@MH@Z @ 0x14000C690 (-Create@CAudioMediaType@@SAJPEBUtWAVEFORMATEX@@IPEAPEAUIAudioMediaType@@MH@Z.c)
 *     memcpy_0 @ 0x14001F43F (memcpy_0.c)
 *     _guard_dispatch_icall_nop @ 0x14001F470 (_guard_dispatch_icall_nop.c)
 *     ??$Write@U?$_tlgWrapSz@D@@U?$_tlgWrapperByVal@$03@@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapperByVal@$03@@4@Z @ 0x140047804 (--$Write@U-$_tlgWrapSz@D@@U-$_tlgWrapperByVal@$03@@U2@@-$_tlgWriteTemplate@$$A6AJPE_ea_140047804.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CAPOWrapperSrv::IsAudioFormatSupportedRemote(
        __int64 a1,
        int a2,
        const struct tWAVEFORMATEX *a3,
        const struct tWAVEFORMATEX *a4,
        _QWORD *a5)
{
  __int64 v8; // rdi
  struct IAudioMediaType *v9; // rbx
  int v10; // esi
  __int64 v11; // rcx
  __int64 v12; // rax
  int v13; // eax
  int v14; // ebp
  int v15; // r12d
  __int64 v16; // rax
  const void *v17; // r15
  __int64 v18; // rsi
  void *v19; // rax
  void *v20; // r14
  struct IAudioMediaType *v22; // [rsp+40h] [rbp-48h] BYREF
  __int64 v23; // [rsp+48h] [rbp-40h] BYREF
  __int64 v24; // [rsp+50h] [rbp-38h] BYREF
  __int64 v25; // [rsp+A0h] [rbp+18h] BYREF

  v8 = 0LL;
  v25 = 0LL;
  v9 = 0LL;
  v22 = 0LL;
  v23 = 0LL;
  if ( a3 )
  {
    v10 = CAudioMediaType::Create(a3, (unsigned int)a3->cbSize + 18, (struct IAudioMediaType **)&v25, 0.0, 1);
    v8 = v25;
    if ( v10 < 0 )
      goto LABEL_25;
  }
  if ( a4 && (v10 = CAudioMediaType::Create(a4, (unsigned int)a4->cbSize + 18, &v22, 0.0, 1), v9 = v22, v10 < 0)
    || ((v11 = a1 + 8, v12 = *(_QWORD *)(a1 + 8), a2)
      ? (v13 = (*(__int64 (__fastcall **)(__int64, __int64, struct IAudioMediaType *, __int64 *))(v12 + 64))(
                 v11,
                 v8,
                 v9,
                 &v23))
      : (v13 = (*(__int64 (__fastcall **)(__int64, __int64, struct IAudioMediaType *, __int64 *))(v12 + 56))(
                 v11,
                 v8,
                 v9,
                 &v23)),
        v10 = v13,
        v14 = v13,
        v13 < 0) )
  {
LABEL_25:
    if ( (unsigned int)dword_1400840D0 > 2 )
    {
      LODWORD(v25) = v10;
      LODWORD(v22) = 231;
      v24 = (__int64)"CAPOWrapperSrv::IsAudioFormatSupportedRemote";
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        (int)&dword_1400840D0,
        (__int64)&v24,
        (__int64)&v22,
        (__int64)&v25);
    }
    goto LABEL_15;
  }
  v15 = v13;
  if ( !v23 )
    goto LABEL_12;
  v16 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v23 + 40LL))(v23);
  v17 = (const void *)v16;
  if ( !v16 )
  {
    v10 = -2004287480;
    goto LABEL_25;
  }
  v18 = *(unsigned __int16 *)(v16 + 16);
  v19 = CoTaskMemAlloc(v18 + 18);
  v20 = v19;
  if ( !v19 )
  {
    v10 = -2147024882;
    goto LABEL_25;
  }
  memcpy_0(v19, v17, v18 + 18);
  v10 = 0;
  *a5 = v20;
LABEL_12:
  if ( !v15 )
    v14 = v10;
  v10 = v14;
  if ( v14 < 0 )
    goto LABEL_25;
LABEL_15:
  CoTaskMemFree(0LL);
  if ( v23 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v23 + 16LL))(v23);
  if ( v9 )
    ((void (__fastcall *)(struct IAudioMediaType *))v9->lpVtbl->Release)(v9);
  if ( v8 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
  return (unsigned int)v10;
}
