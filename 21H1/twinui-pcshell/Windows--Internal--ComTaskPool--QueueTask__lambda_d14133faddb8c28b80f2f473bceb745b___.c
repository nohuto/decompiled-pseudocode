/*
 * XREFs of Windows::Internal::ComTaskPool::QueueTask__lambda_d14133faddb8c28b80f2f473bceb745b___ @ 0x1800819EC
 * Callers:
 *     ?Launch@CSingleViewShellExperience@@QEAAJXZ @ 0x180081788 (-Launch@CSingleViewShellExperience@@QEAAJXZ.c)
 * Callees:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_d14133faddb8c28b80f2f473bceb745b___::CTaskWrapper__lambda_d14133faddb8c28b80f2f473bceb745b_____lambda_d14133faddb8c28b80f2f473bceb745b___ @ 0x180081A80 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_d14133faddb8c28b80f2f473bceb745b___--CTaskW.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18008CA20 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800CA4C0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::QueueTask__lambda_d14133faddb8c28b80f2f473bceb745b___(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  unsigned int v4; // esi
  void *v6; // rax
  __int64 v7; // rbx
  unsigned int v8; // edi

  v4 = dword_1805A12F8;
  v6 = operator new(0x168uLL, (const struct std::nothrow_t *)&std::nothrow);
  v7 = 0LL;
  if ( v6 )
    v7 = Windows::Internal::ComTaskPool::CTaskWrapper__lambda_d14133faddb8c28b80f2f473bceb745b___::CTaskWrapper__lambda_d14133faddb8c28b80f2f473bceb745b_____lambda_d14133faddb8c28b80f2f473bceb745b___(
           v6,
           a4);
  v8 = SHTaskPoolQueueTask(0LL, 2LL, v4);
  if ( v7 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  return v8;
}
