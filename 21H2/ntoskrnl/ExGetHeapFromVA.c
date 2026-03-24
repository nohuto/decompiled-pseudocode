/*
 * XREFs of ExGetHeapFromVA @ 0x1402FAC7C
 * Callers:
 *     ExReturnPoolQuota @ 0x1402AEBCC (ExReturnPoolQuota.c)
 *     ExpHpCompactionRoutine @ 0x1402FAA50 (ExpHpCompactionRoutine.c)
 *     IopVerifierExAllocatePoolWithQuota_1 @ 0x140351F10 (IopVerifierExAllocatePoolWithQuota_1.c)
 *     ExAllocatePoolWithQuotaTag @ 0x140353020 (ExAllocatePoolWithQuotaTag.c)
 *     ExpResizeBigPageTable @ 0x1403752C0 (ExpResizeBigPageTable.c)
 *     ExPoolCleanupExpansionTable @ 0x140389790 (ExPoolCleanupExpansionTable.c)
 *     ExQueryPoolBlockSize @ 0x1403CDD00 (ExQueryPoolBlockSize.c)
 *     ExGetBigPoolInfo @ 0x1405B375C (ExGetBigPoolInfo.c)
 *     ExIsSpecialPoolAddress @ 0x1405BA0C0 (ExIsSpecialPoolAddress.c)
 * Callees:
 *     RtlpHpGetOwnerHeap @ 0x1402FACE4 (RtlpHpGetOwnerHeap.c)
 *     MiDeterminePoolType @ 0x1402FAD9C (MiDeterminePoolType.c)
 *     KeBugCheckEx @ 0x1403FDEF0 (KeBugCheckEx.c)
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
