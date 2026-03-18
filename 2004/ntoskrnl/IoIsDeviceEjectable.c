/*
 * XREFs of IoIsDeviceEjectable @ 0x140357EB8
 * Callers:
 *     MiCreateImageFileMap @ 0x14060C454 (MiCreateImageFileMap.c)
 *     MmLoadSystemImageEx @ 0x14074603C (MmLoadSystemImageEx.c)
 * Callees:
 *     <none>
 */

bool __fastcall IoIsDeviceEjectable(__int64 a1)
{
  return (((*(_BYTE *)(a1 + 52) & 4) == 0) & !_bittest(&InitWinPEModeType, 0x1Fu)) == 0;
}
