/*
 * XREFs of RtlpHpHeapLock @ 0x18005FAF4
 * Callers:
 *     RtlLockHeap @ 0x18005F990 (RtlLockHeap.c)
 *     RtlLockHeapManagerForCloning @ 0x1800F2854 (RtlLockHeapManagerForCloning.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x1800290A0 (RtlAcquireSRWLockExclusive.c)
 */

struct _TEB *__fastcall RtlpHpHeapLock(__int64 a1, _BYTE *a2)
{
  int v4; // ecx
  int v5; // eax
  struct _TEB *result; // rax

  if ( (*(_BYTE *)(a1 + 20) & 1) == 0 )
  {
    v4 = *(_DWORD *)(a1 + 220);
    if ( v4 && (result = NtCurrentTeb(), v4 == LODWORD(result->ClientId.UniqueThread)) )
    {
      ++*(_WORD *)(a1 + 216);
    }
    else
    {
      RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)(a1 + 904));
      v5 = *(_DWORD *)(a1 + 20);
      *a2 = -1;
      if ( (v5 & 1) == 0 )
      {
        RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)(a1 + 640));
        if ( (*(_DWORD *)(a1 + 20) & 1) == 0 )
        {
          RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)(a1 + 320));
          if ( (*(_DWORD *)(a1 + 20) & 1) == 0 )
          {
            RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)(a1 + 512));
            if ( (*(_DWORD *)(a1 + 20) & 1) == 0 )
              RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)(a1 + 64));
          }
        }
      }
      result = NtCurrentTeb();
      *(_DWORD *)(a1 + 220) = result->ClientId.UniqueThread;
      *(_WORD *)(a1 + 216) = 1;
    }
  }
  return result;
}
