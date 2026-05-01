/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_d4ad7b1cd28a5da3164b15e881c20e9b___::Run @ 0x180150620
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006B7D0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800EEEF0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_d4ad7b1cd28a5da3164b15e881c20e9b___::Run(
        __int64 a1)
{
  __int64 v2; // rsi
  int (__fastcall *v3)(__int64, _QWORD, __int64 *); // rbx
  __int64 v5; // [rsp+30h] [rbp+8h] BYREF

  v2 = *(_QWORD *)(a1 + 16);
  v5 = 0LL;
  v3 = *(int (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)v2 + 56LL);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v5);
  if ( v3(v2, *(_QWORD *)(a1 + 24), &v5) >= 0 )
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v2 + 152LL))(v2, v5);
  return Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v5);
}
