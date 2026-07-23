/*
 * XREFs of RtlpxLookupFunctionTable @ 0x180032F40
 * Callers:
 *     RtlQueueWorkItem @ 0x18000B780 (RtlQueueWorkItem.c)
 *     RtlQueryInformationActivationContext @ 0x180012DE0 (RtlQueryInformationActivationContext.c)
 *     LdrpResolveProcedureAddress @ 0x1800303F4 (LdrpResolveProcedureAddress.c)
 *     LdrpSnapModule @ 0x1800323F0 (LdrpSnapModule.c)
 *     RtlLookupFunctionEntry @ 0x180032BE0 (RtlLookupFunctionEntry.c)
 *     LdrpResolveForwarder @ 0x1800332E8 (LdrpResolveForwarder.c)
 *     RtlPcToFileHeader @ 0x180034A40 (RtlPcToFileHeader.c)
 *     RtlpLookupFunctionEntryForStackWalks @ 0x180052A64 (RtlpLookupFunctionEntryForStackWalks.c)
 *     RtlGuardCheckLongJumpTarget @ 0x18006EEF0 (RtlGuardCheckLongJumpTarget.c)
 *     RtlGuardCheckExceptionHandler @ 0x18006F020 (RtlGuardCheckExceptionHandler.c)
 *     RtlGuardCheckImageBase @ 0x180075B98 (RtlGuardCheckImageBase.c)
 *     EtwpProviderArrivalCallback @ 0x180087974 (EtwpProviderArrivalCallback.c)
 *     RtlLookupFunctionTable @ 0x18009CA70 (RtlLookupFunctionTable.c)
 *     RtlCreateInvertedFunctionTableCacheEntry @ 0x1800E0AB4 (RtlCreateInvertedFunctionTableCacheEntry.c)
 * Callees:
 *     RtlpWakeSRWLock @ 0x180015200 (RtlpWakeSRWLock.c)
 *     RtlpImageDirectoryEntryToDataEx @ 0x180032920 (RtlpImageDirectoryEntryToDataEx.c)
 *     RtlpGetImageBaseViaQueryVirtualMemory @ 0x180033544 (RtlpGetImageBaseViaQueryVirtualMemory.c)
 *     RtlBackoff @ 0x18005E2E8 (RtlBackoff.c)
 *     RtlpWaitCouldDeadlock @ 0x180064DE0 (RtlpWaitCouldDeadlock.c)
 *     RtlpOptimizeSRWLockList @ 0x18007ABEC (RtlpOptimizeSRWLockList.c)
 *     ZwTerminateProcess @ 0x18009DB80 (ZwTerminateProcess.c)
 *     NtWaitForAlertByThreadId @ 0x1800A1030 (NtWaitForAlertByThreadId.c)
 *     RtlRaiseStatus @ 0x180102680 (RtlRaiseStatus.c)
 */

__int64 __fastcall RtlpxLookupFunctionTable(unsigned __int64 BaseAddress, signed __int64 a2, char *a3, char *a4)
{
  signed __int64 v4; // rsi
  bool v5; // zf
  PVOID v6; // r14
  __int64 v7; // rbp
  __int64 v8; // r13
  unsigned __int64 Value; // rdi
  int v10; // r9d
  int v11; // ebx
  int v12; // eax
  unsigned __int64 v13; // r8
  char *v14; // rdx
  signed __int64 v15; // rax
  unsigned __int64 ImageBaseViaQueryVirtualMemory; // rax
  __int64 v18; // rbx
  signed __int64 v19; // rcx
  signed __int64 v20; // rbx
  signed __int64 v21; // rtt
  signed __int64 v22; // rcx
  __int64 v23; // rdx
  signed __int64 v24; // rdx
  signed __int64 v25; // rtt
  signed __int64 v26; // rax
  unsigned __int64 v28; // rax
  _QWORD *v29; // rcx
  __int64 i; // rdx
  __int64 v31; // [rsp+20h] [rbp-78h]
  unsigned __int64 v32; // [rsp+30h] [rbp-68h] BYREF
  unsigned __int64 *v33; // [rsp+38h] [rbp-60h]
  __int64 v34; // [rsp+40h] [rbp-58h]
  unsigned __int64 v35; // [rsp+48h] [rbp-50h]
  int v36; // [rsp+50h] [rbp-48h]
  signed __int32 v37[17]; // [rsp+54h] [rbp-44h] BYREF
  int v38; // [rsp+A8h] [rbp+10h] BYREF
  __int64 v39; // [rsp+B0h] [rbp+18h] BYREF

  v4 = a2;
  v5 = LdrInitState == 3;
  v6 = (PVOID)BaseAddress;
  v7 = 0LL;
  *(_QWORD *)(a2 + 8) = 0LL;
  *(_DWORD *)(a2 + 16) = 0;
  if ( v5 )
  {
    v8 = -1LL;
    v38 = 0;
    Value = _InterlockedCompareExchange64((volatile signed __int64 *)&LdrpInvertedFunctionTableSRWLock, 17LL, 0LL);
    if ( !Value )
    {
LABEL_3:
      if ( LdrpInvertedFunctionTable[0] != 1 )
      {
        v10 = 1;
        v11 = LdrpInvertedFunctionTable[0] - 1;
        while ( v11 >= v10 )
        {
          v12 = (v11 + v10) >> 1;
          v13 = *((_QWORD *)&xmmword_180181510 + 3 * v12 + 1);
          v14 = (char *)&xmmword_180181510 + 24 * v12;
          if ( (unsigned __int64)v6 < v13 )
          {
            if ( !v12 )
              break;
            v11 = v12 - 1;
          }
          else
          {
            if ( (unsigned __int64)v6 < v13 + *((unsigned int *)v14 + 4) )
            {
              *(_OWORD *)v4 = *(_OWORD *)v14;
              *(_QWORD *)(v4 + 16) = *((_QWORD *)v14 + 2);
              v7 = *(_QWORD *)v4;
              break;
            }
            v10 = v12 + 1;
          }
        }
      }
      v15 = _InterlockedCompareExchange64((volatile signed __int64 *)&LdrpInvertedFunctionTableSRWLock, 0LL, 17LL);
      if ( v15 != 17 )
      {
        if ( (v15 & 1) == 0 )
          RtlRaiseStatus(-1073741212);
        if ( (v15 & 2) != 0 )
        {
LABEL_38:
          if ( (v15 & 8) != 0 )
          {
            v29 = (_QWORD *)(v15 & 0xFFFFFFFFFFFFFFF0uLL);
            for ( i = *(_QWORD *)((v15 & 0xFFFFFFFFFFFFFFF0uLL) + 8); !i; i = v29[1] )
              v29 = (_QWORD *)*v29;
            if ( _InterlockedExchangeAdd((volatile signed __int32 *)(i + 32), 0xFFFFFFFF) > 1 )
              goto LABEL_14;
            v8 = -9LL;
          }
          do
          {
            v22 = v15 & 6;
            if ( v22 == 2 )
              v23 = v8 + 4;
            else
              v23 = v8;
            v24 = v15 + v23;
            v25 = v15;
            v15 = _InterlockedCompareExchange64((volatile signed __int64 *)&LdrpInvertedFunctionTableSRWLock, v24, v15);
          }
          while ( v25 != v15 );
          if ( v22 == 2 )
            RtlpWakeSRWLock((volatile signed __int64 *)&LdrpInvertedFunctionTableSRWLock, v24, 0);
          goto LABEL_14;
        }
        while ( 1 )
        {
          v20 = 0LL;
          if ( (v15 & 0xFFFFFFFFFFFFFFF0uLL) != 0x10 )
            v20 = v15 - 16;
          v21 = v15;
          v15 = _InterlockedCompareExchange64((volatile signed __int64 *)&LdrpInvertedFunctionTableSRWLock, v20, v15);
          if ( v21 == v15 )
            break;
          if ( (v15 & 2) != 0 )
            goto LABEL_38;
        }
      }
LABEL_14:
      if ( v7 || !byte_18018150C && SLOBYTE(NtCurrentPeb()->CrossProcessFlags) >= 0 )
        return v7;
      goto LABEL_16;
    }
    while ( 1 )
    {
      v18 = (Value >> 1) & 1;
      if ( (Value & 1) != 0 && (v18 || (Value & 0xFFFFFFFFFFFFFFF0uLL) == 0) )
      {
        if ( (unsigned __int8)RtlpWaitCouldDeadlock(BaseAddress, a2, a3, a4, v31) )
          ZwTerminateProcess((HANDLE)0xFFFFFFFFFFFFFFFFLL, -1073741749);
        BaseAddress = (unsigned __int64)NtCurrentTeb()->ClientId.UniqueThread;
        v35 = BaseAddress;
        LOBYTE(BaseAddress) = 0;
        v37[0] = 2;
        v34 = 0LL;
        if ( v18 )
        {
          v33 = 0LL;
          v36 = -1;
          v32 = Value & 0xFFFFFFFFFFFFFFF0uLL;
          a2 = (unsigned __int64)&v32 | Value & 8 | 7;
          LOBYTE(BaseAddress) = (Value & 4) == 0;
        }
        else
        {
          v36 = -2;
          v33 = &v32;
          a2 = (signed __int64)&v32 + 3;
        }
        v26 = _InterlockedCompareExchange64((volatile signed __int64 *)&LdrpInvertedFunctionTableSRWLock, a2, Value);
        v5 = Value == v26;
        Value = v26;
        if ( !v5 )
          goto LABEL_49;
        if ( (_BYTE)BaseAddress )
          RtlpOptimizeSRWLockList(&LdrpInvertedFunctionTableSRWLock);
        if ( MEMORY[0x7FFE036A] > 1u )
        {
          if ( MEMORY[0x7FFE0297] )
          {
            a3 = (char *)__rdtsc();
            a4 = &a3[SRWLockSpinCycleCount];
            while ( 1 )
            {
              BaseAddress = 0LL;
              a2 = 0LL;
              __asm { monitorx rax, rcx, rdx }
              if ( (v37[0] & 2) == 0 )
                break;
              BaseAddress = (unsigned __int64)a3;
              v28 = __rdtsc();
              a2 = (unsigned __int64)HIDWORD(v28) << 32;
              a3 = (char *)v28;
              if ( v28 <= BaseAddress || v28 >= (unsigned __int64)a4 )
                break;
              __asm { mwaitx  rax, rcx, rbx }
            }
          }
          else
          {
            BaseAddress = 0LL;
            a2 = SRWLockSpinCycleCount / (unsigned int)MEMORY[0x7FFE02D6];
            while ( (v37[0] & 2) != 0 && (_DWORD)BaseAddress != (_DWORD)a2 )
            {
              _mm_pause();
              BaseAddress = (unsigned int)(BaseAddress + 1);
            }
          }
        }
        if ( _interlockedbittestandreset(v37, 1u) )
        {
          do
            NtWaitForAlertByThreadId(&LdrpInvertedFunctionTableSRWLock, 0LL);
          while ( (v37[0] & 4) == 0 );
        }
      }
      else
      {
        v19 = Value | 1;
        if ( !v18 )
          v19 += 16LL;
        if ( Value == _InterlockedCompareExchange64(
                        (volatile signed __int64 *)&LdrpInvertedFunctionTableSRWLock,
                        v19,
                        Value) )
          goto LABEL_3;
LABEL_49:
        RtlBackoff(&v38);
        _m_prefetchw(&LdrpInvertedFunctionTableSRWLock);
        Value = LdrpInvertedFunctionTableSRWLock.Value;
      }
    }
  }
LABEL_16:
  ImageBaseViaQueryVirtualMemory = RtlpGetImageBaseViaQueryVirtualMemory(v6);
  *(_QWORD *)(v4 + 8) = ImageBaseViaQueryVirtualMemory;
  if ( ImageBaseViaQueryVirtualMemory )
  {
    if ( RtlpImageDirectoryEntryToDataEx(
           ImageBaseViaQueryVirtualMemory,
           1,
           3u,
           (unsigned int *)(v4 + 20),
           (char **)&v39) < 0 )
      v7 = 0LL;
    else
      v7 = v39;
    if ( !v7 )
      *(_DWORD *)(v4 + 20) = 0;
    *(_QWORD *)v4 = v7;
  }
  return v7;
}
