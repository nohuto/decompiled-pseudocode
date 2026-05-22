/*
 * XREFs of ?QueryInterface@DWMFocusedInputTarget@@WCI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x18004C580
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DWMFocusedInputTarget::QueryInterface(
        __int64 a1,
        const struct _GUID *a2,
        DWMFocusedInputTarget **a3)
{
  return DWMFocusedInputTarget::QueryInterface((DWMFocusedInputTarget *)(a1 - 40), a2, a3);
}
