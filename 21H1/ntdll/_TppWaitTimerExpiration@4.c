/*
 * XREFs of _TppWaitTimerExpiration@4 @ 0x4B2ECC37
 * Callers:
 *     _TppSingleTimerExpiration@12 @ 0x4B2B75E3 (_TppSingleTimerExpiration@12.c)
 * Callees:
 *     _RtlpHpAppCompatDontChangePolicy@0 @ 0x4B2ED850 (_RtlpHpAppCompatDontChangePolicy@0.c)
 *     _ZwCancelWaitCompletionPacket@8 @ 0x4B2F32D0 (_ZwCancelWaitCompletionPacket@8.c)
 *     _TppRaiseHandleStatus@16 @ 0x4B384839 (_TppRaiseHandleStatus@16.c)
 */

char __thiscall TppWaitTimerExpiration(int this)
{
  NTSTATUS v2; // eax
  int v3; // ecx

  v2 = ZwCancelWaitCompletionPacket(*(HANDLE *)(this + 228), 0);
  if ( v2 )
  {
    if ( v2 != 259 && v2 != -1073741536 )
      TppRaiseHandleStatus(this, v3);
    return 0;
  }
  else
  {
    if ( !_InterlockedExchangeAdd((volatile signed __int32 *)this, 0xFFFFFFFF) )
      (**(void (__thiscall ***)(_DWORD, int))(this + 4))(**(_DWORD **)(this + 4), this);
    *(_DWORD *)(this + 224) = 0;
    return 1;
  }
}
