/*
 * XREFs of ExGetHeapFromVA @ 0x1402AC2AC
 * Callers:
 *     ExAllocatePoolWithQuotaTag @ 0x1402421D0 (ExAllocatePoolWithQuotaTag.c)
 *     IopVerifierExAllocatePoolWithQuota_0 @ 0x140252B80 (IopVerifierExAllocatePoolWithQuota_0.c)
 *     ExpHpCompactionRoutine @ 0x1402AC430 (ExpHpCompactionRoutine.c)
 *     ExReturnPoolQuota @ 0x1402FF25C (ExReturnPoolQuota.c)
 *     ExpResizeBigPageTable @ 0x140371BE0 (ExpResizeBigPageTable.c)
 *     ExPoolCleanupExpansionTable @ 0x140385F08 (ExPoolCleanupExpansionTable.c)
 *     ExQueryPoolBlockSize @ 0x1403C9900 (ExQueryPoolBlockSize.c)
 *     ExGetBigPoolInfo @ 0x1405ADADC (ExGetBigPoolInfo.c)
 *     ExIsSpecialPoolAddress @ 0x1405B4410 (ExIsSpecialPoolAddress.c)
 * Callees:
 *     RtlpHpGetOwnerHeap @ 0x1402AC314 (RtlpHpGetOwnerHeap.c)
 *     MiDeterminePoolType @ 0x1402AC3D0 (MiDeterminePoolType.c)
 *     KeBugCheckEx @ 0x1403F5E40 (KeBugCheckEx.c)
 */

__int64 __fastcall ExGetHeapFromVA(ULONG_PTR BugCheckParameter3, __int64 a2, __int64 a3)
{
  int v4; // eax
  int v5; // edx
  char v6; // al
  __int64 result; // rax
  __int128 v8; // [rsp+30h] [rbp-18h] BYREF

  v4 = MiDeterminePoolType(BugCheckParameter3, a2, a3);
  v5 = 0;
  v8 = 0LL;
  if ( v4 != 32 )
    v5 = v4;
  *(_WORD *)((char *)&v8 + 1) = 1;
  v6 = 5;
  if ( v5 != 33 )
    v6 = 3;
  LOBYTE(v8) = v6;
  result = RtlpHpGetOwnerHeap(BugCheckParameter3, &v8);
  if ( !result )
    KeBugCheckEx(0xC2u, 0LL, 0LL, BugCheckParameter3, 0LL);
  return result;
}
