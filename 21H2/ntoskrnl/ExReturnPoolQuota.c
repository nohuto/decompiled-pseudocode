/*
 * XREFs of ExReturnPoolQuota @ 0x140367A64
 * Callers:
 *     IopFreeIrp @ 0x140348640 (IopFreeIrp.c)
 *     IopFreeMiniCompletionPacket @ 0x14074F700 (IopFreeMiniCompletionPacket.c)
 * Callees:
 *     ExGetHeapFromVA @ 0x140366C48 (ExGetHeapFromVA.c)
 *     MiDeterminePoolType @ 0x140366FB0 (MiDeterminePoolType.c)
 *     ExpStampPoolWithQuotaProcess @ 0x140367B44 (ExpStampPoolWithQuotaProcess.c)
 *     ExpReturnPoolQuota @ 0x140367DEC (ExpReturnPoolQuota.c)
 *     ExpHpIsSpecialPoolHeap @ 0x140461DE4 (ExpHpIsSpecialPoolHeap.c)
 */

char *__fastcall ExReturnPoolQuota(ULONG_PTR BugCheckParameter2)
{
  char *result; // rax
  __int64 HeapFromVA; // rax
  __int64 v4; // [rsp+48h] [rbp+10h] BYREF
  ULONG_PTR Amount; // [rsp+50h] [rbp+18h] BYREF

  Amount = 0LL;
  LODWORD(v4) = 0;
  if ( !ExpSpecialAllocations
    || (HeapFromVA = ExGetHeapFromVA(BugCheckParameter2),
        result = (char *)ExpHpIsSpecialPoolHeap(HeapFromVA),
        !(_DWORD)result) )
  {
    MiDeterminePoolType(BugCheckParameter2);
    result = (char *)ExpStampPoolWithQuotaProcess(BugCheckParameter2, (__int64)&Amount, (__int64)&v4);
    if ( (unsigned __int64)(result - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
      return (char *)ExpReturnPoolQuota(result, Amount);
  }
  return result;
}
