/*
 * XREFs of RtlpCallSecureMemoryCallbacks @ 0x1800F7F04
 * Callers:
 *     RtlFlushSecureMemoryCache @ 0x1800F7DE0 (RtlFlushSecureMemoryCache.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180012C70 (RtlReleaseSRWLockExclusive.c)
 *     RtlFreeHeap @ 0x180024760 (RtlFreeHeap.c)
 *     RtlAcquireSRWLockExclusive @ 0x1800290A0 (RtlAcquireSRWLockExclusive.c)
 *     _guard_dispatch_icall_nop @ 0x1800A0B90 (_guard_dispatch_icall_nop.c)
 */

char __fastcall RtlpCallSecureMemoryCallbacks(
        __int64 a1,
        unsigned __int64 a2,
        unsigned __int64 a3,
        unsigned __int64 a4)
{
  char v6; // r14
  char *v7; // rsi
  _DWORD *v8; // rbx
  __int64 *v9; // rdi
  unsigned __int64 v10; // rdx
  unsigned __int64 v11; // r8
  unsigned __int64 v12; // r9
  bool v13; // zf
  __int64 **v14; // rax
  __int64 *v15; // rax
  __int64 v16; // r8
  __int64 v17; // rax
  __int64 v19; // [rsp+20h] [rbp-10h] BYREF
  __int64 *v20; // [rsp+28h] [rbp-8h]

  v20 = &v19;
  v19 = (__int64)&v19;
  v6 = 0;
  RtlAcquireSRWLockExclusive((unsigned __int64)&RtlpSecMemLock, a2, a3, a4);
  v7 = (char *)RtlpSecMemListHead;
  if ( RtlpSecMemListHead != (_UNKNOWN *)&RtlpSecMemListHead )
  {
    do
    {
      v8 = v7 + 16;
      v9 = (__int64 *)v7;
      ++*((_DWORD *)v7 + 4);
      RtlReleaseSRWLockExclusive(&RtlpSecMemLock);
      if ( (*((unsigned __int8 (__fastcall **)(__int64, unsigned __int64))v7 + 3))(a1, a2) )
        v6 = 1;
      RtlAcquireSRWLockExclusive((unsigned __int64)&RtlpSecMemLock, v10, v11, v12);
      v13 = (*v8)-- == 1;
      v7 = *(char **)v7;
      if ( v13 )
      {
        if ( *((__int64 **)v7 + 1) != v9
          || (v14 = (__int64 **)v9[1], *v14 != v9)
          || (*v14 = (__int64 *)v7, *((_QWORD *)v7 + 1) = v14, v15 = v20, (__int64 *)*v20 != &v19) )
        {
LABEL_15:
          __fastfail(3u);
        }
        v9[1] = (__int64)v20;
        *v9 = (__int64)&v19;
        *v15 = (__int64)v9;
        v20 = v9;
      }
    }
    while ( v7 != (char *)&RtlpSecMemListHead );
  }
  RtlReleaseSRWLockExclusive(&RtlpSecMemLock);
  while ( 1 )
  {
    v16 = v19;
    if ( (__int64 *)v19 == &v19 )
      return v6;
    if ( *(__int64 **)(v19 + 8) != &v19 )
      goto LABEL_15;
    v17 = *(_QWORD *)v19;
    if ( *(_QWORD *)(*(_QWORD *)v19 + 8LL) != v19 )
      goto LABEL_15;
    v19 = *(_QWORD *)v19;
    *(_QWORD *)(v17 + 8) = &v19;
    RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v16);
  }
}
