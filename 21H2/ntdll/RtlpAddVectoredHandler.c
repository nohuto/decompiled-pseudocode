/*
 * XREFs of RtlpAddVectoredHandler @ 0x1800820B0
 * Callers:
 *     RtlAddVectoredExceptionHandler @ 0x1800820A0 (RtlAddVectoredExceptionHandler.c)
 *     RtlAddVectoredContinueHandler @ 0x1800D9770 (RtlAddVectoredContinueHandler.c)
 * Callees:
 *     LdrEnsureMrdataHeapExists @ 0x18000787C (LdrEnsureMrdataHeapExists.c)
 *     RtlProtectHeap @ 0x18000E0E0 (RtlProtectHeap.c)
 *     LdrProtectMrdata @ 0x180012224 (LdrProtectMrdata.c)
 *     RtlReleaseSRWLockExclusive @ 0x180012C70 (RtlReleaseSRWLockExclusive.c)
 *     RtlFreeHeap @ 0x180024760 (RtlFreeHeap.c)
 *     RtlAcquireSRWLockExclusive @ 0x1800290A0 (RtlAcquireSRWLockExclusive.c)
 *     RtlAllocateHeap @ 0x18002A9A0 (RtlAllocateHeap.c)
 *     LdrControlFlowGuardEnforced @ 0x180033520 (LdrControlFlowGuardEnforced.c)
 *     RtlQueryProtectedPolicy @ 0x1800822F0 (RtlQueryProtectedPolicy.c)
 *     NtQueryInformationProcess @ 0x18009D960 (NtQueryInformationProcess.c)
 *     RtlRaiseStatus @ 0x1801026C0 (RtlRaiseStatus.c)
 */

_QWORD *__fastcall RtlpAddVectoredHandler(int a1, __int64 a2, unsigned int a3)
{
  __int64 v3; // rbp
  unsigned __int64 v6; // rdx
  unsigned __int64 v7; // r8
  unsigned __int64 v8; // r9
  int v9; // ebx
  void *ProcessHeap; // rcx
  __int64 Heap; // rax
  _QWORD *v12; // rbx
  _QWORD *v13; // rax
  unsigned int v14; // ecx
  _UNKNOWN **v15; // rdi
  unsigned __int64 v16; // rdx
  unsigned __int64 v17; // r8
  unsigned __int64 v18; // r9
  _UNKNOWN ***v19; // rax
  unsigned __int64 v20; // rdx
  unsigned __int64 v21; // r8
  unsigned __int64 v22; // r9
  int v23; // edx
  _QWORD *v25; // rax
  void *v26; // rcx
  NTSTATUS v27; // eax
  __int64 v28; // [rsp+30h] [rbp-28h]
  int ProcessInformation; // [rsp+78h] [rbp+20h] BYREF

  v3 = a3;
  if ( (int)LdrEnsureMrdataHeapExists() >= 0 && ((int)RtlQueryProtectedPolicy(&unk_1801231C8) < 0 || !v28) )
  {
    if ( (unsigned int)LdrControlFlowGuardEnforced() )
    {
      RtlAcquireSRWLockExclusive((unsigned __int64)&LdrpMrdataLock, v6, v7, v8);
      v9 = *(_DWORD *)LdrpMrdataHeapUnprotected;
      if ( !*(_DWORD *)LdrpMrdataHeapUnprotected )
        RtlProtectHeap((_DWORD *)LdrpMrdataHeap, 0);
      if ( v9 == -1 )
        goto LABEL_39;
      *(_DWORD *)LdrpMrdataHeapUnprotected = v9 + 1;
      RtlReleaseSRWLockExclusive(&LdrpMrdataLock);
    }
    if ( (unsigned int)LdrControlFlowGuardEnforced() )
      ProcessHeap = (void *)LdrpMrdataHeap;
    else
      ProcessHeap = NtCurrentPeb()->ProcessHeap;
    Heap = RtlAllocateHeap((__int64)ProcessHeap, 0, 40LL);
    v12 = (_QWORD *)Heap;
    if ( !Heap )
    {
LABEL_19:
      if ( !(unsigned int)LdrControlFlowGuardEnforced() )
        return v12;
      RtlAcquireSRWLockExclusive((unsigned __int64)&LdrpMrdataLock, v20, v21, v22);
      v23 = *(_DWORD *)LdrpMrdataHeapUnprotected;
      if ( *(_DWORD *)LdrpMrdataHeapUnprotected )
      {
        *(_DWORD *)LdrpMrdataHeapUnprotected = v23 - 1;
        if ( v23 == 1 )
          RtlProtectHeap((_DWORD *)LdrpMrdataHeap, 1);
        RtlReleaseSRWLockExclusive(&LdrpMrdataLock);
        return v12;
      }
LABEL_39:
      RtlReleaseSRWLockExclusive(&LdrpMrdataLock);
      __fastfail(0xEu);
    }
    *(_DWORD *)(Heap + 24) = 0;
    v13 = (_QWORD *)RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, 8LL);
    v12[2] = v13;
    if ( !v13 )
    {
      if ( (unsigned int)LdrControlFlowGuardEnforced() )
        v26 = (void *)LdrpMrdataHeap;
      else
        v26 = NtCurrentPeb()->ProcessHeap;
      RtlFreeHeap((__int64)v26, 0, (__int64)v12);
      v12 = 0LL;
      goto LABEL_19;
    }
    v14 = `RtlpGetCookieValue'::`2'::CookieValue;
    *v13 = 1LL;
    if ( !v14 )
    {
      v27 = NtQueryInformationProcess((HANDLE)0xFFFFFFFFFFFFFFFFLL, (PROCESSINFOCLASS)36, &ProcessInformation, 4u, 0LL);
      if ( v27 < 0 )
        RtlRaiseStatus((unsigned int)v27);
      v14 = ProcessInformation;
      `RtlpGetCookieValue'::`2'::CookieValue = ProcessInformation;
    }
    v12[4] = __ROR8__(a2 ^ v14, v14 & 0x3F);
    v15 = &LdrpVectorHandlerList + 3 * v3 + 1;
    LdrProtectMrdata(0);
    RtlAcquireSRWLockExclusive((unsigned __int64)*(&LdrpVectorHandlerList + 3 * v3), v16, v17, v18);
    if ( *v15 == (_UNKNOWN *)v15 )
      _interlockedbittestandset((volatile signed __int32 *)&NtCurrentPeb()->80, v3 + 2);
    if ( a1 )
    {
      v19 = (_UNKNOWN ***)*v15;
      if ( *((_UNKNOWN ***)*v15 + 1) == v15 )
      {
        *v12 = v19;
        v12[1] = v15;
        v19[1] = (_UNKNOWN **)v12;
        *v15 = v12;
LABEL_18:
        RtlReleaseSRWLockExclusive((volatile signed __int64 *)*(&LdrpVectorHandlerList + 3 * v3));
        LdrProtectMrdata(1);
        goto LABEL_19;
      }
    }
    else
    {
      v25 = v15[1];
      if ( (_UNKNOWN **)*v25 == v15 )
      {
        *v12 = v15;
        v12[1] = v25;
        *v25 = v12;
        v15[1] = v12;
        goto LABEL_18;
      }
    }
    __fastfail(3u);
  }
  return 0LL;
}
