/*
 * XREFs of ExQueryPoolBlockSize @ 0x1403C9900
 * Callers:
 *     sub_140A19EE4 @ 0x140A19EE4 (sub_140A19EE4.c)
 * Callees:
 *     ExGetHeapFromVA @ 0x1402AC2AC (ExGetHeapFromVA.c)
 *     ExpGetBilledProcess @ 0x1402FF318 (ExpGetBilledProcess.c)
 *     ExpHpIsSpecialPoolHeap @ 0x1403C994C (ExpHpIsSpecialPoolHeap.c)
 */

SIZE_T __stdcall ExQueryPoolBlockSize(PVOID PoolBlock, PBOOLEAN QuotaCharged)
{
  __int64 v2; // r8
  __int64 HeapFromVA; // rax
  SIZE_T result; // rax
  _DWORD *v7; // rdx
  char *v8; // rcx
  __int64 v9; // rbx
  bool v10; // zf

  HeapFromVA = ExGetHeapFromVA((ULONG_PTR)PoolBlock, (__int64)QuotaCharged, v2);
  if ( (unsigned int)ExpHpIsSpecialPoolHeap(HeapFromVA) )
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
