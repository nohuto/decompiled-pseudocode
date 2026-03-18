/*
 * XREFs of MI_INTERLOCKED_EXCHANGE_PTE @ 0x140318E28
 * Callers:
 *     MiCopyOnWrite @ 0x14028F8B0 (MiCopyOnWrite.c)
 *     MmUnmapViewInSystemCache @ 0x14029B2F0 (MmUnmapViewInSystemCache.c)
 *     MI_WRITE_INVALID_PTE_TB_FLUSH_NEEDED @ 0x1402B9F70 (MI_WRITE_INVALID_PTE_TB_FLUSH_NEEDED.c)
 *     MiUnlockNestedPageTableWritePte @ 0x1402CC62C (MiUnlockNestedPageTableWritePte.c)
 * Callees:
 *     MiPteInShadowRange @ 0x14021EA50 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x140313F2C (MiWritePteShadow.c)
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
