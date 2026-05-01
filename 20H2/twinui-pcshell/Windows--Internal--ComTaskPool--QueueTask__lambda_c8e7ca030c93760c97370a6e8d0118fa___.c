/*
 * XREFs of Windows::Internal::ComTaskPool::QueueTask__lambda_c8e7ca030c93760c97370a6e8d0118fa___ @ 0x180198530
 * Callers:
 *     _lambda_4c64bb24925327bb8ecbfb09ce5df1a7_::operator() @ 0x180198874 (_lambda_4c64bb24925327bb8ecbfb09ce5df1a7_--operator().c)
 * Callees:
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x18002FF10 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@M.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18008CE34 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0410 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::QueueTask__lambda_c8e7ca030c93760c97370a6e8d0118fa___(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        _QWORD *a4)
{
  _QWORD *v6; // rax
  _QWORD *v7; // rdi
  _QWORD *v8; // rbx
  __int64 v9; // rax
  unsigned int v10; // ebx

  v6 = operator new(0x20uLL, (const struct std::nothrow_t *)&std::nothrow);
  v7 = 0LL;
  v8 = v6;
  if ( v6 )
  {
    Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>((__int64)v6);
    v8[2] = *a4;
    v9 = a4[1];
    a4[1] = 0LL;
    v7 = v8;
    v8[3] = v9;
    *v8 = off_18049E120;
  }
  v10 = SHTaskPoolQueueTask(0LL, 2LL, a3);
  if ( v7 )
    (*(void (__fastcall **)(_QWORD *))(*v7 + 16LL))(v7);
  return v10;
}
