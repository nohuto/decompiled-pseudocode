/*
 * XREFs of _lambda_aeff77f085c2b3564306cef4da06d671_::operator() @ 0x180432CA4
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_aeff77f085c2b3564306cef4da06d671___::Run @ 0x180433190 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_aeff77f085c2b3564306cef4da06d671___--Run.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062D64 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800663F0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0410 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall lambda_aeff77f085c2b3564306cef4da06d671_::operator()(__int64 a1)
{
  int v2; // eax
  unsigned int v3; // ebx
  __int64 v5; // rbx
  unsigned int i; // ebp
  __int64 v7; // rsi
  int (__fastcall *v8)(__int64, _QWORD, GUID *, __int64 *); // rdi
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  unsigned int v10; // [rsp+50h] [rbp+8h] BYREF
  __int64 v11; // [rsp+58h] [rbp+10h] BYREF

  v2 = (*(__int64 (__fastcall **)(_QWORD, unsigned int *))(**(_QWORD **)(a1 + 8) + 24LL))(*(_QWORD *)(a1 + 8), &v10);
  v3 = v2;
  if ( v2 >= 0 )
  {
    v5 = *(_QWORD *)(a1 + 16);
    for ( i = 0; i < v10; ++i )
    {
      v11 = 0LL;
      v7 = *(_QWORD *)(a1 + 8);
      v8 = *(int (__fastcall **)(__int64, _QWORD, GUID *, __int64 *))(*(_QWORD *)v7 + 32LL);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v11);
      if ( v8(v7, i, &GUID_c179334c_4295_40d3_bea1_c654d965605a, &v11) >= 0 )
        (*(void (__fastcall **)(__int64, __int64))a1)(v11, v5);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v11);
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
