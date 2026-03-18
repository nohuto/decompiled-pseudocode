/*
 * XREFs of IopGenericUnpackResource @ 0x14089FDD0
 * Callers:
 *     <none>
 * Callees:
 *     RtlCmDecodeMemIoResource @ 0x14035E850 (RtlCmDecodeMemIoResource.c)
 */

__int64 __fastcall IopGenericUnpackResource(struct _CM_PARTIAL_RESOURCE_DESCRIPTOR *a1, ULONGLONG *a2, ULONGLONG *a3)
{
  *a3 = RtlCmDecodeMemIoResource(a1, a2);
  return 0LL;
}
