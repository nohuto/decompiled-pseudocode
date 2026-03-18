/*
 * XREFs of ?AssignFenceStorageSlot@VIDMM_FENCE_STORAGE_PAGE@@QEAAXPEAUVIDMM_MONITORED_FENCE_STORAGE@@@Z @ 0x1C00119F8
 * Callers:
 *     ?AllocateFenceStorageSlot@VIDMM_PROCESS_FENCE_STORAGE@@QEAAJPEAUVIDMM_MONITORED_FENCE_STORAGE@@@Z @ 0x1C00118C8 (-AllocateFenceStorageSlot@VIDMM_PROCESS_FENCE_STORAGE@@QEAAJPEAUVIDMM_MONITORED_FENCE_STORAGE@@@.c)
 *     ?AllocateSharedFenceStorageSlot@VIDMM_PROCESS_FENCE_STORAGE@@QEAAJPEAUVIDMM_MONITORED_FENCE_STORAGE@@PEAVVIDMM_PROCESS@@@Z @ 0x1C0015430 (-AllocateSharedFenceStorageSlot@VIDMM_PROCESS_FENCE_STORAGE@@QEAAJPEAUVIDMM_MONITORED_FENCE_STOR.c)
 * Callees:
 *     <none>
 */

void __fastcall VIDMM_FENCE_STORAGE_PAGE::AssignFenceStorageSlot(
        VIDMM_FENCE_STORAGE_PAGE *this,
        struct VIDMM_MONITORED_FENCE_STORAGE *a2)
{
  CCHAR LeastSignificantBit; // al
  __int64 v5; // rcx

  LeastSignificantBit = RtlFindLeastSignificantBit(~*((_QWORD *)this + 12));
  v5 = (unsigned int)(LeastSignificantBit << 6);
  *((_QWORD *)this + 12) |= 1LL << LeastSignificantBit;
  *(_QWORD *)a2 = this;
  *((_DWORD *)a2 + 4) = v5;
  *((_QWORD *)a2 + 1) = *((_QWORD *)this + 14) + v5;
}
