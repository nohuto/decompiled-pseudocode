/*
 * XREFs of TppWaitTimerExpiration @ 0x180083FF8
 * Callers:
 *     TppSingleTimerExpiration @ 0x180014100 (TppSingleTimerExpiration.c)
 * Callees:
 *     ZwCancelWaitCompletionPacket @ 0x18009E340 (ZwCancelWaitCompletionPacket.c)
 *     _guard_dispatch_icall_nop @ 0x1800A0B90 (_guard_dispatch_icall_nop.c)
 *     TppRaiseHandleStatus @ 0x18011258C (TppRaiseHandleStatus.c)
 */

char __fastcall TppWaitTimerExpiration(__int64 a1)
{
  unsigned __int32 v2; // eax

  v2 = ZwCancelWaitCompletionPacket(*(HANDLE *)(a1 + 368), 0);
  if ( v2 )
  {
    if ( v2 != 259 && v2 != -1073741536 )
      TppRaiseHandleStatus(v2, *(_QWORD *)(a1 + 360), a1);
    return 0;
  }
  else
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)a1, 0xFFFFFFFF) == 1 )
      (**(void (__fastcall ***)(__int64))(a1 + 8))(a1);
    *(_QWORD *)(a1 + 360) = 0LL;
    return 1;
  }
}
