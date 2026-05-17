/*
 * XREFs of TppCallbackEpilog @ 0x1800536F0
 * Callers:
 *     TppCleanupGroupMemberDestroy @ 0x180012088 (TppCleanupGroupMemberDestroy.c)
 *     TppWorkerThread @ 0x180052AD0 (TppWorkerThread.c)
 * Callees:
 *     LdrUnloadDll @ 0x18000FBF0 (LdrUnloadDll.c)
 *     RtlReleaseSRWLockExclusive @ 0x180012C70 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x1800290A0 (RtlAcquireSRWLockExclusive.c)
 *     RtlLeaveCriticalSection @ 0x18002F230 (RtlLeaveCriticalSection.c)
 *     RtlRaiseException @ 0x180051020 (RtlRaiseException.c)
 *     TppBarrierAdjust @ 0x18005294C (TppBarrierAdjust.c)
 *     TppCallbackCheckThreadAfterCallback @ 0x180053A0C (TppCallbackCheckThreadAfterCallback.c)
 *     TppIteWakeWaiters @ 0x18005498C (TppIteWakeWaiters.c)
 *     __security_check_cookie @ 0x18008C240 (__security_check_cookie.c)
 *     ZwReleaseSemaphore @ 0x18009CF50 (ZwReleaseSemaphore.c)
 *     ZwSetEvent @ 0x18009CFD0 (ZwSetEvent.c)
 *     ZwReleaseMutant @ 0x18009D210 (ZwReleaseMutant.c)
 *     NtSetInformationWorkerFactory @ 0x1800A01E0 (NtSetInformationWorkerFactory.c)
 *     _guard_dispatch_icall_nop @ 0x1800A08F0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1800A3EC0 (memset.c)
 */

void __fastcall TppCallbackEpilog(unsigned int *a1)
{
  unsigned __int64 v2; // r8
  unsigned __int64 v3; // r9
  unsigned int v4; // ecx
  unsigned int v5; // eax
  unsigned int v6; // eax
  unsigned int v7; // eax
  unsigned int v8; // eax
  __int64 v9; // rcx
  __int64 v10; // r14
  char v11; // r15
  signed __int64 v12; // rbx
  unsigned __int64 v13; // rdi
  signed __int64 v14; // rbx
  __int64 v15; // rbx
  unsigned int v16; // eax
  unsigned int v17; // eax
  unsigned int v18; // eax
  unsigned int v19; // r10d
  signed __int64 v20; // rax
  signed __int64 v21; // rtt
  __int64 v22; // rcx
  signed __int64 v23; // rax
  signed __int64 v24; // rtt
  int v25; // eax
  unsigned __int64 v26; // rbx
  int v27; // eax
  int v28; // eax
  unsigned __int64 v29; // rbx
  int v30; // eax
  unsigned __int64 v31; // rax
  signed __int64 v32; // [rsp+20h] [rbp-99h]
  signed __int64 v33; // [rsp+20h] [rbp-99h]
  _DWORD v34[5]; // [rsp+2Ch] [rbp-8Dh] BYREF
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
          v4 = a1[36];
          if ( !v4 )
          {
            memset(a1, 0, 0x90uLL);
            return;
          }
          _BitScanForward(&v5, v4);
          v34[1] = v5;
          a1[36] = v4 ^ (1 << v5);
          if ( v5 > 5 )
            break;
          if ( v5 == 5 )
          {
            TppBarrierAdjust((volatile signed __int64 *)(*((_QWORD *)a1 + 22) + 32LL), -1, 0LL, v3);
            *((_QWORD *)a1 + 22) = 0LL;
          }
          else if ( v5 )
          {
            v16 = v5 - 1;
            if ( v16 )
            {
              v17 = v16 - 1;
              if ( v17 )
              {
                v18 = v17 - 1;
                if ( v18 )
                {
                  if ( v18 == 1 )
                  {
                    v2 = *((_QWORD *)a1 + 16);
                    v19 = a1[18];
                    v3 = *((_QWORD *)a1 + 23);
                    if ( v2 )
                    {
                      _InterlockedIncrement((volatile signed __int32 *)(v2 + 416));
                      _InterlockedDecrement((volatile signed __int32 *)(v2 + 420));
                      _m_prefetchw((const void *)(v2 + 8));
                      v23 = *(_QWORD *)(v2 + 8);
                      v33 = v23;
                      do
                      {
                        LODWORD(v33) = (unsigned __int16)(v33 ^ (v33 - 1)) ^ (unsigned int)v33;
                        v24 = v23;
                        v23 = _InterlockedCompareExchange64((volatile signed __int64 *)(v2 + 8), v33, v23);
                        v33 = v23;
                      }
                      while ( v24 != v23 );
                      v22 = *(_QWORD *)(v2 + 56);
                    }
                    else
                    {
                      _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(v3 + 144) + 416LL));
                      _InterlockedDecrement((volatile signed __int32 *)(*(_QWORD *)(v3 + 144) + 420LL));
                      v2 = *(_QWORD *)(v3 + 144);
                      _m_prefetchw((const void *)(v2 + 8));
                      v20 = *(_QWORD *)(v2 + 8);
                      v32 = v20;
                      do
                      {
                        LODWORD(v32) = (unsigned __int16)(v32 ^ (v32 - 1)) ^ (unsigned int)v32;
                        v21 = v20;
                        v20 = _InterlockedCompareExchange64((volatile signed __int64 *)(v2 + 8), v32, v20);
                        v32 = v20;
                      }
                      while ( v21 != v20 );
                      v22 = *(_QWORD *)(*(_QWORD *)(v3 + 144) + 56LL);
                    }
                    if ( v19 == 2 )
                    {
                      v34[0] = 0;
                      NtSetInformationWorkerFactory(v22, 9LL, v34);
                    }
                  }
                }
                else
                {
                  v28 = ZwReleaseSemaphore(a1[39], a1[40], 0LL);
                  v29 = v28;
                  if ( v28 < 0 )
                  {
                    memset(&ExceptionRecord, 0, sizeof(ExceptionRecord));
                    ExceptionRecord.ExceptionInformation[2] = a1[39];
                    ExceptionRecord.ExceptionInformation[3] = a1[40];
                    ExceptionRecord.ExceptionCode = -1073740020;
                    ExceptionRecord.NumberParameters = 5;
                    ExceptionRecord.ExceptionInformation[4] = v29;
                    goto LABEL_49;
                  }
                  a1[39] = 0;
                  a1[40] = 0;
                }
              }
              else
              {
                v27 = ZwSetEvent(a1[37], 0LL);
                v26 = v27;
                if ( v27 < 0 )
                {
                  memset(&ExceptionRecord, 0, sizeof(ExceptionRecord));
                  v31 = a1[37];
                  ExceptionRecord.ExceptionCode = -1073740021;
                  goto LABEL_48;
                }
                a1[37] = 0;
              }
            }
            else
            {
              v30 = ZwReleaseMutant(a1[38], 0LL);
              v26 = v30;
              if ( v30 < 0 )
              {
                memset(&ExceptionRecord, 0, sizeof(ExceptionRecord));
                v31 = a1[38];
                ExceptionRecord.ExceptionCode = -1073740019;
                goto LABEL_48;
              }
              a1[38] = 0;
            }
          }
          else
          {
            RtlLeaveCriticalSection(*((_QWORD *)a1 + 24), 0xFFFFFFFFFFFFFFFLL, v2);
            *((_QWORD *)a1 + 24) = 0LL;
          }
        }
        v6 = v5 - 6;
        if ( v6 )
          break;
        v10 = *((_QWORD *)a1 + 23);
        v11 = 0;
        _m_prefetchw((const void *)(v10 + 56));
        v12 = *(_QWORD *)(v10 + 56);
        do
        {
          if ( v11 )
            RtlReleaseSRWLockExclusive((volatile signed __int64 *)(v10 + 64));
          v11 = 0;
          v13 = v12;
          v14 = (v12 ^ (v12 - 1)) & 0xFFFFFFFFFFFFFFFLL ^ v12;
          if ( (v14 & 0xFFFFFFFFFFFFFFFLL) == 0 && ((v13 >> 60) & 8) != 0 )
          {
            v14 &= ~0x8000000000000000uLL;
            v11 = 1;
            RtlAcquireSRWLockExclusive(v10 + 64, 0xFFFFFFFFFFFFFFFuLL, v2, v3);
          }
          v12 = _InterlockedCompareExchange64((volatile signed __int64 *)(v10 + 56), v14, v13);
        }
        while ( v13 != v12 );
        if ( v11 )
        {
          v15 = *(_QWORD *)(v10 + 72);
          *(_QWORD *)(v10 + 72) = 0LL;
          RtlReleaseSRWLockExclusive((volatile signed __int64 *)(v10 + 64));
          TppIteWakeWaiters(v15);
        }
      }
      v7 = v6 - 1;
      if ( !v7 )
        break;
      v8 = v7 - 1;
      if ( v8 )
      {
        if ( v8 == 1 )
        {
          v9 = *((_QWORD *)a1 + 23);
          *((_QWORD *)a1 + 23) = 0LL;
          (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)(v9 + 8) + 8LL))(v9, 0xFFFFFFFFFFFFFFFLL);
        }
      }
      else
      {
        LdrUnloadDll(*((_QWORD *)a1 + 21));
        *((_QWORD *)a1 + 21) = 0LL;
      }
    }
    v25 = LdrUnloadDll(*((_QWORD *)a1 + 25));
    v26 = v25;
    if ( v25 < 0 )
      break;
    *((_QWORD *)a1 + 25) = 0LL;
  }
  memset(&ExceptionRecord, 0, sizeof(ExceptionRecord));
  v31 = *((_QWORD *)a1 + 25);
  ExceptionRecord.ExceptionCode = -1073740018;
LABEL_48:
  ExceptionRecord.NumberParameters = 4;
  ExceptionRecord.ExceptionInformation[2] = v31;
  ExceptionRecord.ExceptionInformation[3] = v26;
LABEL_49:
  ExceptionRecord.ExceptionInformation[0] = *((_QWORD *)a1 + 11);
  ExceptionRecord.ExceptionInformation[1] = *((_QWORD *)a1 + 12);
  memset(a1, 0, 0xF8uLL);
  RtlRaiseException(&ExceptionRecord);
}
