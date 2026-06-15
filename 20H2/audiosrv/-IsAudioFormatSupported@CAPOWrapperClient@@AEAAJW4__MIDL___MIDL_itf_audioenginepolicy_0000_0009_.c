/*
 * XREFs of ?IsAudioFormatSupported@CAPOWrapperClient@@AEAAJW4__MIDL___MIDL_itf_audioenginepolicy_0000_0009_0001@@PEAUIAudioMediaType@@1PEAPEAU3@@Z @ 0x180131164
 * Callers:
 *     ?IsOutputFormatSupported@CAPOWrapperClient@@UEAAJPEAUIAudioMediaType@@0PEAPEAU2@@Z @ 0x1801312E0 (-IsOutputFormatSupported@CAPOWrapperClient@@UEAAJPEAUIAudioMediaType@@0PEAPEAU2@@Z.c)
 * Callees:
 *     ?Create@CAudioMediaType@@SAJPEBUtWAVEFORMATEX@@IPEAPEAUIAudioMediaType@@MH@Z @ 0x18001F460 (-Create@CAudioMediaType@@SAJPEBUtWAVEFORMATEX@@IPEAPEAUIAudioMediaType@@MH@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800741C0 (_guard_dispatch_icall_nop.c)
 *     ??$Write@U?$_tlgWrapSz@D@@U?$_tlgWrapperByVal@$03@@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapperByVal@$03@@4@Z @ 0x180109668 (--$Write@U-$_tlgWrapSz@D@@U-$_tlgWrapperByVal@$03@@U2@@-$_tlgWriteTemplate@$$A6AJPE_ea_180109668.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall CAPOWrapperClient::IsAudioFormatSupported(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        struct IAudioMediaType **a5)
{
  unsigned int v6; // ebp
  int v8; // ebx
  __int64 v9; // rdi
  __int64 v10; // r9
  int v11; // eax
  int v12; // edi
  __int64 v14; // [rsp+40h] [rbp-28h] BYREF
  LPVOID pv; // [rsp+48h] [rbp-20h] BYREF
  __int64 v16; // [rsp+50h] [rbp-18h] BYREF
  __int64 v17; // [rsp+70h] [rbp+8h] BYREF

  v6 = a2;
  pv = 0LL;
  if ( !*(_QWORD *)(a1 + 56) )
  {
    v8 = -2147024809;
    goto LABEL_16;
  }
  v9 = 0LL;
  if ( a3 )
  {
    v9 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a3 + 40LL))(a3);
    if ( !v9 )
      goto LABEL_5;
  }
  v10 = 0LL;
  if ( a4 )
  {
    v10 = (*(__int64 (__fastcall **)(__int64, __int64, __int64, _QWORD))(*(_QWORD *)a4 + 40LL))(a4, a2, a3, 0LL);
    if ( !v10 )
      goto LABEL_5;
  }
  v11 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64, __int64, LPVOID *))(**(_QWORD **)(a1 + 56) + 40LL))(
          *(_QWORD *)(a1 + 56),
          v6,
          v9,
          v10,
          &pv);
  v8 = v11;
  if ( v11 < 0 )
    goto LABEL_14;
  v12 = v11;
  if ( !pv )
  {
LABEL_5:
    v8 = -2004287480;
    goto LABEL_14;
  }
  v8 = CAudioMediaType::Create(
         (const struct tWAVEFORMATEX *)pv,
         (unsigned int)*((unsigned __int16 *)pv + 8) + 18,
         a5,
         0.0,
         1);
  if ( v8 < 0 )
  {
LABEL_14:
    if ( (unsigned int)dword_18019C4B8 > 2 )
    {
      LODWORD(v17) = v8;
      LODWORD(v14) = 294;
      v16 = (__int64)"CAPOWrapperClient::IsAudioFormatSupported";
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        (__int64)&dword_18019C4B8,
        byte_18016C14C,
        a3,
        v10,
        (const CHAR **)&v16,
        (__int64)&v14,
        (__int64)&v17);
    }
    goto LABEL_16;
  }
  if ( v12 )
    v8 = v12;
LABEL_16:
  CoTaskMemFree(pv);
  return (unsigned int)v8;
}
