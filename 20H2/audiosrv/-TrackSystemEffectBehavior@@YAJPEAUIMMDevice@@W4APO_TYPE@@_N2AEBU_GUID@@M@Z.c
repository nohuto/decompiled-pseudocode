/*
 * XREFs of ?TrackSystemEffectBehavior@@YAJPEAUIMMDevice@@W4APO_TYPE@@_N2AEBU_GUID@@M@Z @ 0x18012DF08
 * Callers:
 *     ?TrackSystemEffectBehavior@@YAJPEBGW4APO_TYPE@@_N2AEBU_GUID@@M@Z @ 0x18012E208 (-TrackSystemEffectBehavior@@YAJPEBGW4APO_TYPE@@_N2AEBU_GUID@@M@Z.c)
 * Callees:
 *     ?reset@?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@QEAAXPEAG@Z @ 0x18002A4D4 (-reset@-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$integral_con.c)
 *     _Init_thread_footer @ 0x18006A580 (_Init_thread_footer.c)
 *     _Init_thread_header @ 0x18006A5E8 (_Init_thread_header.c)
 *     _guard_dispatch_icall_nop @ 0x1800741C0 (_guard_dispatch_icall_nop.c)
 *     _tlgKeywordOn @ 0x1800B6E6C (_tlgKeywordOn.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U2@U?$_tlgWrapperByRef@$0BA@@@U?$_tlgWrapSz@G@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@4AEBU?$_tlgWrapperByRef@$0BA@@@AEBU?$_tlgWrapSz@G@@@Z @ 0x18012DD40 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U2@U-$_tlgWrapperByRef@$0BA@@@U-$_tlg.c)
 *     IsSkipAPOFailureCheck @ 0x18012DE84 (IsSkipAPOFailureCheck.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall TrackSystemEffectBehavior(__int64 a1, int a2, char a3, char a4, __int64 a5, float a6)
{
  __int64 v6; // rdi
  __int64 v8; // rbx
  int v9; // ebx
  int v10; // ecx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  LPVOID pv; // [rsp+58h] [rbp-9h] BYREF
  __int64 v16; // [rsp+60h] [rbp-1h] BYREF
  __int64 v17; // [rsp+68h] [rbp+7h] BYREF
  __int64 v18; // [rsp+70h] [rbp+Fh] BYREF
  __int64 v19; // [rsp+78h] [rbp+17h] BYREF
  PROPVARIANT pvar[2]; // [rsp+80h] [rbp+1Fh] BYREF
  __int64 v21; // [rsp+90h] [rbp+2Fh]
  __int64 v22; // [rsp+C8h] [rbp+67h] BYREF
  __int64 v23; // [rsp+D0h] [rbp+6Fh] BYREF

  LOBYTE(v23) = a4;
  LOBYTE(v22) = a3;
  v6 = a2;
  v16 = 0LL;
  v8 = *((_QWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + (unsigned int)tls_index);
  if ( dword_18019FBA8 > *(_DWORD *)(v8 + 4) )
  {
    Init_thread_header(&dword_18019FBA8);
    if ( dword_18019FBA8 == -1 )
    {
      xmmword_18019FB44 = PKEY_Endpoint_LFX_FailCount;
      dword_18019FB54 = 9;
      xmmword_18019FB58 = PKEY_Endpoint_GFX_FailCount;
      dword_18019FB68 = 8;
      xmmword_18019FB6C = PKEY_Endpoint_EFX_FailCount;
      dword_18019FB7C = 31;
      Init_thread_footer(&dword_18019FBA8);
    }
  }
  if ( dword_18019FBA4 > *(_DWORD *)(v8 + 4) )
  {
    Init_thread_header(&dword_18019FBA4);
    if ( dword_18019FBA4 == -1 )
    {
      xmmword_18019FAF4 = PKEY_Endpoint_LFX_ExceptionCount;
      dword_18019FB04 = 33;
      xmmword_18019FB08 = PKEY_Endpoint_GFX_ExceptionCount;
      dword_18019FB18 = 34;
      xmmword_18019FB1C = PKEY_Endpoint_EFX_ExceptionCount;
      dword_18019FB2C = 35;
      Init_thread_footer(&dword_18019FBA4);
    }
  }
  if ( !(_DWORD)v6 || IsSkipAPOFailureCheck() )
  {
    v9 = 0;
  }
  else
  {
    *(_OWORD *)pvar = 0LL;
    v21 = 0LL;
    v9 = (*(__int64 (__fastcall **)(__int64, __int64, __int64 *))(*(_QWORD *)a1 + 32LL))(a1, 2LL, &v16);
    if ( v9 >= 0 )
    {
      (*(void (__fastcall **)(__int64, char *, PROPVARIANT *))(*(_QWORD *)v16 + 40LL))(
        v16,
        &byte_18019FAE0[20 * v6],
        pvar);
      if ( LOWORD(pvar[0]) == 19 )
      {
        v10 = (int)pvar[1];
      }
      else
      {
        LOWORD(pvar[0]) = 19;
        v10 = 0;
      }
      LODWORD(pvar[1]) = (int)(float)(10.0 / a6) + v10;
      v9 = (*(__int64 (__fastcall **)(__int64, char *, PROPVARIANT *))(*(_QWORD *)v16 + 48LL))(
             v16,
             &byte_18019FAE0[20 * v6],
             pvar);
    }
    pv = 0LL;
    wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>::reset(
      &pv,
      0LL);
    (*(void (__fastcall **)(__int64, LPVOID *))(*(_QWORD *)a1 + 40LL))(a1, &pv);
    if ( **(_DWORD **)&g_SysFxUtilTlp > 2u && tlgKeywordOn(*(__int64 *)&g_SysFxUtilTlp, 0x400000000000LL) )
    {
      v17 = (__int64)pv;
      v18 = a5;
      LODWORD(v23) = v6;
      LODWORD(v22) = 1;
      v19 = 0x1000000LL;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByRef<16>,_tlgWrapSz<unsigned short>>(
        v11,
        (unsigned __int8 *)dword_18016C2A3,
        v12,
        v13,
        (__int64)&v19,
        (__int64)&v22,
        (__int64)&v23,
        &v18,
        (void **)&v17);
    }
    if ( pv )
      CoTaskMemFree(pv);
    PropVariantClear(pvar);
  }
  if ( v16 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
  return (unsigned int)v9;
}
