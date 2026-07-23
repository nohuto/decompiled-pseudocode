/*
 * XREFs of MiZeroNodePages @ 0x1403B0390
 * Callers:
 *     <none>
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1402042B0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeWaitForGate @ 0x14022A4E4 (KeWaitForGate.c)
 *     KeSignalGate @ 0x140241090 (KeSignalGate.c)
 *     MiAllocatePool @ 0x14027C2E0 (MiAllocatePool.c)
 *     MiGetOptimalProcessorWriteCount @ 0x1402937D4 (MiGetOptimalProcessorWriteCount.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1402D3660 (KeAcquireInStackQueuedSpinLock.c)
 *     MiWakeZeroingThreads @ 0x14030A120 (MiWakeZeroingThreads.c)
 *     KeSetEvent @ 0x14034E2F0 (KeSetEvent.c)
 *     MiZeroPageCalibrate @ 0x1403AFF94 (MiZeroPageCalibrate.c)
 *     MiCreateZeroThreadContext @ 0x1403B0DF8 (MiCreateZeroThreadContext.c)
 *     MiPreserveBootDecisions @ 0x1403B0EE8 (MiPreserveBootDecisions.c)
 *     MiNodeCompletedBootZeroing @ 0x1403B1058 (MiNodeCompletedBootZeroing.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     MiDeleteZeroThreadContext @ 0x14054FE54 (MiDeleteZeroThreadContext.c)
 *     ObCloseHandle @ 0x1406847E0 (ObCloseHandle.c)
 *     PsCreateSystemThreadEx @ 0x1406A7470 (PsCreateSystemThreadEx.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 */

void __fastcall MiZeroNodePages(char *P)
{
  ULONG_PTR v1; // r13
  __int64 v3; // r12
  __int64 v4; // rbx
  unsigned int v5; // ecx
  __int64 v6; // rsi
  char *Pool; // rax
  __int64 v8; // r8
  char *v9; // rcx
  unsigned int v10; // r15d
  char *v11; // r14
  unsigned __int64 v12; // rdx
  __m128i v13; // xmm0
  __int64 v14; // rcx
  __int64 v15; // r9
  unsigned __int64 v16; // rax
  __int64 ZeroThreadContext; // rax
  __m128i v18; // xmm0
  int v19; // esi
  unsigned __int64 OldIrql; // rsi
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v24; // eax
  bool v25; // zf
  signed __int32 v26[8]; // [rsp+0h] [rbp-A9h] BYREF
  __int64 v27; // [rsp+30h] [rbp-79h]
  __int64 v28; // [rsp+38h] [rbp-71h]
  __int64 v29; // [rsp+40h] [rbp-69h]
  unsigned __int64 v30; // [rsp+50h] [rbp-59h]
  PVOID Pa; // [rsp+58h] [rbp-51h]
  __int64 v32; // [rsp+60h] [rbp-49h]
  __m128i v33; // [rsp+70h] [rbp-39h]
  __m128i v34; // [rsp+80h] [rbp-29h]
  __int128 v35; // [rsp+90h] [rbp-19h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+A0h] [rbp-9h] BYREF
  unsigned int v37; // [rsp+110h] [rbp+67h]
  HANDLE Handle; // [rsp+120h] [rbp+77h] BYREF
  PVOID v39; // [rsp+128h] [rbp+7Fh]

  v1 = *((_QWORD *)P + 9);
  *(_QWORD *)&LockHandle.OldIrql = 0LL;
  v3 = 0LL;
  *((_QWORD *)P + 3) = 0LL;
  *((_WORD *)P + 44) = 0;
  P[90] = 6;
  *((_DWORD *)P + 23) = 0;
  Handle = 0LL;
  LockHandle.LockQueue = 0LL;
  v35 = 0LL;
  *((_QWORD *)P + 13) = P + 96;
  *((_QWORD *)P + 12) = P + 96;
  v4 = *((unsigned int *)P + 20);
  *((_QWORD *)P + 8) = P + 56;
  *((_QWORD *)P + 7) = P + 56;
  v32 = *(_QWORD *)(v1 + 16) + 4544 * v4;
  v5 = *(unsigned __int16 *)(v32 + 4488);
  v33 = *(__m128i *)(v32 + 4472);
  *((_WORD *)P + 60) = _mm_extract_epi16(v33, 4);
  v37 = dword_140C4DF24;
  v6 = v5 / dword_140C4DF24;
  *(_WORD *)P = 263;
  P[2] = 6;
  *((_DWORD *)P + 1) = 0;
  if ( !(_DWORD)v6 )
    v6 = 1LL;
  *((_QWORD *)P + 2) = P + 8;
  *((_QWORD *)P + 1) = P + 8;
  *((_DWORD *)P + 32) = v6;
  *((_DWORD *)P + 38) = v6;
  *((_DWORD *)P + 34) = 0;
  *((_DWORD *)P + 39) = v6;
  Pool = (char *)MiAllocatePool(64, 40 * v6, 0x20206D4Du);
  Pa = Pool;
  v9 = Pool;
  if ( !Pool )
  {
    *(_BYTE *)(v1 + 6400) = 1;
    LODWORD(v6) = 0;
  }
  *((_QWORD *)P + 18) = Pool;
  *((_DWORD *)P + 41) = v6;
  v30 = __rdtsc();
  _InterlockedOr(v26, 0);
  v10 = 0;
  if ( !(_DWORD)v6 )
    goto LABEL_35;
  v11 = v9 + 17;
  while ( 1 )
  {
    v12 = v33.m128i_i64[0];
    v13 = v33;
    *(_WORD *)(v11 - 1) = 1;
    v11[1] = 6;
    *(_DWORD *)(v11 + 3) = 0;
    *(_QWORD *)(v11 + 15) = v11 + 7;
    *(_QWORD *)(v11 + 7) = v11 + 7;
    *(_QWORD *)&v35 = 0LL;
    v34 = v13;
    if ( v12 )
    {
      v14 = 0LL;
      LOBYTE(v8) = 0;
      v34.m128i_i64[0] = 0LL;
      if ( v37 )
      {
        do
        {
          v15 = v3;
          if ( !v12 )
            break;
          _BitScanForward64(&v16, v12);
          v14 |= 1LL << v16;
          v34.m128i_i64[0] = v14;
          if ( !(_BYTE)v8 )
          {
            v3 |= v14;
            *(_QWORD *)&v35 = v15 | v14;
          }
          LOBYTE(v8) = v8 + 1;
          v12 &= ~v14;
        }
        while ( (unsigned __int8)v8 < v37 );
        v33.m128i_i64[0] = v12;
      }
    }
    ZeroThreadContext = MiCreateZeroThreadContext(P, 1LL, v8);
    v39 = (PVOID)ZeroThreadContext;
    if ( !ZeroThreadContext )
      break;
    v29 = 0LL;
    v18 = v34;
    v28 = ZeroThreadContext + 280;
    v27 = ZeroThreadContext;
    *(_DWORD *)(ZeroThreadContext + 264) = v10;
    *(__m128i *)(ZeroThreadContext + 280) = v18;
    if ( (int)PsCreateSystemThreadEx((int)&Handle, 0LL, (__int64)MiZeroLargePageThread, v27, v28, v29) < 0 )
    {
      v19 = v6 - v10;
      MiDeleteZeroThreadContext(v39);
      goto LABEL_24;
    }
    ObCloseHandle(Handle, 0);
    *((_QWORD *)P + 14) |= v3;
    ++v10;
    v11 += 40;
    v3 = 0LL;
    if ( v10 >= (unsigned int)v6 )
      goto LABEL_17;
  }
  v19 = v6 - v10;
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)P + 32, -v19) == v19 )
    KeSignalGate((__int64)P, 1);
LABEL_24:
  if ( v19 )
  {
    *(_BYTE *)(v1 + 6400) = 1;
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)P + 3, &LockHandle);
    MiWakeZeroingThreads((__int64)P, 1);
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    OldIrql = LockHandle.OldIrql;
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( CurrentIrql <= 0xFu && LockHandle.OldIrql <= 0xFu && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          SchedulerAssist = CurrentPrcb->SchedulerAssist;
          v24 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
          v25 = (v24 & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= v24;
          if ( v25 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
    }
    __writecr8(OldIrql);
  }
LABEL_17:
  if ( v10 )
  {
    MiZeroPageCalibrate(v1, (__int64)P);
    *((_DWORD *)P + 40) = MiGetOptimalProcessorWriteCount(v4);
  }
  else
  {
LABEL_35:
    MiZeroPageCalibrate(v1, 0LL);
  }
  KeSetEvent((PRKEVENT)(P + 88), 0, 0);
  if ( v10 )
    KeWaitForGate((__int64)P, 0);
  _InterlockedOr(v26, 0);
  *((_QWORD *)P + 4) = __rdtsc() - v30;
  MiNodeCompletedBootZeroing(v1);
  if ( *(_BYTE *)(v1 + 6400) == 1 )
  {
    if ( Pa )
      ExFreePoolWithTag(Pa, 0);
    ExFreePoolWithTag(P, 0);
  }
  else
  {
    MiPreserveBootDecisions(v32, P);
    *(_BYTE *)(v1 + 6297) = 1;
  }
}
