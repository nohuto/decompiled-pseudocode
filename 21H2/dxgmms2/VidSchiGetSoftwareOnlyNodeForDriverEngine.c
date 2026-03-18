/*
 * XREFs of VidSchiGetSoftwareOnlyNodeForDriverEngine @ 0x1C0018E48
 * Callers:
 *     VidSchCreateContext @ 0x1C00987A0 (VidSchCreateContext.c)
 *     VidSchCreateSystemDevices @ 0x1C00B80AC (VidSchCreateSystemDevices.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall VidSchiGetSoftwareOnlyNodeForDriverEngine(__int64 a1, int a2)
{
  return (unsigned int)(a2 + *(_DWORD *)(a1 + 80));
}
