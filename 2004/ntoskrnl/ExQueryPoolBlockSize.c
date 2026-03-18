/*
 * XREFs of ExQueryPoolBlockSize @ 0x1403CA6E0
 * Callers:
 *     sub_140A19EE4 @ 0x140A19EE4 (sub_140A19EE4.c)
 * Callees:
 *     ExGetHeapFromVA @ 0x14025327C (ExGetHeapFromVA.c)
 *     ExpGetBilledProcess @ 0x14033BC18 (ExpGetBilledProcess.c)
 *     ExpHpIsSpecialPoolHeap @ 0x1403CA72C (ExpHpIsSpecialPoolHeap.c)
 */

SIZE_T __stdcall ExQueryPoolBlockSize(PVOID PoolBlock, PBOOLEAN QuotaCharged)
{
  __int64 HeapFromVA; // rax
  __int64 v5; // rdx
  SIZE_T result; // rax
  _DWORD *v7; // rdx
  char *v8; // rcx
  __int64 v9; // rbx
  bool v10; // zf

  HeapFromVA = ExGetHeapFromVA((ULONG_PTR)PoolBlock);
  if ( (unsigned int)ExpHpIsSpecialPoolHeap(HeapFromVA, v5) )
  {
    *QuotaCharged = 0;
    v7 = (_DWORD *)((unsigned __int64)PoolBlock & 0xFFFFFFFFFFFFF000uLL);
    if ( ((unsigned __int16)PoolBlock & 0xFFF) == 0 )
      v7 = (_DWORD *)(((unsigned __int64)PoolBlock & 0xFFFFFFFFFFFFF000uLL) + 4080);
    return *v7 & 0xFFFLL;
  }
  else if ( ((unsigned __int16)PoolBlock & 0xFFF) != 0 )
  {
    v8 = (char *)PoolBlock - 16;
    v9 = 16LL * (unsigned __int8)*((_WORD *)PoolBlock - 7);
    v10 = ExpGetBilledProcess((__int64)v8) == 0LL;
    result = v9 - 16;
    *QuotaCharged = !v10;
  }
  else
  {
    *QuotaCharged = 0;
    return 4096LL;
  }
  return result;
}
