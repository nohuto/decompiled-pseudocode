/*
 * XREFs of ExGetHeapFromVA @ 0x14025327C
 * Callers:
 *     ExpHpCompactionRoutine @ 0x140253400 (ExpHpCompactionRoutine.c)
 *     IopVerifierExAllocatePoolWithQuota @ 0x14028F420 (IopVerifierExAllocatePoolWithQuota.c)
 *     ExAllocatePoolWithQuotaTag @ 0x140297DA0 (ExAllocatePoolWithQuotaTag.c)
 *     ExReturnPoolQuota @ 0x14033BB5C (ExReturnPoolQuota.c)
 *     ExpResizeBigPageTable @ 0x1403729F0 (ExpResizeBigPageTable.c)
 *     ExPoolCleanupExpansionTable @ 0x140386E78 (ExPoolCleanupExpansionTable.c)
 *     ExQueryPoolBlockSize @ 0x1403CA6E0 (ExQueryPoolBlockSize.c)
 *     ExGetBigPoolInfo @ 0x1405AE1FC (ExGetBigPoolInfo.c)
 *     ExIsSpecialPoolAddress @ 0x1405B4B30 (ExIsSpecialPoolAddress.c)
 * Callees:
 *     RtlpHpGetOwnerHeap @ 0x1402532E4 (RtlpHpGetOwnerHeap.c)
 *     MiDeterminePoolType @ 0x1402533A0 (MiDeterminePoolType.c)
 *     KeBugCheckEx @ 0x1403F70D0 (KeBugCheckEx.c)
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
