/*
 * XREFs of KiProcessExpiredTimerList @ 0x1402EC2F0
 * Callers:
 *     KiRetireDpcList @ 0x1402EAF00 (KiRetireDpcList.c)
 *     KiExpireTimerTable @ 0x140389600 (KiExpireTimerTable.c)
 * Callees:
 *     EtwGetKernelTraceTimestamp @ 0x1402129F0 (EtwGetKernelTraceTimestamp.c)
 *     EtwTraceTimedEvent @ 0x14022D15C (EtwTraceTimedEvent.c)
 *     EtwTraceKernelEvent @ 0x14029BFE0 (EtwTraceKernelEvent.c)
 *     KiTimerWaitTest @ 0x1402EC640 (KiTimerWaitTest.c)
 *     KiReadyThread @ 0x1402ECE90 (KiReadyThread.c)
 *     KeYieldProcessorEx @ 0x1402EFAD0 (KeYieldProcessorEx.c)
 *     KiProcessThreadWaitList @ 0x1402EFB20 (KiProcessThreadWaitList.c)
 *     KiAcquireKobjectLockSafe @ 0x1402F0CF0 (KiAcquireKobjectLockSafe.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x1403FE0D0 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 *     memset @ 0x140414300 (memset.c)
 *     EtwTraceReadyThread @ 0x1405A81A0 (EtwTraceReadyThread.c)
 */

__int64 __fastcall KiProcessExpiredTimerList(__int64 a1, int *a2, __int64 a3, unsigned int a4)
{
  __int64 v4; // rax
  int v5; // edi
  int *v6; // r12
  unsigned int v8; // ebp
  bool v9; // r15
  __int64 result; // rax
  __int64 v11; // rbx
  __int64 v12; // r14
  int v13; // ebx
  ULONG_PTR v14; // rcx
  __int64 v15; // rbx
  void *v16; // rcx
  void (__fastcall *v17)(__int64, _QWORD, _QWORD, _QWORD); // rax
  ULONG_PTR v18; // rcx
  __int64 **v19; // r14
  __int64 v20; // rax
  __int64 *v21; // r15
  __int64 *v22; // rbx
  __int64 *v23; // rdi
  volatile signed __int32 *v24; // rbp
  __int64 *v25; // rax
  __int64 **v26; // rcx
  unsigned __int64 v27; // rdx
  size_t v28; // r8
  ULONG_PTR BugCheckParameter2; // [rsp+30h] [rbp-B8h] BYREF
  int v30; // [rsp+38h] [rbp-B0h] BYREF
  unsigned int BugCheckParameter3; // [rsp+3Ch] [rbp-ACh]
  unsigned int BugCheckParameter3_4; // [rsp+40h] [rbp-A8h]
  __int64 v33; // [rsp+48h] [rbp-A0h]
  __int64 v34; // [rsp+50h] [rbp-98h]
  _QWORD v35[2]; // [rsp+58h] [rbp-90h] BYREF
  __int128 v36; // [rsp+68h] [rbp-80h] BYREF
  __int128 v37; // [rsp+78h] [rbp-70h]
  _OWORD v38[2]; // [rsp+88h] [rbp-60h] BYREF

  v4 = *(_QWORD *)(a1 + 8);
  BugCheckParameter3_4 = a4;
  v5 = BYTE4(PerfGlobalGroupMask) & 0x80;
  v33 = v4;
  v6 = a2;
  BugCheckParameter2 = 0LL;
  v36 = 0LL;
  v34 = a3;
  v8 = 0;
  v37 = 0LL;
  memset(v38, 0, sizeof(v38));
  BugCheckParameter3 = *(_DWORD *)(v4 + 484);
  v9 = (DWORD2(PerfGlobalGroupMask) & 0x20000) != 0;
  while ( 1 )
  {
    result = v8++;
    v11 = _InterlockedExchange64((volatile __int64 *)(a3 + 8 * result), 0LL);
    if ( v11 )
    {
      v30 = 0;
      while ( _interlockedbittestandset((volatile signed __int32 *)v11, 7u) )
      {
        do
          KeYieldProcessorEx(&v30);
        while ( (*(_DWORD *)v11 & 0x80u) != 0 );
      }
      if ( v9 )
      {
        *(_QWORD *)&v36 = *(_QWORD *)(v11 + 24);
        v27 = KiWaitAlways ^ _byteswap_uint64(v11 ^ __ROL8__(KiWaitNever ^ *(_QWORD *)(v11 + 48), KiWaitNever));
        if ( v27 )
          *(_QWORD *)&v37 = *(_QWORD *)(v27 + 24);
        else
          *(_QWORD *)&v37 = 0LL;
      }
      result = KiTimerWaitTest(a1, v11, v6 + 2);
      v12 = result;
      if ( v9 )
      {
        *((_QWORD *)&v36 + 1) = v11;
        BYTE8(v37) = *(_BYTE *)(v11 + 1) >> 2;
        v35[0] = &v36;
        v35[1] = 32LL;
        result = EtwTraceKernelEvent((int)v35, 1, 0x40020000u, 3921, 1538);
      }
      if ( v12 )
      {
        if ( *(_QWORD *)(a1 + 11528) )
          KiProcessThreadWaitList(a1, 1LL, 0LL, 2LL);
        if ( v5 )
          EtwGetKernelTraceTimestamp((LARGE_INTEGER *)v38, 0x20000080u);
        v13 = *v6;
        BugCheckParameter2 = *(_QWORD *)(v12 + 24);
        v14 = BugCheckParameter2;
        *v6 = v13 + 1;
        v15 = 2 * ((v13 & 0xF) + 1LL);
        *(_QWORD *)&v6[2 * v15] = v14;
        v6[2 * v15 + 2] = MEMORY[0xFFFFF78000000320];
        v16 = *(void **)(a1 + 33960);
        *(_DWORD *)(a1 + 32412) = 0;
        if ( v16 && *(void **)(a1 + 33968) != v16 && *(_DWORD *)(a1 + 31724) < *(_DWORD *)(a1 + 31732) )
        {
          v28 = 8LL * (unsigned int)KiDpcWatchdogProfileArrayLength;
          *(_QWORD *)(a1 + 33968) = v16;
          memset(v16, 0, v28);
        }
        v17 = (void (__fastcall *)(__int64, _QWORD, _QWORD, _QWORD))BugCheckParameter2;
        *(_BYTE *)(a1 + 12586) = 1;
        v17(v12, *(_QWORD *)(v12 + 32), (unsigned int)v6[2], (unsigned int)v6[3]);
        v18 = BugCheckParameter3;
        *(_BYTE *)(a1 + 12586) = 0;
        v6[2 * v15 + 3] = MEMORY[0xFFFFF78000000320];
        result = *(unsigned int *)(v33 + 484);
        if ( (_DWORD)v18 != (_DWORD)result )
          KeBugCheckEx(0xC7u, 5uLL, BugCheckParameter2, v18, *(unsigned int *)(v33 + 484));
        if ( v5 )
          result = EtwTraceTimedEvent(3909, 0x20000080u, (__int64)&BugCheckParameter2, 8, 4196866, (__int64)v38);
      }
    }
    if ( v8 >= BugCheckParameter3_4 )
      break;
    a3 = v34;
  }
  v19 = *(__int64 ***)(a1 + 11528);
  if ( v19 )
  {
    *(_QWORD *)(a1 + 11528) = 0LL;
    do
    {
      v20 = *((unsigned __int8 *)v19 + 371);
      v21 = (__int64 *)(v19 - 27);
      v22 = *(v19 - 1);
      v19 = (__int64 **)*v19;
      v23 = &v22[6 * v20];
      do
      {
        if ( *((_BYTE *)v22 + 17) < 5u )
        {
          v24 = (volatile signed __int32 *)v22[4];
          KiAcquireKobjectLockSafe(v24);
          if ( *((_BYTE *)v22 + 17) == 4 )
          {
            v25 = (__int64 *)*v22;
            if ( *(__int64 **)(*v22 + 8) != v22 || (v26 = (__int64 **)v22[1], *v26 != v22) )
              __fastfail(3u);
            *v26 = v25;
            v25[1] = (__int64)v26;
          }
          _InterlockedAnd(v24, 0xFFFFFF7F);
        }
        v22 += 6;
      }
      while ( v22 != v23 );
      *((_WORD *)v21 + 283) = 1;
      if ( (WORD2(PerfGlobalGroupMask) & 0x200) != 0 )
      {
        LOBYTE(a2) = 1;
        EtwTraceReadyThread(v21, a2, 0LL, 2LL);
      }
      result = KiReadyThread(a1, v21);
    }
    while ( v19 );
  }
  return result;
}
