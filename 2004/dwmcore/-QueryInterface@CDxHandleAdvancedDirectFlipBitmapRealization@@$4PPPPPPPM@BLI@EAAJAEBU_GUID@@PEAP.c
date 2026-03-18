/*
 * XREFs of ?QueryInterface@CDxHandleAdvancedDirectFlipBitmapRealization@@$4PPPPPPPM@BLI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800F3450
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CDxHandleAdvancedDirectFlipBitmapRealization::QueryInterface(
        __int64 a1,
        const struct _GUID *a2,
        void **a3)
{
  return CVisualGroup::QueryInterface((CVisualGroup *)(a1 - *(int *)(a1 - 4) - 440), a2, a3);
}
