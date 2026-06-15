/*
 * XREFs of ??0CSpatialAudioTechnologies@@QEAA@XZ @ 0x1800542B0
 * Callers:
 *     _dynamic_initializer_for__g_ListOfSpatialTech__ @ 0x180001650 (_dynamic_initializer_for__g_ListOfSpatialTech__.c)
 * Callees:
 *     memset_0 @ 0x18006AD3C (memset_0.c)
 */

CSpatialAudioTechnologies *__fastcall CSpatialAudioTechnologies::CSpatialAudioTechnologies(
        CSpatialAudioTechnologies *this)
{
  g_ListOfSpatialTech[0] = 0;
  InitializeCriticalSectionEx(&stru_18019F778, 0, 0);
  dword_18019F7A0 = 0;
  memset_0(&unk_18019F738, 0, 0x40uLL);
  return (CSpatialAudioTechnologies *)g_ListOfSpatialTech;
}
