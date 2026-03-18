/*
 * XREFs of MiInitializeDpcGang @ 0x1405C04D4
 * Callers:
 *     MiInitializeDynamicPfns @ 0x140582D7C (MiInitializeDynamicPfns.c)
 *     MiHugePageOperation @ 0x140586E78 (MiHugePageOperation.c)
 *     MiAllocateFastLargePagesForMdl @ 0x140589518 (MiAllocateFastLargePagesForMdl.c)
 * Callees:
 *     MiAllocatePool @ 0x1402828F0 (MiAllocatePool.c)
 *     memset @ 0x140435E00 (memset.c)
 *     MiComputeIdealDpcGang @ 0x1405BFFD0 (MiComputeIdealDpcGang.c)
 */

__int64 __fastcall MiInitializeDpcGang(__int64 a1, unsigned int a2, char a3)
{
  __int64 result; // rax
  unsigned int v7; // ebx

  result = (__int64)memset((void *)a1, 0, 0xD8uLL);
  if ( (a3 & 2) != 0 )
  {
    v7 = 1;
  }
  else
  {
    result = MiComputeIdealDpcGang(a1, a2, a3);
    v7 = result;
  }
  if ( (a3 & 1) != 0 )
  {
    *(_DWORD *)(a1 + 184) |= 1u;
    if ( v7 > 8 )
    {
      result = (__int64)MiAllocatePool(64, 16LL * v7, 0x6544694Du);
      *(_QWORD *)(a1 + 16) = result;
    }
    if ( !*(_QWORD *)(a1 + 16) )
    {
      result = a1 + 24;
      *(_QWORD *)(a1 + 16) = a1 + 24;
      goto LABEL_13;
    }
  }
  else
  {
    if ( v7 > 8 )
    {
      result = (__int64)MiAllocatePool(64, 8LL * v7, 0x6544694Du);
      *(_QWORD *)(a1 + 8) = result;
    }
    if ( !*(_QWORD *)(a1 + 8) )
    {
      result = a1 + 16;
      *(_QWORD *)(a1 + 8) = a1 + 16;
LABEL_13:
      if ( v7 > 8 )
        v7 = 8;
    }
  }
  *(_DWORD *)(a1 + 188) = v7;
  return result;
}
