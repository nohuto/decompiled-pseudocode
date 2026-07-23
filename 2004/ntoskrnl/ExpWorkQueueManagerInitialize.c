/*
 * XREFs of ExpWorkQueueManagerInitialize @ 0x1407B0458
 * Callers:
 *     ExpPartitionInitialize @ 0x1407B006C (ExpPartitionInitialize.c)
 * Callees:
 *     KeInitializeTimer2 @ 0x1402676A0 (KeInitializeTimer2.c)
 *     KeInitializeEvent @ 0x140290DE0 (KeInitializeEvent.c)
 *     KeQueryNodeActiveAffinity @ 0x1402DE440 (KeQueryNodeActiveAffinity.c)
 *     KeInitializeTimerEx @ 0x1402F9130 (KeInitializeTimerEx.c)
 *     KeSelectIdealProcessor @ 0x14030C074 (KeSelectIdealProcessor.c)
 *     memset @ 0x14040A280 (memset.c)
 */

unsigned __int64 __fastcall ExpWorkQueueManagerInitialize(__int64 a1, __int64 a2, __int64 a3)
{
  __int16 v6; // cx
  unsigned __int64 result; // rax
  _GROUP_AFFINITY Affinity; // [rsp+20h] [rbp-18h] BYREF

  Affinity = 0LL;
  memset((void *)(a1 + 16), 0, 0x108uLL);
  *(_QWORD *)a1 = a2;
  *(_QWORD *)(a1 + 8) = a3;
  KeInitializeEvent((PRKEVENT)(a1 + 16), SynchronizationEvent, 0);
  KeInitializeTimerEx((PKTIMER)(a1 + 40), SynchronizationTimer);
  KeInitializeEvent((PRKEVENT)(a1 + 104), SynchronizationEvent, 0);
  KeInitializeTimer2(a1 + 128);
  KeQueryNodeActiveAffinity(*(_WORD *)(*(_QWORD *)(a1 + 8) + 146LL), &Affinity, 0LL);
  v6 = 0;
  result = (0x101010101010101LL
          * ((((Affinity.Mask - ((Affinity.Mask >> 1) & 0x5555555555555555LL)) & 0x3333333333333333LL)
            + (((Affinity.Mask - ((Affinity.Mask >> 1) & 0x5555555555555555LL)) >> 2) & 0x3333333333333333LL)
            + ((((Affinity.Mask - ((Affinity.Mask >> 1) & 0x5555555555555555LL)) & 0x3333333333333333LL)
              + (((Affinity.Mask - ((Affinity.Mask >> 1) & 0x5555555555555555LL)) >> 2) & 0x3333333333333333LL)) >> 4)) & 0xF0F0F0F0F0F0F0FLL)) >> 56;
  if ( (_BYTE)result )
  {
    result = KeSelectIdealProcessor(*(_QWORD *)(a1 + 8), &Affinity, 0LL, 0LL);
    v6 = result;
  }
  *(_WORD *)(a1 + 276) = v6;
  return result;
}
