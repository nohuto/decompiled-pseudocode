/*
 * XREFs of ?FreePagingBufferResources@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@@Z @ 0x1C00B0F5C
 * Callers:
 *     ?RemoveDmaBufferFromPool@VIDMM_DMA_POOL@@IEAAXPEAU_VIDMM_DMA_BUFFER@@@Z @ 0x1C00899A0 (-RemoveDmaBufferFromPool@VIDMM_DMA_POOL@@IEAAXPEAU_VIDMM_DMA_BUFFER@@@Z.c)
 * Callees:
 *     memset @ 0x1C00185C0 (memset.c)
 *     ?QueueSystemCleanupCommandAndWait@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N@Z @ 0x1C0070990 (-QueueSystemCleanupCommandAndWait@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N@Z.c)
 */

void __fastcall VIDMM_GLOBAL::FreePagingBufferResources(VIDMM_GLOBAL *this, struct VIDMM_ALLOC *a2)
{
  __int64 v4; // rax
  _QWORD v5[13]; // [rsp+20h] [rbp-68h] BYREF

  memset(v5, 0, 0x58uLL);
  v4 = *(_QWORD *)a2;
  LODWORD(v5[0]) = 105;
  v5[2] = a2;
  HIDWORD(v5[0]) = *(_DWORD *)(*(_QWORD *)v4 + 76LL) & 0x3F;
  VIDMM_GLOBAL::QueueSystemCleanupCommandAndWait(this, (struct _VIDMM_SYSTEM_COMMAND *)v5);
}
