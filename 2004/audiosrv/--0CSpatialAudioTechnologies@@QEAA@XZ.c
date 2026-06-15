/*
 * XREFs of ??0CSpatialAudioTechnologies@@QEAA@XZ @ 0x180054A50
 * Callers:
 *     _dynamic_initializer_for__g_ListOfSpatialTech__ @ 0x180001AF0 (_dynamic_initializer_for__g_ListOfSpatialTech__.c)
 * Callees:
 *     memset_0 @ 0x18006B69C (memset_0.c)
 */

CSpatialAudioTechnologies *__fastcall CSpatialAudioTechnologies::CSpatialAudioTechnologies(
        CSpatialAudioTechnologies *this)
{
  g_ListOfSpatialTech[0] = 0;
  InitializeCriticalSectionEx(&stru_1801A07E8, 0, 0);
  dword_1801A0810 = 0;
  memset_0(&unk_1801A07A8, 0, 0x40uLL);
  return (CSpatialAudioTechnologies *)g_ListOfSpatialTech;
}
