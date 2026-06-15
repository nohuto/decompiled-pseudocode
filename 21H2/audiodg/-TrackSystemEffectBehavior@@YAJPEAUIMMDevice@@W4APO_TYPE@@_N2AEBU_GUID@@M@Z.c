/*
 * XREFs of ?TrackSystemEffectBehavior@@YAJPEAUIMMDevice@@W4APO_TYPE@@_N2AEBU_GUID@@M@Z @ 0x14000B050
 * Callers:
 *     ?ActivateAPOs@CPipeInstance@@AEAAJ_K@Z @ 0x140008720 (-ActivateAPOs@CPipeInstance@@AEAAJ_K@Z.c)
 *     ?TrackSystemEffectBehavior@@YAJPEBGW4APO_TYPE@@_N2AEBU_GUID@@M@Z @ 0x140009E00 (-TrackSystemEffectBehavior@@YAJPEBGW4APO_TYPE@@_N2AEBU_GUID@@M@Z.c)
 * Callees:
 *     _Init_thread_footer @ 0x14001E840 (_Init_thread_footer.c)
 *     _Init_thread_header @ 0x14001E8A8 (_Init_thread_header.c)
 *     _guard_dispatch_icall_nop @ 0x140029E50 (_guard_dispatch_icall_nop.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U2@U?$_tlgWrapperByRef@$0BA@@@U?$_tlgWrapSz@G@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@4AEBU?$_tlgWrapperByRef@$0BA@@@AEBU?$_tlgWrapSz@G@@@Z @ 0x140051E98 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U2@U-$_tlgWrapperByRef@$0BA@@@U-$_tlg.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall TrackSystemEffectBehavior(__int64 a1, int a2, char a3, unsigned __int8 a4, __int64 a5, float a6)
{
  DWORD v6; // r14d
  __int64 v8; // rdi
  __int64 *ThreadLocalStoragePointer; // rax
  __int64 v11; // rbx
  int v12; // ebx
  void *v13; // rdx
  int v15; // ecx
  __int64 v16; // rdx
  DWORD pcbData; // [rsp+50h] [rbp-39h] BYREF
  __int64 v18; // [rsp+58h] [rbp-31h] BYREF
  PROPVARIANT pvar[2]; // [rsp+60h] [rbp-29h] BYREF
  __int64 v20; // [rsp+70h] [rbp-19h]
  LPVOID pv; // [rsp+78h] [rbp-11h] BYREF
  __int64 v22; // [rsp+80h] [rbp-9h] BYREF
  __int64 v23; // [rsp+88h] [rbp-1h] BYREF
  __int64 v24; // [rsp+90h] [rbp+7h] BYREF
  PROPVARIANT v25[2]; // [rsp+98h] [rbp+Fh] BYREF
  __int64 v26; // [rsp+A8h] [rbp+1Fh]
  __int64 pvData; // [rsp+E8h] [rbp+5Fh] BYREF

  v6 = a4;
  v8 = a2;
  v18 = 0LL;
  ThreadLocalStoragePointer = (__int64 *)NtCurrentTeb()->ThreadLocalStoragePointer;
  v11 = *ThreadLocalStoragePointer;
  if ( dword_1400903F4 > *(_DWORD *)(*ThreadLocalStoragePointer + 4) )
  {
    Init_thread_header(&dword_1400903F4);
    if ( dword_1400903F4 == -1 )
    {
      xmmword_140090134 = PKEY_Endpoint_LFX_FailCount;
      dword_140090144 = 9;
      xmmword_140090148 = PKEY_Endpoint_GFX_FailCount;
      dword_140090158 = 8;
      xmmword_14009015C = PKEY_Endpoint_EFX_FailCount;
      dword_14009016C = 31;
      Init_thread_footer(&dword_1400903F4);
    }
  }
  if ( dword_1400903F0 > *(_DWORD *)(v11 + 4) )
  {
    Init_thread_header(&dword_1400903F0);
    if ( dword_1400903F0 == -1 )
    {
      xmmword_1400900E4 = PKEY_Endpoint_LFX_ExceptionCount;
      dword_1400900F4 = 33;
      xmmword_1400900F8 = PKEY_Endpoint_GFX_ExceptionCount;
      dword_140090108 = 34;
      xmmword_14009010C = PKEY_Endpoint_EFX_ExceptionCount;
      dword_14009011C = 35;
      Init_thread_footer(&dword_1400903F0);
    }
  }
  if ( !(_DWORD)v8 )
  {
    v12 = 0;
    goto LABEL_14;
  }
  if ( !byte_1400900C8 )
  {
    LODWORD(pvData) = 0;
    pcbData = 4;
    if ( !RegGetValueW(
            HKEY_LOCAL_MACHINE,
            L"Software\\Microsoft\\Windows\\CurrentVersion\\Audio\\Policy",
            L"SkipAPOFailureCheck",
            0x10u,
            0LL,
            &pvData,
            &pcbData) )
      byte_140090170 = (_DWORD)pvData != 0;
    byte_1400900C8 = 1;
  }
  if ( byte_140090170 )
  {
    v12 = 0;
    goto LABEL_14;
  }
  *(_OWORD *)pvar = 0LL;
  v20 = 0LL;
  v12 = (*(__int64 (__fastcall **)(__int64, __int64, __int64 *))(*(_QWORD *)a1 + 32LL))(a1, 2LL, &v18);
  if ( v12 >= 0 )
  {
    v13 = &unk_1400900D0;
    if ( !(_BYTE)v6 )
      v13 = &unk_140090120;
    v12 = (*(__int64 (__fastcall **)(__int64, __int64, PROPVARIANT *))(*(_QWORD *)v18 + 40LL))(
            v18,
            (__int64)v13 + 20 * v8,
            pvar);
    if ( a3 )
    {
      if ( LOWORD(pvar[0]) == 19 )
      {
        if ( !LODWORD(pvar[1]) )
          goto LABEL_12;
      }
      else if ( !LOWORD(pvar[0]) )
      {
        goto LABEL_12;
      }
      LOWORD(pvar[0]) = 19;
      if ( !(_BYTE)v6 )
      {
        LODWORD(pvar[1]) = 0;
        goto LABEL_39;
      }
      *(_OWORD *)v25 = 0LL;
      v26 = 0LL;
      (*(void (__fastcall **)(__int64, void *, PROPVARIANT *))(*(_QWORD *)v18 + 40LL))(
        v18,
        &PKEY_Endpoint_AllNonCriticalAPOsDisabled,
        v25);
      if ( LOWORD(v25[0]) != 19 || LODWORD(v25[1]) != 1 || LODWORD(pvar[1]) > 1 )
        --LODWORD(pvar[1]);
      PropVariantClear(v25);
    }
    else
    {
      if ( LOWORD(pvar[0]) == 19 )
      {
        v15 = (int)pvar[1];
      }
      else
      {
        LOWORD(pvar[0]) = 19;
        v15 = 0;
      }
      LODWORD(pvar[1]) = (int)(float)(10.0 / a6) + v15;
    }
    v16 = 20 * v8 + 590032;
    if ( (_BYTE)v6 )
    {
LABEL_40:
      v12 = (*(__int64 (__fastcall **)(__int64, char *, PROPVARIANT *))(*(_QWORD *)v18 + 48LL))(
              v18,
              (char *)&_ImageBase + v16,
              pvar);
      goto LABEL_12;
    }
LABEL_39:
    v16 = 20 * v8 + 590112;
    goto LABEL_40;
  }
LABEL_12:
  if ( !a3 )
  {
    pv = 0LL;
    (*(void (__fastcall **)(__int64, LPVOID *))(*(_QWORD *)a1 + 40LL))(a1, &pv);
    if ( **(_DWORD **)&g_SysFxUtilTlp > 2u
      && (*(_QWORD *)(*(_QWORD *)&g_SysFxUtilTlp + 16LL) & 0x400000000000LL) != 0
      && (*(_QWORD *)(*(_QWORD *)&g_SysFxUtilTlp + 24LL) & 0x400000000000LL) == *(_QWORD *)(*(_QWORD *)&g_SysFxUtilTlp
                                                                                          + 24LL) )
    {
      v22 = (__int64)pv;
      v23 = a5;
      LODWORD(pvData) = v8;
      pcbData = v6;
      v24 = 0x1000000LL;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByRef<16>,_tlgWrapSz<unsigned short>>(
        g_SysFxUtilTlp,
        (int)&dword_14007C569,
        (__int64)&v24,
        (__int64)&pcbData,
        (__int64)&pvData,
        (__int64)&v23,
        (__int64)&v22);
    }
    if ( pv )
      CoTaskMemFree(pv);
  }
  PropVariantClear(pvar);
LABEL_14:
  if ( v18 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 16LL))(v18);
  return (unsigned int)v12;
}
