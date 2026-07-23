/*
 * XREFs of EtwpInitLoggerContext @ 0x1406B4C60
 * Callers:
 *     EtwpStartLogger @ 0x1406B5480 (EtwpStartLogger.c)
 * Callees:
 *     EtwpQueryUsedProcessorCount @ 0x140253DF8 (EtwpQueryUsedProcessorCount.c)
 *     KeInitializeTimerEx @ 0x140266A80 (KeInitializeTimerEx.c)
 *     KeQuerySystemTimePrecise @ 0x140266EA0 (KeQuerySystemTimePrecise.c)
 *     KeInitializeDpc @ 0x140269650 (KeInitializeDpc.c)
 *     KeQueryMaximumProcessorCountEx @ 0x1402696D0 (KeQueryMaximumProcessorCountEx.c)
 *     RtlInitUnicodeString @ 0x14026A4C0 (RtlInitUnicodeString.c)
 *     KeInitializeMutex @ 0x14029E4F0 (KeInitializeMutex.c)
 *     KeInitializeEvent @ 0x14035E640 (KeInitializeEvent.c)
 *     memmove @ 0x140414040 (memmove.c)
 *     memset @ 0x140414300 (memset.c)
 *     EtwpInitializeCompression @ 0x1405AD798 (EtwpInitializeCompression.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall EtwpInitLoggerContext(const void **a1, int a2)
{
  int v2; // ebx
  unsigned int v5; // r14d
  unsigned int v6; // ebp
  SIZE_T v7; // rdi
  PVOID PoolWithTag; // rax
  __int64 v9; // rbx
  char *v10; // rdi
  __int64 v11; // rdx
  int v12; // eax
  int v13; // eax
  ULONG MaximumProcessorCount; // eax
  char *v16; // rdi
  void *v17; // rax

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
  v7 = v5 + v2 + 1330 + 2 * v6;
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNxCacheAligned, v7, 0x4C777445u);
  v9 = (__int64)PoolWithTag;
  if ( !PoolWithTag )
    return 0LL;
  memset(PoolWithTag, 0, (unsigned int)v7);
  v10 = (char *)(v9 + 1328);
  if ( v5 )
  {
    *(_QWORD *)(v9 + 1040) = v10;
    v10 += v5;
  }
  if ( v6 )
  {
    *(_QWORD *)(v9 + 1280) = v10;
    v16 = &v10[v6];
    *(_QWORD *)(v9 + 1288) = v16;
    v10 = &v16[v6];
  }
  memmove(v10, a1[1], *(unsigned __int16 *)a1);
  RtlInitUnicodeString((PUNICODE_STRING)(v9 + 152), (PCWSTR)v10);
  *(_DWORD *)(v9 + 12) = a2;
  *(_DWORD *)(v9 + 32) = 0xFFFF;
  *(_DWORD *)(v9 + 28) = -1072889856;
  *(_DWORD *)(v9 + 20) = -1072496640;
  *(_DWORD *)(v9 + 24) = -1072562176;
  *(_DWORD *)(v9 + 316) = (a2 & 0x1000000) != 0 ? 1 : 512;
  if ( a2 < 0 && (a2 & 0x1000000) != 0 )
    *(_DWORD *)(v9 + 12) = a2 & 0x7FFFFFFF;
  if ( EtwpFileSystemReady )
    _InterlockedOr((volatile signed __int32 *)(v9 + 832), 4u);
  if ( (a2 & 0x8000) != 0 )
  {
    v17 = (void *)(v9 + 288);
LABEL_29:
    *(_QWORD *)(v9 + 280) = v17;
    goto LABEL_12;
  }
  if ( (a2 & 0x4000) != 0 )
  {
    v17 = &EtwpGlobalSequence;
    goto LABEL_29;
  }
LABEL_12:
  *(_QWORD *)(v9 + 1296) = -1LL;
  *(_DWORD *)(v9 + 336) = 1;
  v11 = *(_QWORD *)(*(_QWORD *)qword_140C4E688 + 6928LL) << 12 >> 20;
  if ( (unsigned int)v11 <= 0x200 )
  {
    *(_DWORD *)(v9 + 4) = 0x2000;
  }
  else
  {
    v12 = 0x10000;
    if ( (unsigned int)v11 <= 0x400 )
      v12 = 0x4000;
    *(_DWORD *)(v9 + 4) = v12;
  }
  v13 = 2 * EtwpQueryUsedProcessorCount(v9);
  *(_DWORD *)(v9 + 240) = v13;
  if ( (a2 & 0x4000000) == 0 )
    goto LABEL_17;
  if ( EtwpInitializeCompression(v9) >= 0 )
  {
    *(_DWORD *)(v9 + 240) += 4;
    v13 = *(_DWORD *)(v9 + 240);
LABEL_17:
    *(_DWORD *)(v9 + 252) = v13 + 22;
    KeQuerySystemTimePrecise((LARGE_INTEGER *)(v9 + 808));
    KeInitializeMutex((PRKMUTEX)(v9 + 648), 0);
    *(_QWORD *)(v9 + 704) = 0LL;
    *(_QWORD *)(v9 + 352) = v9 + 344;
    *(_QWORD *)(v9 + 344) = v9 + 344;
    *(_WORD *)(v9 + 1048) = 0;
    *(_QWORD *)(v9 + 64) = v9 + 72;
    *(_QWORD *)(v9 + 72) = 0LL;
    *(_QWORD *)(v9 + 80) = v9 + 88;
    *(_QWORD *)(v9 + 88) = 0LL;
    *(_QWORD *)(v9 + 104) = v9 + 96;
    *(_QWORD *)(v9 + 96) = v9 + 96;
    *(_QWORD *)(v9 + 120) = v9 + 112;
    *(_QWORD *)(v9 + 112) = v9 + 112;
    *(_QWORD *)(v9 + 1032) = v9 + 1024;
    *(_QWORD *)(v9 + 1024) = v9 + 1024;
    *(_QWORD *)(v9 + 1056) = 0LL;
    *(_QWORD *)(v9 + 712) = 0LL;
    KeInitializeEvent((PRKEVENT)(v9 + 472), NotificationEvent, 0);
    KeInitializeEvent((PRKEVENT)(v9 + 496), SynchronizationEvent, 0);
    KeInitializeTimerEx((PKTIMER)(v9 + 520), SynchronizationTimer);
    KeInitializeDpc((PRKDPC)(v9 + 584), (PKDEFERRED_ROUTINE)EtwpLoggerDpc, (PVOID)v9);
    return v9;
  }
  ExFreePoolWithTag((PVOID)v9, 0);
  return 0LL;
}
