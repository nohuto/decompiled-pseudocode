/*
 * XREFs of ExpHpIsSpecialPoolHeap @ 0x1403C994C
 * Callers:
 *     ExAllocatePoolWithQuotaTag @ 0x1402421D0 (ExAllocatePoolWithQuotaTag.c)
 *     ExFreeHeapPool @ 0x14024C790 (ExFreeHeapPool.c)
 *     IopVerifierExAllocatePoolWithQuota_0 @ 0x140252B80 (IopVerifierExAllocatePoolWithQuota_0.c)
 *     ExReturnPoolQuota @ 0x1402FF25C (ExReturnPoolQuota.c)
 *     ExQueryPoolBlockSize @ 0x1403C9900 (ExQueryPoolBlockSize.c)
 *     ExIsSpecialPoolAddress @ 0x1405B4410 (ExIsSpecialPoolAddress.c)
 * Callees:
 *     MiDeterminePoolType @ 0x1402AC3D0 (MiDeterminePoolType.c)
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
    v5 = qword_140CDAFC0;
    while ( v3 != *v5 )
    {
      if ( (__int64)++v5 >= (__int64)qword_140CDAFE0 )
        return v2;
    }
    return 1;
  }
  return v2;
}
