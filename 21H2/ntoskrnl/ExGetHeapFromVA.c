/*
 * XREFs of ExGetHeapFromVA @ 0x140366C48
 * Callers:
 *     ExpResizeBigPageTable @ 0x1402129C0 (ExpResizeBigPageTable.c)
 *     ExPoolCleanupExpansionTable @ 0x140216A4C (ExPoolCleanupExpansionTable.c)
 *     ExFreeHeapPool @ 0x140348B40 (ExFreeHeapPool.c)
 *     ExpHpCompactionRoutine @ 0x140363EF0 (ExpHpCompactionRoutine.c)
 *     ExReturnPoolQuota @ 0x140367A64 (ExReturnPoolQuota.c)
 *     ExGetBigPoolInfo @ 0x14063A8C0 (ExGetBigPoolInfo.c)
 *     ExQueryPoolBlockSize @ 0x14063B220 (ExQueryPoolBlockSize.c)
 *     ExIsSpecialPoolAddress @ 0x140642384 (ExIsSpecialPoolAddress.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 *     ExpAllocatePoolWithQuotaTag @ 0x140A6E9A4 (ExpAllocatePoolWithQuotaTag.c)
 * Callees:
 *     RtlpHpGetOwnerHeap @ 0x140366CB0 (RtlpHpGetOwnerHeap.c)
 *     MiDeterminePoolType @ 0x140366FB0 (MiDeterminePoolType.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
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
