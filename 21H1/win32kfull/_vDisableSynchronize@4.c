/*
 * XREFs of _vDisableSynchronize@4 @ 0xAD0E8
 * Callers:
 *     <none>
 * Callees:
 *     ?SETFLAG@@YGXHACKK@Z @ 0x9DB80 (-SETFLAG@@YGXHACKK@Z.c)
 *     ?vDisableTimers@@YGXK@Z @ 0xAD16A (-vDisableTimers@@YGXK@Z.c)
 */

void __stdcall vDisableSynchronize(int a1)
{
  int IsUserCritSecInShared; // edi
  int v2; // esi
  PKTHREAD CurrentThread; // eax
  int v4; // [esp-4h] [ebp-10h]
  volatile unsigned int *v5; // [esp+0h] [ebp-Ch]
  unsigned int v6; // [esp+4h] [ebp-8h]

  IsUserCritSecInShared = 0;
  v2 = 0;
  if ( UserIsUserCritSecIn() )
  {
    IsUserCritSecInShared = UserIsUserCritSecInShared();
  }
  else
  {
    v2 = 1;
    if ( GreIsSemaphoreOwnedOrSharedByCurrentThread(_ghsemDynamicModeChange) )
    {
      IsUserCritSecInShared = 1;
      v2 = 0;
    }
    else
    {
      UserEnterUserCritSec();
    }
  }
  if ( (*(_DWORD *)(a1 + 24) & 0x800) != 0 )
  {
    if ( IsUserCritSecInShared )
    {
      v4 = *(_DWORD *)(a1 + 1416);
      CurrentThread = KeGetCurrentThread();
      UserPostNKAPC(
        CurrentThread,
        vDisableSynchronizeNKAPCBegin,
        pConvertDfbSurfaceToDibNKAPCRundown,
        vDisableSynchronizeNKAPC,
        v4);
    }
    else
    {
      vDisableTimers((unsigned int)v5);
    }
    SETFLAG((volatile signed __int32 *)(a1 + 24), 0, 2048, v5, v6);
  }
  if ( v2 )
    UserLeaveUserCritSec();
}
