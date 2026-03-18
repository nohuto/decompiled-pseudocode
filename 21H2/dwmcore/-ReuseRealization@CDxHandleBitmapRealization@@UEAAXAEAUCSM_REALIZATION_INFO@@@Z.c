/*
 * XREFs of ?ReuseRealization@CDxHandleBitmapRealization@@UEAAXAEAUCSM_REALIZATION_INFO@@@Z @ 0x180105020
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CDxHandleBitmapRealization::ReuseRealization(
        CDxHandleBitmapRealization *this,
        struct CSM_REALIZATION_INFO *a2)
{
  *((_DWORD *)this - 29) = *((_DWORD *)a2 + 1);
}
