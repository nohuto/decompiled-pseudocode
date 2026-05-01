/*
 * XREFs of Windows::Internal::ComTaskPool::QueueTask__lambda_1f4f68820907753b977dd0769491499a___ @ 0x180285310
 * Callers:
 *     ?OnViewCreatedImpl@TitleBarController@@AEAAJPEAUIApplicationView@@AEBUShellTabGroupId@Tabs@ComposableShell@Internal@Windows@@_N@Z @ 0x180287CD4 (-OnViewCreatedImpl@TitleBarController@@AEAAJPEAUIApplicationView@@AEBUShellTabGroupId@Tabs@Compo.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18008D2D4 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EEEF0 (_guard_dispatch_icall_nop.c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_1f4f68820907753b977dd0769491499a___::CTaskWrapper__lambda_1f4f68820907753b977dd0769491499a_____lambda_1f4f68820907753b977dd0769491499a___ @ 0x1802849EC (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_1f4f68820907753b977dd0769491499a___--CTaskW.c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::QueueTask__lambda_1f4f68820907753b977dd0769491499a___(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        __int64 a4)
{
  void *v6; // rax
  __int64 v7; // rbx
  unsigned int v8; // edi

  v6 = operator new(0x48uLL, (const struct std::nothrow_t *)&std::nothrow);
  v7 = 0LL;
  if ( v6 )
    v7 = Windows::Internal::ComTaskPool::CTaskWrapper__lambda_1f4f68820907753b977dd0769491499a___::CTaskWrapper__lambda_1f4f68820907753b977dd0769491499a_____lambda_1f4f68820907753b977dd0769491499a___(
           (__int64)v6,
           a4);
  v8 = SHTaskPoolQueueTask(0LL, 2LL, a3);
  if ( v7 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  return v8;
}
