/*
 * XREFs of IoIsDeviceEjectable @ 0x1402E96BC
 * Callers:
 *     MiCreateImageFileMap @ 0x1406D33F4 (MiCreateImageFileMap.c)
 *     MmLoadSystemImageEx @ 0x14075BAFC (MmLoadSystemImageEx.c)
 * Callees:
 *     <none>
 */

bool __fastcall IoIsDeviceEjectable(__int64 a1)
{
  return (((*(_BYTE *)(a1 + 52) & 4) == 0) & !_bittest(&InitWinPEModeType, 0x1Fu)) == 0;
}
