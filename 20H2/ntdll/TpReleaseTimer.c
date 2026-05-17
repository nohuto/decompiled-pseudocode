/*
 * XREFs of TpReleaseTimer @ 0x18000C500
 * Callers:
 *     RtlDeleteTimer @ 0x180009C00 (RtlDeleteTimer.c)
 *     RtlpInitializeWnf @ 0x18007CA10 (RtlpInitializeWnf.c)
 *     RtlDeleteTimerQueueEx @ 0x180084A20 (RtlDeleteTimerQueueEx.c)
 * Callees:
 *     TppCleanupGroupMemberRelease @ 0x18000F124 (TppCleanupGroupMemberRelease.c)
 *     TppTimerpValidateTimer @ 0x180012914 (TppTimerpValidateTimer.c)
 *     TppCancelTimer @ 0x180012CB4 (TppCancelTimer.c)
 *     RtlAcquireSRWLockExclusive @ 0x1800290A0 (RtlAcquireSRWLockExclusive.c)
 *     _guard_dispatch_icall_nop @ 0x1800A0B90 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall TpReleaseTimer(__int64 a1)
{
  int v2; // edi
  __int64 result; // rax
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h]

  v2 = 1;
  result = TppTimerpValidateTimer(a1, 1LL, 0LL);
  if ( (_DWORD)result )
  {
    result = TppCleanupGroupMemberRelease(a1, 1LL);
    if ( (_DWORD)result )
    {
      *(_QWORD *)(a1 + 184) = retaddr;
      RtlAcquireSRWLockExclusive(a1 + 240);
      ++*(_BYTE *)(a1 + 355);
      if ( (unsigned __int8)TppCancelTimer(a1, *(_QWORD *)(a1 + 144) + 112LL, 0LL) )
        v2 = 2;
      result = (unsigned int)_InterlockedExchangeAdd((volatile signed __int32 *)a1, -v2);
      if ( (_DWORD)result == v2 )
        return (**(__int64 (__fastcall ***)(__int64))(a1 + 8))(a1);
    }
  }
  return result;
}
