/*
 * XREFs of Windows::Internal::ComTaskPool::QueueTask__lambda_c2a2628a81f3a0afe82e0d81e4960563___ @ 0x18038C9F0
 * Callers:
 *     ??$CallControllerAsync@UISwitchItemController@@UISwitchItem@@UIVirtualDesktopItem@@@AsyncControllerHelpers@@YAXAEAV?$ComPtr@UISwitchItemController@@@WRL@Microsoft@@P8ISwitchItemController@@EAAXPEAUISwitchItem@@PEAUIVirtualDesktopItem@@@ZV?$ComPtr@UISwitchItem@@@23@V?$ComPtr@UIVirtualDesktopItem@@@23@@Z @ 0x18038C810 (--$CallControllerAsync@UISwitchItemController@@UISwitchItem@@UIVirtualDesktopItem@@@AsyncControl.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18008CA20 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800CA4C0 (_guard_dispatch_icall_nop.c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_c2a2628a81f3a0afe82e0d81e4960563___::CTaskWrapper__lambda_c2a2628a81f3a0afe82e0d81e4960563_____lambda_c2a2628a81f3a0afe82e0d81e4960563___ @ 0x18038C66C (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_c2a2628a81f3a0afe82e0d81e4960563___--CTaskW.c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::QueueTask__lambda_c2a2628a81f3a0afe82e0d81e4960563___(
        unsigned int a1,
        _QWORD *a2)
{
  _QWORD *v4; // rax
  _QWORD *v5; // rbx
  DWORD CurrentThreadId; // eax
  unsigned int v7; // edi

  v4 = operator new(0x30uLL, (const struct std::nothrow_t *)&std::nothrow);
  v5 = 0LL;
  if ( v4 )
    v5 = Windows::Internal::ComTaskPool::CTaskWrapper__lambda_c2a2628a81f3a0afe82e0d81e4960563___::CTaskWrapper__lambda_c2a2628a81f3a0afe82e0d81e4960563_____lambda_c2a2628a81f3a0afe82e0d81e4960563___(
           v4,
           a2);
  CurrentThreadId = GetCurrentThreadId();
  v7 = SHTaskPoolQueueTask(a1, 0LL, CurrentThreadId);
  if ( v5 )
    (*(void (__fastcall **)(_QWORD *))(*v5 + 16LL))(v5);
  return v7;
}
