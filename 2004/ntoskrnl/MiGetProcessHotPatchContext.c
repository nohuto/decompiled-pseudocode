/*
 * XREFs of MiGetProcessHotPatchContext @ 0x1408C6BF8
 * Callers:
 *     MiDeleteImageHotPatchState @ 0x1408C651C (MiDeleteImageHotPatchState.c)
 *     MiHotPatchImage @ 0x1408C6D34 (MiHotPatchImage.c)
 *     MiLogHotPatchRundown @ 0x1408C89BC (MiLogHotPatchRundown.c)
 *     MiQueryProcessActivePatches @ 0x1408CA8E8 (MiQueryProcessActivePatches.c)
 *     MmPostHotPatchDbgModuleMessages @ 0x1408CB400 (MmPostHotPatchDbgModuleMessages.c)
 * Callees:
 *     MiAllocatePool @ 0x140247F80 (MiAllocatePool.c)
 *     ExFreePoolWithTag @ 0x1409B1140 (ExFreePoolWithTag.c)
 */

_QWORD *__fastcall MiGetProcessHotPatchContext(__int64 a1, int a2)
{
  _QWORD *result; // rax
  _QWORD *Pool; // rax
  signed __int64 v5; // rbx

  result = *(_QWORD **)(a1 + 2552);
  if ( !result )
  {
    if ( a2 && (Pool = MiAllocatePool(64, 0x28uLL, 0x43505048u)) != 0LL )
    {
      *Pool = 0LL;
      Pool[1] = 0LL;
      Pool[4] = Pool + 3;
      Pool[3] = Pool + 3;
      Pool[2] = 0LL;
      v5 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 2552), (signed __int64)Pool, 0LL);
      if ( !v5 )
        return Pool;
      ExFreePoolWithTag(Pool, 0);
      return (_QWORD *)v5;
    }
    else
    {
      return 0LL;
    }
  }
  return result;
}
