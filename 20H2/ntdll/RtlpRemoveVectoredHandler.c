/*
 * XREFs of RtlpRemoveVectoredHandler @ 0x180082190
 * Callers:
 *     RtlRemoveVectoredExceptionHandler @ 0x180082180 (RtlRemoveVectoredExceptionHandler.c)
 *     RtlRemoveVectoredContinueHandler @ 0x1800D99E0 (RtlRemoveVectoredContinueHandler.c)
 * Callees:
 *     RtlProtectHeap @ 0x18000E0E0 (RtlProtectHeap.c)
 *     LdrProtectMrdata @ 0x180012224 (LdrProtectMrdata.c)
 *     RtlReleaseSRWLockExclusive @ 0x180012C70 (RtlReleaseSRWLockExclusive.c)
 *     RtlFreeHeap @ 0x180024760 (RtlFreeHeap.c)
 *     RtlAcquireSRWLockExclusive @ 0x1800290A0 (RtlAcquireSRWLockExclusive.c)
 *     LdrControlFlowGuardEnforced @ 0x180033520 (LdrControlFlowGuardEnforced.c)
 */

__int64 __fastcall RtlpRemoveVectoredHandler(__int64 a1, unsigned __int64 a2, unsigned __int64 a3, unsigned __int64 a4)
{
  int v4; // r14d
  __int64 v6; // rsi
  __int64 *v7; // rdi
  __int64 i; // rbx
  unsigned __int64 v9; // rdx
  unsigned __int64 v10; // r8
  unsigned __int64 v11; // r9
  int v12; // edi
  signed __int64 v13; // rcx
  bool v14; // cc
  signed __int64 v15; // rcx
  _QWORD *v16; // rcx
  _QWORD *v17; // rax
  __int64 v18; // rdi
  void *v19; // rcx
  unsigned __int64 v20; // rdx
  unsigned __int64 v21; // r8
  unsigned __int64 v22; // r9
  int v23; // edx
  unsigned __int64 v25; // rdx
  unsigned __int64 v26; // r8
  unsigned __int64 v27; // r9
  int v28; // ecx

  v4 = a2;
  v6 = 3LL * (unsigned int)a2;
  v7 = (__int64 *)(&LdrpVectorHandlerList + 3 * (unsigned int)a2 + 1);
  RtlAcquireSRWLockExclusive((unsigned __int64)*(&LdrpVectorHandlerList + 3 * (unsigned int)a2), a2, a3, a4);
  for ( i = *v7; ; i = *(_QWORD *)i )
  {
    if ( (__int64 *)i == v7 )
    {
      RtlReleaseSRWLockExclusive((volatile signed __int64 *)*(&LdrpVectorHandlerList + v6));
      return 0LL;
    }
    if ( i == a1 )
      break;
  }
  if ( !(unsigned int)LdrControlFlowGuardEnforced() )
    goto LABEL_9;
  RtlAcquireSRWLockExclusive((unsigned __int64)&LdrpMrdataLock, v9, v10, v11);
  v12 = *(_DWORD *)LdrpMrdataHeapUnprotected;
  if ( !*(_DWORD *)LdrpMrdataHeapUnprotected )
    RtlProtectHeap((_DWORD *)LdrpMrdataHeap, 0);
  if ( v12 == -1 )
    goto LABEL_35;
  *(_DWORD *)LdrpMrdataHeapUnprotected = v12 + 1;
  RtlReleaseSRWLockExclusive(&LdrpMrdataLock);
LABEL_9:
  *(_DWORD *)(i + 24) = 1;
  v13 = _InterlockedExchangeAdd64(*(volatile signed __int64 **)(i + 16), 0xFFFFFFFFFFFFFFFFuLL);
  v14 = v13 <= 1;
  v15 = v13 - 1;
  if ( !v14 )
  {
    if ( (unsigned int)LdrControlFlowGuardEnforced() )
    {
      RtlAcquireSRWLockExclusive((unsigned __int64)&LdrpMrdataLock, v25, v26, v27);
      v28 = *(_DWORD *)LdrpMrdataHeapUnprotected;
      if ( !*(_DWORD *)LdrpMrdataHeapUnprotected )
        goto LABEL_35;
      *(_DWORD *)LdrpMrdataHeapUnprotected = v28 - 1;
      if ( v28 == 1 )
        RtlProtectHeap((_DWORD *)LdrpMrdataHeap, 1);
      RtlReleaseSRWLockExclusive(&LdrpMrdataLock);
    }
    v18 = 0LL;
    goto LABEL_16;
  }
  if ( v15 )
    __fastfail(0xEu);
  LdrProtectMrdata(0);
  v16 = *(_QWORD **)i;
  v17 = *(_QWORD **)(i + 8);
  if ( *(_QWORD *)(*(_QWORD *)i + 8LL) != i || *v17 != i )
    __fastfail(3u);
  *v17 = v16;
  v16[1] = v17;
  if ( v17 == v16 )
    _interlockedbittestandreset((volatile signed __int32 *)&NtCurrentPeb()->80, v4 + 2);
  v18 = i;
LABEL_16:
  RtlReleaseSRWLockExclusive((volatile signed __int64 *)*(&LdrpVectorHandlerList + v6));
  if ( v18 )
  {
    RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, *(_QWORD *)(v18 + 16));
    v19 = (unsigned int)LdrControlFlowGuardEnforced() ? (void *)LdrpMrdataHeap : NtCurrentPeb()->ProcessHeap;
    RtlFreeHeap((__int64)v19, 0, i);
    LdrProtectMrdata(1);
    if ( (unsigned int)LdrControlFlowGuardEnforced() )
    {
      RtlAcquireSRWLockExclusive((unsigned __int64)&LdrpMrdataLock, v20, v21, v22);
      v23 = *(_DWORD *)LdrpMrdataHeapUnprotected;
      if ( *(_DWORD *)LdrpMrdataHeapUnprotected )
      {
        *(_DWORD *)LdrpMrdataHeapUnprotected = v23 - 1;
        if ( v23 == 1 )
          RtlProtectHeap((_DWORD *)LdrpMrdataHeap, 1);
        RtlReleaseSRWLockExclusive(&LdrpMrdataLock);
        return 1LL;
      }
LABEL_35:
      RtlReleaseSRWLockExclusive(&LdrpMrdataLock);
      __fastfail(0xEu);
    }
  }
  return 1LL;
}
