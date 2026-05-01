/*
 * XREFs of Windows::Internal::ComTaskPool::QueueTask__lambda_52ee436932253a320c8b1bf838bed70e___ @ 0x1803ADB50
 * Callers:
 *     ??$CallControllerAsync@UISwitchItemController@@UISwitchItem@@@AsyncControllerHelpers@@YAXAEAV?$ComPtr@UISwitchItemController@@@WRL@Microsoft@@P8ISwitchItemController@@EAAXPEAUISwitchItem@@@ZV?$ComPtr@UISwitchItem@@@23@@Z @ 0x1803ADA08 (--$CallControllerAsync@UISwitchItemController@@UISwitchItem@@@AsyncControllerHelpers@@YAXAEAV-$C.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18008D2D4 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EEEF0 (_guard_dispatch_icall_nop.c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_52ee436932253a320c8b1bf838bed70e___::CTaskWrapper__lambda_52ee436932253a320c8b1bf838bed70e_____lambda_52ee436932253a320c8b1bf838bed70e___ @ 0x1803AD820 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_52ee436932253a320c8b1bf838bed70e___--CTaskW.c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::QueueTask__lambda_52ee436932253a320c8b1bf838bed70e___(
        unsigned int a1,
        _QWORD *a2)
{
  _QWORD *v4; // rax
  _QWORD *v5; // rbx
  DWORD CurrentThreadId; // eax
  unsigned int v7; // edi

  v4 = operator new(0x28uLL, (const struct std::nothrow_t *)&std::nothrow);
  v5 = 0LL;
  if ( v4 )
    v5 = Windows::Internal::ComTaskPool::CTaskWrapper__lambda_52ee436932253a320c8b1bf838bed70e___::CTaskWrapper__lambda_52ee436932253a320c8b1bf838bed70e_____lambda_52ee436932253a320c8b1bf838bed70e___(
           v4,
           a2);
  CurrentThreadId = GetCurrentThreadId();
  v7 = SHTaskPoolQueueTask(a1, 0LL, CurrentThreadId);
  if ( v5 )
    (*(void (__fastcall **)(_QWORD *))(*v5 + 16LL))(v5);
  return v7;
}
