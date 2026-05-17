/*
 * XREFs of EtwProcessPrivateLoggerRequest @ 0x1800559A0
 * Callers:
 *     EtwpProcessNotification @ 0x180045830 (EtwpProcessNotification.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180012C70 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x1800290A0 (RtlAcquireSRWLockExclusive.c)
 *     EtwpStartUmLogger @ 0x180055B18 (EtwpStartUmLogger.c)
 *     EtwpStopUmLogger @ 0x180057F08 (EtwpStopUmLogger.c)
 *     EtwpQueryUmLogger @ 0x180058644 (EtwpQueryUmLogger.c)
 *     EtwpFlushUmLogger @ 0x18005877C (EtwpFlushUmLogger.c)
 *     memset @ 0x1800A4180 (memset.c)
 *     EtwpIncrementUmLoggerFile @ 0x1801111A0 (EtwpIncrementUmLoggerFile.c)
 *     EtwpUpdateUmLogger @ 0x180111660 (EtwpUpdateUmLogger.c)
 */

__int64 __fastcall EtwProcessPrivateLoggerRequest(
        char *a1,
        unsigned __int64 a2,
        unsigned __int64 a3,
        unsigned __int64 a4)
{
  __int128 v5; // xmm6
  int *v6; // rdi
  unsigned int v7; // r14d
  __int64 v8; // rax
  int v9; // ebx
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  int v13; // ebx
  int started; // eax
  int v15; // ebx
  int v16; // r14d
  int v18; // ebx
  int v19; // ebx
  int v20; // ebx
  int v21; // ebx
  int v22; // [rsp+50h] [rbp+20h] BYREF
  int v23; // [rsp+58h] [rbp+28h] BYREF

  if ( *((_DWORD *)a1 + 1) < 0xF8u )
    return 4209LL;
  v5 = *(_OWORD *)(a1 + 56);
  v6 = (int *)(a1 + 72);
  v7 = *((_DWORD *)a1 + 18);
  *((_DWORD *)a1 + 42) = *((_DWORD *)a1 + 5);
  if ( v7 < 0xB0 || (*((_DWORD *)a1 + 29) & 0x20000) == 0 )
    goto LABEL_24;
  v8 = *((_QWORD *)a1 + 12) - *(_QWORD *)&SystemTraceControlGuid.Data1;
  if ( !v8 )
    v8 = *((_QWORD *)a1 + 13) - *(_QWORD *)SystemTraceControlGuid.Data4;
  if ( !v8 )
  {
LABEL_24:
    v15 = 13;
    goto LABEL_21;
  }
  v9 = *((_DWORD *)a1 + 19);
  v23 = 0;
  v22 = 0;
  RtlAcquireSRWLockExclusive((unsigned __int64)&EtwpPrivSessionLock, a2, a3, a4);
  v13 = v9 - 1;
  if ( !v13 )
  {
    started = EtwpStartUmLogger(v11, &v23, &v22, v6);
LABEL_9:
    v15 = started;
    goto LABEL_10;
  }
  v18 = v13 - 1;
  if ( !v18 )
  {
    started = EtwpStopUmLogger(v11, v10, v12, v6);
    goto LABEL_9;
  }
  v19 = v18 - 1;
  if ( !v19 )
  {
    started = EtwpQueryUmLogger(v7, &v23, &v22, v6);
    goto LABEL_9;
  }
  v20 = v19 - 1;
  if ( !v20 )
  {
    started = EtwpUpdateUmLogger(v7, &v23, &v22, v6);
    goto LABEL_9;
  }
  v21 = v20 - 1;
  if ( !v21 )
  {
    started = EtwpFlushUmLogger(v7, &v23, &v22, v6);
    goto LABEL_9;
  }
  if ( v21 == 1 )
  {
    started = EtwpIncrementUmLoggerFile(v7, &v23, &v22, v6);
    goto LABEL_9;
  }
  v15 = 87;
LABEL_10:
  RtlReleaseSRWLockExclusive(&EtwpPrivSessionLock);
  if ( v15 )
  {
LABEL_21:
    v16 = 76;
    goto LABEL_12;
  }
  v16 = *v6 + 72;
LABEL_12:
  memset(a1, 0, 0x48uLL);
  *((_DWORD *)a1 + 1) = v16;
  *(_DWORD *)a1 = 4;
  *(_OWORD *)(a1 + 40) = v5;
  *((_DWORD *)a1 + 8) = NtCurrentTeb()->ClientId.UniqueProcess;
  if ( v15 )
    *v6 = v15;
  return 0LL;
}
