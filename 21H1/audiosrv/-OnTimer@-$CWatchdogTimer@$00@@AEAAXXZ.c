/*
 * XREFs of ?OnTimer@?$CWatchdogTimer@$00@@AEAAXXZ @ 0x1800BCC4C
 * Callers:
 *     ?TimerCallback@?$CWatchdogTimer@$00@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_TIMER@@@Z @ 0x1800BD1D0 (-TimerCallback@-$CWatchdogTimer@$00@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_TIMER@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x18006A480 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180074B80 (_guard_dispatch_icall_nop.c)
 *     _tlgKeywordOn @ 0x1800B7A3C (_tlgKeywordOn.c)
 *     ??$Write@U?$_tlgWrapperByRef@$0BA@@@U?$_tlgWrapSz@G@@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByRef@$0BA@@@AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByVal@$03@@@Z @ 0x1800BC018 (--$Write@U-$_tlgWrapperByRef@$0BA@@@U-$_tlgWrapSz@G@@U-$_tlgWrapperByVal@$03@@@-$_tlgWriteTempla.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@G@@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@G@@3@Z @ 0x1800BC0EC (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@G@@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvide.c)
 *     ?HangIsProbablyReal@?$CWatchdogTimer@$00@@AEAA_NXZ @ 0x1800BC8D0 (-HangIsProbablyReal@-$CWatchdogTimer@$00@@AEAA_NXZ.c)
 *     ?IsFirstHang@?$CWatchdogTimer@$00@@AEAA_NXZ @ 0x1800BCA1C (-IsFirstHang@-$CWatchdogTimer@$00@@AEAA_NXZ.c)
 */

char __fastcall CWatchdogTimer<1>::OnTimer(__int64 a1)
{
  char result; // al
  unsigned __int32 v3; // r9d
  _DWORD *v4; // rcx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  void (__fastcall ***v8)(_QWORD, _QWORD, _QWORD); // rcx
  _DWORD *v9; // rcx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rcx
  int v14; // edi
  _DWORD *v15; // rcx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  DWORD CurrentProcessId; // eax
  __int64 v20; // r8
  int v21; // [rsp+48h] [rbp-9h] BYREF
  int v22; // [rsp+4Ch] [rbp-5h] BYREF
  int v23; // [rsp+50h] [rbp-1h] BYREF
  int v24; // [rsp+54h] [rbp+3h] BYREF
  int v25; // [rsp+58h] [rbp+7h] BYREF
  _DWORD v26[2]; // [rsp+60h] [rbp+Fh] BYREF
  void *v27; // [rsp+68h] [rbp+17h] BYREF
  void *v28; // [rsp+70h] [rbp+1Fh] BYREF
  GUID *p_pguid; // [rsp+78h] [rbp+27h] BYREF
  void *v30; // [rsp+80h] [rbp+2Fh] BYREF
  GUID pguid; // [rsp+88h] [rbp+37h] BYREF

  result = CWatchdogTimer<1>::HangIsProbablyReal(a1);
  if ( result )
  {
    v3 = _InterlockedIncrement((volatile signed __int32 *)(a1 + 44));
    if ( v3 >= 3 )
    {
      if ( v3 == 3 )
      {
        v8 = *(void (__fastcall ****)(_QWORD, _QWORD, _QWORD))(a1 + 32);
        if ( v8 )
        {
          (**v8)(v8, *(unsigned int *)(a1 + 16), *(_QWORD *)(a1 + 24));
          *(_BYTE *)(a1 + 40) = 1;
        }
        result = CWatchdogTimer<1>::IsFirstHang(a1);
        if ( result )
        {
          pguid = GUID_00000000_0000_0000_0000_000000000000;
          CoCreateGuid(&pguid);
          v9 = *(_DWORD **)(a1 + 8);
          if ( *v9 > 2u && tlgKeywordOn((__int64)v9, 0x400000000001LL) )
          {
            v23 = *(_DWORD *)(a1 + 16);
            v28 = *(void **)(a1 + 24);
            p_pguid = &pguid;
            _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByRef<16>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>>(
              v10,
              byte_18016726D,
              v11,
              v12,
              (__int64 *)&p_pguid,
              &v28,
              (__int64)&v23);
          }
          RtlPublishWnfStateData(WNF_AUDC_HEALTH_PROBLEM, 0LL, &pguid, 16LL, 0LL);
          v13 = *(_QWORD *)(a1 + 32);
          if ( v13 )
          {
            v14 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
            if ( v14 )
            {
              v15 = *(_DWORD **)(a1 + 8);
              if ( *v15 > 4u )
              {
                if ( tlgKeywordOn((__int64)v15, 1LL) )
                {
                  v24 = *(_DWORD *)(a1 + 16);
                  v30 = *(void **)(a1 + 24);
                  v25 = v14;
                  _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>>(
                    v16,
                    byte_18016721F,
                    v17,
                    v18,
                    (__int64)&v25,
                    &v30,
                    (__int64)&v24);
                }
              }
            }
          }
          else
          {
            v14 = 0;
          }
          CurrentProcessId = GetCurrentProcessId();
          v20 = *(unsigned int *)(a1 + 16);
          v26[1] = v14;
          v26[0] = CurrentProcessId;
          return ReportCoreHang(v26, (unsigned int)(v14 != 0) + 1, v20, 8LL);
        }
      }
    }
    else
    {
      v4 = *(_DWORD **)(a1 + 8);
      if ( *v4 > 3u )
      {
        result = tlgKeywordOn((__int64)v4, 1LL);
        if ( result )
        {
          v21 = *(_DWORD *)(a1 + 16);
          v27 = *(void **)(a1 + 24);
          v22 = v7;
          return _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>>(
                   v5,
                   byte_18016729B,
                   v6,
                   v7,
                   (__int64)&v22,
                   &v27,
                   (__int64)&v21);
        }
      }
    }
  }
  return result;
}
