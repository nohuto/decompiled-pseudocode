/*
 * XREFs of LdrpCleanupThreadTlsData @ 0x180070474
 * Callers:
 *     LdrpFreeTls @ 0x1800703B8 (LdrpFreeTls.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180012C70 (RtlReleaseSRWLockExclusive.c)
 *     RtlFreeHeap @ 0x180024760 (RtlFreeHeap.c)
 *     RtlAcquireSRWLockExclusive @ 0x1800290A0 (RtlAcquireSRWLockExclusive.c)
 */

signed __int64 __fastcall LdrpCleanupThreadTlsData(
        __int64 a1,
        unsigned __int64 a2,
        unsigned __int64 a3,
        unsigned __int64 a4)
{
  __int64 v4; // rdi
  void **v5; // rsi
  unsigned __int64 UniqueThread; // r14
  void *ProcessHeap; // r15
  volatile signed __int64 *v8; // rbx
  void **v9; // rax
  signed __int64 result; // rax
  _QWORD *v11; // rcx
  __int64 v12; // rbx

  v4 = 0LL;
  v5 = 0LL;
  UniqueThread = (unsigned __int64)NtCurrentTeb()->ClientId.UniqueThread;
  ProcessHeap = NtCurrentPeb()->ProcessHeap;
  v8 = (volatile signed __int64 *)((char *)&LdrpDelayedTlsReclaimTable + 16 * ((UniqueThread >> 2) & 0xF));
  RtlAcquireSRWLockExclusive((unsigned __int64)(v8 + 1), a2, a3, a4);
  v9 = (void **)*v8;
  if ( *v8 )
  {
    do
    {
      v11 = v9[1];
      if ( *v9 == (void *)UniqueThread )
      {
        if ( v5 )
          v5[1] = v11;
        else
          *v8 = (volatile signed __int64)v11;
        v9[1] = (void *)v4;
        v4 = (__int64)v9;
        v9 = v5;
      }
      v5 = v9;
      v9 = (void **)v11;
    }
    while ( v11 );
  }
  result = RtlReleaseSRWLockExclusive(v8 + 1);
  if ( v4 )
  {
    do
    {
      v12 = *(_QWORD *)(v4 + 8);
      result = RtlFreeHeap((__int64)ProcessHeap, 0, v4);
      v4 = v12;
    }
    while ( v12 );
  }
  return result;
}
