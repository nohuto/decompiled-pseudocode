/*
 * XREFs of WmiQueryDataBlock @ 0x1C002B290
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __fastcall WmiQueryDataBlock(struct _DEVICE_OBJECT *a1, IRP *a2)
{
  return WmiCompleteRequest(a1, a2, -1073741163, 0, 0);
}
