/*
 * XREFs of NdisGroupMaxProcessorCount @ 0x1C00BC990
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

ULONG __stdcall NdisGroupMaxProcessorCount(USHORT Group)
{
  return KeQueryMaximumProcessorCountEx(Group);
}
