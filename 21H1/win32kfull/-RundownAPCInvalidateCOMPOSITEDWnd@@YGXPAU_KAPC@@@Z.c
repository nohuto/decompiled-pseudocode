/*
 * XREFs of ?RundownAPCInvalidateCOMPOSITEDWnd@@YGXPAU_KAPC@@@Z @ 0x153520
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
void __stdcall RundownAPCInvalidateCOMPOSITEDWnd(struct _KAPC *a1)
{
  Win32FreePool(a1);
}
