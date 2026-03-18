/*
 * XREFs of DxgkOpenResourceFromNtHandle @ 0x1C01EA070
 * Callers:
 *     <none>
 * Callees:
 *     DxgkOpenResourceFromNtHandleInternal @ 0x1C01EA090 (DxgkOpenResourceFromNtHandleInternal.c)
 */

__int64 __fastcall DxgkOpenResourceFromNtHandle(__int64 a1)
{
  return DxgkOpenResourceFromNtHandleInternal(a1, 0LL);
}
