/*
 * XREFs of ExGetHeapFromVA @ 0x1403059CC
 * Callers:
 *     ExReturnPoolQuota @ 0x14022CF2C (ExReturnPoolQuota.c)
 *     ExpHpCompactionRoutine @ 0x1403057A0 (ExpHpCompactionRoutine.c)
 *     IopVerifierExAllocatePoolWithQuota_1 @ 0x14035CC60 (IopVerifierExAllocatePoolWithQuota_1.c)
 *     ExAllocatePoolWithQuotaTag @ 0x14035DD70 (ExAllocatePoolWithQuotaTag.c)
 *     ExpResizeBigPageTable @ 0x140374E10 (ExpResizeBigPageTable.c)
 *     ExPoolCleanupExpansionTable @ 0x1403898E0 (ExPoolCleanupExpansionTable.c)
 *     ExQueryPoolBlockSize @ 0x1403CDE70 (ExQueryPoolBlockSize.c)
 *     ExGetBigPoolInfo @ 0x1405B398C (ExGetBigPoolInfo.c)
 *     ExIsSpecialPoolAddress @ 0x1405BA2F0 (ExIsSpecialPoolAddress.c)
 * Callees:
 *     RtlpHpGetOwnerHeap @ 0x140305A34 (RtlpHpGetOwnerHeap.c)
 *     MiDeterminePoolType @ 0x140305AEC (MiDeterminePoolType.c)
 *     KeBugCheckEx @ 0x1403FE0D0 (KeBugCheckEx.c)
 */

__int64 __fastcall ExGetHeapFromVA(ULONG_PTR BugCheckParameter3)
{
  int v2; // eax
  int v3; // edx
  char v4; // al
  __int64 result; // rax
  __int128 v6; // [rsp+30h] [rbp-18h] BYREF

  v2 = MiDeterminePoolType(BugCheckParameter3);
  v3 = 0;
  v6 = 0LL;
  if ( v2 != 32 )
    v3 = v2;
  *(_WORD *)((char *)&v6 + 1) = 1;
  v4 = 5;
  if ( v3 != 33 )
    v4 = 3;
  LOBYTE(v6) = v4;
  result = RtlpHpGetOwnerHeap(BugCheckParameter3, &v6);
  if ( !result )
    KeBugCheckEx(0xC2u, 0LL, 0LL, BugCheckParameter3, 0LL);
  return result;
}
