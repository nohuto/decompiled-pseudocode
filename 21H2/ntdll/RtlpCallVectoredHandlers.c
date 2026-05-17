/*
 * XREFs of RtlpCallVectoredHandlers @ 0x180079A74
 * Callers:
 *     RtlDispatchException @ 0x180052310 (RtlDispatchException.c)
 * Callees:
 *     RtlProtectHeap @ 0x18000E0E0 (RtlProtectHeap.c)
 *     LdrProtectMrdata @ 0x180012224 (LdrProtectMrdata.c)
 *     RtlReleaseSRWLockExclusive @ 0x180012C70 (RtlReleaseSRWLockExclusive.c)
 *     RtlFreeHeap @ 0x180024760 (RtlFreeHeap.c)
 *     RtlAcquireSRWLockExclusive @ 0x1800290A0 (RtlAcquireSRWLockExclusive.c)
 *     LdrControlFlowGuardEnforced @ 0x180033520 (LdrControlFlowGuardEnforced.c)
 *     NtQueryInformationProcess @ 0x18009D960 (NtQueryInformationProcess.c)
 *     _guard_dispatch_icall_nop @ 0x1800A1160 (_guard_dispatch_icall_nop.c)
 *     RtlpLogExceptionHandler @ 0x180100EFC (RtlpLogExceptionHandler.c)
 *     RtlRaiseStatus @ 0x1801026C0 (RtlRaiseStatus.c)
 */

char __fastcall RtlpCallVectoredHandlers(__int64 a1, unsigned __int64 a2, unsigned int a3, unsigned __int64 a4)
{
  struct _PEB *v4; // r13
  __int64 v5; // rax
  char v6; // si
  unsigned __int64 v7; // r8
  __int64 v8; // r15
  void **v9; // rbx
  volatile signed __int64 *v11; // rdi
  unsigned __int64 v12; // rcx
  volatile signed __int64 *v13; // r14
  volatile signed __int64 **v14; // r12
  volatile signed __int64 *v15; // rsi
  unsigned int v16; // edx
  __int64 v17; // rbx
  __int64 v18; // rbp
  __int64 (__fastcall *v19)(_QWORD *); // rbx
  unsigned __int64 v20; // rdx
  unsigned __int64 v21; // r8
  unsigned __int64 v22; // r9
  int v23; // r13d
  signed __int64 v24; // rcx
  bool v25; // cc
  signed __int64 v26; // rcx
  NTSTATUS v27; // eax
  unsigned __int64 v28; // rdx
  unsigned __int64 v29; // r8
  unsigned __int64 v30; // r9
  int v31; // ebx
  volatile signed __int64 **v32; // rcx
  volatile signed __int64 **v33; // rax
  unsigned __int64 v34; // rdx
  unsigned __int64 v35; // r8
  unsigned __int64 v36; // r9
  int v37; // ecx
  unsigned __int64 v39; // rdx
  unsigned __int64 v40; // r8
  unsigned __int64 v41; // r9
  int v42; // ebx
  __int64 v43; // rbx
  void *ProcessHeap; // rcx
  unsigned __int64 v45; // rdx
  unsigned __int64 v46; // r8
  unsigned __int64 v47; // r9
  int v48; // edx
  unsigned int v49; // [rsp+30h] [rbp-68h]
  struct _PEB *v50; // [rsp+38h] [rbp-60h]
  _QWORD v51[11]; // [rsp+40h] [rbp-58h] BYREF
  int ProcessInformation; // [rsp+B8h] [rbp+20h] BYREF

  v4 = NtCurrentPeb();
  v5 = a3;
  v6 = 0;
  v50 = v4;
  v7 = a3 + 2;
  v49 = v7;
  v8 = 3 * v5;
  LODWORD(v5) = v4->CrossProcessFlags;
  v9 = (void **)(&LdrpVectorHandlerList + v8 + 1);
  if ( _bittest((const int *)&v5, v7) )
  {
    v51[0] = a1;
    v11 = 0LL;
    v12 = (unsigned __int64)*(&LdrpVectorHandlerList + v8);
    v51[1] = a2;
    RtlAcquireSRWLockExclusive(v12, a2, v7, a4);
    v13 = (volatile signed __int64 *)*v9;
    if ( *v9 != v9 )
    {
      while ( 1 )
      {
        v14 = (volatile signed __int64 **)(v13 + 2);
        v15 = v13;
        if ( _InterlockedIncrement64(*((volatile signed __int64 **)v13 + 2)) <= 1 )
          __fastfail(0xEu);
        RtlReleaseSRWLockExclusive((volatile signed __int64 *)*(&LdrpVectorHandlerList + v8));
        v16 = `RtlpGetCookieValue'::`2'::CookieValue;
        v17 = *((_QWORD *)v13 + 4);
        if ( !`RtlpGetCookieValue'::`2'::CookieValue )
        {
          v27 = NtQueryInformationProcess(
                  (HANDLE)0xFFFFFFFFFFFFFFFFLL,
                  (PROCESSINFOCLASS)36,
                  &ProcessInformation,
                  4u,
                  0LL);
          if ( v27 < 0 )
            RtlRaiseStatus((unsigned int)v27);
          v16 = ProcessInformation;
          `RtlpGetCookieValue'::`2'::CookieValue = ProcessInformation;
        }
        v18 = 0LL;
        v19 = (__int64 (__fastcall *)(_QWORD *))(v16 ^ __ROR8__(v17, 64 - (v16 & 0x3F)));
        if ( (v4->NtGlobalFlag & 0x800000) != 0 )
          v18 = RtlpLogExceptionHandler(a1, a2, 0LL, v19);
        v23 = v19(v51);
        if ( v18 )
          *(_DWORD *)(v18 + 1396) = v23 != -1;
        RtlAcquireSRWLockExclusive((unsigned __int64)*(&LdrpVectorHandlerList + v8), v20, v21, v22);
        v13 = (volatile signed __int64 *)*v13;
        v24 = _InterlockedExchangeAdd64(*v14, 0xFFFFFFFFFFFFFFFFuLL);
        v25 = v24 <= 1;
        v26 = v24 - 1;
        if ( v25 )
        {
          if ( v26 )
            __fastfail(0xEu);
          if ( !*((_DWORD *)v15 + 6) )
            __fastfail(0x3Cu);
          if ( (unsigned int)LdrControlFlowGuardEnforced() )
          {
            RtlAcquireSRWLockExclusive((unsigned __int64)&LdrpMrdataLock, v28, v29, v30);
            v31 = *(_DWORD *)LdrpMrdataHeapUnprotected;
            if ( !*(_DWORD *)LdrpMrdataHeapUnprotected )
              RtlProtectHeap((_DWORD *)LdrpMrdataHeap, 0);
            if ( v31 == -1 )
              goto LABEL_55;
            *(_DWORD *)LdrpMrdataHeapUnprotected = v31 + 1;
            RtlReleaseSRWLockExclusive(&LdrpMrdataLock);
          }
          LdrProtectMrdata(0);
          v32 = (volatile signed __int64 **)*v15;
          if ( *(volatile signed __int64 **)(*v15 + 8) != v15
            || (v33 = (volatile signed __int64 **)*((_QWORD *)v15 + 1), *v33 != v15) )
          {
            __fastfail(3u);
          }
          *v33 = (volatile signed __int64 *)v32;
          v32[1] = (volatile signed __int64 *)v33;
          if ( v33 == v32 )
            _interlockedbittestandreset((volatile signed __int32 *)&v50->80, v49);
          LdrProtectMrdata(1);
          *v15 = (volatile signed __int64)v11;
          v11 = v15;
          if ( (unsigned int)LdrControlFlowGuardEnforced() )
          {
            RtlAcquireSRWLockExclusive((unsigned __int64)&LdrpMrdataLock, v34, v35, v36);
            v37 = *(_DWORD *)LdrpMrdataHeapUnprotected;
            if ( !*(_DWORD *)LdrpMrdataHeapUnprotected )
              goto LABEL_55;
            *(_DWORD *)LdrpMrdataHeapUnprotected = v37 - 1;
            if ( v37 == 1 )
              RtlProtectHeap((_DWORD *)LdrpMrdataHeap, 1);
            RtlReleaseSRWLockExclusive(&LdrpMrdataLock);
          }
        }
        if ( v23 == -1 )
          break;
        if ( v13 == (volatile signed __int64 *)(&LdrpVectorHandlerList + v8 + 1) )
        {
          v6 = 0;
          goto LABEL_14;
        }
        v4 = v50;
      }
      v6 = 1;
    }
LABEL_14:
    RtlReleaseSRWLockExclusive((volatile signed __int64 *)*(&LdrpVectorHandlerList + v8));
    if ( v11 )
    {
      if ( (unsigned int)LdrControlFlowGuardEnforced() )
      {
        RtlAcquireSRWLockExclusive((unsigned __int64)&LdrpMrdataLock, v39, v40, v41);
        v42 = *(_DWORD *)LdrpMrdataHeapUnprotected;
        if ( !*(_DWORD *)LdrpMrdataHeapUnprotected )
          RtlProtectHeap((_DWORD *)LdrpMrdataHeap, 0);
        if ( v42 == -1 )
          goto LABEL_55;
        *(_DWORD *)LdrpMrdataHeapUnprotected = v42 + 1;
        RtlReleaseSRWLockExclusive(&LdrpMrdataLock);
      }
      do
      {
        v43 = (__int64)v11;
        v11 = (volatile signed __int64 *)*v11;
        RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, *(_QWORD *)(v43 + 16));
        if ( (unsigned int)LdrControlFlowGuardEnforced() )
          ProcessHeap = (void *)LdrpMrdataHeap;
        else
          ProcessHeap = NtCurrentPeb()->ProcessHeap;
        RtlFreeHeap((__int64)ProcessHeap, 0, v43);
      }
      while ( v11 );
      if ( (unsigned int)LdrControlFlowGuardEnforced() )
      {
        RtlAcquireSRWLockExclusive((unsigned __int64)&LdrpMrdataLock, v45, v46, v47);
        v48 = *(_DWORD *)LdrpMrdataHeapUnprotected;
        if ( *(_DWORD *)LdrpMrdataHeapUnprotected )
        {
          *(_DWORD *)LdrpMrdataHeapUnprotected = v48 - 1;
          if ( v48 == 1 )
            RtlProtectHeap((_DWORD *)LdrpMrdataHeap, 1);
          RtlReleaseSRWLockExclusive(&LdrpMrdataLock);
          return v6;
        }
LABEL_55:
        RtlReleaseSRWLockExclusive(&LdrpMrdataLock);
        __fastfail(0xEu);
      }
    }
  }
  return v6;
}
