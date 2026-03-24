/*
 * XREFs of VidSchiGetSoftwareOnlyNodeForDriverEngine @ 0x1C00160A0
 * Callers:
 *     VidSchCreateContext @ 0x1C0081600 (VidSchCreateContext.c)
 *     VidSchCreateSystemDevices @ 0x1C009922C (VidSchCreateSystemDevices.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall VidSchiGetSoftwareOnlyNodeForDriverEngine(__int64 a1, int a2)
{
  return (unsigned int)(a2 + *(_DWORD *)(a1 + 72));
}
