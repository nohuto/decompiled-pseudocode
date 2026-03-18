/*
 * XREFs of ExpHpIsSpecialPoolHeap @ 0x1403CA72C
 * Callers:
 *     ExFreeHeapPool @ 0x140289030 (ExFreeHeapPool.c)
 *     IopVerifierExAllocatePoolWithQuota @ 0x14028F420 (IopVerifierExAllocatePoolWithQuota.c)
 *     ExAllocatePoolWithQuotaTag @ 0x140297DA0 (ExAllocatePoolWithQuotaTag.c)
 *     ExReturnPoolQuota @ 0x14033BB5C (ExReturnPoolQuota.c)
 *     ExQueryPoolBlockSize @ 0x1403CA6E0 (ExQueryPoolBlockSize.c)
 *     ExIsSpecialPoolAddress @ 0x1405B4B30 (ExIsSpecialPoolAddress.c)
 * Callees:
 *     MiDeterminePoolType @ 0x1402533A0 (MiDeterminePoolType.c)
 */

__int64 __fastcall ExpHpIsSpecialPoolHeap(unsigned __int64 a1)
{
  unsigned int v1; // edx
  unsigned int v2; // r8d
  __int64 v3; // r9
  unsigned int v4; // eax
  __int64 *v5; // rax

  v1 = MiDeterminePoolType(a1);
  v4 = v2;
  if ( v1 != 32 )
    v4 = v1;
  if ( v4 == 33 )
  {
    LOBYTE(v2) = v3 == *(_QWORD *)(*(_QWORD *)(KeGetCurrentThread()->ApcState.Process[1].AffinityPadding[5] + 672)
                                 + 14568LL);
  }
  else
  {
    v5 = qword_140CDAEC0;
    while ( v3 != *v5 )
    {
      if ( (__int64)++v5 >= (__int64)qword_140CDAEE0 )
        return v2;
    }
    return 1;
  }
  return v2;
}
