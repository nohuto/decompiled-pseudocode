/*
 * XREFs of RaidpAdapterInterruptRoutine @ 0x1C0031A70
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C001B1C0 (_guard_dispatch_icall_nop.c)
 *     McTemplateK0pqqx_EtwWriteTransfer @ 0x1C00290E4 (McTemplateK0pqqx_EtwWriteTransfer.c)
 */

char __fastcall RaidpAdapterInterruptRoutine(__int64 a1, __int64 a2)
{
  unsigned __int64 v2; // rdi
  LARGE_INTEGER v4; // rbx
  LARGE_INTEGER PerformanceCounter; // rax
  char v6; // bp
  LARGE_INTEGER v7; // rax
  unsigned __int64 v8; // rax
  ULONG CurrentProcessorNumber; // eax
  __int64 v10; // rdx
  __int64 v11; // r8
  union _LARGE_INTEGER PerformanceFrequency; // [rsp+68h] [rbp+10h] BYREF
  unsigned __int64 v14; // [rsp+70h] [rbp+18h]

  v2 = 0LL;
  v4.QuadPart = 0LL;
  if ( !*(_BYTE *)(a2 + 107) || *(int *)(a2 + 276) > 1 )
    return 0;
  if ( StorEtwLoggingEnabled && (byte_1C0068843 & 8) != 0 )
  {
    if ( UseQPCTime )
      PerformanceCounter = KeQueryPerformanceCounter(0LL);
    else
      PerformanceCounter.QuadPart = KeQueryUnbiasedInterruptTime();
    v4 = PerformanceCounter;
  }
  v6 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(a2 + 536) + 24LL))(*(_QWORD *)(a2 + 544) + 16LL);
  if ( StorEtwLoggingEnabled && (byte_1C0068843 & 8) != 0 )
  {
    PerformanceFrequency.QuadPart = 1LL;
    if ( UseQPCTime )
      v7 = KeQueryPerformanceCounter(&PerformanceFrequency);
    else
      v7.QuadPart = KeQueryUnbiasedInterruptTime();
    if ( v7.QuadPart <= 0 || v7.QuadPart >= v4.QuadPart )
      v8 = v7.QuadPart - v4.QuadPart;
    else
      v8 = v7.QuadPart - v4.QuadPart - 1;
    v14 = v8;
    if ( UseQPCTime )
    {
      if ( PerformanceFrequency.QuadPart && v8 )
        v2 = 10000
           * (1000 * (v8 % PerformanceFrequency.QuadPart) % PerformanceFrequency.QuadPart)
           / PerformanceFrequency.QuadPart
           + 10000
           * (1000 * (v8 % PerformanceFrequency.QuadPart) / PerformanceFrequency.QuadPart
            + 1000 * (v8 / PerformanceFrequency.QuadPart));
    }
    else
    {
      v2 = v8;
    }
    v14 = v2;
    CurrentProcessorNumber = KeGetCurrentProcessorNumberEx(0LL);
    if ( (byte_1C0068843 & 8) != 0 )
      McTemplateK0pqqx_EtwWriteTransfer(
        v14,
        v10,
        v11,
        RaidpAdapterInterruptRoutine,
        *(_DWORD *)(a2 + 56),
        CurrentProcessorNumber,
        v14);
  }
  return v6;
}
