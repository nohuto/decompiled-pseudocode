/*
 * XREFs of MI_INTERLOCKED_EXCHANGE_PTE @ 0x140239628
 * Callers:
 *     MiCopyOnWrite @ 0x1402E3B50 (MiCopyOnWrite.c)
 *     MiUnlockNestedPageTableWritePte @ 0x14031759C (MiUnlockNestedPageTableWritePte.c)
 *     MmUnmapViewInSystemCache @ 0x14031E830 (MmUnmapViewInSystemCache.c)
 *     MI_WRITE_INVALID_PTE_TB_FLUSH_NEEDED @ 0x140341A70 (MI_WRITE_INVALID_PTE_TB_FLUSH_NEEDED.c)
 * Callees:
 *     MiWritePteShadow @ 0x140234B9C (MiWritePteShadow.c)
 *     MiPteInShadowRange @ 0x140353840 (MiPteInShadowRange.c)
 */

__int64 __fastcall MI_INTERLOCKED_EXCHANGE_PTE(volatile __int64 *a1, __int64 a2)
{
  __int64 v3; // rbx

  v3 = _InterlockedExchange64(a1, a2);
  if ( (unsigned int)MiPteInShadowRange(a1) )
    MiWritePteShadow((__int64)a1, a2);
  return v3;
}
