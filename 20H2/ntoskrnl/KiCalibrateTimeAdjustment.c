/*
 * XREFs of KiCalibrateTimeAdjustment @ 0x140997B90
 * Callers:
 *     <none>
 * Callees:
 *     RtlWriteAcquireTickLock @ 0x140266A84 (RtlWriteAcquireTickLock.c)
 *     KeQueryPerformanceCounter @ 0x140266AF0 (KeQueryPerformanceCounter.c)
 *     KeInsertQueueDpc @ 0x14027F670 (KeInsertQueueDpc.c)
 *     KiSelectActiveTimerTable @ 0x14028BA20 (KiSelectActiveTimerTable.c)
 *     EtwTraceKernelEvent @ 0x140313A28 (EtwTraceKernelEvent.c)
 *     KiPollFreezeExecution @ 0x140331624 (KiPollFreezeExecution.c)
 *     KeRemoveQueueDpc @ 0x1403605C0 (KeRemoveQueueDpc.c)
 *     KeRebaselineInterruptTime @ 0x140383910 (KeRebaselineInterruptTime.c)
 *     HalCalibratePerformanceCounter @ 0x140383940 (HalCalibratePerformanceCounter.c)
 *     KiUpdateSystemTime @ 0x140397A38 (KiUpdateSystemTime.c)
 *     RtlWriteReleaseTickLock @ 0x1403A6B34 (RtlWriteReleaseTickLock.c)
 *     __security_check_cookie @ 0x1403CFAF0 (__security_check_cookie.c)
 */

void __fastcall KiCalibrateTimeAdjustment(ULONG_PTR Argument)
{
  struct _KPRCB *CurrentPrcb; // r14
  unsigned int v3; // ebp
  char v4; // bp
  __int64 v5; // rbx
  __int64 v6; // rdi
  unsigned __int64 v7; // rbx
  LARGE_INTEGER v8; // r9
  unsigned __int64 v9; // kr00_8
  __int64 v10; // rax
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 *v13; // rcx
  unsigned __int64 v14; // rbx
  LARGE_INTEGER PerformanceCounter; // rax
  unsigned __int64 v16; // [rsp+30h] [rbp-68h]
  LARGE_INTEGER PerformanceFrequency; // [rsp+38h] [rbp-60h] BYREF
  __int64 v18; // [rsp+40h] [rbp-58h]
  LARGE_INTEGER v19; // [rsp+48h] [rbp-50h] BYREF
  __int64 v20; // [rsp+50h] [rbp-48h]
  unsigned __int64 v21; // [rsp+58h] [rbp-40h]
  LARGE_INTEGER *v22; // [rsp+60h] [rbp-38h] BYREF
  int v23; // [rsp+68h] [rbp-30h]
  int v24; // [rsp+6Ch] [rbp-2Ch]
  unsigned int v25; // [rsp+90h] [rbp-8h]

  v19.QuadPart = 0LL;
  CurrentPrcb = KeGetCurrentPrcb();
  PerformanceFrequency.QuadPart = 0LL;
  if ( CurrentPrcb->Number == *(_DWORD *)(Argument + 4) )
  {
    _disable();
    v6 = *(_QWORD *)(Argument + 8);
    v3 = v25 >> 9;
    v18 = v6;
    v7 = MEMORY[0xFFFFF78000000008] + v6;
    v20 = MEMORY[0xFFFFF78000000008] + v6;
    v8 = KeQueryPerformanceCounter(&PerformanceFrequency);
    if ( *(_BYTE *)Argument )
    {
      LODWORD(v16) = (__PAIR64__(HIDWORD(v18), v6) * PerformanceFrequency.QuadPart) >> 32;
      HIDWORD(v16) = PerformanceFrequency.HighPart * HIDWORD(v18)
                   + (((((unsigned int)v6 * (unsigned __int64)PerformanceFrequency.LowPart) >> 32)
                     + PerformanceFrequency.LowPart * (unsigned __int64)HIDWORD(v18)
                     + (unsigned int)v6 * (unsigned __int64)(unsigned int)PerformanceFrequency.HighPart) >> 32);
      v9 = v16;
      LODWORD(v16) = v6 * PerformanceFrequency.LowPart;
      *(_DWORD *)(Argument + 20) = v9 / 0x989680;
      HIDWORD(v16) = v9 % 0x989680;
      *(_DWORD *)(Argument + 16) = v16 / 0x989680;
      *(_QWORD *)(Argument + 16) += v8.QuadPart;
    }
    v21 = v7 / KeMaximumIncrement;
    v10 = *(_QWORD *)(Argument + 8);
    KiTickOffset = KeMaximumIncrement - v7 % KeMaximumIncrement;
    MEMORY[0xFFFFF780000003B0] += v10;
    LODWORD(v18) = v7 % KeMaximumIncrement;
    if ( MEMORY[0xFFFFF780000003B0] < 0 )
      __fastfail(5u);
    RtlWriteAcquireTickLock((signed __int64 *)0xFFFFF78000000340LL);
    MEMORY[0xFFFFF78000000010] = HIDWORD(v20);
    MEMORY[0xFFFFF78000000008] = v7;
    MEMORY[0xFFFFF78000000328] = HIDWORD(v21);
    MEMORY[0xFFFFF78000000320] = v11;
    MEMORY[0xFFFFF78000000350] = v12;
    KiInterruptTimeErrorAccumulator = 0LL;
    RtlWriteReleaseTickLock(v13);
    *(_DWORD *)(Argument + 28) = 0;
  }
  else
  {
    _disable();
    v3 = v25 >> 9;
    do
      KiPollFreezeExecution();
    while ( *(_DWORD *)(Argument + 28) );
  }
  v4 = v3 & 1;
  if ( KiSelectActiveTimerTable((__int64)CurrentPrcb, 1) )
  {
    v14 = MEMORY[0xFFFFF78000000008];
    KeRemoveQueueDpc(&CurrentPrcb->TimerExpirationDpc);
    KeInsertQueueDpc(&CurrentPrcb->TimerExpirationDpc, (PVOID)((unsigned int)(v14 >> 18) - 256), 0LL);
  }
  CurrentPrcb->LastTick = MEMORY[0xFFFFF78000000320];
  v5 = *(_QWORD *)(Argument + 8);
  if ( *(_BYTE *)Argument )
  {
    HalCalibratePerformanceCounter((volatile signed __int32 *)(Argument + 24), *(_QWORD *)(Argument + 16));
    KeRebaselineInterruptTime();
    if ( (xmmword_140CFC490 & 0x8000) != 0 )
    {
      PerformanceCounter = KeQueryPerformanceCounter(0LL);
      v24 = 0;
      v19 = PerformanceCounter;
      v23 = 8;
      v22 = &v19;
      EtwTraceKernelEvent((__int64)&v22, 1u, 0x80008000, 0x1232u, 0x401802u);
    }
  }
  if ( CurrentPrcb->ClockOwner )
    KiUpdateSystemTime(v5, 0LL, 3);
  if ( v4 )
    _enable();
}
