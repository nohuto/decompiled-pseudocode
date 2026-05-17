/*
 * XREFs of TpWaitForTimer @ 0x180011200
 * Callers:
 *     RtlDeleteTimer @ 0x180009C00 (RtlDeleteTimer.c)
 * Callees:
 *     TppTimerpValidateTimer @ 0x180012914 (TppTimerpValidateTimer.c)
 *     RtlReleaseSRWLockExclusive @ 0x180012C70 (RtlReleaseSRWLockExclusive.c)
 *     TppCancelTimer @ 0x180012CB4 (TppCancelTimer.c)
 *     TppWorkWait @ 0x180013D78 (TppWorkWait.c)
 *     RtlAcquireSRWLockExclusive @ 0x1800290A0 (RtlAcquireSRWLockExclusive.c)
 *     _guard_dispatch_icall_nop @ 0x1800A1160 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall TpWaitForTimer(__int64 a1, unsigned int a2)
{
  __int64 result; // rax
  char v5; // bp
  char v6; // si
  __int64 v7; // r8

  result = TppTimerpValidateTimer(a1, 0LL, 0LL);
  if ( (_DWORD)result )
  {
    v5 = 0;
    v6 = 0;
    if ( a2 )
    {
      RtlAcquireSRWLockExclusive(a1 + 240);
      ++*(_BYTE *)(a1 + 355);
      LOBYTE(v7) = 1;
      v5 = TppCancelTimer(a1, *(_QWORD *)(a1 + 144) + 112LL, v7);
      if ( *(_DWORD *)(a1 + 56) )
        v6 = 1;
      else
        --*(_BYTE *)(a1 + 355);
      RtlReleaseSRWLockExclusive(a1 + 240);
    }
    result = TppWorkWait(a1, a2);
    if ( v6 )
    {
      RtlAcquireSRWLockExclusive(a1 + 240);
      --*(_BYTE *)(a1 + 355);
      result = RtlReleaseSRWLockExclusive(a1 + 240);
    }
    if ( v5 )
    {
      result = (unsigned int)_InterlockedExchangeAdd((volatile signed __int32 *)a1, 0xFFFFFFFF);
      if ( (_DWORD)result == 1 )
        return (**(__int64 (__fastcall ***)(__int64))(a1 + 8))(a1);
    }
  }
  return result;
}
