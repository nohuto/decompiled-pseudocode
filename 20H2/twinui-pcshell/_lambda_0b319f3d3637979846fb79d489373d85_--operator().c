/*
 * XREFs of _lambda_0b319f3d3637979846fb79d489373d85_::operator() @ 0x180432ADC
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_0b319f3d3637979846fb79d489373d85___::Run @ 0x180433170 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_0b319f3d3637979846fb79d489373d85___--Run.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062D64 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800663F0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0410 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall lambda_0b319f3d3637979846fb79d489373d85_::operator()(__int64 a1)
{
  int v2; // eax
  unsigned int v3; // ebx
  __int64 v5; // rbp
  __int64 v6; // r15
  unsigned int i; // esi
  __int64 v8; // rdi
  int (__fastcall *v9)(__int64, _QWORD, GUID *, __int64 *); // rbx
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  unsigned int v11; // [rsp+60h] [rbp+8h] BYREF
  __int64 v12; // [rsp+68h] [rbp+10h] BYREF

  v2 = (*(__int64 (__fastcall **)(_QWORD, unsigned int *))(**(_QWORD **)(a1 + 8) + 24LL))(*(_QWORD *)(a1 + 8), &v11);
  v3 = v2;
  if ( v2 >= 0 )
  {
    v5 = *(_QWORD *)(a1 + 16);
    v6 = *(_QWORD *)(a1 + 24);
    for ( i = 0; i < v11; ++i )
    {
      v12 = 0LL;
      v8 = *(_QWORD *)(a1 + 8);
      v9 = *(int (__fastcall **)(__int64, _QWORD, GUID *, __int64 *))(*(_QWORD *)v8 + 32LL);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v12);
      if ( v9(v8, i, &GUID_1ba7cf30_3591_43fa_abfa_4aaf7abeedb7, &v12) >= 0 )
        (*(void (__fastcall **)(__int64, __int64, __int64))a1)(v12, v6, v5);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v12);
    }
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x11A,
      (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopnotifications.cpp",
      (const char *)(unsigned int)v2);
    return v3;
  }
}
