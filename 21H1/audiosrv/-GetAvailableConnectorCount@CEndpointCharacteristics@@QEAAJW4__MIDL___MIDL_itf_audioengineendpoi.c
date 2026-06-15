/*
 * XREFs of ?GetAvailableConnectorCount@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAI@Z @ 0x18011C644
 * Callers:
 *     ?UseSupportedConnectorMode@@YAJPEAVCEndpointCharacteristics@@KW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@HAEA_N@Z @ 0x180021780 (-UseSupportedConnectorMode@@YAJPEAVCEndpointCharacteristics@@KW4__MIDL___MIDL_itf_audioengineend.c)
 * Callees:
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18000FC18 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18004C604 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x18006A480 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180074B80 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CEndpointCharacteristics::GetAvailableConnectorCount(
        CEndpointCharacteristics *this,
        enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 a2,
        unsigned int *a3)
{
  __int64 v5; // rcx
  int v6; // eax
  unsigned int v7; // ebx
  __int64 v8; // rdx
  __int64 v9; // r9
  unsigned int v10; // r14d
  int v12[2]; // [rsp+30h] [rbp-29h] BYREF
  PROPVARIANT pvar[2]; // [rsp+38h] [rbp-21h] BYREF
  __int64 v14; // [rsp+48h] [rbp-11h]
  PROPVARIANT *v15; // [rsp+50h] [rbp-9h]
  char v16; // [rsp+58h] [rbp-1h]
  _DWORD v17[6]; // [rsp+60h] [rbp+7h] BYREF
  _DWORD v18[6]; // [rsp+78h] [rbp+1Fh] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+B8h] [rbp+5Fh]

  v5 = *((_QWORD *)this + 2);
  *(_QWORD *)v12 = 0LL;
  if ( (*(int (__fastcall **)(__int64, GUID *, __int64))(*(_QWORD *)v5 + 24LL))(
         v5,
         &GUID_eddce3e4_f3c1_453a_b461_223563cbd886,
         1LL) < 0 )
  {
    *a3 = 1;
    goto LABEL_16;
  }
  v17[0] = -1702713381;
  v17[1] = 1102331579;
  v17[2] = -1223116157;
  v17[3] = -65530063;
  v17[4] = 1;
  *(_OWORD *)pvar = 0LL;
  v14 = 0LL;
  v15 = pvar;
  v16 = 1;
  v6 = (*(__int64 (__fastcall **)(_QWORD, _DWORD *, PROPVARIANT *))(**((_QWORD **)this + 5) + 40LL))(
         *((_QWORD *)this + 5),
         v17,
         pvar);
  v7 = v6;
  if ( v6 < 0 )
  {
    v8 = 7575LL;
LABEL_12:
    v9 = (unsigned int)v6;
    goto LABEL_13;
  }
  if ( LOWORD(pvar[0]) == 19 )
  {
    v10 = (unsigned int)pvar[1];
    PropVariantClear(pvar);
    v18[0] = 590439624;
    v18[1] = 1283267372;
    v18[2] = 1907779772;
    v18[3] = 1730509416;
    v18[4] = 1;
    v6 = (*(__int64 (__fastcall **)(_QWORD, _DWORD *, PROPVARIANT *))(**((_QWORD **)this + 5) + 40LL))(
           *((_QWORD *)this + 5),
           v18,
           pvar);
    v7 = v6;
    if ( v6 < 0 )
    {
      v8 = 7581LL;
      goto LABEL_12;
    }
    if ( LOWORD(pvar[0]) != 31 )
    {
      v7 = -2147418113;
      v9 = 2147549183LL;
      v8 = 7582LL;
      goto LABEL_13;
    }
    v6 = (*(__int64 (__fastcall **)(_QWORD, PROPVARIANT, _QWORD, unsigned int *))(**(_QWORD **)v12 + 24LL))(
           *(_QWORD *)v12,
           pvar[1],
           v10,
           a3);
    v7 = v6;
    if ( v6 < 0 )
    {
      v8 = 7585LL;
      goto LABEL_12;
    }
    PropVariantClear(pvar);
LABEL_16:
    v7 = 0;
    goto LABEL_17;
  }
  v7 = -2147418113;
  v9 = 2147549183LL;
  v8 = 7576LL;
LABEL_13:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v8,
    (__int64)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
    (const char *)v9);
  PropVariantClear(pvar);
LABEL_17:
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)v12);
  return v7;
}
