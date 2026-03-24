/*
 * XREFs of MI_INTERLOCKED_EXCHANGE_PTE @ 0x1402BB418
 * Callers:
 *     MiCopyOnWrite @ 0x14023F300 (MiCopyOnWrite.c)
 *     MiUnlockNestedPageTableWritePte @ 0x14030C84C (MiUnlockNestedPageTableWritePte.c)
 *     MmUnmapViewInSystemCache @ 0x140313AE0 (MmUnmapViewInSystemCache.c)
 *     MI_WRITE_INVALID_PTE_TB_FLUSH_NEEDED @ 0x140336D20 (MI_WRITE_INVALID_PTE_TB_FLUSH_NEEDED.c)
 * Callees:
 *     MiWritePteShadow @ 0x1402B69BC (MiWritePteShadow.c)
 *     MiPteInShadowRange @ 0x140348AF0 (MiPteInShadowRange.c)
 */

__int64 __fastcall MI_INTERLOCKED_EXCHANGE_PTE(volatile __int64 *a1, __int64 a2)
{
  __int64 v3; // rbx
  __int64 v5; // r8

  v3 = _InterlockedExchange64(a1, a2);
  if ( (unsigned int)MiPteInShadowRange(a1, a2) )
    MiWritePteShadow((__int64)a1, a2, v5);
  return v3;
}
