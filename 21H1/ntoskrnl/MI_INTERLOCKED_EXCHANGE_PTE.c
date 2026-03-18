/*
 * XREFs of MI_INTERLOCKED_EXCHANGE_PTE @ 0x1402F3E4C
 * Callers:
 *     MiCopyOnWrite @ 0x140291750 (MiCopyOnWrite.c)
 *     MmUnmapViewInSystemCache @ 0x1402A0380 (MmUnmapViewInSystemCache.c)
 *     MiUnlockNestedPageTableWritePte @ 0x1402F2CE8 (MiUnlockNestedPageTableWritePte.c)
 *     MI_WRITE_INVALID_PTE_TB_FLUSH_NEEDED @ 0x1402F3DC0 (MI_WRITE_INVALID_PTE_TB_FLUSH_NEEDED.c)
 * Callees:
 *     MiPteInShadowRange @ 0x140291700 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x1402F2F20 (MiWritePteShadow.c)
 */

__int64 __fastcall MI_INTERLOCKED_EXCHANGE_PTE(volatile __int64 *a1, __int64 a2)
{
  __int64 v3; // rbx

  v3 = _InterlockedExchange64(a1, a2);
  if ( MiPteInShadowRange((unsigned __int64)a1) )
    MiWritePteShadow((__int64)a1, a2);
  return v3;
}
