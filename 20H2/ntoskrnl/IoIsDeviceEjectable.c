/*
 * XREFs of IoIsDeviceEjectable @ 0x1403569F4
 * Callers:
 *     MiCreateImageFileMap @ 0x1407084A8 (MiCreateImageFileMap.c)
 *     MmLoadSystemImageEx @ 0x140754C1C (MmLoadSystemImageEx.c)
 * Callees:
 *     <none>
 */

bool __fastcall IoIsDeviceEjectable(__int64 a1)
{
  return (((*(_BYTE *)(a1 + 52) & 4) == 0) & !_bittest(&InitWinPEModeType, 0x1Fu)) == 0;
}
