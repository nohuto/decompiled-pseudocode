/*
 * XREFs of ExQueryPoolBlockSize @ 0x1403CD320
 * Callers:
 *     sub_140A1FEE4 @ 0x140A1FEE4 (sub_140A1FEE4.c)
 * Callees:
 *     ExGetHeapFromVA @ 0x1402380B4 (ExGetHeapFromVA.c)
 *     ExpGetBilledProcess @ 0x14030E7B8 (ExpGetBilledProcess.c)
 *     ExpHpIsSpecialPoolHeap @ 0x1403CD36C (ExpHpIsSpecialPoolHeap.c)
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
