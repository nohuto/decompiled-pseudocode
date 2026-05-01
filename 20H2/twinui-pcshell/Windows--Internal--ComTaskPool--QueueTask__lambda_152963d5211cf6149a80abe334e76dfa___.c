/*
 * XREFs of Windows::Internal::ComTaskPool::QueueTask__lambda_152963d5211cf6149a80abe334e76dfa___ @ 0x180322BF4
 * Callers:
 *     ?InvokeSwitchItem@?QIXamlMultitaskingViewController@@XamlBaseViewController@@UE$AAAXPE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@Z @ 0x180325840 (-InvokeSwitchItem@-QIXamlMultitaskingViewController@@XamlBaseViewController@@UE$AAAXPE$AAUISwitc.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18008CE34 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0410 (_guard_dispatch_icall_nop.c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_152963d5211cf6149a80abe334e76dfa___::CTaskWrapper__lambda_152963d5211cf6149a80abe334e76dfa_____lambda_152963d5211cf6149a80abe334e76dfa___ @ 0x18032260C (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_152963d5211cf6149a80abe334e76dfa___--CTaskW.c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::QueueTask__lambda_152963d5211cf6149a80abe334e76dfa___(
        __int64 a1,
        __int64 *a2)
{
  _QWORD *v3; // rax
  _QWORD *v4; // rbx
  DWORD CurrentThreadId; // eax
  unsigned int v6; // edi

  v3 = operator new(0x30uLL, (const struct std::nothrow_t *)&std::nothrow);
  v4 = 0LL;
  if ( v3 )
    v4 = Windows::Internal::ComTaskPool::CTaskWrapper__lambda_152963d5211cf6149a80abe334e76dfa___::CTaskWrapper__lambda_152963d5211cf6149a80abe334e76dfa_____lambda_152963d5211cf6149a80abe334e76dfa___(
           v3,
           a2);
  CurrentThreadId = GetCurrentThreadId();
  v6 = SHTaskPoolQueueTask(1LL, 0LL, CurrentThreadId);
  if ( v4 )
    (*(void (__fastcall **)(_QWORD *))(*v4 + 16LL))(v4);
  return v6;
}
