/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_d9a9f05661a01a904c3494cc92e5b6ff___::Run @ 0x180076B80
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006B7D0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800EEEF0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_d9a9f05661a01a904c3494cc92e5b6ff___::Run(
        _QWORD *a1)
{
  __int64 v2; // rsi
  __int64 v3; // rdx
  __int64 result; // rax
  __int64 v5; // rcx
  void (__fastcall *v6)(__int64, _QWORD, __int64 *); // rbx
  __int64 v7; // [rsp+30h] [rbp+8h] BYREF

  v2 = a1[2];
  v7 = 0LL;
  v3 = a1[3];
  if ( v3 )
  {
    (*(void (__fastcall **)(__int64, __int64, __int64 *))(*(_QWORD *)v2 + 56LL))(v2, v3, &v7);
  }
  else if ( a1[4] )
  {
    v6 = *(void (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)v2 + 48LL);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v7);
    v6(v2, a1[4], &v7);
  }
  result = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v2 + 144LL))(v2, v7);
  v5 = v7;
  if ( v7 )
  {
    v7 = 0LL;
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  }
  return result;
}
