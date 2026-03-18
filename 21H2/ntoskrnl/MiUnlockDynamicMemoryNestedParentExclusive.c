/*
 * XREFs of MiUnlockDynamicMemoryNestedParentExclusive @ 0x140583BB8
 * Callers:
 *     MiDeletePartitionResources @ 0x1405BDFF8 (MiDeletePartitionResources.c)
 * Callees:
 *     KiAbThreadRemoveBoostsSlow @ 0x14022B568 (KiAbThreadRemoveBoostsSlow.c)
 *     MmGetSessionIdEx @ 0x140287F30 (MmGetSessionIdEx.c)
 *     KiAbEntryRemoveFromTree @ 0x14034EE30 (KiAbEntryRemoveFromTree.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 */

__int64 __fastcall MiUnlockDynamicMemoryNestedParentExclusive(__int64 a1)
{
  __int64 v1; // rdi
  struct _KTHREAD *CurrentThread; // rsi
  unsigned int SessionId; // ecx
  __int64 p_Process; // rbx
  unsigned int v5; // edx
  __int64 result; // rax
  int v7; // r9d

  v1 = **(_QWORD **)(*(_QWORD *)(a1 + 176) + 56LL) + 192LL;
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v1, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(v1);
  CurrentThread = KeGetCurrentThread();
  if ( (unsigned __int64)(v1 - qword_140C50630) >= 0x8000000000LL )
    SessionId = -1;
  else
    SessionId = MmGetSessionIdEx((__int64)CurrentThread->ApcState.Process);
  _disable();
  p_Process = (__int64)&CurrentThread[1].Process;
  v5 = 0;
  while ( (*(_QWORD *)p_Process & 0x7FFFFFFFFFFFFFFCLL) != (v1 & 0x7FFFFFFFFFFFFFFCLL)
       || !*(_BYTE *)(p_Process + 18)
       || (*(_DWORD *)p_Process & 1) != 0
       || *(_DWORD *)(p_Process + 8) != SessionId )
  {
    ++v5;
    p_Process += 96LL;
    if ( v5 >= 6 )
      goto LABEL_12;
  }
  *(_BYTE *)(p_Process + 18) = 0;
  if ( !p_Process )
  {
LABEL_12:
    result = *((unsigned int *)&CurrentThread->MiscFlags + 1);
    if ( (result & 0x10000) == 0 )
      KeBugCheckEx(0x162u, (ULONG_PTR)CurrentThread, v1, SessionId, 0LL);
    _enable();
    return result;
  }
  if ( *(__int64 *)p_Process < 0 )
  {
    *(_BYTE *)p_Process |= 2u;
    _enable();
    KiAbEntryRemoveFromTree(p_Process);
    _disable();
  }
  v7 = *(_DWORD *)(p_Process + 88);
  *(_DWORD *)(p_Process + 88) = 0;
  *(_BYTE *)(p_Process + 17) = 0;
  *(_QWORD *)p_Process = 0LL;
  result = *(unsigned __int8 *)(p_Process + 16);
  CurrentThread->AbEntrySummary |= 1 << result;
  _enable();
  if ( v7 )
    return KiAbThreadRemoveBoostsSlow((ULONG_PTR)CurrentThread, v1, v7);
  return result;
}
