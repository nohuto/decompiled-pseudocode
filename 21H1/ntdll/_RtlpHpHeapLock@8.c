/*
 * XREFs of _RtlpHpHeapLock@8 @ 0x4B378F59
 * Callers:
 *     _RtlLockHeap@4 @ 0x4B2DDA90 (_RtlLockHeap@4.c)
 *     _RtlpHpLockHeapForCloning@4 @ 0x4B379304 (_RtlpHpLockHeapForCloning@4.c)
 * Callees:
 *     _RtlAcquireSRWLockExclusive@4 @ 0x4B2C22E0 (_RtlAcquireSRWLockExclusive@4.c)
 */

struct _TEB *__fastcall RtlpHpHeapLock(int a1, _BYTE *a2)
{
  void *v4; // ecx
  struct _TEB *result; // eax
  int v6; // eax

  if ( (*(_BYTE *)(a1 + 12) & 1) == 0 )
  {
    v4 = *(void **)(a1 + 176);
    if ( v4 && (result = NtCurrentTeb(), v4 == result->ClientId.UniqueThread) )
    {
      ++*(_WORD *)(a1 + 172);
    }
    else
    {
      RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)(a1 + 772));
      v6 = *(_DWORD *)(a1 + 12);
      *a2 = -1;
      if ( (v6 & 1) == 0 )
      {
        RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)(a1 + 512));
        if ( (*(_DWORD *)(a1 + 12) & 1) == 0 )
        {
          RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)(a1 + 320));
          if ( (*(_DWORD *)(a1 + 12) & 1) == 0 )
          {
            RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)(a1 + 448));
            if ( (*(_DWORD *)(a1 + 12) & 1) == 0 )
              RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)(a1 + 64));
          }
        }
      }
      result = (struct _TEB *)NtCurrentTeb()->ClientId.UniqueThread;
      *(_DWORD *)(a1 + 176) = result;
      *(_WORD *)(a1 + 172) = 1;
    }
  }
  return result;
}
