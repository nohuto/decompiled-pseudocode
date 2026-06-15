/*
 * XREFs of ?GetPreferredInputFormat@CAPOWrapperSrv@@UEAAJPEAUtWAVEFORMATEX@@PEAPEAU2@@Z @ 0x14001B300
 * Callers:
 *     <none>
 * Callees:
 *     ?Create@CAudioMediaType@@SAJPEBUtWAVEFORMATEX@@IPEAPEAUIAudioMediaType@@MH@Z @ 0x14000C680 (-Create@CAudioMediaType@@SAJPEBUtWAVEFORMATEX@@IPEAPEAUIAudioMediaType@@MH@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x14001B400 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0?$CComQIPtr@UIAPOPreferredFormatSupport@@$1?_GUID_45ebff37_f274_4272_9d0d_2c48cea9b7c7@@3U__s_GUID@@B@ATL@@QEAA@PEAUIUnknown@@@Z @ 0x14001B76C (--0-$CComQIPtr@UIAPOPreferredFormatSupport@@$1-_GUID_45ebff37_f274_4272_9d0d_2c48cea9b7c7@@3U__s.c)
 *     _guard_dispatch_icall_nop @ 0x140029E50 (_guard_dispatch_icall_nop.c)
 *     ?CloneWaveFormat@@YAJPEBUtWAVEFORMATEX@@PEAPEAU1@@Z @ 0x14003CF1C (-CloneWaveFormat@@YAJPEBUtWAVEFORMATEX@@PEAPEAU1@@Z.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall CAPOWrapperSrv::GetPreferredInputFormat(CAPOWrapperSrv *this, struct tWAVEFORMATEX *a2, LPVOID *a3)
{
  LPVOID v5; // rbx
  int v6; // eax
  unsigned int v7; // edi
  __int64 v8; // r9
  __int64 v9; // rdx
  int v11; // eax
  const struct tWAVEFORMATEX *v12; // rax
  __int64 v13; // rdx
  int v14; // eax
  int v15; // [rsp+20h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+18h]
  LPVOID pv; // [rsp+58h] [rbp+28h] BYREF
  __int64 v18; // [rsp+68h] [rbp+38h] BYREF

  v5 = 0LL;
  pv = 0LL;
  v18 = 0LL;
  if ( !a2 || !a3 )
  {
    v7 = -2147024809;
    v13 = 369LL;
    goto LABEL_27;
  }
  v6 = CAudioMediaType::Create(a2, (unsigned int)a2->cbSize + 18, (struct IAudioMediaType **)&pv, 0.0, 1);
  v7 = v6;
  if ( v6 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x177,
      (unsigned int)"avcore\\audiocore\\server\\lib\\audioengineutil\\apowrappersrv.cpp",
      (const char *)(unsigned int)v6,
      v15);
    v5 = pv;
    goto LABEL_9;
  }
  v5 = pv;
  if ( !*((_QWORD *)this + 11) )
  {
LABEL_19:
    if ( v18 )
    {
      v12 = (const struct tWAVEFORMATEX *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v18 + 40LL))(v18);
      if ( !v12 )
      {
        v7 = -2004287480;
        v13 = 387LL;
LABEL_27:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v13,
          (unsigned int)"avcore\\audiocore\\server\\lib\\audioengineutil\\apowrappersrv.cpp",
          (const char *)v7,
          v15);
        goto LABEL_9;
      }
      pv = 0LL;
      v14 = CloneWaveFormat(v12, (struct tWAVEFORMATEX **)&pv);
      v7 = v14;
      if ( v14 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x186,
          (unsigned int)"avcore\\audiocore\\server\\lib\\audioengineutil\\apowrappersrv.cpp",
          (const char *)(unsigned int)v14,
          v15);
        CoTaskMemFree(pv);
        goto LABEL_9;
      }
      *a3 = pv;
      CoTaskMemFree(0LL);
    }
    v7 = 0;
    goto LABEL_9;
  }
  ATL::CComQIPtr<IAPOPreferredFormatSupport,&__s_GUID const _GUID_45ebff37_f274_4272_9d0d_2c48cea9b7c7>::CComQIPtr<IAPOPreferredFormatSupport,&__s_GUID const _GUID_45ebff37_f274_4272_9d0d_2c48cea9b7c7>(&pv);
  if ( !pv )
  {
    v7 = -2147467262;
    v8 = 2147500034LL;
    v9 = 380LL;
    goto LABEL_7;
  }
  v11 = (*(__int64 (__fastcall **)(LPVOID, LPVOID, __int64 *))(*(_QWORD *)pv + 24LL))(pv, v5, &v18);
  v7 = v11;
  if ( v11 >= 0 )
  {
    if ( pv )
      (*(void (__fastcall **)(LPVOID))(*(_QWORD *)pv + 16LL))(pv);
    goto LABEL_19;
  }
  v8 = (unsigned int)v11;
  v9 = 381LL;
LABEL_7:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v9,
    (unsigned int)"avcore\\audiocore\\server\\lib\\audioengineutil\\apowrappersrv.cpp",
    (const char *)v8,
    v15);
  if ( pv )
    (*(void (__fastcall **)(LPVOID))(*(_QWORD *)pv + 16LL))(pv);
LABEL_9:
  if ( v18 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 16LL))(v18);
  if ( v5 )
    (*(void (__fastcall **)(LPVOID))(*(_QWORD *)v5 + 16LL))(v5);
  return v7;
}
