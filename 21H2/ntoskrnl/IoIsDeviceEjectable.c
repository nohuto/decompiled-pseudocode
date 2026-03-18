/*
 * XREFs of IoIsDeviceEjectable @ 0x14029E72C
 * Callers:
 *     MiCreateImageFileMap @ 0x140707E70 (MiCreateImageFileMap.c)
 *     MmLoadSystemImageEx @ 0x14075FC44 (MmLoadSystemImageEx.c)
 * Callees:
 *     <none>
 */

bool __fastcall IoIsDeviceEjectable(__int64 a1)
{
  return (((*(_BYTE *)(a1 + 52) & 4) == 0) & !_bittest(&InitWinPEModeType, 0x1Fu)) == 0;
}
