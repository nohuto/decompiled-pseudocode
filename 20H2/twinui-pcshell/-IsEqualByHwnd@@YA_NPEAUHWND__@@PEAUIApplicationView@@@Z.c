/*
 * XREFs of ?IsEqualByHwnd@@YA_NPEAUHWND__@@PEAUIApplicationView@@@Z @ 0x18019206C
 * Callers:
 *     _lambda_1d72a6719327f90c5d8253a2407aff64_::operator() @ 0x18018DD18 (_lambda_1d72a6719327f90c5d8253a2407aff64_--operator().c)
 *     ?GetViewForHwnd@ApplicationViewManagerVisibilityDebouncer@@UEAAJPEAUHWND__@@PEAPEAUIApplicationView@@@Z @ 0x1801912B0 (-GetViewForHwnd@ApplicationViewManagerVisibilityDebouncer@@UEAAJPEAUHWND__@@PEAPEAUIApplicationV.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062CC4 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800663F0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0410 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
bool __fastcall IsEqualByHwnd(HWND a1, struct IApplicationView *a2)
{
  __int64 v4; // rbx
  int v5; // eax
  bool v6; // bl
  __int64 v8[2]; // [rsp+20h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+18h]
  BOOL v10; // [rsp+58h] [rbp+28h] BYREF
  HWND v11; // [rsp+60h] [rbp+30h] BYREF
  __int64 v12; // [rsp+68h] [rbp+38h] BYREF

  v10 = 0;
  v8[0] = 0LL;
  v12 = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v8);
  if ( (**(int (__fastcall ***)(struct IApplicationView *, GUID *, __int64 *))a2)(
         a2,
         &GUID_f3527610_c76d_4316_ac8e_28651acf3df3,
         v8) < 0 )
  {
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v12);
    if ( (**(int (__fastcall ***)(struct IApplicationView *, GUID *, __int64 *))a2)(
           a2,
           &GUID_d8b456d0_bec6_4f57_bb1d_50559a14384b,
           &v12) >= 0 )
    {
      v11 = 0LL;
      v4 = v12;
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v11);
      v5 = (*(__int64 (__fastcall **)(__int64, HWND *))(*(_QWORD *)v4 + 24LL))(v4, &v11);
      if ( v5 >= 0 )
        (*(void (__fastcall **)(HWND, HWND, BOOL *))(*(_QWORD *)v11 + 96LL))(v11, a1, &v10);
      else
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x3D,
          (__int64)"pcshell\\twinui\\appviewmanager\\lib\\util.cpp",
          (const char *)(unsigned int)v5);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v11);
    }
  }
  else if ( (*(int (__fastcall **)(__int64, HWND *))(*(_QWORD *)v8[0] + 24LL))(v8[0], &v11) >= 0 )
  {
    v10 = a1 == v11;
  }
  v6 = v10;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v12);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v8);
  return v6;
}
