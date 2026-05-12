/*
 * XREFs of RaidpAdapterRedirectDpcRoutine @ 0x1C001B9A0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C001F5F0 (_guard_dispatch_icall_nop.c)
 *     McTemplateK0pzqqxxtt_EtwWriteTransfer @ 0x1C002A620 (McTemplateK0pzqqxxtt_EtwWriteTransfer.c)
 *     RaidAdapterPoFxIdleComponent @ 0x1C002D480 (RaidAdapterPoFxIdleComponent.c)
 */

void __fastcall RaidpAdapterRedirectDpcRoutine(
        struct _KDPC *Dpc,
        union _SLIST_HEADER *DeferredContext,
        _QWORD *SystemArgument1,
        PVOID SystemArgument2)
{
  LARGE_INTEGER v4; // rbx
  union _SLIST_HEADER *v5; // rdi
  unsigned int v6; // ebp
  _DWORD *v8; // r14
  PSLIST_ENTRY i; // rdi
  bool v10; // zf
  PSLIST_ENTRY v11; // rsi
  LARGE_INTEGER PerformanceCounter; // rax
  LARGE_INTEGER v13; // rax
  LARGE_INTEGER v14; // rdx
  unsigned int LowPart; // ecx
  unsigned __int64 v16; // r9
  unsigned __int64 v17; // r8
  unsigned __int64 v18; // rtt
  __int64 v19; // r8
  unsigned __int64 v20; // rtt
  int v21; // [rsp+60h] [rbp-38h]
  union _LARGE_INTEGER PerformanceFrequency; // [rsp+B0h] [rbp+18h] BYREF

  v4.QuadPart = 0LL;
  v5 = DeferredContext + 4;
  v6 = 0;
  v21 = MEMORY[0xFFFFF78000000320];
  if ( StorEtwLoggingEnabled && (byte_1C0069843 & 4) != 0 )
  {
    if ( UseQPCTime )
      PerformanceCounter = KeQueryPerformanceCounter(0LL);
    else
      PerformanceCounter.QuadPart = KeQueryUnbiasedInterruptTime();
    v4 = PerformanceCounter;
  }
  v8 = (_DWORD *)SystemArgument1[8];
  for ( i = ExpInterlockedFlushSList(v5); i; ++v6 )
  {
    v10 = (BYTE1(i[-1].Next) & 1) == 0;
    v11 = i - 2;
    i = i->Next;
    if ( !v10 )
    {
      RaidAdapterPoFxIdleComponent(*((_QWORD *)&v11[13].Next + 1), *((unsigned int *)&v11[46].Next + 3), 0LL);
      BYTE1(v11[1].Next) &= ~1u;
    }
    ((void (__fastcall *)(PSLIST_ENTRY))v11[41].Next)(v11);
  }
  if ( (unsigned int)(MEMORY[0xFFFFF78000000320] - v21) > v8[1214] )
  {
    v8[1214] = MEMORY[0xFFFFF78000000320] - v21;
    v8[1215] = v6;
  }
  if ( v6 > v8[1213] )
    v8[1213] = v6;
  if ( StorEtwLoggingEnabled && (byte_1C0069843 & 4) != 0 && v6 >= 0x19 )
  {
    PerformanceFrequency.QuadPart = 1LL;
    if ( UseQPCTime )
      v13 = KeQueryPerformanceCounter(&PerformanceFrequency);
    else
      v13.QuadPart = KeQueryUnbiasedInterruptTime();
    if ( v13.QuadPart <= 0 || v13.QuadPart >= v4.QuadPart )
      v16 = v13.QuadPart - v4.QuadPart;
    else
      v16 = v13.QuadPart - v4.QuadPart - 1;
    if ( UseQPCTime )
    {
      LowPart = PerformanceFrequency.LowPart;
      LODWORD(v17) = 0;
      if ( PerformanceFrequency.QuadPart && v16 )
      {
        v18 = 1000 * (v16 % PerformanceFrequency.QuadPart);
        v19 = 10000 * (v18 / PerformanceFrequency.QuadPart + 1000 * (v16 / PerformanceFrequency.QuadPart));
        v20 = 10000 * (v18 % PerformanceFrequency.QuadPart);
        v14.QuadPart = v20 % PerformanceFrequency.QuadPart;
        v17 = v20 / PerformanceFrequency.QuadPart + v19;
      }
    }
    else
    {
      LODWORD(v17) = v16;
    }
    if ( (byte_1C0069843 & 4) != 0 )
      McTemplateK0pzqqxxtt_EtwWriteTransfer(
        LowPart,
        v14.LowPart,
        v17,
        (unsigned int)RaidpAdapterRedirectDpcRoutine,
        (__int64)L"RaidpAdapterRedirectDpcRoutine",
        v8[14],
        v6,
        v16,
        v17,
        0,
        0);
  }
}
