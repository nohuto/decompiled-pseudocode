/*
 * XREFs of ?_IsSelfActivation@HolographicPositioner@@AEAAJPEAUIApplicationView@@PEAUIPropertySet@Collections@Foundation@Windows@@PEAH@Z @ 0x180244E14
 * Callers:
 *     ?_RaiseRequestNavigateToView@HolographicPositioner@@AEAAJPEAUIApplicationView@@@Z @ 0x180245470 (-_RaiseRequestNavigateToView@HolographicPositioner@@AEAAJPEAUIApplicationView@@@Z.c)
 * Callees:
 *     ??$GetValue@I@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@P8IPropertyValue@Foundation@3@EAAJPEAI@Z1@Z @ 0x180023EA0 (--$GetValue@I@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@P8IPropertyVa.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x18002753C (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062D64 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800663F0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18007256C (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     __security_check_cookie @ 0x18008CB20 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0410 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=7
__int64 __fastcall HolographicPositioner::_IsSelfActivation(
        HolographicPositioner *this,
        __int64 (__fastcall ***a2)(struct IApplicationView *, GUID *, __int64 *),
        struct Windows::Foundation::Collections::IPropertySet *a3,
        int *a4)
{
  unsigned int v7; // r8d
  HSTRING_HEADER *v8; // rax
  __int64 (__fastcall ***v9)(_QWORD, GUID *, __int64 *); // r8
  int v10; // ebx
  unsigned int v11; // esi
  __int64 v12; // rdi
  __int64 (__fastcall *v13)(__int64, _QWORD, _QWORD); // rbx
  __int64 (__fastcall ***v14)(_QWORD, _QWORD, _QWORD); // rbx
  __int64 (__fastcall *v15)(_QWORD, GUID *, __int64 *); // rdi
  __int64 v16; // rbx
  __int64 (__fastcall *v17)(__int64, __int64 *); // rdi
  int v18; // eax
  __int64 (__fastcall *v19)(struct IApplicationView *, GUID *, __int64 *); // rbx
  __int64 v20; // rbx
  __int64 (__fastcall *v21)(__int64, __int64 *); // rdi
  int v22; // eax
  int v24; // [rsp+20h] [rbp-39h] BYREF
  __int64 v25; // [rsp+28h] [rbp-31h] BYREF
  __int64 v26; // [rsp+30h] [rbp-29h] BYREF
  __int64 v27; // [rsp+38h] [rbp-21h] BYREF
  __int64 v28; // [rsp+40h] [rbp-19h] BYREF
  __int64 (__fastcall ***v29)(_QWORD, GUID *, __int64 *); // [rsp+48h] [rbp-11h] BYREF
  unsigned int v30; // [rsp+50h] [rbp-9h] BYREF
  __int64 (__fastcall ***v31)(_QWORD, GUID *, __int64 *); // [rsp+58h] [rbp-1h] BYREF
  HSTRING_HEADER v32; // [rsp+60h] [rbp+7h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+B8h] [rbp+5Fh]

  *a4 = 0;
  v31 = (__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *))a3;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v31);
  v8 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v32, (const WCHAR **)off_180497E70, v7);
  v10 = Windows::Internal::ShellHelpers::PropertySetHelper::GetValue<unsigned int>(
          &v31,
          (__int64)v8[1].Reserved.Reserved1,
          v9,
          &v30);
  if ( v10 >= 0 )
  {
    v11 = v30;
    v29 = 0LL;
    v12 = *((_QWORD *)this + 28);
    v13 = *(__int64 (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)v12 + 48LL);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v29);
    v10 = v13(v12, v11, &v29);
    if ( v10 >= 0 )
    {
      v28 = 0LL;
      v14 = (__int64 (__fastcall ***)(_QWORD, _QWORD, _QWORD))v29;
      v15 = **v29;
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v28);
      v10 = v15(v14, &GUID_d8b456d0_bec6_4f57_bb1d_50559a14384b, &v28);
      if ( v10 >= 0 )
      {
        v27 = 0LL;
        v16 = v28;
        v17 = *(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v28 + 24LL);
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v27);
        v18 = v17(v16, &v27);
        v10 = v18;
        if ( v18 >= 0 )
        {
          v26 = 0LL;
          v19 = **a2;
          Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v26);
          v10 = v19((struct IApplicationView *)a2, &GUID_d8b456d0_bec6_4f57_bb1d_50559a14384b, &v26);
          if ( v10 >= 0 )
          {
            v25 = 0LL;
            v20 = v26;
            v21 = *(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v26 + 24LL);
            Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v25);
            v22 = v21(v20, &v25);
            v10 = v22;
            if ( v22 >= 0 )
            {
              v24 = 0;
              if ( (*(int (__fastcall **)(__int64, __int64, int *))(*(_QWORD *)v25 + 104LL))(v25, v27, &v24) >= 0 && v24 )
                *a4 = 1;
              v10 = 0;
            }
            else
            {
              wil::details::in1diag3::Return_Hr(
                retaddr,
                (void *)0x695,
                (__int64)"pcshell\\twinui\\holographicpositioner\\lib\\holographicpositioner.cpp",
                (const char *)(unsigned int)v22);
            }
            Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v25);
          }
          Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v26);
        }
        else
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x68F,
            (__int64)"pcshell\\twinui\\holographicpositioner\\lib\\holographicpositioner.cpp",
            (const char *)(unsigned int)v18);
        }
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v27);
      }
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v28);
    }
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v29);
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v31);
  return (unsigned int)v10;
}
