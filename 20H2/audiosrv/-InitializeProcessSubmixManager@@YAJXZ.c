/*
 * XREFs of ?InitializeProcessSubmixManager@@YAJXZ @ 0x180065204
 * Callers:
 *     ?InitializeDeviceGraphManager@@YAJXZ @ 0x1800651C0 (-InitializeDeviceGraphManager@@YAJXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18004BEB4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18006A33C (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??1?$MakeAllocator@VAvoidEndpointPolicyRule@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x180071990 (--1-$MakeAllocator@VAvoidEndpointPolicyRule@@@Details@WRL@Microsoft@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800741C0 (_guard_dispatch_icall_nop.c)
 */

__int64 InitializeProcessSubmixManager(void)
{
  _DWORD *v0; // rax
  _DWORD *v1; // rbx
  Microsoft::WRL::Details *v2; // rcx
  int v3; // edi
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  _DWORD *v6; // [rsp+30h] [rbp+8h] BYREF

  g_ProcessSubmixManager = 0LL;
  v0 = operator new(0x50uLL, (const struct std::nothrow_t *)&std::nothrow);
  v6 = v0;
  v1 = v0;
  if ( v0 )
  {
    v2 = Microsoft::WRL::Details::ModuleBase::module_;
    v0[3] = 1;
    *(_QWORD *)v0 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IProcessSubmixManager>::`vftable';
    if ( v2 )
      (*(void (__fastcall **)(Microsoft::WRL::Details *))(*(_QWORD *)v2 + 8LL))(v2);
    *(_QWORD *)v1 = &CProcessSubmixManager::`vftable';
    InitializeCriticalSectionEx((LPCRITICAL_SECTION)(v1 + 4), 0, 0);
    *((_QWORD *)v1 + 7) = 0LL;
    *((_QWORD *)v1 + 8) = 0LL;
    *((_QWORD *)v1 + 9) = 0LL;
    v3 = (**(__int64 (__fastcall ***)(_DWORD *, GUID *, struct IProcessSubmixManager **))v1)(
           v1,
           &GUID_f77c3f67_ba14_470c_a54e_5d2275e86848,
           &g_ProcessSubmixManager);
    (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v1 + 16LL))(v1);
    if ( v3 >= 0 )
      return 0LL;
  }
  else
  {
    Microsoft::WRL::Details::MakeAllocator<AvoidEndpointPolicyRule>::~MakeAllocator<AvoidEndpointPolicyRule>(&v6);
    v3 = -2147024882;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x70,
    (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\applicationsubmix.cpp",
    (const char *)(unsigned int)v3);
  return (unsigned int)v3;
}
