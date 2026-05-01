/*
 * XREFs of Windows::Internal::ComTaskPool::QueueTask__lambda_65bd7f122925cc900a11f0d0a2dc2897___ @ 0x1800EEFC0
 * Callers:
 *     ?Launch@CSingleViewShellExperience@@QEAAJXZ @ 0x1800816FC (-Launch@CSingleViewShellExperience@@QEAAJXZ.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18008CE34 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_65bd7f122925cc900a11f0d0a2dc2897___::CTaskWrapper__lambda_65bd7f122925cc900a11f0d0a2dc2897_____lambda_65bd7f122925cc900a11f0d0a2dc2897___ @ 0x1800EEDB4 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_65bd7f122925cc900a11f0d0a2dc2897___--CTaskW.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0410 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::QueueTask__lambda_65bd7f122925cc900a11f0d0a2dc2897___(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  unsigned int v4; // esi
  void *v6; // rax
  __int64 v7; // rbx
  unsigned int v8; // edi

  v4 = dword_1805CD718;
  v6 = operator new(0x168uLL, (const struct std::nothrow_t *)&std::nothrow);
  v7 = 0LL;
  if ( v6 )
    v7 = Windows::Internal::ComTaskPool::CTaskWrapper__lambda_65bd7f122925cc900a11f0d0a2dc2897___::CTaskWrapper__lambda_65bd7f122925cc900a11f0d0a2dc2897_____lambda_65bd7f122925cc900a11f0d0a2dc2897___(
           (__int64)v6,
           a4);
  v8 = SHTaskPoolQueueTask(0LL, 2LL, v4);
  if ( v7 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  return v8;
}
