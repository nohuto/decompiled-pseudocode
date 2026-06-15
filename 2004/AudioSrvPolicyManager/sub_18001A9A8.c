/*
 * XREFs of sub_18001A9A8 @ 0x18001A9A8
 * Callers:
 *     sub_180010BC0 @ 0x180010BC0 (sub_180010BC0.c)
 *     sub_18001EC8C @ 0x18001EC8C (sub_18001EC8C.c)
 *     PbmGetSoundLevel @ 0x180023720 (PbmGetSoundLevel.c)
 * Callees:
 *     <none>
 */

const wchar_t *__fastcall sub_18001A9A8(int a1)
{
  int v1; // ecx

  if ( !a1 )
    return L"SNDLVL_Muted";
  v1 = a1 - 1;
  if ( !v1 )
    return L"SNDLVL_Low";
  if ( v1 == 1 )
    return L"SNDLVL_Full";
  return L"Unknown level";
}
