/*
 * XREFs of MiInitializePartition @ 0x14079C85C
 * Callers:
 *     MmCreatePartition @ 0x1403CAB14 (MmCreatePartition.c)
 *     MiCreatePfnDatabase @ 0x140A446BC (MiCreatePfnDatabase.c)
 * Callees:
 *     KeInitializeGate @ 0x140251190 (KeInitializeGate.c)
 *     RtlRandomEx @ 0x1402970C0 (RtlRandomEx.c)
 *     InitializeSListHead @ 0x1402A3310 (InitializeSListHead.c)
 *     ExfTryToWakePushLock @ 0x1402FC2C0 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x1403539D0 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1403556E0 (ExAcquirePushLockExclusiveEx.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x140355AE0 (KiLeaveGuardedRegionUnsafe.c)
 *     KeInitializeEvent @ 0x14035E640 (KeInitializeEvent.c)
 *     MiInitializeSlabAllocator @ 0x1403AFD3C (MiInitializeSlabAllocator.c)
 *     MiInitializePfnListHead @ 0x1403AFD9C (MiInitializePfnListHead.c)
 *     MiInitializeCombining @ 0x1403AFDC4 (MiInitializeCombining.c)
 *     MiInitializeNuma @ 0x1403AFE18 (MiInitializeNuma.c)
 *     MiInitializeCommitment @ 0x1403BFA54 (MiInitializeCommitment.c)
 *     MiInitializeSections @ 0x14079CD94 (MiInitializeSections.c)
 *     MiInitializeLargePageNodeLists @ 0x14079CF1C (MiInitializeLargePageNodeLists.c)
 */

char __fastcall MiInitializePartition(__int64 a1, __int16 a2)
{
  int v3; // eax
  int v4; // ecx
  __int64 *v5; // r8
  unsigned int v6; // edi
  __int64 i; // rax
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r10
  __int64 v11; // rcx
  __int64 v12; // r9
  unsigned int v13; // edi
  __int64 j; // rbx
  ULONG v15; // eax
  __int64 v16; // rcx
  unsigned int v17; // ebx
  __int64 v18; // rdi
  unsigned int k; // ebp
  unsigned int v20; // r8d
  unsigned int v21; // edi
  __int64 m; // rbx
  __int64 v23; // r14
  signed int v24; // eax
  __int64 v25; // rdi
  __int64 v26; // rcx
  __int64 v27; // rcx
  __int64 v28; // r8
  struct _KEVENT *v29; // rbx
  __int64 v30; // rbp
  __m128i si128; // xmm0
  __int64 v32; // rcx
  struct _KEVENT *v33; // rbx
  struct _KTHREAD *CurrentThread; // rbx

  *(_WORD *)a1 = a2;
  *(_DWORD *)(a1 + 8) = 305535296;
  *(_DWORD *)(a1 + 4) = 0;
  v3 = 0;
  *(_QWORD *)(a1 + 4928) = 0LL;
  if ( (ULONG_PTR *)a1 != &MiSystemPartition )
    v3 = 32;
  *(_DWORD *)(a1 + 4) = v3;
  KeInitializeEvent((PRKEVENT)(a1 + 104), NotificationEvent, 0);
  KeInitializeEvent((PRKEVENT)(a1 + 5144), SynchronizationEvent, 0);
  v4 = 0;
  v5 = (__int64 *)(a1 + 2176);
  do
  {
    v6 = 0;
    for ( i = *v5; v6 < dword_140C4DF3C; i += 40LL )
    {
      *(_DWORD *)(i + 8) = v4;
      ++v6;
      *(_QWORD *)(i + 16) = 0xFFFFFFFFFLL;
      *(_QWORD *)(i + 24) = 0xFFFFFFFFFLL;
      *(_QWORD *)i = 0LL;
      *(_QWORD *)(i + 32) = 0LL;
    }
    ++v4;
    ++v5;
  }
  while ( v4 <= 1 );
  MiInitializePfnListHead(a1 + 2240, 0);
  MiInitializePfnListHead(a1 + 2304, 1);
  MiInitializePfnListHead(a1 + 2368, 2);
  MiInitializePfnListHead(a1 + 4160, 5);
  v8 = a1 + 2432;
  do
  {
    MiInitializePfnListHead(v8, 2);
    v8 = v11 + 40;
  }
  while ( v12 != 1 );
  *(_QWORD *)(a1 + 4216) = a1 + 2240;
  *(_QWORD *)(a1 + 4224) = v9;
  *(_QWORD *)(a1 + 4232) = v10;
  MiInitializeLargePageNodeLists(a1);
  v13 = 0;
  for ( j = *(_QWORD *)(a1 + 16); v13 < (unsigned __int16)KeNumberNodes; *(_DWORD *)(4544 * v16 + j + 4184) = v15 )
  {
    v15 = RtlRandomEx(&Seed);
    v16 = v13++;
  }
  v17 = 0;
  v18 = a1 + 5184;
  do
  {
    for ( k = 0; k < 4; ++k )
    {
      MiInitializeSlabAllocator(v18, v17, k);
      v18 += 120LL;
    }
    ++v17;
  }
  while ( v17 < 2 );
  v20 = dword_140C4DF3C;
  v21 = 0;
  for ( m = *(_QWORD *)(a1 + 4200); v21 < 2 * dword_140C4DF3C; ++v21 )
  {
    InitializeSListHead((PSLIST_HEADER)(m + 16LL * v21));
    v20 = dword_140C4DF3C;
  }
  v23 = 16LL;
  v24 = (unsigned int)(*(_QWORD *)(a1 + 6928) / 0x64uLL) / v20;
  if ( v24 < 4 )
    v24 = 4;
  if ( v24 > 16 )
    v24 = 16;
  *(_DWORD *)(a1 + 6300) = v24;
  if ( (ULONG_PTR *)a1 == &MiSystemPartition )
    MiInitializePfnListHead((__int64)&qword_140C4CB00, 5);
  v25 = 3LL;
  MiInitializePfnListHead(a1 + 7488, 3);
  MiInitializePfnListHead(a1 + 7552, 4);
  MiInitializePfnListHead(a1 + 2752, 3);
  v26 = a1 + 2816;
  do
  {
    MiInitializePfnListHead(v26, 3);
    v26 = v27 + 40;
  }
  while ( v28 != 1 );
  v29 = (struct _KEVENT *)(a1 + 4408);
  v30 = a1 + 3456;
  do
  {
    MiInitializePfnListHead(v30, 3);
    KeInitializeEvent(v29, SynchronizationEvent, 0);
    v30 += 40LL;
    ++v29;
    --v23;
  }
  while ( v23 );
  MiInitializePfnListHead(a1 + 4096, 5);
  si128 = _mm_load_si128((const __m128i *)&_xmm_fffffffefffffffefffffffefffffffe);
  *(_QWORD *)(a1 + 4256) = v32;
  *(_QWORD *)(a1 + 4240) = a1 + 7488;
  *(_QWORD *)(a1 + 4248) = a1 + 7552;
  *(__m128i *)(a1 + 4792) = si128;
  *(__m128i *)(a1 + 4808) = si128;
  KeInitializeEvent((PRKEVENT)(a1 + 6272), NotificationEvent, 0);
  v33 = (struct _KEVENT *)(a1 + 4936);
  do
  {
    KeInitializeEvent(v33, NotificationEvent, 1u);
    v33 = (struct _KEVENT *)((char *)v33 + 32);
    --v25;
  }
  while ( v25 );
  *(_QWORD *)(a1 + 192) = 0LL;
  KeInitializeEvent((PRKEVENT)(a1 + 208), NotificationEvent, 0);
  memset64((void *)(a1 + 248), a1 + 208, 0xBuLL);
  *(_QWORD *)(a1 + 6864) = a1 + 6856;
  *(_QWORD *)(a1 + 6856) = a1 + 6856;
  KeInitializeEvent((PRKEVENT)(a1 + 792), SynchronizationEvent, 0);
  KeInitializeEvent((PRKEVENT)(a1 + 736), SynchronizationEvent, 0);
  KeInitializeEvent((PRKEVENT)(a1 + 760), NotificationEvent, 0);
  *(_DWORD *)(a1 + 720) = 18;
  KeInitializeEvent((PRKEVENT)(a1 + 696), NotificationEvent, 0);
  KeInitializeEvent((PRKEVENT)(a1 + 880), NotificationEvent, 0);
  KeInitializeEvent((PRKEVENT)(a1 + 1008), NotificationEvent, 0);
  KeInitializeGate(a1 + 648);
  *(_QWORD *)(a1 + 640) = a1 + 632;
  *(_QWORD *)(a1 + 632) = a1 + 632;
  KeInitializeEvent((PRKEVENT)(a1 + 920), SynchronizationEvent, 0);
  *(_QWORD *)(a1 + 912) = a1 + 904;
  *(_QWORD *)(a1 + 904) = a1 + 904;
  if ( (ULONG_PTR *)a1 != &MiSystemPartition )
    MiInitializeCommitment(a1);
  MiInitializeNuma((ULONG_PTR *)a1);
  *(_DWORD *)(a1 + 1156) = -1;
  *(_QWORD *)(a1 + 1104) = MiContractWsSwapPageFileWorker;
  *(_QWORD *)(a1 + 1128) = 0LL;
  *(_QWORD *)(a1 + 1112) = a1;
  *(_QWORD *)(a1 + 1088) = 0LL;
  KeInitializeEvent((PRKEVENT)(a1 + 1200), NotificationEvent, 0);
  KeInitializeEvent((PRKEVENT)(a1 + 1248), NotificationEvent, 0);
  InitializeSListHead((PSLIST_HEADER)(a1 + 1232));
  MiInitializeSections(a1);
  MiInitializeCombining(a1, (_QWORD *)(a1 + 6448));
  *(_QWORD *)(a1 + 1352) = 1LL;
  *(_QWORD *)(a1 + 1360) = 1LL;
  *(_QWORD *)(a1 + 1368) = 1LL;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->SpecialApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_140C4E648, 0LL);
  *(_DWORD *)(a1 + 4) |= 2u;
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140C4E648, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(&qword_140C4E648);
  KeAbPostRelease((ULONG_PTR)&qword_140C4E648);
  return KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
}
