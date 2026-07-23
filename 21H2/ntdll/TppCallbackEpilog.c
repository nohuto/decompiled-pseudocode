/*
 * XREFs of TppCallbackEpilog @ 0x18004DD30
 * Callers:
 *     TppCleanupGroupMemberDestroy @ 0x180012088 (TppCleanupGroupMemberDestroy.c)
 *     TppWorkerThread @ 0x18004D110 (TppWorkerThread.c)
 * Callees:
 *     LdrUnloadDll @ 0x18000FBF0 (LdrUnloadDll.c)
 *     RtlReleaseSRWLockExclusive @ 0x180012C70 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x1800290A0 (RtlAcquireSRWLockExclusive.c)
 *     RtlLeaveCriticalSection @ 0x18002F230 (RtlLeaveCriticalSection.c)
 *     TppBarrierAdjust @ 0x18004CF8C (TppBarrierAdjust.c)
 *     TppCallbackCheckThreadAfterCallback @ 0x18004E04C (TppCallbackCheckThreadAfterCallback.c)
 *     TppIteWakeWaiters @ 0x18004EFCC (TppIteWakeWaiters.c)
 *     RtlRaiseException @ 0x1800520D0 (RtlRaiseException.c)
 *     __security_check_cookie @ 0x18008C940 (__security_check_cookie.c)
 *     ZwReleaseSemaphore @ 0x18009D740 (ZwReleaseSemaphore.c)
 *     ZwSetEvent @ 0x18009D7C0 (ZwSetEvent.c)
 *     ZwReleaseMutant @ 0x18009DA00 (ZwReleaseMutant.c)
 *     NtSetInformationWorkerFactory @ 0x1800A0A10 (NtSetInformationWorkerFactory.c)
 *     _guard_dispatch_icall_nop @ 0x1800A1120 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1800A4740 (memset.c)
 */

void __fastcall TppCallbackEpilog(unsigned int *a1)
{
  unsigned int v2; // ecx
  unsigned int v3; // eax
  unsigned int v4; // eax
  unsigned int v5; // eax
  unsigned int v6; // eax
  __int64 v7; // rcx
  _RTL_SRWLOCK *v8; // r14
  char v9; // r15
  signed __int64 Value; // rbx
  unsigned __int64 v11; // rdi
  signed __int64 v12; // rbx
  unsigned __int64 v13; // rbx
  unsigned int v14; // eax
  unsigned int v15; // eax
  unsigned int v16; // eax
  __int64 v17; // r8
  unsigned int v18; // r10d
  __int64 v19; // r9
  __int64 v20; // r8
  signed __int64 v21; // rax
  signed __int64 v22; // rtt
  void *v23; // rcx
  signed __int64 v24; // rax
  signed __int64 v25; // rtt
  NTSTATUS v26; // eax
  unsigned __int64 v27; // rbx
  NTSTATUS v28; // eax
  NTSTATUS v29; // eax
  unsigned __int64 v30; // rbx
  NTSTATUS v31; // eax
  unsigned __int64 v32; // rax
  signed __int64 v33; // [rsp+20h] [rbp-99h]
  signed __int64 v34; // [rsp+20h] [rbp-99h]
  _DWORD WorkerFactoryInformation[5]; // [rsp+2Ch] [rbp-8Dh] BYREF
  EXCEPTION_RECORD ExceptionRecord; // [rsp+40h] [rbp-79h] BYREF

  TppCallbackCheckThreadAfterCallback(a1);
  while ( 1 )
  {
    while ( 1 )
    {
      while ( 1 )
      {
        while ( 1 )
        {
          v2 = a1[36];
          if ( !v2 )
          {
            memset(a1, 0, 0x90uLL);
            return;
          }
          _BitScanForward(&v3, v2);
          WorkerFactoryInformation[1] = v3;
          a1[36] = v2 ^ (1 << v3);
          if ( v3 > 5 )
            break;
          if ( v3 == 5 )
          {
            TppBarrierAdjust((_RTL_SRWLOCK *)(*((_QWORD *)a1 + 22) + 32LL), -1, 0);
            *((_QWORD *)a1 + 22) = 0LL;
          }
          else if ( v3 )
          {
            v14 = v3 - 1;
            if ( v14 )
            {
              v15 = v14 - 1;
              if ( v15 )
              {
                v16 = v15 - 1;
                if ( v16 )
                {
                  if ( v16 == 1 )
                  {
                    v17 = *((_QWORD *)a1 + 16);
                    v18 = a1[18];
                    v19 = *((_QWORD *)a1 + 23);
                    if ( v17 )
                    {
                      _InterlockedIncrement((volatile signed __int32 *)(v17 + 416));
                      _InterlockedDecrement((volatile signed __int32 *)(v17 + 420));
                      _m_prefetchw((const void *)(v17 + 8));
                      v24 = *(_QWORD *)(v17 + 8);
                      v34 = v24;
                      do
                      {
                        LODWORD(v34) = (unsigned __int16)(v34 ^ (v34 - 1)) ^ (unsigned int)v34;
                        v25 = v24;
                        v24 = _InterlockedCompareExchange64((volatile signed __int64 *)(v17 + 8), v34, v24);
                        v34 = v24;
                      }
                      while ( v25 != v24 );
                      v23 = *(void **)(v17 + 56);
                    }
                    else
                    {
                      _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(v19 + 144) + 416LL));
                      _InterlockedDecrement((volatile signed __int32 *)(*(_QWORD *)(v19 + 144) + 420LL));
                      v20 = *(_QWORD *)(v19 + 144);
                      _m_prefetchw((const void *)(v20 + 8));
                      v21 = *(_QWORD *)(v20 + 8);
                      v33 = v21;
                      do
                      {
                        LODWORD(v33) = (unsigned __int16)(v33 ^ (v33 - 1)) ^ (unsigned int)v33;
                        v22 = v21;
                        v21 = _InterlockedCompareExchange64((volatile signed __int64 *)(v20 + 8), v33, v21);
                        v33 = v21;
                      }
                      while ( v22 != v21 );
                      v23 = *(void **)(*(_QWORD *)(v19 + 144) + 56LL);
                    }
                    if ( v18 == 2 )
                    {
                      WorkerFactoryInformation[0] = 0;
                      NtSetInformationWorkerFactory(v23, WorkerFactoryCallbackType, WorkerFactoryInformation, 4u);
                    }
                  }
                }
                else
                {
                  v29 = ZwReleaseSemaphore((HANDLE)a1[39], a1[40], 0LL);
                  v30 = v29;
                  if ( v29 < 0 )
                  {
                    memset(&ExceptionRecord, 0, sizeof(ExceptionRecord));
                    ExceptionRecord.ExceptionInformation[2] = a1[39];
                    ExceptionRecord.ExceptionInformation[3] = a1[40];
                    ExceptionRecord.ExceptionCode = -1073740020;
                    ExceptionRecord.NumberParameters = 5;
                    ExceptionRecord.ExceptionInformation[4] = v30;
                    goto LABEL_49;
                  }
                  a1[39] = 0;
                  a1[40] = 0;
                }
              }
              else
              {
                v28 = ZwSetEvent((HANDLE)a1[37], 0LL);
                v27 = v28;
                if ( v28 < 0 )
                {
                  memset(&ExceptionRecord, 0, sizeof(ExceptionRecord));
                  v32 = a1[37];
                  ExceptionRecord.ExceptionCode = -1073740021;
                  goto LABEL_48;
                }
                a1[37] = 0;
              }
            }
            else
            {
              v31 = ZwReleaseMutant((HANDLE)a1[38], 0LL);
              v27 = v31;
              if ( v31 < 0 )
              {
                memset(&ExceptionRecord, 0, sizeof(ExceptionRecord));
                v32 = a1[38];
                ExceptionRecord.ExceptionCode = -1073740019;
                goto LABEL_48;
              }
              a1[38] = 0;
            }
          }
          else
          {
            RtlLeaveCriticalSection(*((PRTL_CRITICAL_SECTION *)a1 + 24));
            *((_QWORD *)a1 + 24) = 0LL;
          }
        }
        v4 = v3 - 6;
        if ( v4 )
          break;
        v8 = (_RTL_SRWLOCK *)*((_QWORD *)a1 + 23);
        v9 = 0;
        _m_prefetchw(&v8[7]);
        Value = v8[7].Value;
        do
        {
          if ( v9 )
            RtlReleaseSRWLockExclusive(v8 + 8);
          v9 = 0;
          v11 = Value;
          v12 = (Value ^ (Value - 1)) & 0xFFFFFFFFFFFFFFFLL ^ Value;
          if ( (v12 & 0xFFFFFFFFFFFFFFFLL) == 0 && ((v11 >> 60) & 8) != 0 )
          {
            v12 &= ~0x8000000000000000uLL;
            v9 = 1;
            RtlAcquireSRWLockExclusive(v8 + 8);
          }
          Value = _InterlockedCompareExchange64((volatile signed __int64 *)&v8[7], v12, v11);
        }
        while ( v11 != Value );
        if ( v9 )
        {
          v13 = v8[9].Value;
          v8[9].Value = 0LL;
          RtlReleaseSRWLockExclusive(v8 + 8);
          TppIteWakeWaiters(v13);
        }
      }
      v5 = v4 - 1;
      if ( !v5 )
        break;
      v6 = v5 - 1;
      if ( v6 )
      {
        if ( v6 == 1 )
        {
          v7 = *((_QWORD *)a1 + 23);
          *((_QWORD *)a1 + 23) = 0LL;
          (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)(v7 + 8) + 8LL))(v7, 0xFFFFFFFFFFFFFFFLL);
        }
      }
      else
      {
        LdrUnloadDll(*((PVOID *)a1 + 21));
        *((_QWORD *)a1 + 21) = 0LL;
      }
    }
    v26 = LdrUnloadDll(*((PVOID *)a1 + 25));
    v27 = v26;
    if ( v26 < 0 )
      break;
    *((_QWORD *)a1 + 25) = 0LL;
  }
  memset(&ExceptionRecord, 0, sizeof(ExceptionRecord));
  v32 = *((_QWORD *)a1 + 25);
  ExceptionRecord.ExceptionCode = -1073740018;
LABEL_48:
  ExceptionRecord.NumberParameters = 4;
  ExceptionRecord.ExceptionInformation[2] = v32;
  ExceptionRecord.ExceptionInformation[3] = v27;
LABEL_49:
  ExceptionRecord.ExceptionInformation[0] = *((_QWORD *)a1 + 11);
  ExceptionRecord.ExceptionInformation[1] = *((_QWORD *)a1 + 12);
  memset(a1, 0, 0xF8uLL);
  RtlRaiseException(&ExceptionRecord);
}
