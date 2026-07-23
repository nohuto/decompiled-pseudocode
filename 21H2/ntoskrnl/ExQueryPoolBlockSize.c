/*
 * XREFs of ExQueryPoolBlockSize @ 0x1403CDE70
 * Callers:
 *     sub_140A1DEE4 @ 0x140A1DEE4 (sub_140A1DEE4.c)
 * Callees:
 *     ExpGetBilledProcess @ 0x14022CFE8 (ExpGetBilledProcess.c)
 *     ExGetHeapFromVA @ 0x1403059CC (ExGetHeapFromVA.c)
 *     ExpHpIsSpecialPoolHeap @ 0x1403CDEBC (ExpHpIsSpecialPoolHeap.c)
 */

SIZE_T __stdcall ExQueryPoolBlockSize(PVOID PoolBlock, PBOOLEAN QuotaCharged)
{
  __int64 HeapFromVA; // rax
  SIZE_T result; // rax
  _DWORD *v6; // rdx
  char *v7; // rcx
  __int64 v8; // rbx
  bool v9; // zf

  HeapFromVA = ExGetHeapFromVA((ULONG_PTR)PoolBlock);
  if ( (unsigned int)ExpHpIsSpecialPoolHeap(HeapFromVA) )
  {
    *QuotaCharged = 0;
    v6 = (_DWORD *)((unsigned __int64)PoolBlock & 0xFFFFFFFFFFFFF000uLL);
    if ( ((unsigned __int16)PoolBlock & 0xFFF) == 0 )
      v6 = (_DWORD *)(((unsigned __int64)PoolBlock & 0xFFFFFFFFFFFFF000uLL) + 4080);
    return *v6 & 0xFFFLL;
  }
  else if ( ((unsigned __int16)PoolBlock & 0xFFF) != 0 )
  {
    v7 = (char *)PoolBlock - 16;
    v8 = 16LL * (unsigned __int8)*((_WORD *)PoolBlock - 7);
    v9 = ExpGetBilledProcess((__int64)v7) == 0LL;
    result = v8 - 16;
    *QuotaCharged = !v9;
  }
  else
  {
    *QuotaCharged = 0;
    return 4096LL;
  }
  return result;
}
