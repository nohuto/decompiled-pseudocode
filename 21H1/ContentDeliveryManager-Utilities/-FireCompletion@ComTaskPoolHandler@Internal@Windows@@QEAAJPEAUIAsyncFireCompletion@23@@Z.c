/*
 * XREFs of ?FireCompletion@ComTaskPoolHandler@Internal@Windows@@QEAAJPEAUIAsyncFireCompletion@23@@Z @ 0x180007884
 * Callers:
 *     ?FireCompletion@?$AsyncOperation@UIAsyncAction@Foundation@Windows@@UIAsyncActionCompletedHandler@23@VCNoResult@Internal@3@VComTaskPoolHandler@63@UINilDelegate@63@U?$AsyncCausalityOptions@$1?ResolveLayoutBindingsOperationName@?A0xb8965cb7@@3QBGB$1?GUID_CAUSALITY_WINDOWS_PLATFORM_ID@@3U_GUID@@B$01@WRL@Microsoft@@@Internal@Windows@@UEAAJXZ @ 0x18001E000 (-FireCompletion@-$AsyncOperation@UIAsyncAction@Foundation@Windows@@UIAsyncActionCompletedHandler.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800CB364 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800CC480 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::Internal::ComTaskPoolHandler::FireCompletion(
        Windows::Internal::ComTaskPoolHandler *this,
        struct Windows::Internal::IAsyncFireCompletion *a2)
{
  unsigned int v2; // esi
  __int64 v4; // rbp
  bool v5; // bl
  struct Windows::Internal::IAsyncFireCompletion *v6; // rdi
  _QWORD *v7; // rax
  _QWORD *v8; // rbx
  _QWORD *v9; // r15
  struct Microsoft::WRL::Details::ModuleBase *v10; // rcx
  DWORD CurrentThreadId; // eax
  int v12; // ebx
  __int64 v13; // rax
  unsigned int v14; // eax
  Windows::Internal::ComTaskPoolHandler *v16; // [rsp+60h] [rbp+8h] BYREF
  __int64 v17; // [rsp+70h] [rbp+18h]

  v16 = this;
  v2 = 0;
  v4 = *((_QWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + (unsigned int)tls_index);
  v5 = *(_DWORD *)(v4 + 8) > 4;
  if ( *(int *)(v4 + 8) > 4 )
  {
    if ( a2 )
      (*(void (__fastcall **)(struct Windows::Internal::IAsyncFireCompletion *))(*(_QWORD *)a2 + 8LL))(a2);
    v16 = a2;
    v6 = a2;
    if ( a2 )
      (*(void (__fastcall **)(struct Windows::Internal::IAsyncFireCompletion *))(*(_QWORD *)a2 + 8LL))(a2);
    v17 = 0LL;
    v7 = operator new(0x18uLL, (const struct std::nothrow_t *)&std::nothrow);
    v8 = v7;
    v9 = 0LL;
    if ( v7 )
    {
      v10 = Microsoft::WRL::Details::ModuleBase::module_;
      *((_DWORD *)v7 + 3) = 1;
      *v7 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>::`vftable';
      if ( v10 )
        (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)v10 + 8LL))(v10);
      v8[2] = 0LL;
      if ( v8 + 2 != &v16 )
      {
        v8[2] = a2;
        v6 = 0LL;
      }
      v9 = v8;
      *v8 = &Windows::Internal::ComTaskPool::CTaskWrapper<_lambda_c2fd7731c5ae0d37e65ea73be67c0f1b_>::`vftable';
    }
    CurrentThreadId = GetCurrentThreadId();
    v12 = SHTaskPoolQueueTask(3LL, 0LL, CurrentThreadId, 0LL, v9, 0LL);
    if ( v9 )
      (*(void (__fastcall **)(_QWORD *))(*v9 + 16LL))(v9);
    v5 = v12 >= 0;
    if ( v6 )
      (*(void (__fastcall **)(struct Windows::Internal::IAsyncFireCompletion *))(*(_QWORD *)v6 + 16LL))(v6);
    if ( a2 )
      (*(void (__fastcall **)(struct Windows::Internal::IAsyncFireCompletion *))(*(_QWORD *)a2 + 16LL))(a2);
  }
  if ( !v5 )
  {
    v13 = *(_QWORD *)a2;
    ++*(_DWORD *)(v4 + 8);
    v14 = (*(__int64 (__fastcall **)(struct Windows::Internal::IAsyncFireCompletion *))(v13 + 24))(a2);
    --*(_DWORD *)(v4 + 8);
    return v14;
  }
  return v2;
}
