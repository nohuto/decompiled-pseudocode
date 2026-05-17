/*
 * XREFs of RtlpHpHeapLock @ 0x18005E4F4
 * Callers:
 *     RtlLockHeap @ 0x18005E390 (RtlLockHeap.c)
 *     RtlLockHeapManagerForCloning @ 0x1800F24F4 (RtlLockHeapManagerForCloning.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x1800290A0 (RtlAcquireSRWLockExclusive.c)
 */

struct _TEB *__fastcall RtlpHpHeapLock(__int64 a1, _BYTE *a2, unsigned __int64 a3, unsigned __int64 a4)
{
  int v6; // ecx
  unsigned __int64 v7; // rdx
  unsigned __int64 v8; // r8
  unsigned __int64 v9; // r9
  int v10; // eax
  unsigned __int64 v11; // rdx
  unsigned __int64 v12; // r8
  unsigned __int64 v13; // r9
  unsigned __int64 v14; // rdx
  unsigned __int64 v15; // r8
  unsigned __int64 v16; // r9
  unsigned __int64 v17; // rdx
  unsigned __int64 v18; // r8
  unsigned __int64 v19; // r9
  struct _TEB *result; // rax

  if ( (*(_BYTE *)(a1 + 20) & 1) == 0 )
  {
    v6 = *(_DWORD *)(a1 + 220);
    if ( v6 && (result = NtCurrentTeb(), v6 == LODWORD(result->ClientId.UniqueThread)) )
    {
      ++*(_WORD *)(a1 + 216);
    }
    else
    {
      RtlAcquireSRWLockExclusive(a1 + 904, (unsigned __int64)a2, a3, a4);
      v10 = *(_DWORD *)(a1 + 20);
      *a2 = -1;
      if ( (v10 & 1) == 0 )
      {
        RtlAcquireSRWLockExclusive(a1 + 640, v7, v8, v9);
        if ( (*(_DWORD *)(a1 + 20) & 1) == 0 )
        {
          RtlAcquireSRWLockExclusive(a1 + 320, v11, v12, v13);
          if ( (*(_DWORD *)(a1 + 20) & 1) == 0 )
          {
            RtlAcquireSRWLockExclusive(a1 + 512, v14, v15, v16);
            if ( (*(_DWORD *)(a1 + 20) & 1) == 0 )
              RtlAcquireSRWLockExclusive(a1 + 64, v17, v18, v19);
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
