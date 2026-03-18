/*
 * XREFs of MI_INTERLOCKED_EXCHANGE_PTE @ 0x140330A4C
 * Callers:
 *     MiCopyOnWrite @ 0x140238700 (MiCopyOnWrite.c)
 *     MmUnmapViewInSystemCache @ 0x140247350 (MmUnmapViewInSystemCache.c)
 *     MiUnlockNestedPageTableWritePte @ 0x14032EA88 (MiUnlockNestedPageTableWritePte.c)
 *     MI_WRITE_INVALID_PTE_TB_FLUSH_NEEDED @ 0x1403309C0 (MI_WRITE_INVALID_PTE_TB_FLUSH_NEEDED.c)
 * Callees:
 *     MiPteInShadowRange @ 0x1402386B0 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x14032ECC0 (MiWritePteShadow.c)
 */

__int64 __fastcall MI_INTERLOCKED_EXCHANGE_PTE(volatile __int64 *a1, __int64 a2)
{
  __int64 v3; // rbx
  __int64 v5; // r8

  v3 = _InterlockedExchange64(a1, a2);
  if ( MiPteInShadowRange((unsigned __int64)a1) )
    MiWritePteShadow((__int64)a1, a2, v5);
  return v3;
}
