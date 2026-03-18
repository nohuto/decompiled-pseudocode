/*
 * XREFs of EtwpInitLoggerContext @ 0x1406EFD44
 * Callers:
 *     EtwpStartLogger @ 0x1406EE2AC (EtwpStartLogger.c)
 * Callees:
 *     KeInitializeMutex @ 0x140261AA0 (KeInitializeMutex.c)
 *     KeQueryMaximumProcessorCountEx @ 0x1402631C0 (KeQueryMaximumProcessorCountEx.c)
 *     KeInitializeDpc @ 0x1402940D0 (KeInitializeDpc.c)
 *     InitializeSListHead @ 0x1402A05A0 (InitializeSListHead.c)
 *     KeInitializeEvent @ 0x1402A7B90 (KeInitializeEvent.c)
 *     EtwpQueryUsedProcessorCount @ 0x1402E1C80 (EtwpQueryUsedProcessorCount.c)
 *     KeQuerySystemTimePrecise @ 0x1402F08A0 (KeQuerySystemTimePrecise.c)
 *     KeInitializeTimerEx @ 0x1402F4820 (KeInitializeTimerEx.c)
 *     RtlInitUnicodeString @ 0x140347630 (RtlInitUnicodeString.c)
 *     EtwpInitializeCompression @ 0x1403DDD90 (EtwpInitializeCompression.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall EtwpInitLoggerContext(const void **a1, int a2)
{
  int v2; // ebx
  unsigned int v5; // ebp
  unsigned int v6; // r14d
  _QWORD *Pool2; // rax
  __int64 v8; // rbx
  char *v9; // rdi
  __int64 v10; // rdx
  int v11; // eax
  int UsedProcessorCount; // edi
  int v13; // eax
  ULONG MaximumProcessorCount; // eax
  void *v16; // rax
  char *v17; // rdi

  v2 = *(unsigned __int16 *)a1;
  v5 = 0;
  v6 = 0;
  if ( (a2 & 0x10000000) == 0 )
  {
    MaximumProcessorCount = KeQueryMaximumProcessorCountEx(0xFFFFu);
    if ( MaximumProcessorCount > 0x20 )
      v5 = 8 * MaximumProcessorCount;
    if ( (a2 & 0x400) != 0 )
      v6 = 8 * MaximumProcessorCount;
  }
  Pool2 = (_QWORD *)ExAllocatePool2(72LL, v5 + v2 + 1346 + 2 * v6, 1282896965LL);
  v8 = (__int64)Pool2;
  if ( !Pool2 )
    return 0LL;
  v9 = (char *)(Pool2 + 168);
  if ( v5 )
  {
    Pool2[132] = v9;
    v9 += v5;
  }
  if ( v6 )
  {
    Pool2[162] = v9;
    v17 = &v9[v6];
    Pool2[163] = v17;
    v9 = &v17[v6];
  }
  memmove(v9, a1[1], *(unsigned __int16 *)a1);
  RtlInitUnicodeString((PUNICODE_STRING)(v8 + 136), (PCWSTR)v9);
  *(_DWORD *)(v8 + 12) = a2;
  *(_DWORD *)(v8 + 300) = (a2 & 0x1000000) != 0 ? 1 : 512;
  if ( a2 < 0 && (a2 & 0x1000000) != 0 )
    *(_DWORD *)(v8 + 12) = a2 & 0x7FFFFFFF;
  if ( (unsigned __int8)EtwpBootPhase > 3u )
    _InterlockedOr((volatile signed __int32 *)(v8 + 816), 4u);
  if ( (a2 & 0x8000) != 0 )
  {
    v16 = (void *)(v8 + 272);
  }
  else
  {
    if ( (a2 & 0x4000) == 0 )
      goto LABEL_12;
    v16 = &EtwpGlobalSequence;
  }
  *(_QWORD *)(v8 + 264) = v16;
LABEL_12:
  *(_QWORD *)(v8 + 1312) = -1LL;
  *(_DWORD *)(v8 + 320) = 1;
  v10 = *(_QWORD *)(*(_QWORD *)qword_140C51F48 + 16720LL) << 12 >> 20;
  if ( (unsigned int)v10 <= 0x200 )
  {
    *(_DWORD *)(v8 + 4) = 0x2000;
  }
  else
  {
    v11 = 0x10000;
    if ( (unsigned int)v10 <= 0x400 )
      v11 = 0x4000;
    *(_DWORD *)(v8 + 4) = v11;
  }
  UsedProcessorCount = EtwpQueryUsedProcessorCount(v8);
  v13 = 2 * UsedProcessorCount;
  *(_DWORD *)(v8 + 224) = 2 * UsedProcessorCount;
  if ( (a2 & 0x4000000) == 0 )
    goto LABEL_17;
  if ( EtwpInitializeCompression(v8) < 0 )
  {
    ExFreePoolWithTag((PVOID)v8, 0);
    return 0LL;
  }
  if ( (a2 & 0x400) != 0 )
    *(_DWORD *)(v8 + 224) += 4;
  v13 = *(_DWORD *)(v8 + 224);
LABEL_17:
  *(_DWORD *)(v8 + 236) = v13 + 22;
  KeQuerySystemTimePrecise((_QWORD *)(v8 + 792));
  KeInitializeMutex((PRKMUTEX)(v8 + 632), 0);
  *(_QWORD *)(v8 + 688) = 0LL;
  *(_QWORD *)(v8 + 336) = v8 + 328;
  *(_QWORD *)(v8 + 328) = v8 + 328;
  *(_QWORD *)(v8 + 48) = v8 + 56;
  *(_QWORD *)(v8 + 56) = 0LL;
  *(_QWORD *)(v8 + 64) = v8 + 72;
  *(_QWORD *)(v8 + 72) = 0LL;
  *(_QWORD *)(v8 + 88) = v8 + 80;
  *(_QWORD *)(v8 + 80) = v8 + 80;
  *(_QWORD *)(v8 + 104) = v8 + 96;
  *(_QWORD *)(v8 + 96) = v8 + 96;
  *(_QWORD *)(v8 + 1048) = v8 + 1040;
  *(_QWORD *)(v8 + 1040) = v8 + 1040;
  *(_WORD *)(v8 + 1064) = 0;
  *(_QWORD *)(v8 + 1072) = 0LL;
  *(_QWORD *)(v8 + 696) = 0LL;
  *(_QWORD *)(v8 + 912) = 0LL;
  InitializeSListHead((PSLIST_HEADER)(v8 + 944));
  InitializeSListHead((PSLIST_HEADER)(v8 + 928));
  *(_DWORD *)(v8 + 964) = 4 * UsedProcessorCount;
  if ( (unsigned int)(4 * UsedProcessorCount) < 0x10 )
    *(_DWORD *)(v8 + 964) = 16;
  KeInitializeDpc((PRKDPC)(v8 + 848), (PKDEFERRED_ROUTINE)EtwpStackWalkDpc, 0LL);
  *(_BYTE *)(v8 + 849) = 2;
  KeInitializeEvent((PRKEVENT)(v8 + 456), NotificationEvent, 0);
  KeInitializeEvent((PRKEVENT)(v8 + 480), SynchronizationEvent, 0);
  KeInitializeTimerEx((PKTIMER)(v8 + 504), SynchronizationTimer);
  KeInitializeDpc((PRKDPC)(v8 + 568), (PKDEFERRED_ROUTINE)EtwpLoggerDpc, (PVOID)v8);
  return v8;
}
