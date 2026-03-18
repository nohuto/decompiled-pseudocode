/*
 * XREFs of MiUnlockDynamicMemoryExclusive @ 0x14036071C
 * Callers:
 *     MiDeletePartitionResources @ 0x1405BDFF8 (MiDeletePartitionResources.c)
 *     MiGetChannelInformation @ 0x1407DECE0 (MiGetChannelInformation.c)
 *     MiGetPhysicalMemoryRanges @ 0x1408525D8 (MiGetPhysicalMemoryRanges.c)
 *     MiAddPhysicalMemory @ 0x140968388 (MiAddPhysicalMemory.c)
 *     MiRemovePhysicalMemory @ 0x140969850 (MiRemovePhysicalMemory.c)
 *     MiUpdatePartitionLargePfnBitMap @ 0x140982150 (MiUpdatePartitionLargePfnBitMap.c)
 *     MmDuplicateMemory @ 0x140A487C0 (MmDuplicateMemory.c)
 * Callees:
 *     KiAbThreadRemoveBoostsSlow @ 0x14022B568 (KiAbThreadRemoveBoostsSlow.c)
 *     MmGetSessionIdEx @ 0x140287F30 (MmGetSessionIdEx.c)
 *     KiCheckForKernelApcDelivery @ 0x1402F1D50 (KiCheckForKernelApcDelivery.c)
 *     KiAbEntryRemoveFromTree @ 0x14034EE30 (KiAbEntryRemoveFromTree.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 */

char __fastcall MiUnlockDynamicMemoryExclusive(__int64 a1, __int64 a2)
{
  ULONG_PTR v3; // rdi
  struct _KTHREAD *CurrentThread; // rsi
  unsigned int SessionId; // ecx
  __int64 p_Process; // rbx
  unsigned int v7; // edx
  int v8; // r9d
  _QWORD *v9; // rax

  v3 = a1 + 192;
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 192), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(a1 + 192);
  CurrentThread = KeGetCurrentThread();
  if ( v3 - qword_140C50630 < 0x8000000000LL )
    SessionId = MmGetSessionIdEx((__int64)CurrentThread->ApcState.Process);
  else
    SessionId = -1;
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
      goto LABEL_19;
  }
  *(_BYTE *)(p_Process + 18) = 0;
  if ( p_Process )
  {
    if ( *(__int64 *)p_Process < 0 )
    {
      *(_BYTE *)p_Process |= 2u;
      _enable();
      KiAbEntryRemoveFromTree(p_Process);
      _disable();
    }
    v8 = *(_DWORD *)(p_Process + 88);
    *(_DWORD *)(p_Process + 88) = 0;
    *(_BYTE *)(p_Process + 17) = 0;
    *(_QWORD *)p_Process = 0LL;
    LOBYTE(v9) = *(_BYTE *)(p_Process + 16);
    CurrentThread->AbEntrySummary |= 1 << (char)v9;
    _enable();
    if ( v8 )
      LOBYTE(v9) = KiAbThreadRemoveBoostsSlow((ULONG_PTR)CurrentThread, v3, v8);
    goto LABEL_15;
  }
LABEL_19:
  LODWORD(v9) = *((_DWORD *)&CurrentThread->0 + 1);
  if ( ((unsigned int)v9 & 0x10000) == 0 )
    KeBugCheckEx(0x162u, (ULONG_PTR)CurrentThread, v3, SessionId, 0LL);
  _enable();
LABEL_15:
  if ( (*(_WORD *)(a2 + 486))++ == 0xFFFF )
  {
    v9 = (_QWORD *)(a2 + 152);
    if ( (_QWORD *)*v9 != v9 )
      LOBYTE(v9) = KiCheckForKernelApcDelivery();
  }
  return (char)v9;
}
