/*
 * XREFs of KiProcessExpiredTimerList @ 0x140244DA0
 * Callers:
 *     KiRetireDpcList @ 0x140206910 (KiRetireDpcList.c)
 *     KiExpireTimerTable @ 0x140385C40 (KiExpireTimerTable.c)
 * Callees:
 *     KiAcquireKobjectLockSafe @ 0x140243930 (KiAcquireKobjectLockSafe.c)
 *     KiProcessThreadWaitList @ 0x1402443B0 (KiProcessThreadWaitList.c)
 *     KeYieldProcessorEx @ 0x140244550 (KeYieldProcessorEx.c)
 *     KiReadyThread @ 0x140244C00 (KiReadyThread.c)
 *     KiTimerWaitTest @ 0x1402450F0 (KiTimerWaitTest.c)
 *     EtwTraceKernelEvent @ 0x1402A9948 (EtwTraceKernelEvent.c)
 *     EtwGetKernelTraceTimestamp @ 0x1402EE940 (EtwGetKernelTraceTimestamp.c)
 *     EtwTraceTimedEvent @ 0x1402FF550 (EtwTraceTimedEvent.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x1403F5E40 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x1403FE9E0 (_guard_dispatch_icall.c)
 *     memset @ 0x140408F80 (memset.c)
 *     EtwTraceReadyThread @ 0x1405A23B0 (EtwTraceReadyThread.c)
 */

int __fastcall KiProcessExpiredTimerList(__int64 a1, __int64 a2, __int64 a3, unsigned int a4)
{
  __int64 v4; // rax
  int v5; // edi
  __int64 v6; // r9
  int *v7; // r12
  unsigned int v9; // ebp
  bool v10; // r15
  __int64 v11; // rax
  __int64 v12; // rbx
  __int64 v13; // r14
  int v14; // ebx
  ULONG_PTR v15; // rcx
  __int64 v16; // rbx
  void *v17; // rcx
  void (__fastcall *v18)(__int64, _QWORD, _QWORD, _QWORD); // rax
  ULONG_PTR v19; // rcx
  __int64 **v20; // r14
  __int64 v21; // rax
  __int64 v22; // r15
  __int64 *v23; // rbx
  __int64 *v24; // rdi
  volatile signed __int32 *v25; // rbp
  __int64 *v26; // rax
  __int64 **v27; // rcx
  unsigned __int64 v28; // rdx
  size_t v29; // r8
  ULONG_PTR BugCheckParameter2; // [rsp+30h] [rbp-B8h] BYREF
  int v32; // [rsp+38h] [rbp-B0h] BYREF
  unsigned int BugCheckParameter3; // [rsp+3Ch] [rbp-ACh]
  unsigned int BugCheckParameter3_4; // [rsp+40h] [rbp-A8h]
  __int64 v35; // [rsp+48h] [rbp-A0h]
  __int64 v36; // [rsp+50h] [rbp-98h]
  _QWORD v37[2]; // [rsp+58h] [rbp-90h] BYREF
  __int128 v38; // [rsp+68h] [rbp-80h] BYREF
  __int128 v39; // [rsp+78h] [rbp-70h]
  _OWORD v40[2]; // [rsp+88h] [rbp-60h] BYREF

  v4 = *(_QWORD *)(a1 + 8);
  BugCheckParameter3_4 = a4;
  v5 = BYTE4(PerfGlobalGroupMask) & 0x80;
  v6 = 0LL;
  v35 = v4;
  v7 = (int *)a2;
  BugCheckParameter2 = 0LL;
  v38 = 0LL;
  v36 = a3;
  v9 = 0;
  v39 = 0LL;
  memset(v40, 0, sizeof(v40));
  BugCheckParameter3 = *(_DWORD *)(v4 + 484);
  v10 = (DWORD2(PerfGlobalGroupMask) & 0x20000) != 0;
  while ( 1 )
  {
    v11 = v9++;
    v12 = _InterlockedExchange64((volatile __int64 *)(a3 + 8 * v11), 0LL);
    if ( v12 )
    {
      v32 = 0;
      while ( _interlockedbittestandset((volatile signed __int32 *)v12, 7u) )
      {
        do
          KeYieldProcessorEx(&v32, a2, a3, v6);
        while ( (*(_DWORD *)v12 & 0x80u) != 0 );
      }
      if ( v10 )
      {
        *(_QWORD *)&v38 = *(_QWORD *)(v12 + 24);
        v28 = KiWaitAlways ^ _byteswap_uint64(v12 ^ __ROL8__(KiWaitNever ^ *(_QWORD *)(v12 + 48), KiWaitNever));
        if ( v28 )
          *(_QWORD *)&v39 = *(_QWORD *)(v28 + 24);
        else
          *(_QWORD *)&v39 = 0LL;
      }
      v11 = KiTimerWaitTest(a1, v12, v7 + 2);
      v13 = v11;
      if ( v10 )
      {
        *((_QWORD *)&v38 + 1) = v12;
        BYTE8(v39) = *(_BYTE *)(v12 + 1) >> 2;
        v37[0] = &v38;
        v37[1] = 32LL;
        LODWORD(v11) = EtwTraceKernelEvent((unsigned int)v37, 1, 1073872896, 3921, 1538);
      }
      if ( v13 )
      {
        if ( *(_QWORD *)(a1 + 11528) )
          KiProcessThreadWaitList(a1, 1LL, 0LL, 2LL);
        if ( v5 )
          EtwGetKernelTraceTimestamp(v40, 536871040LL);
        v14 = *v7;
        BugCheckParameter2 = *(_QWORD *)(v13 + 24);
        v15 = BugCheckParameter2;
        *v7 = v14 + 1;
        v16 = 2 * ((v14 & 0xF) + 1LL);
        *(_QWORD *)&v7[2 * v16] = v15;
        v7[2 * v16 + 2] = MEMORY[0xFFFFF78000000320];
        v17 = *(void **)(a1 + 33960);
        *(_DWORD *)(a1 + 32412) = 0;
        if ( v17 && *(void **)(a1 + 33968) != v17 && *(_DWORD *)(a1 + 31724) < *(_DWORD *)(a1 + 31732) )
        {
          v29 = 8LL * (unsigned int)KiDpcWatchdogProfileArrayLength;
          *(_QWORD *)(a1 + 33968) = v17;
          memset(v17, 0, v29);
        }
        v18 = (void (__fastcall *)(__int64, _QWORD, _QWORD, _QWORD))BugCheckParameter2;
        *(_BYTE *)(a1 + 12586) = 1;
        v18(v13, *(_QWORD *)(v13 + 32), (unsigned int)v7[2], (unsigned int)v7[3]);
        v19 = BugCheckParameter3;
        *(_BYTE *)(a1 + 12586) = 0;
        v7[2 * v16 + 3] = MEMORY[0xFFFFF78000000320];
        LODWORD(v11) = *(_DWORD *)(v35 + 484);
        if ( (_DWORD)v19 != (_DWORD)v11 )
          KeBugCheckEx(0xC7u, 5uLL, BugCheckParameter2, v19, *(unsigned int *)(v35 + 484));
        if ( v5 )
          LODWORD(v11) = EtwTraceTimedEvent(
                           3909,
                           536871040,
                           (unsigned int)&BugCheckParameter2,
                           8,
                           4196866,
                           (__int64)v40);
      }
    }
    if ( v9 >= BugCheckParameter3_4 )
      break;
    a3 = v36;
    v6 = 0LL;
  }
  v20 = *(__int64 ***)(a1 + 11528);
  if ( v20 )
  {
    *(_QWORD *)(a1 + 11528) = 0LL;
    do
    {
      v21 = *((unsigned __int8 *)v20 + 371);
      v22 = (__int64)(v20 - 27);
      v23 = *(v20 - 1);
      v20 = (__int64 **)*v20;
      v24 = &v23[6 * v21];
      do
      {
        if ( *((_BYTE *)v23 + 17) < 5u )
        {
          v25 = (volatile signed __int32 *)v23[4];
          KiAcquireKobjectLockSafe(v25, a2, a3, v6);
          if ( *((_BYTE *)v23 + 17) == 4 )
          {
            v26 = (__int64 *)*v23;
            if ( *(__int64 **)(*v23 + 8) != v23 || (v27 = (__int64 **)v23[1], *v27 != v23) )
              __fastfail(3u);
            *v27 = v26;
            v26[1] = (__int64)v27;
          }
          _InterlockedAnd(v25, 0xFFFFFF7F);
        }
        v23 += 6;
      }
      while ( v23 != v24 );
      *(_WORD *)(v22 + 566) = 1;
      if ( (WORD2(PerfGlobalGroupMask) & 0x200) != 0 )
      {
        LOBYTE(a2) = 1;
        EtwTraceReadyThread(v22, a2, 0LL, 2LL);
      }
      LODWORD(v11) = KiReadyThread(a1, v22, a3, v6);
    }
    while ( v20 );
  }
  return v11;
}
