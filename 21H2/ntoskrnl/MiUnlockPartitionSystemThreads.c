/*
 * XREFs of MiUnlockPartitionSystemThreads @ 0x1403DEEAC
 * Callers:
 *     MiEnablePartitionMappedWrites @ 0x1406F9808 (MiEnablePartitionMappedWrites.c)
 * Callees:
 *     KiAbThreadRemoveBoostsSlow @ 0x14022B568 (KiAbThreadRemoveBoostsSlow.c)
 *     MmGetSessionIdEx @ 0x140287F30 (MmGetSessionIdEx.c)
 *     KiCheckForKernelApcDelivery @ 0x1402F1D50 (KiCheckForKernelApcDelivery.c)
 *     KiAbEntryRemoveFromTree @ 0x14034EE30 (KiAbEntryRemoveFromTree.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 */

char __fastcall MiUnlockPartitionSystemThreads(__int64 a1, __int64 a2)
{
  ULONG_PTR v3; // rdi
  struct _KTHREAD *CurrentThread; // rsi
  unsigned int SessionId; // ecx
  __int64 p_Process; // rbx
  unsigned int v7; // edx
  _QWORD *v8; // rax
  int v10; // r9d

  v3 = a1 + 184;
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 184), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(a1 + 184);
  CurrentThread = KeGetCurrentThread();
  if ( v3 - qword_140C50630 >= 0x8000000000LL )
    SessionId = -1;
  else
    SessionId = MmGetSessionIdEx((__int64)CurrentThread->ApcState.Process);
  _disable();
  p_Process = (__int64)&CurrentThread[1].Process;
  v7 = 0;
  while ( (*(_QWORD *)p_Process & 0x7FFFFFFFFFFFFFFCLL) != (v3 & 0x7FFFFFFFFFFFFFFCLL)
       || !*(_BYTE *)(p_Process + 18)
       || (*(_DWORD *)p_Process & 1) != 0
       || *(_DWORD *)(p_Process + 8) != SessionId )
  {
    ++v7;
    p_Process += 96LL;
    if ( v7 >= 6 )
      goto LABEL_11;
  }
  *(_BYTE *)(p_Process + 18) = 0;
  if ( !p_Process )
  {
LABEL_11:
    LODWORD(v8) = *((_DWORD *)&CurrentThread->0 + 1);
    if ( ((unsigned int)v8 & 0x10000) == 0 )
      KeBugCheckEx(0x162u, (ULONG_PTR)CurrentThread, v3, SessionId, 0LL);
    _enable();
    goto LABEL_13;
  }
  if ( *(__int64 *)p_Process < 0 )
  {
    *(_BYTE *)p_Process |= 2u;
    _enable();
    KiAbEntryRemoveFromTree(p_Process);
    _disable();
  }
  v10 = *(_DWORD *)(p_Process + 88);
  *(_DWORD *)(p_Process + 88) = 0;
  *(_BYTE *)(p_Process + 17) = 0;
  *(_QWORD *)p_Process = 0LL;
  LOBYTE(v8) = *(_BYTE *)(p_Process + 16);
  CurrentThread->AbEntrySummary |= 1 << (char)v8;
  _enable();
  if ( v10 )
    LOBYTE(v8) = KiAbThreadRemoveBoostsSlow((ULONG_PTR)CurrentThread, v3, v10);
LABEL_13:
  if ( (*(_WORD *)(a2 + 486))++ == 0xFFFF )
  {
    v8 = (_QWORD *)(a2 + 152);
    if ( (_QWORD *)*v8 != v8 )
      LOBYTE(v8) = KiCheckForKernelApcDelivery();
  }
  return (char)v8;
}
