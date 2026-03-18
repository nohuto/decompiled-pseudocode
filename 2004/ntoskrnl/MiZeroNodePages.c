/*
 * XREFs of MiZeroNodePages @ 0x1403A7930
 * Callers:
 *     <none>
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x14020A870 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     MiAllocatePool @ 0x140247F80 (MiAllocatePool.c)
 *     KeSetEvent @ 0x140286AD0 (KeSetEvent.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1402C0E10 (KeAcquireInStackQueuedSpinLock.c)
 *     KeWaitForGate @ 0x14030E9A4 (KeWaitForGate.c)
 *     MiWakeZeroingThreads @ 0x140317500 (MiWakeZeroingThreads.c)
 *     KeSignalGate @ 0x140350B20 (KeSignalGate.c)
 *     MiGetOptimalProcessorWriteCount @ 0x14035C8F0 (MiGetOptimalProcessorWriteCount.c)
 *     MiZeroPageCalibrate @ 0x1403A7530 (MiZeroPageCalibrate.c)
 *     MiCreateZeroThreadContext @ 0x1403A8398 (MiCreateZeroThreadContext.c)
 *     MiPreserveBootDecisions @ 0x1403A8488 (MiPreserveBootDecisions.c)
 *     MiNodeCompletedBootZeroing @ 0x1403A85F8 (MiNodeCompletedBootZeroing.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EDAA4 (KiRemoveSystemWorkPriorityKick.c)
 *     MiDeleteZeroThreadContext @ 0x14054A774 (MiDeleteZeroThreadContext.c)
 *     ObCloseHandle @ 0x140602510 (ObCloseHandle.c)
 *     PsCreateSystemThreadEx @ 0x1406CFBE0 (PsCreateSystemThreadEx.c)
 *     ExFreePoolWithTag @ 0x1409B1140 (ExFreePoolWithTag.c)
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
  __int64 v18; // r8
  _DWORD *v19; // r9
  __m128i v20; // xmm0
  int v21; // esi
  unsigned __int64 OldIrql; // rsi
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v26; // eax
  bool v27; // zf
  signed __int32 v28[8]; // [rsp+0h] [rbp-A9h] BYREF
  __int64 v29; // [rsp+30h] [rbp-79h]
  __int64 v30; // [rsp+38h] [rbp-71h]
  __int64 v31; // [rsp+40h] [rbp-69h]
  unsigned __int64 v32; // [rsp+50h] [rbp-59h]
  PVOID Pa; // [rsp+58h] [rbp-51h]
  __int64 v34; // [rsp+60h] [rbp-49h]
  __m128i v35; // [rsp+70h] [rbp-39h]
  __m128i v36; // [rsp+80h] [rbp-29h]
  __int128 v37; // [rsp+90h] [rbp-19h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+A0h] [rbp-9h] BYREF
  unsigned int v39; // [rsp+110h] [rbp+67h]
  HANDLE Handle; // [rsp+120h] [rbp+77h] BYREF
  PVOID v41; // [rsp+128h] [rbp+7Fh]

  v1 = *((_QWORD *)P + 9);
  *(_QWORD *)&LockHandle.OldIrql = 0LL;
  v3 = 0LL;
  *((_QWORD *)P + 3) = 0LL;
  *((_WORD *)P + 44) = 0;
  P[90] = 6;
  *((_DWORD *)P + 23) = 0;
  Handle = 0LL;
  LockHandle.LockQueue = 0LL;
  v37 = 0LL;
  *((_QWORD *)P + 13) = P + 96;
  *((_QWORD *)P + 12) = P + 96;
  v4 = *((unsigned int *)P + 20);
  *((_QWORD *)P + 8) = P + 56;
  *((_QWORD *)P + 7) = P + 56;
  v34 = *(_QWORD *)(v1 + 16) + 4544 * v4;
  v5 = *(unsigned __int16 *)(v34 + 4488);
  v35 = *(__m128i *)(v34 + 4472);
  *((_WORD *)P + 60) = _mm_extract_epi16(v35, 4);
  v39 = dword_140C4DCE4;
  v6 = v5 / dword_140C4DCE4;
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
  v32 = __rdtsc();
  _InterlockedOr(v28, 0);
  v10 = 0;
  if ( !(_DWORD)v6 )
    goto LABEL_35;
  v11 = v9 + 17;
  while ( 1 )
  {
    v12 = v35.m128i_i64[0];
    v13 = v35;
    *(_WORD *)(v11 - 1) = 1;
    v11[1] = 6;
    *(_DWORD *)(v11 + 3) = 0;
    *(_QWORD *)(v11 + 15) = v11 + 7;
    *(_QWORD *)(v11 + 7) = v11 + 7;
    *(_QWORD *)&v37 = 0LL;
    v36 = v13;
    if ( v12 )
    {
      v14 = 0LL;
      LOBYTE(v8) = 0;
      v36.m128i_i64[0] = 0LL;
      if ( v39 )
      {
        do
        {
          v15 = v3;
          if ( !v12 )
            break;
          _BitScanForward64(&v16, v12);
          v14 |= 1LL << v16;
          v36.m128i_i64[0] = v14;
          if ( !(_BYTE)v8 )
          {
            v3 |= v14;
            *(_QWORD *)&v37 = v15 | v14;
          }
          LOBYTE(v8) = v8 + 1;
          v12 &= ~v14;
        }
        while ( (unsigned __int8)v8 < v39 );
        v35.m128i_i64[0] = v12;
      }
    }
    ZeroThreadContext = MiCreateZeroThreadContext(P, 1LL, v8);
    v41 = (PVOID)ZeroThreadContext;
    if ( !ZeroThreadContext )
      break;
    v31 = 0LL;
    v20 = v36;
    v30 = ZeroThreadContext + 280;
    v29 = ZeroThreadContext;
    *(_DWORD *)(ZeroThreadContext + 264) = v10;
    *(__m128i *)(ZeroThreadContext + 280) = v20;
    if ( (int)PsCreateSystemThreadEx(&Handle, 0x1FFFFFLL, 0LL, 0LL, 0LL, MiZeroLargePageThread, v29, v30, v31) < 0 )
    {
      v21 = v6 - v10;
      MiDeleteZeroThreadContext(v41);
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
  v21 = v6 - v10;
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)P + 32, -v21) == v21 )
    KeSignalGate((__int64)P, 1LL, v18, v19);
LABEL_24:
  if ( v21 )
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
          v26 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
          v27 = (v26 & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= v26;
          if ( v27 )
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
  _InterlockedOr(v28, 0);
  *((_QWORD *)P + 4) = __rdtsc() - v32;
  MiNodeCompletedBootZeroing(v1);
  if ( *(_BYTE *)(v1 + 6400) == 1 )
  {
    if ( Pa )
      ExFreePoolWithTag(Pa, 0);
    ExFreePoolWithTag(P, 0);
  }
  else
  {
    MiPreserveBootDecisions(v34, P);
    *(_BYTE *)(v1 + 6297) = 1;
  }
}
