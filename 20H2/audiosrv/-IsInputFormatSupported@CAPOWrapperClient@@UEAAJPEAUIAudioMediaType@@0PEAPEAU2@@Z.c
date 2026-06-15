/*
 * XREFs of ?IsInputFormatSupported@CAPOWrapperClient@@UEAAJPEAUIAudioMediaType@@0PEAPEAU2@@Z @ 0x180035A30
 * Callers:
 *     <none>
 * Callees:
 *     ?Create@CAudioMediaType@@SAJPEBUtWAVEFORMATEX@@IPEAPEAUIAudioMediaType@@MH@Z @ 0x18001F460 (-Create@CAudioMediaType@@SAJPEBUtWAVEFORMATEX@@IPEAPEAUIAudioMediaType@@MH@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800741C0 (_guard_dispatch_icall_nop.c)
 *     ??$Write@U?$_tlgWrapSz@D@@U?$_tlgWrapperByVal@$03@@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapperByVal@$03@@4@Z @ 0x180109668 (--$Write@U-$_tlgWrapSz@D@@U-$_tlgWrapperByVal@$03@@U2@@-$_tlgWriteTemplate@$$A6AJPE_ea_180109668.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CAPOWrapperClient::IsInputFormatSupported(
        CAPOWrapperClient *this,
        struct IAudioMediaType *a2,
        struct IAudioMediaType *a3,
        struct IAudioMediaType **a4)
{
  __int64 v7; // rdi
  __int64 v8; // r9
  int v9; // eax
  int v10; // ebx
  int v11; // edi
  __int64 v13; // [rsp+40h] [rbp-38h] BYREF
  LPVOID pv; // [rsp+48h] [rbp-30h] BYREF
  __int64 v15; // [rsp+50h] [rbp-28h] BYREF
  __int64 v16; // [rsp+80h] [rbp+8h] BYREF

  pv = 0LL;
  if ( *((_QWORD *)this + 6) )
  {
    v7 = 0LL;
    if ( a2 && (v7 = ((__int64 (__fastcall *)(struct IAudioMediaType *))a2->lpVtbl->GetAudioFormat)(a2)) == 0 )
    {
      v10 = -2004287480;
    }
    else
    {
      v8 = 0LL;
      if ( a3
        && (v8 = ((__int64 (__fastcall *)(struct IAudioMediaType *, struct IAudioMediaType *, struct IAudioMediaType *, _QWORD))a3->lpVtbl->GetAudioFormat)(
                   a3,
                   a2,
                   a3,
                   0LL)) == 0 )
      {
        v10 = -2004287480;
      }
      else
      {
        v9 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64, __int64, LPVOID *))(**((_QWORD **)this + 6) + 40LL))(
               *((_QWORD *)this + 6),
               0LL,
               v7,
               v8,
               &pv);
        v10 = v9;
        if ( v9 >= 0 )
        {
          v11 = v9;
          if ( pv )
          {
            v10 = CAudioMediaType::Create(
                    (const struct tWAVEFORMATEX *)pv,
                    (unsigned int)*((unsigned __int16 *)pv + 8) + 18,
                    a4,
                    0.0,
                    1);
            if ( v10 >= 0 )
            {
              if ( v11 )
                v10 = v11;
LABEL_11:
              CoTaskMemFree(pv);
              pv = 0LL;
              return (unsigned int)v10;
            }
          }
          else
          {
            v10 = -2004287480;
          }
        }
      }
    }
    if ( (unsigned int)dword_18019C4B8 > 2 )
    {
      LODWORD(v16) = v10;
      LODWORD(v13) = 294;
      v15 = (__int64)"CAPOWrapperClient::IsAudioFormatSupported";
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        (int)&dword_18019C4B8,
        (__int64)&v15,
        (__int64)&v13,
        (__int64)&v16);
    }
    goto LABEL_11;
  }
  CoTaskMemFree(pv);
  return 2147942487LL;
}
