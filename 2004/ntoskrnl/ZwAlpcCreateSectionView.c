/*
 * XREFs of ZwAlpcCreateSectionView @ 0x1403F4580
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwAlpcCreateSectionView(HANDLE PortHandle, ULONG Flags, PALPC_DATA_VIEW_ATTR ViewAttributes)
{
  _disable();
  __readeflags();
  return KiServiceInternal(PortHandle);
}
