/*
 * XREFs of MI_INTERLOCKED_EXCHANGE_PTE @ 0x1402746C0
 * Callers:
 *     MiUnlockNestedPageTableWritePte @ 0x1402292C0 (MiUnlockNestedPageTableWritePte.c)
 *     MI_WRITE_INVALID_PTE_TB_FLUSH_NEEDED @ 0x140274148 (MI_WRITE_INVALID_PTE_TB_FLUSH_NEEDED.c)
 *     MiTerminateWsle @ 0x1403146E0 (MiTerminateWsle.c)
 *     MiCopyOnWrite @ 0x140316400 (MiCopyOnWrite.c)
 *     MmUnmapViewInSystemCache @ 0x140335870 (MmUnmapViewInSystemCache.c)
 * Callees:
 *     MiWritePteShadow @ 0x1402294F0 (MiWritePteShadow.c)
 *     MiPteInShadowRange @ 0x140317A80 (MiPteInShadowRange.c)
 */

__int64 __fastcall MI_INTERLOCKED_EXCHANGE_PTE(volatile __int64 *a1, __int64 a2)
{
  __int64 v4; // rbx

  if ( (MiFlags & 0x4000000) != 0 )
    _mm_lfence();
  v4 = _InterlockedExchange64(a1, a2);
  if ( (unsigned int)MiPteInShadowRange(a1) )
    MiWritePteShadow((__int64)a1, a2);
  return v4;
}
