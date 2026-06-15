/*
 * XREFs of ?OnRuleOperation@AvoidEndpointPolicyRule@@UEAAJPEBGW4RuleOperation@@KPEAW4RuleAction@@@Z @ 0x1801151D0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18000FC18 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18004C654 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180074C80 (_guard_dispatch_icall_nop.c)
 *     ?reset@?$com_ptr_t@UIPropertySet@Collections@Foundation@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x1800CBCC4 (-reset@-$com_ptr_t@UIPropertySet@Collections@Foundation@Windows@@Uerr_returncode_policy@wil@@@wi.c)
 */

__int64 __fastcall AvoidEndpointPolicyRule::OnRuleOperation(__int64 a1, const wchar_t *a2, int a3, int a4, LPVOID ppv)
{
  _DWORD *v5; // rdi
  __int64 v7; // r14
  HRESULT v8; // eax
  unsigned int v9; // ebx
  __int64 v10; // rdx
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // [rsp+30h] [rbp-50h] BYREF
  __int64 v15; // [rsp+38h] [rbp-48h] BYREF
  __int64 v16; // [rsp+40h] [rbp-40h] BYREF
  __int64 v17; // [rsp+48h] [rbp-38h] BYREF
  PROPVARIANT pvar[2]; // [rsp+50h] [rbp-30h] BYREF
  __int64 v19; // [rsp+60h] [rbp-20h]
  PROPVARIANT v20[2]; // [rsp+68h] [rbp-18h] BYREF
  __int64 v21; // [rsp+78h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+8h]

  v5 = ppv;
  *(_DWORD *)ppv = 1;
  if ( !a3 )
  {
    if ( a4 == 1 || wcsncmp((const wchar_t *)(a1 + 84), a2, 0x80uLL) )
      return 0LL;
    goto LABEL_7;
  }
  if ( a3 == 1 )
  {
    v7 = a1 + 84;
    if ( wcsncmp((const wchar_t *)(a1 + 84), a2, 0x80uLL) )
    {
      ppv = 0LL;
      v17 = 0LL;
      v16 = 0LL;
      v15 = 0LL;
      v14 = 0LL;
      *(_OWORD *)v20 = 0LL;
      v21 = 0LL;
      *(_OWORD *)pvar = 0LL;
      v19 = 0LL;
      wil::com_ptr_t<Windows::Foundation::Collections::IPropertySet,wil::err_returncode_policy>::reset((__int64 *)&ppv);
      v8 = CoCreateInstance(
             &GUID_bcde0395_e52f_467c_8e3d_c4579291692e,
             0LL,
             0x17u,
             &GUID_a95664d2_9614_4f35_a746_de8db63617e6,
             &ppv);
      v9 = v8;
      if ( v8 >= 0 )
      {
        v8 = (*(__int64 (__fastcall **)(LPVOID, __int64, __int64 *))(*(_QWORD *)ppv + 40LL))(ppv, v7, &v17);
        v9 = v8;
        if ( v8 >= 0 )
        {
          v8 = (*(__int64 (__fastcall **)(LPVOID, const wchar_t *, __int64 *))(*(_QWORD *)ppv + 40LL))(ppv, a2, &v16);
          v9 = v8;
          if ( v8 >= 0 )
          {
            v8 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)v17 + 32LL))(v17, 0LL, &v15);
            v9 = v8;
            if ( v8 >= 0 )
            {
              v8 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)v16 + 32LL))(v16, 0LL, &v14);
              v9 = v8;
              if ( v8 >= 0 )
              {
                v8 = (*(__int64 (__fastcall **)(__int64, const DEVPROPKEY *, PROPVARIANT *))(*(_QWORD *)v15 + 40LL))(
                       v15,
                       &DEVPKEY_Device_ContainerId,
                       v20);
                v9 = v8;
                if ( v8 >= 0 )
                {
                  v8 = (*(__int64 (__fastcall **)(__int64, const DEVPROPKEY *, PROPVARIANT *))(*(_QWORD *)v14 + 40LL))(
                         v14,
                         &DEVPKEY_Device_ContainerId,
                         pvar);
                  v9 = v8;
                  if ( v8 >= 0 )
                  {
                    if ( LOWORD(v20[0]) == 72 && LOWORD(pvar[0]) == 72 )
                    {
                      v12 = *(_QWORD *)v20[1];
                      if ( !*(_QWORD *)v20[1] )
                        v12 = *((_QWORD *)v20[1] + 1) + 1LL;
                      if ( v12 )
                      {
                        v13 = *(_QWORD *)v20[1] - *(_QWORD *)pvar[1];
                        if ( *(_QWORD *)v20[1] == *(_QWORD *)pvar[1] )
                          v13 = *((_QWORD *)v20[1] + 1) - *((_QWORD *)pvar[1] + 1);
                        if ( !v13 )
                          *v5 = 2;
                      }
                    }
                    PropVariantClear(pvar);
                    PropVariantClear(v20);
                    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v14);
                    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v15);
                    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v16);
                    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v17);
                    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&ppv);
                    return 0LL;
                  }
                  v10 = 93LL;
                }
                else
                {
                  v10 = 92LL;
                }
              }
              else
              {
                v10 = 91LL;
              }
            }
            else
            {
              v10 = 90LL;
            }
          }
          else
          {
            v10 = 89LL;
          }
        }
        else
        {
          v10 = 88LL;
        }
      }
      else
      {
        v10 = 84LL;
      }
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v10,
        (__int64)"avcore\\audiocore\\server\\audiosrv\\defaultdevice\\avoidendpointpolicyrule.cpp",
        (const char *)(unsigned int)v8);
      PropVariantClear(pvar);
      PropVariantClear(v20);
      wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v14);
      wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v15);
      wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v16);
      wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v17);
      wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&ppv);
      return v9;
    }
LABEL_7:
    *v5 = 2;
  }
  return 0LL;
}
