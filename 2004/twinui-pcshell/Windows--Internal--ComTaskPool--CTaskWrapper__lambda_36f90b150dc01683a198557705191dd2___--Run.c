/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_36f90b150dc01683a198557705191dd2___::Run @ 0x1803B4B10
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800EEEF0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_36f90b150dc01683a198557705191dd2___::Run(
        __int64 a1)
{
  __int64 v1; // rcx
  __int64 v3; // [rsp+20h] [rbp-18h] BYREF
  char v4; // [rsp+28h] [rbp-10h]

  v1 = *(_QWORD *)(a1 + 16);
  v4 = 1;
  v3 = 0xFFFFFFFFLL;
  return (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v1 + 256LL))(v1, &v3);
}
