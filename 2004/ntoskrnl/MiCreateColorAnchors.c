/*
 * XREFs of MiCreateColorAnchors @ 0x14035C800
 * Callers:
 *     MiInitializeMdlOneNodeBatchPages @ 0x140316224 (MiInitializeMdlOneNodeBatchPages.c)
 *     MiAllocateLargeZeroPages @ 0x1405585BC (MiAllocateLargeZeroPages.c)
 *     MiFindLargePageMemory @ 0x1408D6AE4 (MiFindLargePageMemory.c)
 * Callees:
 *     MiAllocatePool @ 0x140247F80 (MiAllocatePool.c)
 *     KeQueryNodeActiveAffinity @ 0x1402DE440 (KeQueryNodeActiveAffinity.c)
 *     MiGetOptimalProcessorWriteCount @ 0x14035C8F0 (MiGetOptimalProcessorWriteCount.c)
 *     MiGetClosestNodeWithProcessors @ 0x14035C92C (MiGetClosestNodeWithProcessors.c)
 */

__int64 __fastcall MiCreateColorAnchors(__int64 a1, unsigned int a2)
{
  unsigned int ClosestNodeWithProcessors; // ebx
  unsigned int v4; // esi
  USHORT v5; // ax
  __int64 v6; // rax
  unsigned int v7; // edx
  __int64 v8; // rsi
  __int64 result; // rax
  _QWORD *v10; // rcx
  __int64 v11; // rdx
  _GROUP_AFFINITY v12; // xmm0
  _GROUP_AFFINITY Affinity; // [rsp+20h] [rbp-18h] BYREF
  USHORT Count; // [rsp+50h] [rbp+18h] BYREF

  Affinity = 0LL;
  ClosestNodeWithProcessors = 0;
  Count = 0;
  v4 = 0;
  if ( KeNumberNodes )
  {
    while ( 1 )
    {
      ClosestNodeWithProcessors = MiGetClosestNodeWithProcessors(a2);
      KeQueryNodeActiveAffinity(ClosestNodeWithProcessors, &Affinity, &Count);
      v5 = Count;
      if ( Count )
        break;
      ++v4;
      a2 = ClosestNodeWithProcessors;
      if ( v4 >= (unsigned __int16)KeNumberNodes )
        goto LABEL_4;
    }
  }
  else
  {
LABEL_4:
    v5 = 2;
  }
  v6 = MiGetOptimalProcessorWriteCount(ClosestNodeWithProcessors, v5);
  if ( v7 <= (unsigned int)v6 )
    v6 = v7;
  v8 = (unsigned int)v6;
  result = (__int64)MiAllocatePool(64, 48 * v6, 0x6C646D4Du);
  if ( result )
  {
    if ( (_DWORD)v8 )
    {
      v10 = (_QWORD *)(result + 32);
      v11 = v8;
      do
      {
        v10[1] = v10;
        *v10 = v10;
        v10 += 6;
        --v11;
      }
      while ( v11 );
    }
    v12 = Affinity;
    *(_QWORD *)a1 = result;
    result = 1LL;
    *(_DWORD *)(a1 + 20) = 0;
    *(_GROUP_AFFINITY *)(a1 + 32) = v12;
    *(_DWORD *)(a1 + 16) = v8;
    *(_DWORD *)(a1 + 24) = ClosestNodeWithProcessors;
    *(_DWORD *)(a1 + 8) = 0;
  }
  return result;
}
