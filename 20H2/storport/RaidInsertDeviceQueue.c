/*
 * XREFs of RaidInsertDeviceQueue @ 0x1C000A8B0
 * Callers:
 *     RaidStartIoPacket @ 0x1C0009FE0 (RaidStartIoPacket.c)
 * Callees:
 *     RiGetEnqueueReason @ 0x1C000ABF0 (RiGetEnqueueReason.c)
 *     RiPeekDeviceQueue @ 0x1C000ADE8 (RiPeekDeviceQueue.c)
 *     RiEnqueueDeviceQueue @ 0x1C000AE10 (RiEnqueueDeviceQueue.c)
 *     __security_check_cookie @ 0x1C001CB10 (__security_check_cookie.c)
 *     McTemplateK0pquuqqd_EtwWriteTransfer @ 0x1C0034844 (McTemplateK0pquuqqd_EtwWriteTransfer.c)
 */

char __fastcall RaidInsertDeviceQueue(
        __int64 a1,
        __int64 a2,
        char a3,
        __int64 a4,
        char a5,
        LARGE_INTEGER *a6,
        _DWORD *a7,
        _DWORD *a8)
{
  __int64 v8; // rsi
  char v12; // cl
  char v14; // r8
  char v15; // dl
  char v16; // r8
  char v17; // dl
  char v18; // dl
  char v19; // dl
  __int64 v20; // rdx
  __int64 v21; // r8
  char v22; // al
  char result; // al
  LARGE_INTEGER v24; // rbx
  char v25; // r12
  bool v26; // zf
  LARGE_INTEGER PerformanceCounter; // rax
  KIRQL v28; // r11
  int EnqueueReason; // r15d
  char v30; // r14
  __int64 v31; // rax
  __int128 v32; // [rsp+60h] [rbp-58h] BYREF

  v8 = a2 + 120;
  v12 = *(_BYTE *)(a2 + 142);
  v14 = v12 | 2;
  v32 = 0LL;
  if ( (a3 & 2) == 0 )
    v14 = v12 & 0xFD;
  v15 = v14 | 4;
  if ( (a3 & 4) == 0 )
    v15 = v14 & 0xFB;
  v16 = v15 | 1;
  if ( (a3 & 1) == 0 )
    v16 = v15 & 0xFE;
  v17 = v16 | 8;
  if ( (a3 & 8) == 0 )
    v17 = v16 & 0xF7;
  if ( (a3 & 0x10) != 0 )
    v18 = v17 | 0x20;
  else
    v18 = v17 & 0xDF;
  if ( (a3 & 0x20) != 0 )
    v19 = v18 | 0x40;
  else
    v19 = v18 & 0xBF;
  *(_BYTE *)(v8 + 22) = v19 ^ (v19 ^ (16 * a5)) & 0x10;
  v21 = ExAcquireSpinLockShared((PEX_SPIN_LOCK)(a1 + 72));
  _InterlockedIncrement((volatile signed __int32 *)(a1 + 76));
  if ( !*(_DWORD *)(a1 + 32)
    && *(_DWORD *)(a1 + 76) <= *(_DWORD *)(a1 + 4)
    && (!*(_BYTE *)(a1 + 37) || (*(_BYTE *)(v8 + 22) & 4) != 0)
    && (!*(_BYTE *)(a1 + 36) || (*(_BYTE *)(v8 + 22) & 2) != 0)
    && *(int *)(a1 + 28) <= 0
    && !*(_BYTE *)(a1 + 38) )
  {
    if ( !*(_DWORD *)(a1 + 20) && !*(_DWORD *)(a1 + 16)
      || (v31 = RiPeekDeviceQueue(a1, v20, v21), v8 == v31)
      || (*(_BYTE *)(v31 + 22) & 1) == 0
      || (*(_BYTE *)(v8 + 22) & 6) != 0 )
    {
      v22 = *(_BYTE *)(v8 + 22);
      if ( ((v22 & 1) == 0 || *(int *)(a1 + 76) < 1)
        && (!*(_BYTE *)(a1 + 39) || (v22 & 8) != 0)
        && (v22 & 0x10) == 0
        && (v22 & 0x40) == 0
        && (v22 & 1) == 0 )
      {
        ExReleaseSpinLockShared((PEX_SPIN_LOCK)(a1 + 72), v21);
        result = 0;
        *(_BYTE *)(v8 + 20) = 0;
        return result;
      }
    }
  }
  _InterlockedDecrement((volatile signed __int32 *)(a1 + 76));
  ExReleaseSpinLockShared((PEX_SPIN_LOCK)(a1 + 72), v21);
  v24.QuadPart = 0LL;
  v25 = 0;
  if ( byte_1C0069842 < 0 )
  {
    IoGetActivityIdIrp(a2, &v32);
    v25 = ((*(_BYTE *)(v8 + 22) & 6) != 0) + 1;
  }
  if ( StorEtwLoggingEnabled )
  {
    v26 = UseQPCTime == 0;
  }
  else
  {
    if ( !g_StorpTraceLoggingPerformanceEnabled )
      goto LABEL_35;
    if ( !UseQPCTime )
      goto LABEL_58;
    v26 = g_StorpTraceLoggingPerformanceHighResolutionTimer == 0;
  }
  if ( v26 )
  {
LABEL_58:
    PerformanceCounter.QuadPart = KeQueryUnbiasedInterruptTime();
    goto LABEL_34;
  }
  PerformanceCounter = KeQueryPerformanceCounter(0LL);
LABEL_34:
  v24 = PerformanceCounter;
LABEL_35:
  ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 72));
  EnqueueReason = RiGetEnqueueReason(a1, v8, 0LL);
  if ( EnqueueReason )
  {
    RiEnqueueDeviceQueue(a1, v8);
    v30 = 1;
  }
  else
  {
    ++*(_DWORD *)(a1 + 76);
    v30 = 0;
    if ( (*(_BYTE *)(v8 + 22) & 1) != 0 )
      *(_BYTE *)(a1 + 38) = 1;
  }
  *(_BYTE *)(v8 + 20) = v30;
  ExReleaseSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 72), v28);
  if ( v30 )
  {
    *a6 = v24;
    *a7 = EnqueueReason;
    *a8 = *(_DWORD *)(a1 + 16);
    if ( byte_1C0069842 < 0 )
      McTemplateK0pquuqqd_EtwWriteTransfer(
        *(_DWORD *)(a1 + 76),
        *(_DWORD *)(a1 + 16) + *(_DWORD *)(a1 + 20),
        (unsigned int)&v32,
        a1,
        v25,
        3,
        EnqueueReason,
        *(_BYTE *)(a1 + 16) + *(_BYTE *)(a1 + 20),
        *(_DWORD *)(a1 + 76));
  }
  return v30;
}
