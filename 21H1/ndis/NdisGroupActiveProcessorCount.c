/*
 * XREFs of NdisGroupActiveProcessorCount @ 0x1C0038E80
 * Callers:
 *     ?ndisPcwCollectData@@YAJPEAU_PCW_BUFFER@@@Z @ 0x1C00FE7A4 (-ndisPcwCollectData@@YAJPEAU_PCW_BUFFER@@@Z.c)
 * Callees:
 *     <none>
 */

ULONG __stdcall NdisGroupActiveProcessorCount(USHORT Group)
{
  return KeQueryActiveProcessorCountEx(Group);
}
