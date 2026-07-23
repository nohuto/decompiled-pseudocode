/*
 * XREFs of ExpHpIsSpecialPoolHeap @ 0x1403CDEBC
 * Callers:
 *     ExReturnPoolQuota @ 0x14022CF2C (ExReturnPoolQuota.c)
 *     ExFreeHeapPool @ 0x14034C810 (ExFreeHeapPool.c)
 *     IopVerifierExAllocatePoolWithQuota_1 @ 0x14035CC60 (IopVerifierExAllocatePoolWithQuota_1.c)
 *     ExAllocatePoolWithQuotaTag @ 0x14035DD70 (ExAllocatePoolWithQuotaTag.c)
 *     ExQueryPoolBlockSize @ 0x1403CDE70 (ExQueryPoolBlockSize.c)
 *     ExIsSpecialPoolAddress @ 0x1405BA2F0 (ExIsSpecialPoolAddress.c)
 * Callees:
 *     MiDeterminePoolType @ 0x140305AEC (MiDeterminePoolType.c)
 */

__int64 __fastcall ExpHpIsSpecialPoolHeap(__int64 a1)
{
  unsigned int v2; // ebx
  int v3; // edx
  int v4; // eax
  __int64 *v5; // rax

  v2 = 0;
  v3 = MiDeterminePoolType(a1);
  v4 = 0;
  if ( v3 != 32 )
    v4 = v3;
  if ( v4 == 33 )
  {
    LOBYTE(v2) = a1 == *(_QWORD *)(*(_QWORD *)(KeGetCurrentThread()->ApcState.Process[1].AffinityPadding[5] + 672)
                                 + 14568LL);
  }
  else
  {
    v5 = qword_140CDB100;
    while ( a1 != *v5 )
    {
      if ( (__int64)++v5 >= (__int64)qword_140CDB120 )
        return v2;
    }
    return 1;
  }
  return v2;
}
