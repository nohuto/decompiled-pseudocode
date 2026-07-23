/*
 * XREFs of KiCalibrateTimeAdjustment @ 0x140991B20
 * Callers:
 *     <none>
 * Callees:
 *     KeInsertQueueDpc @ 0x140214C00 (KeInsertQueueDpc.c)
 *     EtwTraceKernelEvent @ 0x140250918 (EtwTraceKernelEvent.c)
 *     RtlWriteAcquireTickLock @ 0x1402F3F34 (RtlWriteAcquireTickLock.c)
 *     KeQueryPerformanceCounter @ 0x1402F3FA0 (KeQueryPerformanceCounter.c)
 *     KeRemoveQueueDpc @ 0x1402FFC00 (KeRemoveQueueDpc.c)
 *     KiSelectActiveTimerTable @ 0x140338FF4 (KiSelectActiveTimerTable.c)
 *     KiPollFreezeExecution @ 0x140360A88 (KiPollFreezeExecution.c)
 *     KeRebaselineInterruptTime @ 0x140381C30 (KeRebaselineInterruptTime.c)
 *     HalCalibratePerformanceCounter @ 0x140381C60 (HalCalibratePerformanceCounter.c)
 *     KiUpdateSystemTime @ 0x140395578 (KiUpdateSystemTime.c)
 *     RtlWriteReleaseTickLock @ 0x1403A4714 (RtlWriteReleaseTickLock.c)
 *     __security_check_cookie @ 0x1403CCE60 (__security_check_cookie.c)
 */

ULONG_PTR __fastcall KiCalibrateTimeAdjustment(ULONG_PTR Argument)
{
  struct _KPRCB *CurrentPrcb; // r14
  unsigned int v3; // ebp
  char v4; // bp
  ULONG_PTR result; // rax
  __int64 v6; // rbx
  __int64 v7; // rdi
  unsigned __int64 v8; // rbx
  LARGE_INTEGER v9; // r9
  unsigned __int64 v10; // kr00_8
  __int64 v11; // rax
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 *v14; // rcx
  unsigned __int64 v15; // rbx
  LARGE_INTEGER PerformanceCounter; // rax
  unsigned __int64 v17; // [rsp+30h] [rbp-68h]
  LARGE_INTEGER PerformanceFrequency; // [rsp+38h] [rbp-60h] BYREF
  __int64 v19; // [rsp+40h] [rbp-58h]
  LARGE_INTEGER v20; // [rsp+48h] [rbp-50h] BYREF
  __int64 v21; // [rsp+50h] [rbp-48h]
  unsigned __int64 v22; // [rsp+58h] [rbp-40h]
  LARGE_INTEGER *v23; // [rsp+60h] [rbp-38h] BYREF
  int v24; // [rsp+68h] [rbp-30h]
  int v25; // [rsp+6Ch] [rbp-2Ch]
  unsigned int v26; // [rsp+90h] [rbp-8h]

  v20.QuadPart = 0LL;
  CurrentPrcb = KeGetCurrentPrcb();
  PerformanceFrequency.QuadPart = 0LL;
  if ( CurrentPrcb->Number == *(_DWORD *)(Argument + 4) )
  {
    _disable();
    v7 = *(_QWORD *)(Argument + 8);
    v3 = v26 >> 9;
    v19 = v7;
    v8 = MEMORY[0xFFFFF78000000008] + v7;
    v21 = MEMORY[0xFFFFF78000000008] + v7;
    v9 = KeQueryPerformanceCounter(&PerformanceFrequency);
    if ( *(_BYTE *)Argument )
    {
      LODWORD(v17) = (__PAIR64__(HIDWORD(v19), v7) * PerformanceFrequency.QuadPart) >> 32;
      HIDWORD(v17) = PerformanceFrequency.HighPart * HIDWORD(v19)
                   + (((((unsigned int)v7 * (unsigned __int64)PerformanceFrequency.LowPart) >> 32)
                     + PerformanceFrequency.LowPart * (unsigned __int64)HIDWORD(v19)
                     + (unsigned int)v7 * (unsigned __int64)(unsigned int)PerformanceFrequency.HighPart) >> 32);
      v10 = v17;
      LODWORD(v17) = v7 * PerformanceFrequency.LowPart;
      *(_DWORD *)(Argument + 20) = v10 / 0x989680;
      HIDWORD(v17) = v10 % 0x989680;
      *(_DWORD *)(Argument + 16) = v17 / 0x989680;
      *(_QWORD *)(Argument + 16) += v9.QuadPart;
    }
    v22 = v8 / KeMaximumIncrement;
    v11 = *(_QWORD *)(Argument + 8);
    KiTickOffset = KeMaximumIncrement - v8 % KeMaximumIncrement;
    MEMORY[0xFFFFF780000003B0] += v11;
    LODWORD(v19) = v8 % KeMaximumIncrement;
    if ( MEMORY[0xFFFFF780000003B0] < 0 )
      __fastfail(5u);
    RtlWriteAcquireTickLock((signed __int64 *)0xFFFFF78000000340LL);
    MEMORY[0xFFFFF78000000010] = HIDWORD(v21);
    MEMORY[0xFFFFF78000000008] = v8;
    MEMORY[0xFFFFF78000000328] = HIDWORD(v22);
    MEMORY[0xFFFFF78000000320] = v12;
    MEMORY[0xFFFFF78000000350] = v13;
    KiInterruptTimeErrorAccumulator = 0LL;
    RtlWriteReleaseTickLock(v14);
    *(_DWORD *)(Argument + 28) = 0;
  }
  else
  {
    _disable();
    v3 = v26 >> 9;
    do
      KiPollFreezeExecution();
    while ( *(_DWORD *)(Argument + 28) );
  }
  v4 = v3 & 1;
  if ( KiSelectActiveTimerTable((__int64)CurrentPrcb, 1) )
  {
    v15 = MEMORY[0xFFFFF78000000008];
    KeRemoveQueueDpc(&CurrentPrcb->TimerExpirationDpc);
    KeInsertQueueDpc(&CurrentPrcb->TimerExpirationDpc, (PVOID)((unsigned int)(v15 >> 18) - 256), 0LL);
  }
  result = MEMORY[0xFFFFF78000000320];
  CurrentPrcb->LastTick = MEMORY[0xFFFFF78000000320];
  v6 = *(_QWORD *)(Argument + 8);
  if ( *(_BYTE *)Argument )
  {
    HalCalibratePerformanceCounter((volatile signed __int32 *)(Argument + 24), *(_QWORD *)(Argument + 16));
    result = KeRebaselineInterruptTime().QuadPart;
    if ( (xmmword_140CFC490 & 0x8000) != 0 )
    {
      PerformanceCounter = KeQueryPerformanceCounter(0LL);
      v25 = 0;
      v20 = PerformanceCounter;
      v24 = 8;
      v23 = &v20;
      result = EtwTraceKernelEvent((int)&v23, 1, 0x80008000, 4658, 4200450);
    }
  }
  if ( CurrentPrcb->ClockOwner )
    result = KiUpdateSystemTime(v6, 0LL, 3);
  if ( v4 )
    _enable();
  return result;
}
