/*
 * XREFs of PopDispatchFullWake @ 0x14077A350
 * Callers:
 *     <none>
 * Callees:
 *     PopEventCalloutDispatch @ 0x1403A78CC (PopEventCalloutDispatch.c)
 *     PopNotifyConsoleUserPresent @ 0x1407732C0 (PopNotifyConsoleUserPresent.c)
 *     PopInitSIdle @ 0x14078CC68 (PopInitSIdle.c)
 *     PopReleasePolicyLock @ 0x140991044 (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x140991084 (PopAcquirePolicyLock.c)
 */

struct _KTHREAD *__fastcall PopDispatchFullWake(__int64 a1, char a2)
{
  int v2; // ecx
  __int64 v3; // rdx
  __int64 v4; // rcx
  struct _KTHREAD *result; // rax

  if ( byte_140C23A61 != 3 )
  {
    PopNotifyConsoleUserPresent(0, a2, 9u);
    if ( (PopFullWake & 3) == 2 )
    {
      _InterlockedOr(&PopFullWake, 1u);
      PopEventCalloutDispatch(0, 0LL);
      PopAcquirePolicyLock(v2);
      PopInitSIdle(4LL);
      PopReleasePolicyLock(v4, v3);
    }
  }
  result = KeGetCurrentThread();
  if ( result->WaitBlock[3].SpareLong )
    __fastfail(0x20u);
  return result;
}
