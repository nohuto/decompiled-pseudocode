/*
 * XREFs of VidSchiGetSoftwareOnlyNodeForDriverEngine @ 0x1C00144C0
 * Callers:
 *     VidSchCreateContext @ 0x1C007FC00 (VidSchCreateContext.c)
 *     VidSchCreateSystemDevices @ 0x1C0095C54 (VidSchCreateSystemDevices.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall VidSchiGetSoftwareOnlyNodeForDriverEngine(__int64 a1, int a2)
{
  return (unsigned int)(a2 + *(_DWORD *)(a1 + 72));
}
