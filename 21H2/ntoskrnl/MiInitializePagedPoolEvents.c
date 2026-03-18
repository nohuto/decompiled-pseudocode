/*
 * XREFs of MiInitializePagedPoolEvents @ 0x140B078E4
 * Callers:
 *     MiInitializeMemoryEvents @ 0x14082BD64 (MiInitializeMemoryEvents.c)
 * Callees:
 *     KiAbThreadRemoveBoostsSlow @ 0x14022B568 (KiAbThreadRemoveBoostsSlow.c)
 *     MiFreePoolPagesLeft @ 0x1402693C8 (MiFreePoolPagesLeft.c)
 *     MmGetSessionIdEx @ 0x140287F30 (MmGetSessionIdEx.c)
 *     KeResetEvent @ 0x1402A40D0 (KeResetEvent.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     KeSetEvent @ 0x1402AFD30 (KeSetEvent.c)
 *     KiCheckForKernelApcDelivery @ 0x1402F1D50 (KiCheckForKernelApcDelivery.c)
 *     KiAbEntryRemoveFromTree @ 0x14034EE30 (KiAbEntryRemoveFromTree.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 */

char MiInitializePagedPoolEvents()
{
  struct _KTHREAD *CurrentThread; // rsi
  unsigned __int64 v1; // rdi
  char v2; // bl
  struct _KTHREAD *v3; // rdi
  unsigned int SessionId; // ecx
  __int64 p_Process; // rbx
  unsigned int v6; // edx
  $CEA84C04E3712D858E5667A507841A2A *v7; // rax
  int v9; // r9d

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->SpecialApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_140C53498, 0LL);
  v1 = MiFreePoolPagesLeft(6);
  if ( v1 < qword_140C4F070 )
    KeResetEvent(qword_140C55080);
  else
    KeSetEvent(qword_140C55080, 0, 0);
  if ( v1 <= qword_140C4F068 )
    KeSetEvent(qword_140C55078, 0, 0);
  else
    KeResetEvent(qword_140C55078);
  v2 = _InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140C53498, 0xFFFFFFFFFFFFFFFFuLL);
  if ( (v2 & 2) != 0 && (v2 & 4) == 0 )
    ExfTryToWakePushLock(&qword_140C53498);
  v3 = KeGetCurrentThread();
  if ( (unsigned __int64)&qword_140C53498 - qword_140C50630 >= 0x8000000000LL )
    SessionId = -1;
  else
    SessionId = MmGetSessionIdEx((__int64)v3->ApcState.Process);
  _disable();
  p_Process = (__int64)&v3[1].Process;
  v6 = 0;
  while ( (*(_QWORD *)p_Process & 0x7FFFFFFFFFFFFFFCLL) != ((unsigned __int64)&qword_140C53498 & 0x7FFFFFFFFFFFFFFCLL)
       || !*(_BYTE *)(p_Process + 18)
       || (*(_DWORD *)p_Process & 1) != 0
       || *(_DWORD *)(p_Process + 8) != SessionId )
  {
    ++v6;
    p_Process += 96LL;
    if ( v6 >= 6 )
      goto LABEL_14;
  }
  *(_BYTE *)(p_Process + 18) = 0;
  if ( !p_Process )
  {
LABEL_14:
    LODWORD(v7) = *((_DWORD *)&v3->0 + 1);
    if ( ((unsigned int)v7 & 0x10000) == 0 )
      KeBugCheckEx(0x162u, (ULONG_PTR)v3, (ULONG_PTR)&qword_140C53498, SessionId, 0LL);
    _enable();
    goto LABEL_16;
  }
  if ( *(__int64 *)p_Process < 0 )
  {
    *(_BYTE *)p_Process |= 2u;
    _enable();
    KiAbEntryRemoveFromTree(p_Process);
    _disable();
  }
  v9 = *(_DWORD *)(p_Process + 88);
  *(_DWORD *)(p_Process + 88) = 0;
  *(_BYTE *)(p_Process + 17) = 0;
  *(_QWORD *)p_Process = 0LL;
  LOBYTE(v7) = *(_BYTE *)(p_Process + 16);
  v3->AbEntrySummary |= 1 << (char)v7;
  _enable();
  if ( v9 )
    LOBYTE(v7) = KiAbThreadRemoveBoostsSlow((ULONG_PTR)v3, (__int64)&qword_140C53498, v9);
LABEL_16:
  if ( CurrentThread->SpecialApcDisable++ == -1 )
  {
    v7 = &CurrentThread->152;
    if ( ($CEA84C04E3712D858E5667A507841A2A *)v7->ApcState.ApcListHead[0].Flink != v7 )
      LOBYTE(v7) = KiCheckForKernelApcDelivery();
  }
  return (char)v7;
}
