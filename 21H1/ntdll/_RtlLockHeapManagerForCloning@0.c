/*
 * XREFs of _RtlLockHeapManagerForCloning@0 @ 0x4B356BD9
 * Callers:
 *     _RtlCloneUserProcess@20 @ 0x4B335760 (_RtlCloneUserProcess@20.c)
 * Callees:
 *     _RtlEnterCriticalSection@4 @ 0x4B2BFE90 (_RtlEnterCriticalSection@4.c)
 *     _RtlAcquireSRWLockExclusive@4 @ 0x4B2C22E0 (_RtlAcquireSRWLockExclusive@4.c)
 *     _RtlTryEnterCriticalSection@4 @ 0x4B2E0960 (_RtlTryEnterCriticalSection@4.c)
 *     _ZwDelayExecution@8 @ 0x4B2F2CC0 (_ZwDelayExecution@8.c)
 *     _RtlpUnlockHeapManagerForCloning@8 @ 0x4B359836 (_RtlpUnlockHeapManagerForCloning@8.c)
 *     _RtlpHpLockHeapForCloning@4 @ 0x4B379304 (_RtlpHpLockHeapForCloning@4.c)
 *     _RtlpCSparseBitmapLock@12 @ 0x4B38003A (_RtlpCSparseBitmapLock@12.c)
 */

int __stdcall RtlLockHeapManagerForCloning()
{
  struct _PEB *v0; // esi
  int v1; // edi
  unsigned int v2; // ebx
  void **ProcessHeaps; // eax
  void *v4; // esi
  _RTL_SRWLOCK *v6; // eax
  int v7; // [esp+10h] [ebp-20h]
  struct _PEB *v8; // [esp+14h] [ebp-1Ch]
  LARGE_INTEGER DelayInterval; // [esp+18h] [ebp-18h] BYREF
  char v10[12]; // [esp+24h] [ebp-Ch] BYREF

  v0 = NtCurrentPeb();
  v8 = v0;
  RtlEnterCriticalSection(&RtlpProcessHeapsListLock);
  RtlpCSparseBitmapLock(v10);
  v1 = 0;
  v2 = 0;
  if ( v0->NumberOfHeaps )
  {
    do
    {
      ProcessHeaps = v0->ProcessHeaps;
      v4 = ProcessHeaps[v2];
      if ( *((_DWORD *)v4 + 2) == -571548178 )
      {
        if ( (*((_BYTE *)v4 + 12) & 1) == 0 )
          RtlpHpLockHeapForCloning(ProcessHeaps[v2]);
      }
      else if ( (*((_BYTE *)v4 + 64) & 1) == 0 )
      {
        v7 = 0;
        DelayInterval.QuadPart = -250000LL;
        while ( !RtlTryEnterCriticalSection(*((PRTL_CRITICAL_SECTION *)v4 + 50)) )
        {
          ZwDelayExecution(0, &DelayInterval);
          if ( (unsigned int)++v7 >= 0x64 )
          {
            v1 = -1073741420;
            RtlpUnlockHeapManagerForCloning(0, v2);
            return v1;
          }
        }
        if ( *((_BYTE *)v4 + 234) == 2 )
          v6 = (_RTL_SRWLOCK *)*((_DWORD *)v4 + 57);
        else
          v6 = 0;
        if ( v6 )
          RtlAcquireSRWLockExclusive(v6);
      }
      v0 = v8;
      ++v2;
    }
    while ( v2 < v8->NumberOfHeaps );
  }
  return v1;
}
