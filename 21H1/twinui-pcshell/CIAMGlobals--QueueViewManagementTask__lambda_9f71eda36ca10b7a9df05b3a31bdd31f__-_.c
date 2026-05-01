/*
 * XREFs of CIAMGlobals::QueueViewManagementTask__lambda_9f71eda36ca10b7a9df05b3a31bdd31f__&_ @ 0x1800675F8
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_67eef396734d09a1eef436dbd1978d71___::Run @ 0x180067510 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_67eef396734d09a1eef436dbd1978d71___--Run.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18008CA20 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800CA4C0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CIAMGlobals::QueueViewManagementTask__lambda_9f71eda36ca10b7a9df05b3a31bdd31f____(
        __int64 a1,
        __int64 *a2)
{
  PSRWLOCK v2; // rbx
  PVOID Ptr; // rdi
  __int64 v5; // rsi
  unsigned int v6; // ebp
  _QWORD *v7; // rax
  _QWORD *v8; // r14
  _QWORD *v9; // rbx
  unsigned int v10; // ebx
  PVOID v12; // [rsp+30h] [rbp-28h] BYREF
  __int64 v13; // [rsp+38h] [rbp-20h] BYREF

  v2 = CApplicationManagerUtility::g_pIAMGlobals;
  Ptr = CApplicationManagerUtility::g_pIAMGlobals[14].Ptr;
  if ( !Ptr )
    return 2147943568LL;
  v12 = CApplicationManagerUtility::g_pIAMGlobals[14].Ptr;
  (*(void (__fastcall **)(PVOID))(*(_QWORD *)Ptr + 8LL))(Ptr);
  v5 = *a2;
  v13 = v5;
  if ( v5 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 8LL))(v5);
  v6 = (unsigned int)v2[15].Ptr;
  v7 = operator new(0x20uLL, (const struct std::nothrow_t *)&std::nothrow);
  v8 = 0LL;
  v9 = v7;
  if ( v7 )
  {
    *((_DWORD *)v7 + 3) = 1;
    *v7 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>::`vftable';
    if ( Microsoft::WRL::Details::ModuleBase::module_ )
      (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                           + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
    v9[2] = 0LL;
    if ( v9 + 2 != &v12 )
    {
      v9[2] = Ptr;
      Ptr = 0LL;
    }
    v9[3] = 0LL;
    if ( v9 + 3 != &v13 )
    {
      v9[3] = v5;
      v5 = 0LL;
    }
    v8 = v9;
    *v9 = off_18046BB90;
  }
  v10 = SHTaskPoolQueueTask(3LL, 2LL, v6);
  if ( v8 )
    (*(void (__fastcall **)(_QWORD *))(*v8 + 16LL))(v8);
  if ( v5 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  if ( Ptr )
    (*(void (__fastcall **)(PVOID))(*(_QWORD *)Ptr + 16LL))(Ptr);
  return v10;
}
