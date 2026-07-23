/*
 * XREFs of RtlpAddVectoredHandler @ 0x180081790
 * Callers:
 *     RtlAddVectoredExceptionHandler @ 0x180081780 (RtlAddVectoredExceptionHandler.c)
 *     RtlAddVectoredContinueHandler @ 0x1800D99C0 (RtlAddVectoredContinueHandler.c)
 * Callees:
 *     LdrEnsureMrdataHeapExists @ 0x18000787C (LdrEnsureMrdataHeapExists.c)
 *     RtlProtectHeap @ 0x18000E0E0 (RtlProtectHeap.c)
 *     LdrProtectMrdata @ 0x180012224 (LdrProtectMrdata.c)
 *     RtlReleaseSRWLockExclusive @ 0x180012C70 (RtlReleaseSRWLockExclusive.c)
 *     RtlFreeHeap @ 0x180024760 (RtlFreeHeap.c)
 *     RtlAcquireSRWLockExclusive @ 0x1800290A0 (RtlAcquireSRWLockExclusive.c)
 *     RtlAllocateHeap @ 0x18002A9A0 (RtlAllocateHeap.c)
 *     LdrControlFlowGuardEnforced @ 0x180033520 (LdrControlFlowGuardEnforced.c)
 *     RtlQueryProtectedPolicy @ 0x1800819D0 (RtlQueryProtectedPolicy.c)
 *     NtQueryInformationProcess @ 0x18009D3D0 (NtQueryInformationProcess.c)
 *     RtlRaiseStatus @ 0x180102820 (RtlRaiseStatus.c)
 */

ULONG_PTR **__fastcall RtlpAddVectoredHandler(int a1, __int64 a2, unsigned int a3)
{
  __int64 v3; // rbp
  int v6; // eax
  int v7; // ebx
  int v8; // eax
  PVOID ProcessHeap; // rcx
  ULONG_PTR **Heap; // rax
  ULONG_PTR **v11; // rbx
  ULONG_PTR *v12; // rax
  unsigned int v13; // ecx
  ULONG_PTR *v14; // rdi
  ULONG_PTR v15; // rax
  int v16; // eax
  int v17; // edx
  ULONG_PTR **v19; // rax
  int v20; // eax
  PVOID v21; // rcx
  int v22; // eax
  unsigned __int64 PolicyValue[5]; // [rsp+30h] [rbp-28h] BYREF
  int ProcessInformation; // [rsp+78h] [rbp+20h] BYREF

  v3 = a3;
  if ( LdrEnsureMrdataHeapExists() >= 0
    && (RtlQueryProtectedPolicy((PGUID)&PolicyGuid, PolicyValue) < 0 || !PolicyValue[0]) )
  {
    LOBYTE(v6) = LdrControlFlowGuardEnforced();
    if ( v6 )
    {
      RtlAcquireSRWLockExclusive(&LdrpMrdataLock);
      v7 = *(_DWORD *)LdrpMrdataHeapUnprotected;
      if ( !*(_DWORD *)LdrpMrdataHeapUnprotected )
        RtlProtectHeap(LdrpMrdataHeap, 0);
      if ( v7 == -1 )
        goto LABEL_39;
      *(_DWORD *)LdrpMrdataHeapUnprotected = v7 + 1;
      RtlReleaseSRWLockExclusive(&LdrpMrdataLock);
    }
    LOBYTE(v8) = LdrControlFlowGuardEnforced();
    if ( v8 )
      ProcessHeap = LdrpMrdataHeap;
    else
      ProcessHeap = NtCurrentPeb()->ProcessHeap;
    Heap = (ULONG_PTR **)RtlAllocateHeap(ProcessHeap, 0, 0x28uLL);
    v11 = Heap;
    if ( !Heap )
    {
LABEL_19:
      LOBYTE(v16) = LdrControlFlowGuardEnforced();
      if ( !v16 )
        return v11;
      RtlAcquireSRWLockExclusive(&LdrpMrdataLock);
      v17 = *(_DWORD *)LdrpMrdataHeapUnprotected;
      if ( *(_DWORD *)LdrpMrdataHeapUnprotected )
      {
        *(_DWORD *)LdrpMrdataHeapUnprotected = v17 - 1;
        if ( v17 == 1 )
          RtlProtectHeap(LdrpMrdataHeap, 1u);
        RtlReleaseSRWLockExclusive(&LdrpMrdataLock);
        return v11;
      }
LABEL_39:
      RtlReleaseSRWLockExclusive(&LdrpMrdataLock);
      __fastfail(0xEu);
    }
    *((_DWORD *)Heap + 6) = 0;
    v12 = (ULONG_PTR *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, 8uLL);
    v11[2] = v12;
    if ( !v12 )
    {
      LOBYTE(v20) = LdrControlFlowGuardEnforced();
      if ( v20 )
        v21 = LdrpMrdataHeap;
      else
        v21 = NtCurrentPeb()->ProcessHeap;
      RtlFreeHeap(v21, 0, v11);
      v11 = 0LL;
      goto LABEL_19;
    }
    v13 = `RtlpGetCookieValue'::`2'::CookieValue;
    *v12 = 1LL;
    if ( !v13 )
    {
      v22 = NtQueryInformationProcess((HANDLE)0xFFFFFFFFFFFFFFFFLL, ProcessCookie, &ProcessInformation, 4u, 0LL);
      if ( v22 < 0 )
        RtlRaiseStatus(v22);
      v13 = ProcessInformation;
      `RtlpGetCookieValue'::`2'::CookieValue = ProcessInformation;
    }
    v11[4] = (ULONG_PTR *)__ROR8__(a2 ^ v13, v13 & 0x3F);
    v14 = &LdrSystemDllInitBlock.ScpCfgDispatchFunction + 3 * v3;
    LdrProtectMrdata(0);
    RtlAcquireSRWLockExclusive(*((PRTL_SRWLOCK *)&LdrSystemDllInitBlock.ScpCfgCheckESFunction + 3 * v3));
    if ( (ULONG_PTR *)*v14 == v14 )
      _interlockedbittestandset((volatile signed __int32 *)&NtCurrentPeb()->80, v3 + 2);
    if ( a1 )
    {
      v15 = *v14;
      if ( *(ULONG_PTR **)(*v14 + 8) == v14 )
      {
        *v11 = (ULONG_PTR *)v15;
        v11[1] = v14;
        *(_QWORD *)(v15 + 8) = v11;
        *v14 = (ULONG_PTR)v11;
LABEL_18:
        RtlReleaseSRWLockExclusive(*((PRTL_SRWLOCK *)&LdrSystemDllInitBlock.ScpCfgCheckESFunction + 3 * v3));
        LdrProtectMrdata(1);
        goto LABEL_19;
      }
    }
    else
    {
      v19 = (ULONG_PTR **)v14[1];
      if ( *v19 == v14 )
      {
        *v11 = v14;
        v11[1] = (ULONG_PTR *)v19;
        *v19 = (ULONG_PTR *)v11;
        v14[1] = (ULONG_PTR)v11;
        goto LABEL_18;
      }
    }
    __fastfail(3u);
  }
  return 0LL;
}
