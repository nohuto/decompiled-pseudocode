/*
 * XREFs of IopGenericUnpackResource @ 0x14089EAB0
 * Callers:
 *     <none>
 * Callees:
 *     RtlCmDecodeMemIoResource @ 0x140320D90 (RtlCmDecodeMemIoResource.c)
 */

__int64 __fastcall IopGenericUnpackResource(struct _CM_PARTIAL_RESOURCE_DESCRIPTOR *a1, ULONGLONG *a2, ULONGLONG *a3)
{
  *a3 = RtlCmDecodeMemIoResource(a1, a2);
  return 0LL;
}
