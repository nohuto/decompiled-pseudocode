/*
 * XREFs of ExGetHeapFromVA @ 0x1402380B4
 * Callers:
 *     ExAllocatePoolWithQuotaTag @ 0x14020A530 (ExAllocatePoolWithQuotaTag.c)
 *     IopVerifierExAllocatePoolWithQuota_0 @ 0x140211880 (IopVerifierExAllocatePoolWithQuota_0.c)
 *     ExpHpCompactionRoutine @ 0x140237CC0 (ExpHpCompactionRoutine.c)
 *     ExReturnPoolQuota @ 0x14030E6FC (ExReturnPoolQuota.c)
 *     ExpResizeBigPageTable @ 0x1403750AC (ExpResizeBigPageTable.c)
 *     ExPoolCleanupExpansionTable @ 0x140389038 (ExPoolCleanupExpansionTable.c)
 *     ExQueryPoolBlockSize @ 0x1403CD320 (ExQueryPoolBlockSize.c)
 *     ExGetBigPoolInfo @ 0x1405B1D5C (ExGetBigPoolInfo.c)
 *     ExIsSpecialPoolAddress @ 0x1405B8690 (ExIsSpecialPoolAddress.c)
 * Callees:
 *     RtlpHpGetOwnerHeap @ 0x14023811C (RtlpHpGetOwnerHeap.c)
 *     MiDeterminePoolType @ 0x1402381E0 (MiDeterminePoolType.c)
 *     KeBugCheckEx @ 0x1403FBCA0 (KeBugCheckEx.c)
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
